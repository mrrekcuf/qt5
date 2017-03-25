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

#include "qoffscreenintegration.h"
#include "qoffscreenwindow.h"
#include "qoffscreencommon.h"

#if defined(Q_OS_UNIX)
#include <QtPlatformSupport/private/qgenericunixeventdispatcher_p.h>
#if defined(Q_OS_MAC)
#include <qpa/qplatformfontdatabase.h>
#else
#include <QtPlatformSupport/private/qgenericunixfontdatabase_p.h>
#endif
#elif defined(Q_OS_WIN)
#include <QtPlatformSupport/private/qbasicfontdatabase_p.h>
#ifndef Q_OS_WINRT
#include <QtCore/private/qeventdispatcher_win_p.h>
#else
#include <QtCore/private/qeventdispatcher_winrt_p.h>
#endif
#endif

#include <QtGui/private/qpixmap_raster_p.h>
#include <QtGui/private/qguiapplication_p.h>

#include <qpa/qplatformservices.h>


#include <qpa/qplatforminputcontextfactory_p.h>


#if !defined(QT_NO_EVDEV) && (!defined(Q_OS_ANDROID) || defined(Q_OS_ANDROID_NO_SDK))
#include <QtPlatformSupport/private/qevdevmousemanager_p.h>
#include <QtPlatformSupport/private/qevdevkeyboardmanager_p.h>
#include <QtPlatformSupport/private/qevdevtouchmanager_p.h>
#endif

#if !defined(QT_NO_TSLIB) && (!defined(Q_OS_ANDROID) || defined(Q_OS_ANDROID_NO_SDK))
#include <QtPlatformSupport/private/qtslib_p.h>
#endif



QT_BEGIN_NAMESPACE

template <typename BaseEventDispatcher>
class QOffscreenEventDispatcher : public BaseEventDispatcher
{
public:
    explicit QOffscreenEventDispatcher(QObject *parent = 0)
        : BaseEventDispatcher(parent)
    {
    }

    bool processEvents(QEventLoop::ProcessEventsFlags flags)
    {
        bool didSendEvents = BaseEventDispatcher::processEvents(flags);

        return QWindowSystemInterface::sendWindowSystemEvents(flags) || didSendEvents;
    }

    bool hasPendingEvents()
    {
        return BaseEventDispatcher::hasPendingEvents()
            || QWindowSystemInterface::windowSystemEventsQueued();
    }

    void flush()
    {
        if (qApp)
            qApp->sendPostedEvents();
        BaseEventDispatcher::flush();
    }
};

QOffscreenIntegration::QOffscreenIntegration()
{
qDebug() << "QOffscreenIntegration::QOffscreenIntegration() Enter";
    
#if defined(Q_OS_UNIX)
#if defined(Q_OS_MAC)
    m_fontDatabase.reset(new QPlatformFontDatabase());
#else
    m_fontDatabase.reset(new QGenericUnixFontDatabase());
#endif
#elif defined(Q_OS_WIN)
    m_fontDatabase.reset(new QBasicFontDatabase());
#endif

#ifndef QT_NO_DRAGANDDROP
qDebug() << "QOffscreenIntegration::QOffscreenIntegration() m_drag.reset(new QOffscreenDrag);";
    m_drag.reset(new QOffscreenDrag);
#endif
    m_services.reset(new QPlatformServices);

    m_primaryScreen = new QOffscreenScreen();    
    if (m_primaryScreen->initialize())
    {
        screenAdded(m_primaryScreen, true);
qDebug() << "QOffscreenIntegration::QOffscreenIntegration() screenAdded(m_primaryScreen) OK " ;
        
    }
    else
        qWarning("QOffscreenIntegration::QOffscreenIntegration() Failed to initialize screen");
        
qDebug() << "QOffscreenIntegration::QOffscreenIntegration() Exit";        
}

QOffscreenIntegration::~QOffscreenIntegration()
{
qDebug() << "QOffscreenIntegration::~QOffscreenIntegration()";
    destroyScreen(m_primaryScreen);
}


bool QOffscreenIntegration::hasCapability(QPlatformIntegration::Capability cap) const
{
qDebug() << "QOffscreenIntegration::hasCapability(QPlatformIntegration::Capability cap" << cap;
    switch (cap) {
    case ThreadedPixmaps: return true;
    case MultipleWindows: return true;
    default: return QPlatformIntegration::hasCapability(cap);
    }
}



QPlatformWindow *QOffscreenIntegration::createPlatformWindow(QWindow *window) const
{
qDebug() << "QOffscreenIntegration::createPlatformWindow(QWindow *window)";
    Q_UNUSED(window);
    QPlatformWindow *w = new QOffscreenWindow(window);
    w->requestActivateWindow();
    return w;
}

QPlatformBackingStore *QOffscreenIntegration::createPlatformBackingStore(QWindow *window) const
{
qDebug() << "QOffscreenIntegration::createPlatformBackingStore(QWindow *window)";
    return new QOffscreenBackingStore(window);
}

QAbstractEventDispatcher *QOffscreenIntegration::createEventDispatcher() const
{
qDebug() << "QOffscreenIntegration::createEventDispatcher()";
#if defined(Q_OS_UNIX)
qDebug() << "QOffscreenIntegration::createEventDispatcher() Q_OS_UNIX ";
    return createUnixEventDispatcher();
#elif defined(Q_OS_WIN)
#ifndef Q_OS_WINRT
    return new QOffscreenEventDispatcher<QEventDispatcherWin32>();
#else // !Q_OS_WINRT
    return new QOffscreenEventDispatcher<QEventDispatcherWinRT>();
#endif // Q_OS_WINRT
#else
qDebug() << "QOffscreenIntegration::createEventDispatcher() 0";
    return 0;
#endif
}

QPlatformFontDatabase *QOffscreenIntegration::fontDatabase() const
{
qDebug() << "QOffscreenIntegration::fontDatabase()";
    return m_fontDatabase.data();
}

#ifndef QT_NO_DRAGANDDROP
QPlatformDrag *QOffscreenIntegration::drag() const
{
qDebug() << "QOffscreenIntegration::drag()";
    return m_drag.data();
}
#endif

QPlatformServices *QOffscreenIntegration::services() const
{
qDebug() << "QOffscreenIntegration::services()";
    return m_services.data();
}




QVariant QOffscreenIntegration::styleHint(QPlatformIntegration::StyleHint hint) const
{

/////qDebug() << "QOffscreenIntegration::styleHint(QPlatformIntegration::StyleHint hint)" << hint;

    switch (hint) {
    case QPlatformIntegration::CursorFlashTime:
/////        if (const unsigned timeMS = GetCaretBlinkTime())
////            return QVariant(timeMS != INFINITE ? int(timeMS) * 2 : 0);
        break;
#ifdef SPI_GETKEYBOARDSPEED
    case KeyboardAutoRepeatRate:
        return QVariant(keyBoardAutoRepeatRateMS());
#endif
    case QPlatformIntegration::StartDragTime:
    case QPlatformIntegration::StartDragDistance:
    case QPlatformIntegration::KeyboardInputInterval:
    case QPlatformIntegration::ShowIsFullScreen:
////qDebug() << "QOffscreenIntegration::styleHint(QPlatformIntegration::StyleHint hint) mmm" << QPlatformIntegration::ShowIsFullScreen;
    
    case QPlatformIntegration::PasswordMaskDelay:
    case QPlatformIntegration::StartDragVelocity:
        break; // Not implemented
    case QPlatformIntegration::FontSmoothingGamma:
////        return QVariant(QWindowsFontDatabase::fontSmoothingGamma());
    case QPlatformIntegration::MouseDoubleClickInterval:
////        if (const int ms = GetDoubleClickTime())
////            return QVariant(ms);
        break;
    case QPlatformIntegration::UseRtlExtensions:
/////        return QVariant(d->m_context.useRTLExtensions());
    default:
        break;
    }
    return QPlatformIntegration::styleHint(hint);
}


QT_END_NAMESPACE
