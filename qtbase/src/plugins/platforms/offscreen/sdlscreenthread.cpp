// sdlscreenthread.cpp
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

#include "sdlscreenthread.h"
#include "sdlscreen_private.h"
#include "palmpremouse.h"
#include "palmpremouse_private.h"
#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"



#include <QDebug>

#include <fcntl.h>
#include <linux/input.h>
#include <QFile>
#include <QHash>
#include <QDateTime>
#include <QTimer>


SDLScreenThread::SDLScreenThread ( SDLScreen_private* d)
    : QThread()
{
qDebug() << "SDLScreenThread::SDLScreenThread";

    _d = d;

    _quit = false;
}

SDLScreenThread::~SDLScreenThread()
{
qDebug() << "SDLScreenThread::~SDLScreenThread";

    stop();
}

void SDLScreenThread::stop()
{
    _quit = true;
    wait();
qDebug() << "SDLScreenThread::stop() done";
    
}

void SDLScreenThread::run()
{
    SDL_Event event;
////    quint8 buttonstate;
    int ret;
    
    Uint32 last_time;
    int x;
    int y;


    while(!_quit) {

        if (_d->_open) {
            for(;;) {
                // loop on SDL event queue until empty
                _d->_mutex.lock();

                if (!_d->_open || _quit) {
                    // re-check after aquiring mutex
                    _d->_mutex.unlock();
                    break;
                }

////		_d->_keyboardHandler->d->activity();

		_d->_mouseHandler->d->kineticMouseMove();


                ret = SDL_PollEvent(&event);
                _d->_mutex.unlock();

                if (!ret)
                    break;

	        if (event.type == SDL_QUIT)
    		    exit(0);

/////Keyboard Event
///////
                if ((event.type == SDL_KEYUP) ||	
                   (event.type == SDL_KEYDOWN)) {
/////                if (event.type == SDL_KEYDOWN) {

///qDebug() << "SDLScreenThread::run() SDL_KEYDOWN" << event.key.keysym.sym << event.key.keysym.mod << event.key.keysym.unicode;
///qDebug() << "SDLScreenThread::run() SDL_KEYDOWN" << SDLK_a << SDLK_1 << SDLK_QUESTION;

/////                    _d->sendQtKeyEvent(event.type, event.key);
		    _d->_keyboardHandler->d->processSDLKey(event);

                }                

                /* If the mouse is moving */
	        if ((event.type == SDL_MOUSEMOTION) ||
                    (event.type == SDL_MOUSEBUTTONDOWN) ||
                    (event.type == SDL_MOUSEBUTTONUP) ) {
                    // mouse event
////qDebug() << "SDLScreenThread::run() SDL_MOUSE"  << event.type << event.motion.x << event.motion.y;
                    
////                    buttonstate = SDL_GetMouseState(NULL, NULL);
////                    _d->sendQtMouseEvent(event.type, event.motion.x, event.motion.y,
///                                         ((buttonstate & SDL_BUTTON(1)) ? 1 : 0)
///                                       | ((buttonstate & SDL_BUTTON(2)) ? 2 : 0)
//                                       | ((buttonstate & SDL_BUTTON(3)) ? 4 : 0));

///		    Uint32 now = SDL_GetTicks() ;
////qDebug() << now;
//		    if last_time - now < some number
//			  the user did a double click
//		    else
//		      last_time = now

		    _d->_mouseHandler->d->processSDLMouse(event);
		    
                };

                
            };
        }

/////        QThread::msleep(10);
        QThread::msleep(10);        
    }
}
