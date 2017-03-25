// sdlscreen.cpp
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

#include "sdlscreen.h"
#include "sdlscreen_private.h"
#include "sdlscreenthread.h"
/////#include "palmprekeyboard.h"
/////#include "palmpremouse.h"

#include <QCoreApplication>
#include <QColor>
#include <QRect>
#include <QRegion>
#include <QImage>
////#include <QWSServer>

/// palm pre
////#define DEFAULT_WIDTH 320   // default if SDL_GetVideoInfo() fails
////#define DEFAULT_HEIGHT 480
////#define DEPTH 32

////palm pre3
#define DEFAULT_WIDTH 480   // default if SDL_GetVideoInfo() fails
#define DEFAULT_HEIGHT 800
#define DEPTH 32

//// palm HD (tp)
////#define DEFAULT_WIDTH 768   // default if SDL_GetVideoInfo() fails
////#define DEFAULT_HEIGHT 1024
////#define DEPTH 32

SDLScreen::SDLScreen ( const QString& driver, int display_id )
    : QScreen(display_id)
{
    bool showDebugInfo = !qgetenv("QWS_DEBUG").isEmpty();

    if (showDebugInfo)
        qDebug("SDLScreen(%s, %d)", (const char*)driver.toAscii(), display_id);

    d = new SDLScreen_private(showDebugInfo);
}

SDLScreen::~SDLScreen()
{
    if (d->_showDebugInfo)
        qDebug("~SDLScreen()");

    delete d;
}

bool SDLScreen::initDevice()
{
    if (d->_showDebugInfo)
        qDebug("SDLScreen::initDevice()");

    // everything is done in connect()

    return true;
}

void SDLScreen::shutdownDevice()
{
    if (d->_showDebugInfo)
        qDebug("SDLScreen::shutdownDevice()");

    // everything is done in disconnect()
}

bool SDLScreen::connect ( const QString& displaySpec )
{
    if (d->_showDebugInfo)
        qDebug("SDLScreen::connect(%s)", (const char*)displaySpec.toAscii());
/*****
    if (qgetenv("QWS_KEYBOARD").isEmpty()) {
        QWSServer::instance()->setDefaultKeyboard("None");
        d->_keyboardHandler = new PalmPreKeyboard(this, d->_showDebugInfo);
//        QWSServer::instance()->setKeyboardHandler(d->_keyboardHandler);
    }

    if (qgetenv("QWS_MOUSE_PROTO").isEmpty()) {
        QWSServer::instance()->setDefaultMouse("None");
        d->_mouseHandler = new PalmPreMouse(this, d->_showDebugInfo);
//        QWSServer::instance()->setMouseHandler(d->_mouseHandler);
    }
*****/
    d->_mutex.lock();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        qDebug("SDL_Init failed!");

        d->_mutex.unlock();
        return false;
    }

// start the PDL library
//PDL_Init(0);
//atexit(PDL_Quit);

    dw = DEFAULT_WIDTH;
    dh = DEFAULT_HEIGHT;
    QScreen::d = DEPTH;     // We -almost- changed our standard use of 'd' for the private data class over this

    const SDL_VideoInfo* vi = SDL_GetVideoInfo();

    if (vi != NULL) {
////        if (d->_showDebugInfo)
            qDebug("Video info: %dx%d, bpp = %d", vi->current_w, vi->current_h, vi->vfmt->BitsPerPixel);

        if (vi->current_w > 0) {
            // valid screen dimensions (?)
////            dw = vi->current_w;
////            dh = vi->current_h;
            dh = vi->current_w;
            dw = vi->current_h;
        }
    }

    d->_surface = SDL_SetVideoMode(dw, dh, QScreen::d, SDL_SWSURFACE);

    if (!d->_surface) {
        qDebug("SDL_SetVideoMode() failed!");
        SDL_Quit();

        d->_mutex.unlock();
        return false;
    }

    data = (uchar*)d->_surface->pixels;
    grayscale = false;
    w = dw;
    h = dh;
    mapsize = dw * dh * sizeof(quint32);

    physWidth = 44;         // experimental numbers resulting in reasonable font sizes
    physHeight = 63;
    physWidth = w / 3;
    physHeight = h / 3;

    pixeltype = QScreen::NormalPixel;
    screencols = 0;
    size = mapsize;
    lstep = dw * sizeof(quint32);

    d->_open = true;

    d->_mutex.unlock();

    return true;
}

void SDLScreen::disconnect()
{
    if (d->_showDebugInfo)
        qDebug("SDLScreen::disconnect()");

    if (d->_open)
    {
        d->_mutex.lock();
        SDL_Quit();
        d->_open = false;
        d->_mutex.unlock();
    }
}

void SDLScreen::setMode ( int width, int height, int depth )
{
    if (d->_open) {
////        if (d->_showDebugInfo)
            qDebug("setMode %d %d %d", width, height, depth);

        d->_mutex.lock();
        d->_surface = SDL_SetVideoMode(width, height, depth, SDL_SWSURFACE);
        d->_mutex.unlock();

        if (d->_surface == NULL) {
            qDebug("SDL_SetVideoMode failed!");
            QCoreApplication::quit();
        }
    }
}

void SDLScreen::solidFill ( const QColor& color, const QRegion& region )
{
    d->_mutex.lock();

    if (!d->_open)
        return;

    if (SDL_MUSTLOCK(d->_surface)) {
        if (SDL_LockSurface(d->_surface) < 0) {
            d->_mutex.unlock();
            return;
        }
    }

    QScreen::solidFill(color, region);

    if (SDL_MUSTLOCK(d->_surface))
        SDL_UnlockSurface(d->_surface);

    SDL_Flip(d->_surface);

    d->_mutex.unlock();
}

void SDLScreen::blit ( const QImage& image, const QPoint& topLeftRaw, const QRegion& region )
{
    d->_mutex.lock();

    if (!d->_open)
        return;

    if (SDL_MUSTLOCK(d->_surface)) {
        if (SDL_LockSurface(d->_surface) < 0) {
            d->_mutex.unlock();
            return;
        }
    }

    QScreen::blit(image, topLeftRaw, region);

    if (SDL_MUSTLOCK(d->_surface))
        SDL_UnlockSurface(d->_surface);

    SDL_Flip(d->_surface);

    d->_mutex.unlock();
}
