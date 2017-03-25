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

#include "sdlscreen_private.h"
#include "sdlscreenthread.h"

SDLScreen_private::SDLScreen_private ( bool showDebugInfo ) :
    QObject()
{
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

void SDLScreen_private::sendSdlMouseEvent ( int code, int x, int y, int buttons )
{
    emit sdlMouseEvent(code, x, y, buttons);
}
