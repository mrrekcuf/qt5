// sdlscreen_private.h
//
// Copyright (C) 2010, 2009 Griffin I'Net, Inc.
//
// This file is licensed under the LGPL version 2.1, the text of which should
// be in the LICENSE.txt file, or alternately at this location:
// http://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt
//
// DISCLAIMER: This software is released AS-IS with ABSOLUTELY NO WARRANTY OF
// ANY KIND.

#ifndef SDLSCREEN_PRIVATE_H
#define SDLSCREEN_PRIVATE_H

#include <SDL/SDL.h>
#include <SDL/SDL_events.h>

#include <QObject>
#include <QMutex>



class SDL_Surface;
class SDLScreenThread;
class PalmPreKeyboard;
class PalmPreMouse;

class SDLScreen_private ;
////extern SDLScreen_private* d;

class SDLScreen_private : public QObject
{
Q_OBJECT

public:
    SDLScreen_private ( bool showDebugInfo );
    ~SDLScreen_private();

signals:
    void sdlMouseEvent ( int code, int x, int y, int buttons );

public:
    void sendQtMouseEvent ( int code, int x, int y, int buttons );
    void sendQtKeyEvent ( int code, SDL_KeyboardEvent key );


    bool _showDebugInfo;

    PalmPreKeyboard* _keyboardHandler;
    PalmPreMouse* _mouseHandler;

    bool _open;

    QMutex _mutex;
    
    SDL_Surface* _surface;

    SDLScreenThread* _thread;
    
    
};

#endif // SDLSCREEN_PRIVATE_H
