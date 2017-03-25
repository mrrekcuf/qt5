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

#include "sdlscreenthread.h"
#include "sdlscreen_private.h"

SDLScreenThread::SDLScreenThread ( SDLScreen_private* d)
    : QThread()
{
    _d = d;

    _quit = false;
}

SDLScreenThread::~SDLScreenThread()
{
    stop();
}

void SDLScreenThread::stop()
{
    _quit = true;
    wait();
}

void SDLScreenThread::run()
{
    SDL_Event event;
    quint8 buttonstate;
    int ret;

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

                ret = SDL_PollEvent(&event);
                _d->_mutex.unlock();

                if (!ret)
                    break;

                if ((event.type == SDL_MOUSEBUTTONDOWN) ||
                    (event.type == SDL_MOUSEBUTTONUP) ||
                    (event.type == SDL_MOUSEMOTION)) {
                    // mouse event
                    buttonstate = SDL_GetMouseState(NULL, NULL);

                    _d->sendSdlMouseEvent(event.type, event.motion.x, event.motion.y,
                                         ((buttonstate & SDL_BUTTON(1)) ? 1 : 0)
                                       | ((buttonstate & SDL_BUTTON(2)) ? 2 : 0)
                                       | ((buttonstate & SDL_BUTTON(3)) ? 4 : 0));
                }
            }
        }

        QThread::msleep(10);
    }
}
