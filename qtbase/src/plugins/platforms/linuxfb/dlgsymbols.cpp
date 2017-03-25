// dlgsymbols.cpp
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#include "dlgsymbols.h"
#include "symbolbutton.h"
#include "sdlscreen.h"

#include <QGridLayout>
#include <QPushButton>
#include <QWSServer>
#include <QMouseEvent>

class SymbolChoice
{
public:
    SymbolChoice(QString label = "", int unicode = 0, Qt::Key key = (Qt::Key)0)
    {
        _label = label;
        _unicode = unicode;
        _key = key;
    }

    QString _label;
    int _unicode;
    Qt::Key _key;
};

dlgSymbols::dlgSymbols ( SDLScreen* screen, QWidget *parent )
    : QWidget(parent)
{
    _screen = screen;

    _symbol = 0;
    _symbolKey = (Qt::Key)0;

    QList<SymbolChoice> symbolList;

    symbolList << SymbolChoice("<", '<', (Qt::Key)'<');
    symbolList << SymbolChoice(">", '>', (Qt::Key)'>');
    symbolList << SymbolChoice("[", '[', (Qt::Key)'[');
    symbolList << SymbolChoice("\\", '\\', (Qt::Key)'\\');

    symbolList << SymbolChoice("]", ']', (Qt::Key)']');
    symbolList << SymbolChoice("^", '^', (Qt::Key)'^');
    symbolList << SymbolChoice("`", '`', (Qt::Key)'`');
    symbolList << SymbolChoice("{", '{', (Qt::Key)'{');

    symbolList << SymbolChoice("|", '|', (Qt::Key)'|');
    symbolList << SymbolChoice("}", '}', (Qt::Key)'}');
    symbolList << SymbolChoice("~", '~', (Qt::Key)'~');
    symbolList << SymbolChoice("Esc", 0, Qt::Key_Escape);

    symbolList << SymbolChoice("Ins", 0, Qt::Key_Insert);
    symbolList << SymbolChoice("Del", 0, Qt::Key_Delete);
    symbolList << SymbolChoice("Tab", 0, Qt::Key_Tab);
    symbolList << SymbolChoice("BkTab", 0, Qt::Key_Backtab);

    setWindowFlags(windowFlags() | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    _grabbed = false;

    QGridLayout* grid = new QGridLayout(this);
    SymbolButton* button;
    SymbolChoice c;
    int i = 0;

    foreach(c, symbolList) {
        button = new SymbolButton(c._label, c._unicode, c._key, this);
        connect(button, SIGNAL(key(int,Qt::Key)), this, SLOT(key(int,Qt::Key)));
        grid->addWidget(button, i / 4, i % 4);
        i++;
    }

    setLayout(grid);

    QWidget::hide();
}

dlgSymbols::~dlgSymbols()
{
    if (_grabbed)
        releaseMouse();
}

void dlgSymbols::show()
{
    // position centered at bottom of screen
    qDebug("screen %d,%d windows %d,%d", _screen->width(), _screen->height(), width(), height());

    move((_screen->width() - width()) / 2, _screen->height() - height() - 1);

    grabMouse();
    _grabbed = true;

    QWidget::show();

    QWidget* nextWidget = QWidget::nextInFocusChain();

    if (nextWidget)
        nextWidget->setFocus();
}

void dlgSymbols::hide()
{
    releaseMouse();
    _grabbed = false;

    QWidget::hide();

    emit hidden();

    if (_symbol)
    {
        QWSServer::sendKeyEvent(_symbol, _symbolKey, Qt::NoModifier, 1, false);
        QWSServer::sendKeyEvent(_symbol, _symbolKey, Qt::NoModifier, 0, false);
        _symbol = 0;
    }
}

void dlgSymbols::key ( int symbol, Qt::Key symbolKey )
{
    _symbol = symbol;
    _symbolKey = symbolKey;

    hide();
}

void dlgSymbols::mousePressEvent( QMouseEvent* e )
{
    QWidget* child = childAt(e->x(), e->y());

    if (child) {
       SymbolButton* button = qobject_cast<SymbolButton*>(child);

       if (button)
           button->clicked();
   }
}

void dlgSymbols::mouseReleaseEvent( QMouseEvent* )
{
    hide();
}
