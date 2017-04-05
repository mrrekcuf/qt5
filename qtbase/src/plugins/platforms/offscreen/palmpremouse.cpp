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

#include "qoffscreencommon.h"
#include "qoffscreenwindow.h"


#include "palmpremouse.h"
#include "palmpremouse_private.h"
#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"
#include "sdlscreen_private.h"

//////#include "sdlscreen.h"


////#include <QWSServer>
////#include <QScreenCursor>
#include <QtGui/private/qpixmap_raster_p.h>
#include <QtGui/private/qguiapplication_p.h>

#include <qpa/qplatformcursor.h>
#include <qpa/qplatformwindow.h>

extern QWindow *activeWindow;


PalmPreMouse::PalmPreMouse ( SDLScreen_private* screen, bool showDebugInfo )
////    : QWSMouseHandler(QString(), QString())
{
////    if (showDebugInfo)
qDebug() << "PalmPreMouse::PalmPreMouse ( SDLScreen_private* screen, bool showDebugInfo )" ;

    d = new PalmPreMouse_private(this, screen, showDebugInfo);
}

PalmPreMouse::~PalmPreMouse()
{
////    if (d->_showDebugInfo)
qDebug() << "PalmPreMouse::~PalmPreMouse()" ;

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


PalmPreMouse_private::PalmPreMouse_private ( PalmPreMouse* mouseHandler, SDLScreen_private* screen, bool showDebugInfo )
{
qDebug() << "PalmPreMouse_private::PalmPreMouse_private ( PalmPreMouse* mouseHandler, SDLScreen_private* screen, bool showDebugInfo )";
    _mouseHandler = mouseHandler;
    _screen = screen;
    _showDebugInfo = showDebugInfo;

    QObject::connect(screen, SIGNAL(sdlMouseEvent(int,int,int,int)), this, SLOT(sdlMouseEvent(int,int,int,int)));

isKineticMove = false;
velocity =0;

    
}



void PalmPreMouse_private::sdlMouseEvent(int code, int x, int y, int buttons)
{

qDebug() << "PalmPreMouse_private::sdlMouseEvent(int code, int x, int y, int buttons)";

    // Map window handle to top-level QWindow
/////    QWindow *w = QOffscreenIntegration::window(qnxWindow);


    if (code == SDL_MOUSEBUTTONDOWN)
    {
        _buttonDown = true;        
    }
    else if (code == SDL_MOUSEBUTTONUP)
    {
        _buttonDown = false;
    };
////    if (_showDebugInfo)
/////        qDebug("PalmPreMouse: c %d [%d,%d] %d (%d)", code, x, y, buttons, _buttonDown ? 1 : 0);

/*****/
    // SQUARE + touch = right click
    // SQUARE + SHIFT + touch = middle click
    if (_screen->_keyboardHandler
            && (_screen->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)
            && (_screen->_keyboardHandler->d->_shift != PalmPreKeyboard_private::Up)) {
qDebug() << "PalmPreMouse_private::sdlMouseEvent0 (int code, int x, int y, int buttons)" << code << x << y << buttons ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::MidButton : 0);
// inject event into Qt
QWindowSystemInterface::handleMouseEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::MidButton : Qt::NoButton);
    } else if (_screen->_keyboardHandler
            && (_screen->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)) {
qDebug() << "PalmPreMouse_private::sdlMouseEvent1 (int code, int x, int y, int buttons)" << code << x << y << buttons ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::RightButton : 0);
// inject event into Qt
QWindowSystemInterface::handleMouseEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::RightButton : Qt::NoButton);


QWindowSystemInterface::handleWheelEvent(0, QPoint(x, y), QPoint(x, y), 5, Qt::Vertical, Qt::NoModifier);
////QWindowSystemInterface::handleTouchEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::RightButton : Qt::NoButton);

    } else  {
qDebug() << "PalmPreMouse_private::sdlMouseEvent2 (int code, int x, int y, int buttons)" << code << x << y << buttons ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::LeftButton : 0);

// inject event into Qt
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::LeftButton : Qt::NoButton);
        
    }
}


////static quint8 buttonstate;

///		    Uint32 now = SDL_GetTicks() ;
////qDebug() << now;
//		    if last_time - now < some number
//			  the user did a double click
//		    else
//		      last_time = now

SDL_Event eventPrev;
Uint32 last_time ;
Uint32 lap_time ;
#define CLICKTIME	150
#define PRESSHOLDOFFSET 10
#define PRESSHOLDTIME 	1000
#define SCALEWHEEL	2

static const int gMaxIgnoredMouseMoves = 4;
static const int gTimerInterval = 30;
static const int gMaxDecelerationSpeed = 30;
static const int gFriction = 1;

void PalmPreMouse_private::processSDLMouse(SDL_Event event)
{
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event)"  <<  event.type   ;

int x = event.motion.x;
int y = event.motion.y;

    lap_time = SDL_GetTicks() - last_time ;
qDebug() << "lap time" << lap_time ;  	     

    if (event.type == SDL_MOUSEMOTION)
    {
    
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEMOTION"  <<  event.type  << x << y << event.motion.xrel << event.motion.yrel  ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::LeftButton : 0);

	
#if 0
////        	    SDL_PixelFormat* fmt = screen->format;
                    /* If the mouse is moving to the left */
        if (event.motion.xrel < 0)
        {
///    	                SDL_FillRect(screen, NULL, SDL_MapRGB(fmt, 255, 0, 0));
QWindowSystemInterface::handleWheelEvent(activeWindow, QPoint(x, y), QPoint(x, y), event.motion.xrel*scale, Qt::Horizontal);

        }
        /* If the mouse is moving to the right */
        if (event.motion.xrel > 0)
        {
//                	SDL_FillRect(screen, NULL, SDL_MapRGB(fmt, 0, 255, 0));
QWindowSystemInterface::handleWheelEvent(activeWindow, QPoint(x, y), QPoint(x, y), event.motion.xrel*scale, Qt::Horizontal);

        }
#endif
        
        /* If the mouse is moving up */
        if ((event.motion.yrel < 0) && (_buttonDown) && (lap_time > CLICKTIME *2) )
        {
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEMOTION inject mouse wheel event"  <<  event.type  << x << y << event.motion.xrel << event.motion.yrel  ;
        
//    	                SDL_FillRect(screen, NULL, SDL_MapRGB(fmt, 0, 0, 255));
        	    /* If the mouse is moving down */
// inject event into Qt
// inject event into Qt
QWindowSystemInterface::handleWheelEvent(activeWindow, QPoint(x, y), QPoint(x, y),
					 (event.motion.yrel)*SCALEWHEEL, Qt::Vertical);

        } 
        else if ((event.motion.yrel > 0) && (_buttonDown) && (lap_time > CLICKTIME *2))
        {
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEMOTION inject mouse wheel event"  <<  event.type  << x << y << event.motion.xrel << event.motion.yrel  ;
        
//                	SDL_FillRect(screen, NULL, SDL_MapRGB(fmt, 0, 255, 255));
// inject event into Qt
QWindowSystemInterface::handleWheelEvent(activeWindow, QPoint(x, y), QPoint(x, y), 
					 (event.motion.yrel)*SCALEWHEEL, Qt::Vertical);
	};
    };


    if ((event.type == SDL_MOUSEBUTTONDOWN) ||
	(event.type == SDL_MOUSEBUTTONUP) ) {
    
///    buttonstate = SDL_GetMouseState(NULL, NULL);        

    
    // Map window handle to top-level QWindow
/////    QWindow *w = QOffscreenIntegration::window(qnxWindow);

////    if (_showDebugInfo)
/////        qDebug("PalmPreMouse: c %d [%d,%d] %d (%d)", code, x, y, buttons, _buttonDown ? 1 : 0);

/*****/
    // SQUARE + touch = right click
    // SQUARE + SHIFT + touch = middle click
/****    
    if (_screen->_keyboardHandler
            && (_screen->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)
            && (_screen->_keyboardHandler->d->_shift != PalmPreKeyboard_private::Up)) {
qDebug() << "PalmPreMouse_private::sdlMouseEvent0 (int code, int x, int y, int buttons)" << code << x << y << buttons ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::MidButton : 0);
// inject event into Qt
QWindowSystemInterface::handleMouseEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::MidButton : Qt::NoButton);
    } else if (_screen->_keyboardHandler
            && (_screen->_keyboardHandler->d->_square != PalmPreKeyboard_private::Up)) {
qDebug() << "PalmPreMouse_private::sdlMouseEvent1 (int code, int x, int y, int buttons)" << code << x << y << buttons ;
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::RightButton : 0);
// inject event into Qt
QWindowSystemInterface::handleMouseEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::RightButton : Qt::NoButton);


QWindowSystemInterface::handleWheelEvent(0, QPoint(x, y), QPoint(x, y), 5, Qt::Vertical, Qt::NoModifier);
////QWindowSystemInterface::handleTouchEvent(0, QPoint(x, y), QPoint(x, y), _buttonDown ? Qt::RightButton : Qt::NoButton);
    } else  
****/    
///    if (!_buttonDown) 
////    {
    
////                    _d->sendQtMouseEvent(event.type, event.motion.x, event.motion.y,
///                                         ((buttonstate & SDL_BUTTON(1)) ? 1 : 0)
///                                       | ((buttonstate & SDL_BUTTON(2)) ? 2 : 0)
//                                       | ((buttonstate & SDL_BUTTON(3)) ? 4 : 0));
/////        _mouseHandler->mouseChanged(QPoint(x, y), _buttonDown ? Qt::LeftButton : 0);


////int button =  (((buttonstate & SDL_BUTTON(SDL_BUTTON_LEFT)) ? Qt::LeftButton  :Qt::NoButton)
////             |(((buttonstate & SDL_BUTTON(SDL_BUTTON_RIGHT)) ? Qt::RightButton:Qt::NoButton)
////             |(((buttonstate & SDL_BUTTON(SDL_BUTTON_MIDDLE)) ? Qt::MidButton :Qt::NoButton));

// inject event into Qt
///QWindowSystemInterface::handleWheelEvent(activeWindow, QPoint(x, y), QPoint(x, y), 500, Qt::Vertical);
/****/
        if (event.type  == SDL_MOUSEBUTTONDOWN)
	{
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEDOWN"  <<  event.type  << x << y << event.button.button ;

	    _buttonDown = true ;
	    eventPrev = event ;
	    last_time  = SDL_GetTicks();
	    
lastPressPoint = QPoint(x, y);
isKineticMove = false ;
	    
        }
        else // if (event.type  == SDL_MOUSEBUTTONUP)
        {
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEUP"  <<  event.type  << x << y << event.button.button ;

	     _buttonDown = false ;        
	    

    	     if (lap_time < CLICKTIME)  
    	     { //// left click/double click
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEUP inject mouse event left click"  <<  event.type  << x << y << event.button.button ;
    	     
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(eventPrev.motion.x, eventPrev.motion.y), QPoint(eventPrev.motion.x, eventPrev.motion.y),
              ((eventPrev.button.button == SDL_BUTTON_LEFT) ? Qt::LeftButton  :Qt::NoButton)
             |((eventPrev.button.button == SDL_BUTTON_RIGHT) ? Qt::RightButton:Qt::NoButton)
             |((eventPrev.button.button == SDL_BUTTON_MIDDLE) ? Qt::MidButton :Qt::NoButton));        
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(eventPrev.motion.x, eventPrev.motion.y), QPoint(eventPrev.motion.x, eventPrev.motion.y), Qt::NoButton);

isKineticMove = false ;
	     }
	     else if ( (abs(x - eventPrev.motion.x) < PRESSHOLDOFFSET) && (abs(y - eventPrev.motion.y) < PRESSHOLDOFFSET) && (lap_time < PRESSHOLDTIME))
	     {  ////press and hold right click
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEUP inject mouse event rightt click"  <<  event.type  << x << y << event.button.button ;
	     
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(x, y), QPoint(x, y), Qt::RightButton) ;
////              ((event.button.button == SDL_BUTTON_LEFT) ? Qt::LeftButton  :Qt::NoButton)
////             |((event.button.button == SDL_BUTTON_RIGHT) ? Qt::RightButton:Qt::NoButton)
////             |((event.button.button == SDL_BUTTON_MIDDLE) ? Qt::MidButton :Qt::NoButton));        
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(x, y), QPoint(x, y), Qt::NoButton);

////lastReleasePoint = QPoint(x, y);
////isKineticMove = true;
////velocity = lastReleasePoint.y() - lastPressPoint.y();
////	     
isKineticMove = false ;
	     } 
	     else
	     {    /// move
	     
qDebug() << "PalmPreMouse_private::processSDLMouse(SDL_Event event) SDL_MOUSEUP inject mouse event no click"  <<  event.type  << x << y << event.button.button ;
	     
QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(x, y), QPoint(x, y), Qt::NoButton);

lastReleasePoint = QPoint(x, y);
isKineticMove = true;
velocity = lastReleasePoint.y() - lastPressPoint.y();

	     };

	    
        };

///              ((buttonstate & SDL_BUTTON(SDL_BUTTON_LEFT)) ? Qt::LeftButton  :Qt::NoButton)
             
////QWindowSystemInterface::handleMouseEvent(activeWindow, QPoint(x, y), QPoint(x, y), Qt::NoButton);
             
/***/
    }

    

/****/

}


void PalmPreMouse_private::kineticMouseMove()
{
/////qDebug() << "PalmPreMouse_private::kineticMouseMove()" << isKineticMove;
    if (isKineticMove)
    {
qDebug() << "kinetic moves...";
      velocity = qBound(-gMaxDecelerationSpeed, velocity, gMaxDecelerationSpeed);
      if( velocity> 0 )
         velocity -= gFriction;
      else if( velocity < 0 )
         velocity += gFriction;
      if( qAbs(velocity) < qAbs(gFriction) )
      {
         isKineticMove = false ;
      };

qDebug() << "PalmPreMouse_private::kineticMouseMove() inject mouse wheel event"  <<  lastPressPoint.x() << lastPressPoint.y()  << velocity*SCALEWHEEL  ;

QWindowSystemInterface::handleWheelEvent(activeWindow, lastPressPoint, lastPressPoint, velocity*SCALEWHEEL, Qt::Vertical);
////      const int scrollBarYPos = scrollArea->verticalScrollBar()->value();
////      scrollArea->verticalScrollBar()->setValue(scrollBarYPos - velocity)
    };
    
}

