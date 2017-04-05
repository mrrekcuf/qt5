/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

///////
#include <SDL/SDL.h>
#include <PDL.h>



////palm pre3
#define DEFAULT_WIDTH 480   // default if SDL_GetVideoInfo() fails
#define DEFAULT_HEIGHT 800
#define DEPTH 32
//////


#include "qoffscreencommon.h"
#include "qoffscreenwindow.h"

#include <QtGui/private/qpixmap_raster_p.h>
#include <QtGui/private/qguiapplication_p.h>

#include <qpa/qplatformcursor.h>
#include <qpa/qplatformwindow.h>

#include "palmpremouse.h"
#include "palmpremouse_private.h"
#include "palmprekeyboard.h"
#include "palmprekeyboard_private.h"



QT_BEGIN_NAMESPACE


QPlatformWindow *QOffscreenScreen::windowContainingCursor = 0;

SDLScreen_private* d = NULL;    
QWindow *activeWindow = 0;
QCursor *cursor = 0;

class QOffscreenCursor : public QPlatformCursor
{
public:
    QOffscreenCursor() : m_pos(10, 10) {
qDebug() << "QOffscreenCursor::QOffscreenCursor()" ;    
    }

    QPoint pos() const Q_DECL_OVERRIDE { return m_pos; }
    void setPos(const QPoint &pos) Q_DECL_OVERRIDE
    {
qDebug() << "QOffscreenCursor::setPos()" << pos.x() << pos.y() ;        
        m_pos = pos;
        QWindowList wl = QGuiApplication::topLevelWindows();
        QWindow *containing = 0;
        foreach (QWindow *w, wl) {
            if (w->type() != Qt::Desktop && w->isExposed() && w->geometry().contains(pos)) {
                containing = w;
                break;
            }
        }

        QPoint local = pos;
        if (containing)
            local -= containing->position();

        QWindow *previous = QOffscreenScreen::windowContainingCursor ? QOffscreenScreen::windowContainingCursor->window() : 0;
        if (containing != previous)
            QWindowSystemInterface::handleEnterLeaveEvent(containing, previous, local, pos);

        QWindowSystemInterface::handleMouseEvent(containing, local, pos, QGuiApplication::mouseButtons(), QGuiApplication::keyboardModifiers());

        QOffscreenScreen::windowContainingCursor = containing ? containing->handle() : 0;
    }

    void changeCursor(QCursor *windowCursor, QWindow *window) Q_DECL_OVERRIDE
    {
qDebug() << "QOffscreenCursor::changeCursor(QCursor *windowCursor, QWindow *window)" << windowCursor->pos() ;
	cursor = windowCursor;
        Q_UNUSED(windowCursor);
        Q_UNUSED(window);
    }

private:
    QPoint m_pos;
};

QOffscreenScreen::QOffscreenScreen()
    : m_geometry(0, 0, 800, 600)
    , m_cursor(new QOffscreenCursor)
{
qDebug() << "QOffscreenScreen::QOffscreenScreen()" ;

}

QOffscreenScreen::~QOffscreenScreen()
{
qDebug() << "QOffscreenScreen::~QOffscreenScree()";

    if (d->_open)
    {
        d->_mutex.lock();
        SDL_Quit();
        d->_open = false;
        d->_mutex.unlock();
    }

    delete d;    
    d = NULL;    

    PDL_Quit() ;
};


bool QOffscreenScreen::initialize()
{

qDebug() << "QOffscreenScreen::initialize() Enter";

    PDL_Init(0);
    atexit(PDL_Quit);
    
/****    
    PDL_SensorType sensor = PDL_SENSOR_ORIENTATION;
    PDL_OrientationEvent event1;

//qDebug() << "PDL_EnableSensor"  <<
    PDL_EnableSensor(sensor, PDL_TRUE);
//qDebug() << "PDL_PollSensor" <<
    PDL_PollSensor(sensor, (PDL_SensorEvent *)&event1);
    ////PDL_EnableSensor(sensor, PDL_FALSE);

    if (event1.type == PDL_SENSOR_ORIENTATION) //PDL_SENSOR_ROTATION)
    {
///qDebug() << event1.orientation ;
        switch (event1.orientation)
        {
            case 4:
        //            output.append("Top up");
                break;
            case 3:
        //            output.append("Top down");
                break;
            case 5:
        //            output.append("Left up");
                break;
            case 6:
        //            output.append("Right up");
                break;
            case 1:
        //            output.append("Face up");
                break;
            case 2:
        //            output.append("Face down");
                break;
            case 0:
        //            output.append("Undefined");
                break;
        ////        default:
        //        output = "Invalid enum value";
        } // switch
        /////    ui->OrientationValue->setText(output);
        ///// qDebug() << output;
    } ;    
***/

    d = new SDLScreen_private(true);
    
////    if (qgetenv("QWS_KEYBOARD").isEmpty()) {
///        QWSServer::instance()->setDefaultKeyboard("None");
        d->_keyboardHandler = new PalmPreKeyboard(d, d->_showDebugInfo);
//        QWSServer::instance()->setKeyboardHandler(d->_keyboardHandler);
////    }

////    if (qgetenv("QWS_MOUSE_PROTO").isEmpty()) {
////        QWSServer::instance()->setDefaultMouse("None");
        d->_mouseHandler = new PalmPreMouse(d, d->_showDebugInfo);
//        QWSServer::instance()->setMouseHandler(d->_mouseHandler);
////    }


    d->_mutex.lock();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
qDebug() << "SDL_Init failed!" ;

        d->_mutex.unlock();
        return false;
    }
    atexit(SDL_Quit);
    
// start the PDL library
//PDL_Init(0);
//atexit(PDL_Quit);

    dw = DEFAULT_WIDTH;
    dh = DEFAULT_HEIGHT;
////    QScreen::d = DEPTH;     // We -almost- changed our standard use of 'd' for the private data class over this
    int depth = DEPTH ;
     
    const SDL_VideoInfo* vi = SDL_GetVideoInfo();
    if (vi != NULL) {
////        if (d->_showDebugInfo)
qDebug() << "Video info: " <<  vi->current_w << "x" << vi->current_h << " bpp: " << vi->vfmt->BitsPerPixel;

        if (vi->current_w > 0) {
            // valid screen dimensions (?)
////            dw = vi->current_w;
////            dh = vi->current_h;
            dw = vi->current_w;
            dh = vi->current_h;
            depth = vi->vfmt->BitsPerPixel ;
        }
    }
    else
    {
qDebug() << "Video info: NULL" ; 
    }

////    d->_surface = SDL_SetVideoMode(dw, dh, QScreen::d, SDL_SWSURFACE);
    d->_surface = SDL_SetVideoMode(dw, dh, depth, SDL_SWSURFACE);
    if (!d->_surface) {
qDebug() << "SDL_SetVideoMode() failed!" ;
        SDL_Quit();

        d->_mutex.unlock();
        return false;
    }

    d->_open = true;

    d->_mutex.unlock();

qDebug() << "QOffscreenScreen::initialize Exit";

return true;

}


void QOffscreenScreen::updateSDL(QImage &m_image) {

//////qDebug() << "QOffscreenScreen::updateSDL()" ;

    if (d == NULL) 
        return;
        
    if (!d->_open)
	return ;       


    if (SDL_MUSTLOCK(d->_surface)) {
        if (SDL_LockSurface(d->_surface) < 0) {
            d->_mutex.unlock();
            return ;            
        }
    }

///    QPoint topLeftRaw = QPoint(0, 0);
///    QScreen::blit(mFbScreenImage, topLeftRaw, touched);

    // Ensure that the source image is in the correct pixel format
    if (m_image.format() != QImage::Format_ARGB32)
        m_image  = m_image.convertToFormat(QImage::Format_ARGB32);

    // QImage stores each pixel in ARGB format
    // Mask appropriately for the endianness
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    Uint32 amask = 0x000000ff;
    Uint32 rmask = 0x0000ff00;
    Uint32 gmask = 0x00ff0000;
    Uint32 bmask = 0xff000000;
#else
    Uint32 amask = 0xff000000;
    Uint32 rmask = 0x00ff0000;
    Uint32 gmask = 0x0000ff00;
    Uint32 bmask = 0x000000ff;
#endif

SDL_Surface* xx =  SDL_CreateRGBSurfaceFrom((void*)m_image.constBits(),
        m_image.width(), m_image.height(), m_image.depth(), m_image.bytesPerLine(),
        rmask, gmask, bmask, amask);

SDL_FillRect(d->_surface, NULL, SDL_MapRGBA(d->_surface->format, 255, 255, 255, 255));
/////SDL_Surface *surf = xx;
SDL_BlitSurface(xx, NULL, d->_surface, NULL);
SDL_FreeSurface(xx);
SDL_Flip(d->_surface);
    if (SDL_MUSTLOCK(d->_surface))
        SDL_UnlockSurface(d->_surface);

    SDL_Flip(d->_surface);

    d->_mutex.unlock();

}




QPixmap QOffscreenScreen::grabWindow(WId id, int x, int y, int width, int height) const
{
qDebug() << "QOffscreenScreen::grabWindow(WId id, int x, int y, int width, int height)" << x << y << width << height ;

    QRect rect(x, y, width, height);

    QOffscreenWindow *window = QOffscreenWindow::windowForWinId(id);
    if (!window || window->window()->type() == Qt::Desktop) {
        QWindowList wl = QGuiApplication::topLevelWindows();
        QWindow *containing = 0;
        foreach (QWindow *w, wl) {
            if (w->type() != Qt::Desktop && w->isExposed() && w->geometry().contains(rect)) {
                containing = w;
                break;
            }
        }

        if (!containing)
            return QPixmap();

        id = containing->winId();
        rect = rect.translated(-containing->geometry().topLeft());
    }

    QOffscreenBackingStore *store = QOffscreenBackingStore::backingStoreForWinId(id);
    if (store)
        return store->grabWindow(id, rect);
    return QPixmap();
}


QOffscreenBackingStore::QOffscreenBackingStore(QWindow *window)
    : QPlatformBackingStore(window)
{
qDebug() << "QOffscreenBackingStore::QOffscreenBackingStore(QWindow *window)";
}

QOffscreenBackingStore::~QOffscreenBackingStore()
{
qDebug() << "QOffscreenBackingStore::~QOffscreenBackingStore()";
    clearHash();  
}


QPaintDevice *QOffscreenBackingStore::paintDevice()
{
/////qDebug() << "QOffscreenBackingStore::paintDevice()";
    return &m_image;
}

void QOffscreenBackingStore::flush(QWindow *window, const QRegion &region, const QPoint &offset)
{
//////qDebug() << "QOffscreenBackingStore::flush(QWindow *window, const QRegion &region, const QPoint &offset)";

    Q_UNUSED(region);

    if (m_image.size().isEmpty())
        return;

    QSize imageSize = m_image.size();
//////////////////////////qDebug() << "QOffscreenBackingStore::flush(QWindow *window, const QRegion &region, const QPoint &offset)" << imageSize.width() << imageSize.height() ;


    QRegion clipped = QRect(0, 0, window->width(), window->height());
    clipped &= QRect(0, 0, imageSize.width(), imageSize.height()).translated(-offset);

    QRect bounds = clipped.boundingRect().translated(offset);

    if (bounds.isNull())
        return;

    WId id = window->winId();

    m_windowAreaHash[id] = bounds;
    m_backingStoreForWinIdHash[id] = this;

((QOffscreenScreen *)QGuiApplication::primaryScreen())->updateSDL(m_image) ;
//////qDebug() << "QOffscreenBackingStore::flush() done" ;
activeWindow = window ;

}


void QOffscreenBackingStore::resize(const QSize &size, const QRegion &)
{
qDebug() << "QOffscreenBackingStore::resize(const QSize &size, const QRegion &)" <<  size.width() << size.height() ;

////    QSize sizeTemp = size;
///    sizeTemp.transpose();
////    QSize sizeTemp(480, 800);
////qDebug() << "QOffscreenBackingStore::resize(const QSize &size, const QRegion &)" <<  sizeTemp.width() << sizeTemp.height() ;
    
    QImage::Format format = QGuiApplication::primaryScreen()->handle()->format();
    if (m_image.size() != size)
    {
        m_image = QImage(size, format);
((QOffscreenScreen *)QGuiApplication::primaryScreen())->updateSDL(m_image) ;
    }
    
    clearHash();
}




extern void qt_scrollRectInImage(QImage &img, const QRect &rect, const QPoint &offset);

bool QOffscreenBackingStore::scroll(const QRegion &area, int dx, int dy)
{

qDebug() << "QOffscreenBackingStore::scroll()" << dx << dy;

    if (m_image.isNull())
        return false;

    const QVector<QRect> rects = area.rects();
    for (int i = 0; i < rects.size(); ++i)
        qt_scrollRectInImage(m_image, rects.at(i), QPoint(dx, dy));

    return true;
}

QPixmap QOffscreenBackingStore::grabWindow(WId window, const QRect &rect) const
{
qDebug() << "QOffscreenBackingStore::grabWindow(WId window, const QRect &rect)" << rect.x() << rect.y() << rect.width() << rect.height()  ;

    QRect area = m_windowAreaHash.value(window, QRect());
    if (area.isNull())
        return QPixmap();

    QRect adjusted = rect;
    if (adjusted.width() <= 0)
        adjusted.setWidth(area.width());
    if (adjusted.height() <= 0)
        adjusted.setHeight(area.height());

    adjusted = adjusted.translated(area.topLeft()) & area;

    if (adjusted.isEmpty())
        return QPixmap();

    return QPixmap::fromImage(m_image.copy(adjusted));
}

QOffscreenBackingStore *QOffscreenBackingStore::backingStoreForWinId(WId id)
{
qDebug() << "QOffscreenBackingStore::backingStoreForWinId(WId id)" << id;
    return m_backingStoreForWinIdHash.value(id, 0);
}

void QOffscreenBackingStore::clearHash()
{
qDebug() << "QOffscreenBackingStore::clearHash()";
    QList<WId> ids = m_windowAreaHash.keys();
    foreach (WId id, ids) {
        QHash<WId, QOffscreenBackingStore *>::iterator it = m_backingStoreForWinIdHash.find(id);
        if (it.value() == this)
            m_backingStoreForWinIdHash.remove(id);
    }
    m_windowAreaHash.clear();
activeWindow = 0;    
}

QHash<WId, QOffscreenBackingStore *> QOffscreenBackingStore::m_backingStoreForWinIdHash;

QT_END_NAMESPACE
