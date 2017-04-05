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
#include <errno.h>

#include <SDL/SDL.h>



#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"
/////#include "sdlscreen.h"
#include "qoffscreencommon.h"
#include "dlgsymbols.h"

#include <QFile>
#include <QHash>
#include <QDateTime>
#include <QTimer>
#include <QtGui/private/qguiapplication_p.h>


extern QWindow *activeWindow;


#include <syslog.h>
#define SYSLOG(...) syslog(__VA_ARGS__)


Uint32 last_timeK ;
Uint32 lap_timeK ;
#define SHORTKEYPRESS	300


/////PalmPreKeyboard::PalmPreKeyboard ( SDLScreen* screen, bool showDebugInfo ) : QObject()  /////    : QEvdevKeyboardHandler(QString())
PalmPreKeyboard::PalmPreKeyboard ( SDLScreen_private* screen, bool showDebugInfo ) : QObject()  /////    : QEvdevKeyboardHandler(QString())
{
////    if (showDebugInfo)
qDebug() << "PalmPreKeyboard::PalmPreKeyboard" ;

    d = new PalmPreKeyboard_private(this, screen, showDebugInfo);
}

PalmPreKeyboard::~PalmPreKeyboard()
{
/////    if (d->_showDebugInfo)
qDebug() << "PalmPreKeyboard::~PalmPreKeyboard()" ;

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


/////PalmPreKeyboard_private::PalmPreKeyboard_private ( PalmPreKeyboard* keyboardHandler, SDLScreen* screen, bool showDebugInfo )
PalmPreKeyboard_private::PalmPreKeyboard_private ( PalmPreKeyboard* keyboardHandler, SDLScreen_private* screen, bool showDebugInfo )
    : QObject()
{
qDebug() << "PalmPreKeyboard_private::PalmPreKeyboard_private()" ;

    _keyboardHandler = keyboardHandler;
    _screen = screen;
    _showDebugInfo = showDebugInfo;

    _shift = Up;
    _square = Up;
    _symbol = Up;

    _sn = NULL;

    _dlgSymbols = NULL;

/****
SYSLOG(LOG_ERR, "/dev/input/keypad0");        
/////    _fd = open("/dev/input/keypad0", O_RDONLY );
    _fd = open("/dev/input/keypad0", O_RDONLY | O_NONBLOCK );
    if (_fd == -1) {
        qDebug("PalmPreKeyboard : Failed to open keyboard handle!");
SYSLOG(LOG_ERR, "/dev/input/keypad02222222");        
        return;
    }
SYSLOG(LOG_ERR, "/dev/input/keypad0 OK");    
****/
/*******
    _sn = new QSocketNotifier(_fd, QSocketNotifier::Read);
    connect(_sn, SIGNAL(activated(int)), this, SLOT(activity(int)));
    _sn->setEnabled(true);
*******/    
}

PalmPreKeyboard_private::~PalmPreKeyboard_private()
{
    if (_dlgSymbols)
        delete _dlgSymbols;

/***
    if (_sn != NULL) {
        delete _sn;
        close(_fd);
    }
****/    
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


//// no use
void PalmPreKeyboard_private::activity ()
{
/////qDebug() << "PalmPreKeyboard_private::activity ( int )" ;

    struct input_event in;

/////    _sn->setEnabled(false);

int count = read(_fd, &in, sizeof(struct input_event));

if(count < 0 && errno == EAGAIN) {
////nothing
/////qDebug() << " PalmPreKeyboard_private::activity ( int )" << "Nothing" ; 
} else if(count >= 0) {

    if (_showDebugInfo) {
/////        QString debugText = QString("Keyboard: type %1, code %2, value %3").arg(in.type).arg(in.code).arg(in.value);
//////        qDebug("%s", (const char*)debugText.toAscii());
qDebug("Event type %02d, code %d, value %02d", in.type, in.code, in.value);

    }

#ifdef PALMPREKEYBOARD_LOG_UNKNOWN_KEYS
/////    logKey(debugText);
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
            if (in.value == 0) {
                _symbol = Up ;
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
            if ((in.value == 0) && (_square != Locked)) {
                _square = Up ;
            }
            if (in.value == 2) {
                _square = Locked;
            }
            
            if (_showDebugInfo)
                qDebug("square: %d", _square);
        } else if (in.code == PalmPreKeyboard::Key_Shift) {
            if (in.value == 1) {
                if (_shift == Up)
                    _shift = Down;
                else if (_shift == Down)
                    _shift = Locked;
                else
                    _shift = Up;
            }
            if ((in.value == 0) && (_shift != Locked)) {
                _shift = Up;
            }
            if (in.value == 2) {
                _shift = Locked;
            }
            
            if (_showDebugInfo)
                qDebug("shift: %d",_shift);
        } else {
            if ((_square != Up) && (_symbol != Up) && (in.code == PalmPreKeyboard::Key_C)) {
/*******
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
******/                
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

////                if (_showDebugInfo)
    /////                qDebug("unicode %02d, key %d, shift %02d square %02d symbol %02d", unicode, key, _shift ? 1 : 0, _square, _symbol);

//////                _keyboardHandler->processKeyEvent(unicode, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, (in.value != 0), (in.value == 2));
////void QWSKeyboardHandler::processKeyEvent ( int unicode, int keycode, int modifiers, bool isPress, bool autoRepeat )


////Qt::NoModifier
///Qt::ShiftModifier
///Qt::ControlModifier

////QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, key.keysym.sym, mods, QChar(key.keysym.unicode), true, count ) ;
///QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;
///QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyRelease, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;
if (in.value>0) 
{
QWindowSystemInterface::handleKeyEvent(activeWindow, QEvent::KeyPress, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, QChar(unicode), (in.value == 2)  ) ;
////QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyRelease, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, QChar(unicode), (in.value == 2) ) ;
};
            }

////            if (_shift == Down)
////                _shift = Up;
////            if (_square == Down)
/////                _square = Up;
        }
    }
    
//////    _sn->setEnabled(true);    
} else {
///    // Some other error occurred during read.

qDebug() << " PalmPreKeyboard_private::activity ( int )" << "Some other error occurred during read." ; 

}


}



void PalmPreKeyboard_private::processSDLKey(SDL_Event event)
{


/////qDebug() << "PalmPreKeyboard_private::processKey(SDL_Event event)" ;

    if ((event.type == SDL_KEYUP) ||
        (event.type == SDL_KEYDOWN)) 
    {
    
qDebug() << "PalmPreKeyboard_private::processKey(SDL_Event event)" << event.key.keysym.sym << event.key.keysym.mod << event.key.keysym.unicode;
        if (event.type == SDL_KEYDOWN)        
	    lap_timeK = SDL_GetTicks() - last_timeK ;
    
        // key event
        if (event.key.keysym.sym == SDLK_RCTRL) {  ///symbol
        
            if (event.type == SDL_KEYDOWN) 
            {

		if (lap_timeK < SHORTKEYPRESS *2 && _symbol == Down) 
	    	{
                    _symbol = Locked;        	    
                    
                    // launch symbol window
                    if (!_dlgSymbols)
                    {
                        _dlgSymbols = new dlgSymbols(_screen);
                        connect(_dlgSymbols, SIGNAL(hidden()), this, SLOT(symbolDialogHidden()));
                        QTimer::singleShot(1, _dlgSymbols, SLOT(show()));
                    };
                    _dlgSymbols->show();
    
                }
		else            
                {                
                    if (_dlgSymbols)
                    {
                        _dlgSymbols->hide();
                    };

                
                    if (_symbol==Locked) 
                	_symbol = Up;
            	    else
                	_symbol = Down;
                	
	            last_timeK  = SDL_GetTicks();                    
                };
                
    	    }            

            
/*****            
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
            if (event.type == SDL_KEYUP) {
                _symbol = Up ;
            }
****/            
            if (_showDebugInfo)
                qDebug("sym: %d", _symbol);
                
        } else if (event.key.keysym.sym == SDLK_RALT) {  ////Key_Square
        
            if (event.type == SDL_KEYDOWN) 
            {
            
		if (lap_timeK < SHORTKEYPRESS && _square == Down) 
	    	{
                    _square = Locked;        	    
                }
		else            
                {                
                    if (_square==Locked) 
                	_square = Up;
            	    else
                	_square = Down;
                	
	            last_timeK  = SDL_GetTicks();                    
                };
            
            };
            
            
////            if ((event.type == SDL_KEYUP) && (_square != Locked)) {
////                _square = Up ;
////            }
///            if (event.key.keysym.repeat) {
//                _square = Locked;            
///            }
////            if (in.value == 2) {
////                _square = Locked;
///            }
            if (_showDebugInfo)
                qDebug("square: %d", _square);
                
        } else if (event.key.keysym.sym == SDLK_LSHIFT) {  ///Key_Shift
        
            if (event.type == SDL_KEYDOWN) 
            {
///////                if (_shift == Up)
///////                    _shift = Down;
///////                else if (_shift == Down)
///////                    _shift = Locked;
///////                else
///////                    _shift = Up;

		if (lap_timeK < SHORTKEYPRESS && _shift == Down) 
	    	{
                    _shift = Locked;        	    
                }
		else            
                {                
                    if (_shift==Locked) 
                	_shift = Up;
            	    else
                	_shift = Down;
                	
	            last_timeK  = SDL_GetTicks();                    
                };
            


            }



////            if ((event.type == SDL_KEYUP) && (_shift != Locked)) {
    ///            _shift = Up;
    ////        }
///            if (event.key.keysym.repeat) {
///                _shift = Locked;          
///            }
///            if (in.value == 2) {
///                _shift = Locked;
///            }
            
            if (_showDebugInfo)
                qDebug("shift: %d",_shift);
        } else {
        
/*******        
            if ((_square != Up) && (event.key.keysym.sym == SDLK_RCTRL) && (event.key.keysym.sym == SDLK_p)) {

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

            } else 
******/                            
                int key;
                int unicode = 0;

                if ((event.key.keysym.mod == 0) && (_square != Up))
                    key = keymap()->value(event.key.keysym.sym | PalmPreKeyboard::Key_SquareMask);
                else
                    key = keymap()->value(event.key.keysym.sym);
///                unicode = keymap()->value(event.key.keysym.sym); 

////                if ((key >= Qt::Key_A) && (key <= Qt::Key_Z)) { 
		if ((event.key.keysym.mod == 0) && (_square == Up) && (event.key.keysym.sym >= SDLK_a) ) {
///                    // alpha key
                    if (_shift != Up)
                       unicode = key;
                    else
	               unicode = key + 'a' - 'A';
///                } else if (event.key.keysym.mod == KMOD_RALT) {
///                    unicode = keymap()->value(in.code | PalmPreKeyboard::Key_UnicodeMask | PalmPreKeyboard::Key_SquareMask);
///                    unicode = keymap()->value(event.key.keysym.sym);
		} else {
                    unicode = key ; 
                } ;

qDebug() << "key = keymap()->value(event.key.keysym.sym) " << key << unicode ;
////                if (_showDebugInfo)
    /////                qDebug("unicode %02d, key %d, shift %02d square %02d symbol %02d", unicode, key, _shift ? 1 : 0, _square, _symbol);

//////                _keyboardHandler->processKeyEvent(unicode, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, (in.value != 0), (in.value == 2));
////void QWSKeyboardHandler::processKeyEvent ( int unicode, int keycode, int modifiers, bool isPress, bool autoRepeat )


////Qt::NoModifier
///Qt::ShiftModifier
///Qt::ControlModifier

////QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, key.keysym.sym, mods, QChar(key.keysym.unicode), true, count ) ;
///QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;
///QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyRelease, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;
//if (event.key.keysym.sym < SDLK_NUMLOCK) 
if (event.type == SDL_KEYDOWN) 
{
QWindowSystemInterface::handleKeyEvent(activeWindow, QEvent::KeyPress, key, (event.key.keysym.mod == KMOD_LSHIFT || _shift != Up) ? Qt::ShiftModifier :Qt::NoModifier, QChar(unicode), false  ) ;
///QWindowSystemInterface::handleKeyEvent(activeWindow, QEvent::KeyPress, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, QChar(unicode), false  ) ;
////QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyRelease, key, (_shift != Up) ? Qt::ShiftModifier : Qt::NoModifier, QChar(unicode), (in.value == 2) ) ;
};

                if (_shift == Down)
	            _shift = Up;
	        if (_square == Down)
                    _square = Up;
                if (_symbol == Down)
	            _symbol = Up;


        }
        
        
    }
    
//////    _sn->setEnabled(true);    


}



/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


KeyMap::KeyMap()
{
    insert(SDLK_AT,        Qt::Key_At);
    insert(SDLK_BACKSPACE, Qt::Key_Backspace);
    insert(SDLK_q,         Qt::Key_Q);
    insert(SDLK_w,         Qt::Key_W);
    insert(SDLK_e,         Qt::Key_E);
    insert(SDLK_r,         Qt::Key_R);
    insert(SDLK_t,         Qt::Key_T);
    insert(SDLK_y,         Qt::Key_Y);
    insert(SDLK_u,         Qt::Key_U);
    insert(SDLK_i,         Qt::Key_I);
    insert(SDLK_o,         Qt::Key_O);
    insert(SDLK_p,         Qt::Key_P);
    insert(SDLK_RETURN,    Qt::Key_Enter);
    insert(SDLK_a,         Qt::Key_A);
    insert(SDLK_s,         Qt::Key_S);
    insert(SDLK_d,         Qt::Key_D);
    insert(SDLK_f,         Qt::Key_F);
    insert(SDLK_g,         Qt::Key_G);
    insert(SDLK_h,         Qt::Key_H);
    insert(SDLK_j,         Qt::Key_J);
    insert(SDLK_k,         Qt::Key_K);
    insert(SDLK_l,         Qt::Key_L);
    insert(SDLK_z,         Qt::Key_Z);
    insert(SDLK_x,         Qt::Key_X);
    insert(SDLK_c,         Qt::Key_C);
    insert(SDLK_v,         Qt::Key_V);
    insert(SDLK_b,         Qt::Key_B);
    insert(SDLK_n,         Qt::Key_N);
    insert(SDLK_m,         Qt::Key_M);
    insert(SDLK_COMMA,     Qt::Key_Comma);
    insert(SDLK_PERIOD,    Qt::Key_Period);
    insert(SDLK_SPACE,     Qt::Key_Space);
    insert(SDLK_ESCAPE,    Qt::Key_Escape);  // swipe small left (back)

    insert(231,    Qt::Key_Left);   // home button;		
    insert(229,    Qt::Key_Left);   // swipe small right

    insert(SDLK_SLASH,     Qt::Key_Slash);
    insert(SDLK_PLUS,      Qt::Key_Plus);
    insert(SDLK_1,         Qt::Key_1);
    insert(SDLK_2,         Qt::Key_2);
    insert(SDLK_3,         Qt::Key_3);
    insert(SDLK_LEFTPAREN, Qt::Key_ParenLeft);
    insert(SDLK_RIGHTPAREN,Qt::Key_ParenRight);
    insert(37,   Qt::Key_Percent);
    insert(SDLK_QUOTEDBL,  Qt::Key_QuoteDbl);
    insert(SDLK_EQUALS,    Qt::Key_Equal);
    insert(SDLK_AMPERSAND, Qt::Key_Ampersand);
    insert(SDLK_MINUS,     Qt::Key_Minus);
    insert(SDLK_4,         Qt::Key_4);
    insert(SDLK_5,         Qt::Key_5);
    insert(SDLK_6,         Qt::Key_6);
    insert(SDLK_DOLLAR,    Qt::Key_Dollar);
    insert(SDLK_EXCLAIM,   Qt::Key_Exclam);
    insert(SDLK_COLON,     Qt::Key_Colon);
    insert(SDLK_QUOTE,     Qt::Key_Apostrophe);
    insert(SDLK_ASTERISK,  Qt::Key_Asterisk);
    insert(SDLK_7,         Qt::Key_7);
    insert(SDLK_8,         Qt::Key_8);
    insert(SDLK_9,         Qt::Key_9);
    insert(SDLK_HASH,      Qt::Key_NumberSign);
    insert(SDLK_QUESTION,  Qt::Key_Question);
    insert(SDLK_SEMICOLON, Qt::Key_Semicolon);
    insert(SDLK_UNDERSCORE,Qt::Key_Underscore);
    insert(SDLK_0,         Qt::Key_0);


    insert(PalmPreKeyboard::Key_SquareMask | SDLK_AT,    Qt::Key_0);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_BACKSPACE, Qt::Key_Backspace);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_q,         Qt::Key_Slash);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_w,         Qt::Key_Plus);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_e,         Qt::Key_1);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_r,         Qt::Key_2);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_t,         Qt::Key_3);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_y,         Qt::Key_ParenLeft);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_u,         Qt::Key_ParenRight);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_i,         Qt::Key_Percent);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_o,         Qt::Key_QuoteDbl);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_p,         Qt::Key_Equal);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_RETURN,    Qt::Key_Enter);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_a,         Qt::Key_Ampersand);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_s,         Qt::Key_Minus);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_d,         Qt::Key_4);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_f,         Qt::Key_5);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_g,         Qt::Key_6);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_h,         Qt::Key_Dollar);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_j,         Qt::Key_Exclam);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_k,         Qt::Key_Colon);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_l,         Qt::Key_Apostrophe);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_z,         Qt::Key_Asterisk);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_x,         Qt::Key_7);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_c,         Qt::Key_8);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_v,         Qt::Key_9);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_b,         Qt::Key_NumberSign);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_n,         Qt::Key_Question);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_m,         Qt::Key_Semicolon);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_COMMA,     Qt::Key_Underscore);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_PERIOD,    Qt::Key_Period);
    insert(PalmPreKeyboard::Key_SquareMask | SDLK_SPACE,     Qt::Key_Space);



    
return ;


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
