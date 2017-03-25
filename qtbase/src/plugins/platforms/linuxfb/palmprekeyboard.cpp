// palmprekeyboard.cpp
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#include <fcntl.h>
#include <linux/input.h>

#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"
/////#include "sdlscreen.h"
/////#include "dlgsymbols.h"

#include <QFile>
#include <QHash>
#include <QDateTime>
#include <QTimer>


PalmPreKeyboard::PalmPreKeyboard ( SDLScreen* screen, bool showDebugInfo ) : QObject()  /////    : QEvdevKeyboardHandler(QString())
{
    if (showDebugInfo)
        qDebug("PalmPreKeyboard()");

    d = new PalmPreKeyboard_private(this, screen, showDebugInfo);
}

PalmPreKeyboard::~PalmPreKeyboard()
{
    if (d->_showDebugInfo)
        qDebug("~PalmPreKeyboard()");

    delete d;
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


class KeyMap : public QHash<int, Qt::Key>
{
public:
    KeyMap();
};

Q_GLOBAL_STATIC(KeyMap, keymap);


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


PalmPreKeyboard_private::PalmPreKeyboard_private ( PalmPreKeyboard* keyboardHandler, SDLScreen* screen, bool showDebugInfo )
    : QObject()
{
    _keyboardHandler = keyboardHandler;
    _screen = screen;
    _showDebugInfo = showDebugInfo;

    _shift = Up;
    _square = Up;
    _symbol = Up;

    _sn = NULL;

    _dlgSymbols = NULL;

    _fd = open("/dev/input/keypad0", O_RDONLY);

    if (_fd == -1) {
        qDebug("PalmPreKeyboard : Failed to open keyboard handle!");
        return;
    }

    _sn = new QSocketNotifier(_fd, QSocketNotifier::Read);

    connect(_sn, SIGNAL(activated(int)), this, SLOT(activity(int)));

    _sn->setEnabled(true);
}

PalmPreKeyboard_private::~PalmPreKeyboard_private()
{
    if (_dlgSymbols)
        delete _dlgSymbols;

    if (_sn != NULL) {
        delete _sn;
        close(_fd);
    }
}

#ifdef PALMPREKEYBOARD_LOG_UNKNOWN_KEYS
void logKey ( const QString& key )
{
    QFile file("/media/internal/PalmPreKeyboard_unknownKeys.log");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return;

    file.write(QString("%1\n").arg(key).toAscii());
}
#endif

void PalmPreKeyboard_private::symbolDialogHidden()
{
    _symbol = Up;
}

void PalmPreKeyboard_private::activity ( int )
{
    struct input_event in;

    _sn->setEnabled(false);

    read(_fd, &in, sizeof(struct input_event));

    if (_showDebugInfo) {
        QString debugText = QString("Keyboard: type %1, code %2, value %3").arg(in.type).arg(in.code).arg(in.value);
//////        qDebug("%s", (const char*)debugText.toAscii());
    }

#ifdef PALMPREKEYBOARD_LOG_UNKNOWN_KEYS
    logKey(debugText);
#endif

    if (in.type == 1) {
        // key event
        if (in.code == PalmPreKeyboard::Key_Symbol) {
            if (in.value == 1) {
                if (_symbol == Up) {
                    _symbol = Down;

                    // launch symbol window
                    if (!_dlgSymbols)
                    {
                        _dlgSymbols = new dlgSymbols(_screen);
                        connect(_dlgSymbols, SIGNAL(hidden()), this, SLOT(symbolDialogHidden()));
                        QTimer::singleShot(1, _dlgSymbols, SLOT(show()));
                    }

                    _dlgSymbols->show();
                }
                else
                    _symbol = Up;
            }

            if (_showDebugInfo)
                qDebug("sym: %d", in.value);
        } else if (in.code == PalmPreKeyboard::Key_Square) {
            if (in.value == 1) {
                if (_square == Up)
                    _square = Down;
                else if (_square == Down)
                    _square = Locked;
                else
                    _square = Up;
            }

            if (_showDebugInfo)
                qDebug("square: %d", in.value);
        } else if (in.code == PalmPreKeyboard::Key_Shift) {
            if (in.value == 1) {
                if (_shift == Up)
                    _shift = Down;
                else if (_shift == Down)
                    _shift = Locked;
                else
                    _shift = Up;
            }

            if (_showDebugInfo)
                qDebug("shift: %d", in.value);
        } else {
            if ((_square != Up) && (_symbol != Up) && (in.code == PalmPreKeyboard::Key_C)) {
                // screen capture (SQUARE + SYMBOL + C)
                if (in.value == 1) {
                    // initial key down events only
                    uchar* pixels = _screen->base();
                    int pixelCount = _screen->totalSize();

                    QByteArray pixelData = QByteArray(pixelCount, 0);

                    if (_showDebugInfo)
                        qDebug("screenshot size: %d", pixelCount);

                    uchar* pixelBytes = (uchar*)pixelData.data();
                    for(int i=0;i<pixelCount;i++)
                        pixelBytes[i] = pixels[i];

                    QImage image = QImage((uchar*)pixelData.constData(), _screen->width(), _screen->height(), QImage::Format_ARGB32);

                    image.save(QString("/media/internal/screenshot_%1.jpg").arg((int)time(NULL)), "JPEG");
                }
            } else {
                int key;
                int unicode = 0;

                if (_square != Up)
                    key = keymap()->value(in.code | PalmPreKeyboard::Key_SquareMask);
                else
                    key = keymap()->value(in.code);

                if ((key >= Qt::Key_A) && (key <= Qt::Key_Z)) {
                    // alpha key
                    if (_shift != Up)
                        unicode = key;
                    else
                        unicode = key + 'a' - 'A';
                } else if (_square != Up) {
                    unicode = keymap()->value(in.code | PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask);
                } else {
                    unicode = keymap()->value(in.code | PalmPreKeyboard::Key_UnicodeMask);
                }

                if (_showDebugInfo)
                    qDebug("unicode %d, key %d, shift %d", unicode, key, _shift ? 1 : 0);

                _keyboardHandler->processKeyEvent(unicode, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, (in.value != 0), (in.value == 2));
            }

            if (_shift == Down)
                _shift = Up;
            if (_square == Down)
                _square = Up;
        }
    }

    _sn->setEnabled(true);
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


KeyMap::KeyMap()
{
    insert(PalmPreKeyboard::Key_AtSign,    Qt::Key_At);
    insert(PalmPreKeyboard::Key_Backspace, Qt::Key_Backspace);
    insert(PalmPreKeyboard::Key_Q,         Qt::Key_Q);
    insert(PalmPreKeyboard::Key_W,         Qt::Key_W);
    insert(PalmPreKeyboard::Key_E,         Qt::Key_E);
    insert(PalmPreKeyboard::Key_R,         Qt::Key_R);
    insert(PalmPreKeyboard::Key_T,         Qt::Key_T);
    insert(PalmPreKeyboard::Key_Y,         Qt::Key_Y);
    insert(PalmPreKeyboard::Key_U,         Qt::Key_U);
    insert(PalmPreKeyboard::Key_I,         Qt::Key_I);
    insert(PalmPreKeyboard::Key_O,         Qt::Key_O);
    insert(PalmPreKeyboard::Key_P,         Qt::Key_P);
    insert(PalmPreKeyboard::Key_Return,    Qt::Key_Enter);
    insert(PalmPreKeyboard::Key_A,         Qt::Key_A);
    insert(PalmPreKeyboard::Key_S,         Qt::Key_S);
    insert(PalmPreKeyboard::Key_D,         Qt::Key_D);
    insert(PalmPreKeyboard::Key_F,         Qt::Key_F);
    insert(PalmPreKeyboard::Key_G,         Qt::Key_G);
    insert(PalmPreKeyboard::Key_H,         Qt::Key_H);
    insert(PalmPreKeyboard::Key_J,         Qt::Key_J);
    insert(PalmPreKeyboard::Key_K,         Qt::Key_K);
    insert(PalmPreKeyboard::Key_L,         Qt::Key_L);
    insert(PalmPreKeyboard::Key_Z,         Qt::Key_Z);
    insert(PalmPreKeyboard::Key_X,         Qt::Key_X);
    insert(PalmPreKeyboard::Key_C,         Qt::Key_C);
    insert(PalmPreKeyboard::Key_V,         Qt::Key_V);
    insert(PalmPreKeyboard::Key_B,         Qt::Key_B);
    insert(PalmPreKeyboard::Key_N,         Qt::Key_N);
    insert(PalmPreKeyboard::Key_M,         Qt::Key_M);
    insert(PalmPreKeyboard::Key_Comma,     Qt::Key_Comma);
    insert(PalmPreKeyboard::Key_Period,    Qt::Key_Period);
    insert(PalmPreKeyboard::Key_Space,     Qt::Key_Space);

    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_AtSign,    Qt::Key_0);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Backspace, Qt::Key_Backspace);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Q,         Qt::Key_Slash);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_W,         Qt::Key_Plus);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_E,         Qt::Key_1);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_R,         Qt::Key_2);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_T,         Qt::Key_3);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Y,         Qt::Key_ParenLeft);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_U,         Qt::Key_ParenRight);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_I,         Qt::Key_Percent);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_O,         Qt::Key_QuoteDbl);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_P,         Qt::Key_Equal);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Return,    Qt::Key_Enter);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_A,         Qt::Key_Ampersand);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_S,         Qt::Key_Minus);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_D,         Qt::Key_4);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_F,         Qt::Key_5);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_G,         Qt::Key_6);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_H,         Qt::Key_Dollar);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_J,         Qt::Key_Exclam);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_K,         Qt::Key_Colon);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_L,         Qt::Key_Apostrophe);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Z,         Qt::Key_Asterisk);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_X,         Qt::Key_7);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_C,         Qt::Key_8);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_V,         Qt::Key_9);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_B,         Qt::Key_NumberSign);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_N,         Qt::Key_Question);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_M,         Qt::Key_Semicolon);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Comma,     Qt::Key_Underscore);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Period,    Qt::Key_Period);
    insert(PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Space,     Qt::Key_Space);

    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_AtSign,   (Qt::Key)'@');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_Comma,    (Qt::Key)',');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_Period,   (Qt::Key)'.');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_Space,    (Qt::Key)' ');

    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_AtSign, (Qt::Key)'0');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Q,      (Qt::Key)'/');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_W,      (Qt::Key)'+');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_E,      (Qt::Key)'1');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_R,      (Qt::Key)'2');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_T,      (Qt::Key)'3');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Y,      (Qt::Key)'(');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_U,      (Qt::Key)')');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_I,      (Qt::Key)'%');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_O,      (Qt::Key)'\"');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_P,      (Qt::Key)'=');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_A,      (Qt::Key)'&');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_S,      (Qt::Key)'-');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_D,      (Qt::Key)'4');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_F,      (Qt::Key)'5');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_G,      (Qt::Key)'6');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_H,      (Qt::Key)'$');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_J,      (Qt::Key)'!');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_K,      (Qt::Key)':');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_L,      (Qt::Key)'\'');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Z,      (Qt::Key)'*');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_X,      (Qt::Key)'7');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_C,      (Qt::Key)'8');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_V,      (Qt::Key)'9');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_B,      (Qt::Key)'#');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_N,      (Qt::Key)'?');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_M,      (Qt::Key)';');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Comma,  (Qt::Key)'_');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Period, (Qt::Key)'.');
    insert(PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask | PalmPreKeyboard::Key_Space,  (Qt::Key)' ');
}
