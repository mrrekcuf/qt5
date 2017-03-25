// palmpremouse.cpp
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
#include <SDL/SDL.h>

#include "palmpremouse.h"
#include "palmpremouse_private.h"
#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"
#include "sdlscreen.h"
#include "sdlscreen_private.h"

#include <QWSServer>
#include <QScreenCursor>

PalmPreMouse::PalmPreMouse ( SDLScreen* screen, bool showDebugInfo )
    : QWSMouseHandler(QString(), QString())
{
    if (showDebugInfo)
        qDebug("PalmPreMouse()");

    d = new PalmPreMouse_private(this, screen, showDebugInfo);
}

PalmPreMouse::~PalmPreMouse()
{
    if (d->_showDebugInfo)
        qDebug("~PalmPreMouse()");

    delete d;
}

void PalmPreMouse::suspend()
{
    // NOP
}

void PalmPreMouse::resume()
{
    // NOP
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


PalmPreMouse_private::PalmPreMouse_private ( PalmPreMouse* mouseHandler, SDLScreen* screen, bool showDebugInfo )
{
    _mouseHandler = mouseHandler;
   _screen = screen;
    _showDebugInfo = showDebugInfo;

    QObject::connect(screen->d, SIGNAL(sdlMouseEvent(int,int,int,int)), this, SLOT(sdlMouseEvent(int,int,int,int)));
}

void PalmPreMouse_private::sdlMouseEvent(int code, int x, int y, int buttons)
{
    if (code == SDL_MOUSEBUTTONDOWN)
        _buttonDown = true;
    else if (code == SDL_MOUSEBUTTONUP)
        _buttonDown = false;

    if (_showDebugInfo)
        qDebug("PalmPreMouse: c %d [%d,%d] %d (%d)", code, x, y, buttons, _buttonDown ? 1 : 0);

    // SQUARE + touch = right click
    // SQUARE + SHIFT + touch = middle click
    if (_screen->d->_keyboardHandler
            && (_screen->d->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)
            && (_screen->d->_keyboardHandler->d->_shift != PalmPreKeyboard_private::Up)) {
        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::MidButton : 0);
    } else if (_screen->d->_keyboardHandler
            && (_screen->d->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)) {
        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::RightButton : 0);
    } else {
        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::LeftButton : 0);
    }
}
