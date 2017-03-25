// sdlscreen_private.cpp
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#include <SDL/SDL.h>
#include <SDL/SDL_events.h>

#include <QDebug>


#include <QtGui/private/qpixmap_raster_p.h>
#include <QtGui/private/qguiapplication_p.h>

#include <qpa/qplatformcursor.h>
#include <qpa/qplatformwindow.h>


#include "palmpremouse.h"
#include "palmpremouse_private.h"
#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"

#include "sdlscreen_private.h"
#include "sdlscreenthread.h"



SDLScreen_private::SDLScreen_private ( bool showDebugInfo ) :
    QObject()
{

qDebug() << "SDLScreen_private::SDLScreen_private ( bool showDebugInfo ) " << showDebugInfo ;

    _showDebugInfo = showDebugInfo;

    _keyboardHandler = NULL;
    _mouseHandler = NULL;

    _open = false;

    _surface = NULL;

    _thread = new SDLScreenThread(this);

    _thread->start();
}

SDLScreen_private::~SDLScreen_private()
{
    delete _thread;
}


void SDLScreen_private::sendQtMouseEvent ( int code, int x, int y, int buttons )
{
qDebug() << "SDLScreen_private::sendSdlMouseEvent ( int code, int x, int y, int buttons )" << code << x << y << buttons ;

/////QPoint pos(x, y);
// inject event into Qt
/////QWindowSystemInterface::handleMouseEvent(0, pos, pos, buttons ? Qt::LeftButton : Qt::NoButton);
///////    emit sdlMouseEvent(code, x, y, buttons);
    
}

void SDLScreen_private::sendQtKeyEvent ( int code, SDL_KeyboardEvent key )
{
qDebug() << "SDLScreen_private::sendSdlKeyEvent ( int code, SDL_KeyboardEvent key )" << code  ;

   if(code == SDL_KEYDOWN) {
qDebug() << "SDLScreenThread::run() SDL_KEYDOWN" ; ///  << event.key ; //// .keysym.sym;

///SDL_GetKeyName( key->keysym.sym )
// inject event into Qt
////QWindowSystemInterface::handleMouseEvent(0, pos, pos, buttons ? Qt::LeftButton : Qt::NoButton);
    int mappedKey=key.keysym.unicode ; /// SDL_GetKeyName(event.key.keysym.sym)

Qt::KeyboardModifiers mods;
ushort count = 1;


////Qt::NoModifier
///Qt::ShiftModifier
///Qt::ControlModifier

////QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, key.keysym.sym, mods, QChar(key.keysym.unicode), true, count ) ;
QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyPress, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;
QWindowSystemInterface::handleKeyEvent(0, QEvent::KeyRelease, Qt::Key_A, Qt::NoModifier, QChar(key.keysym.sym), false, count ) ;

    };
    
}

