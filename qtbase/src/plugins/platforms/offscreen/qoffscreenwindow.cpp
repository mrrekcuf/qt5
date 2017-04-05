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

#include "qoffscreenwindow.h"
#include "qoffscreencommon.h"

#include <qpa/qplatformscreen.h>
#include <qpa/qwindowsysteminterface.h>

#include <private/qwindow_p.h>

QT_BEGIN_NAMESPACE

QOffscreenWindow::QOffscreenWindow(QWindow *window)
    : QPlatformWindow(window)
    , m_positionIncludesFrame(false)
    , m_visible(false)
    , m_pendingGeometryChangeOnShow(true)
{

/////qDebug() << "QOffscreenWindow::QOffscreenWindow(QWindow *window)" ;

    if (window->windowState() == Qt::WindowNoState)
        setGeometry(window->geometry());
    else
        setWindowState(window->windowState());

    QWindowSystemInterface::flushWindowSystemEvents();

    static WId counter = 0;
    m_winId = ++counter;

    m_windowForWinIdHash[m_winId] = this;
    
qDebug() << "QOffscreenWindow::QOffscreenWindow(QWindow *window)" << m_winId;    
}

QOffscreenWindow::~QOffscreenWindow()
{
qDebug() << "QOffscreenWindow::~QOffscreenWindow()" << m_winId;

    if (QOffscreenScreen::windowContainingCursor == this)
        QOffscreenScreen::windowContainingCursor = 0;
    m_windowForWinIdHash.remove(m_winId);
}

void QOffscreenWindow::setGeometry(const QRect &rect)
{

qDebug() << "QOffscreenWindow::setGeometry(const QRect &rect)" << rect.x() << rect.y() << rect.width() << rect.height() ;

    if (window()->windowState() != Qt::WindowNoState)
        return;

    m_positionIncludesFrame = qt_window_private(window())->positionPolicy == QWindowPrivate::WindowFrameInclusive;

    setFrameMarginsEnabled(true);
    setGeometryImpl(rect);

    m_normalGeometry = geometry();
}

void QOffscreenWindow::setGeometryImpl(const QRect &rect)
{
qDebug() << "QOffscreenWindow::setGeometryImpl(const QRect &rect)" << rect.x() << rect.y() << rect.width() << rect.height() ;
    QRect adjusted = rect;
    if (adjusted.width() <= 0)
        adjusted.setWidth(1);
    if (adjusted.height() <= 0)
        adjusted.setHeight(1);

    if (m_positionIncludesFrame) {
        adjusted.translate(m_margins.left(), m_margins.top());
    } else {
        // make sure we're not placed off-screen
        if (adjusted.left() < m_margins.left())
            adjusted.translate(m_margins.left(), 0);
        if (adjusted.top() < m_margins.top())
            adjusted.translate(0, m_margins.top());
    }
    
////// Pre3
if (adjusted.width() >= 480)
    adjusted.setWidth(480);
if (adjusted.height() >=800)
    adjusted.setHeight(800);

    QPlatformWindow::setGeometry(adjusted);
qDebug() << "QOffscreenWindow::setGeometryImpl(const QRect &rect) adjusted " << adjusted.x() << adjusted.y() << adjusted.width() << adjusted.height() ;

    if (m_visible) {
        QWindowSystemInterface::handleGeometryChange(window(), adjusted);
        QWindowSystemInterface::handleExposeEvent(window(), QRect(QPoint(), adjusted.size()));
    } else {
        m_pendingGeometryChangeOnShow = true;
    }
}


void QOffscreenWindow::raise()
{
qDebug() << Q_FUNC_INFO << "window =" << window();

///    if (m_parentWindow) {
///        m_parentWindow->m_childWindows.removeAll(this);
///        m_parentWindow->m_childWindows.push_back(this);
///    } 
///	else 
    {
/////        window()->raiseWindow(this);
    }

/////    m_screen->updateHierarchy();
}

void QOffscreenWindow::lower()
{
qDebug() << Q_FUNC_INFO << "window =" << window();

///    if (m_parentWindow) {
///        m_parentWindow->m_childWindows.removeAll(this);
///        m_parentWindow->m_childWindows.push_front(this);
///    } 
////else 
    {
/////        window()->lowerWindow(this);
    }

/////    m_screen->updateHierarchy();
}



void QOffscreenWindow::setVisible(bool visible)
{

qDebug() << "QOffscreenWindow::setVisible(bool visible)" << visible;

    if (visible == m_visible)
        return;

    if (visible) {
        if (window()->type() != Qt::ToolTip)
            QWindowSystemInterface::handleWindowActivated(window());

        if (m_pendingGeometryChangeOnShow) {
            m_pendingGeometryChangeOnShow = false;
            QWindowSystemInterface::handleGeometryChange(window(), geometry());
        }
    }

    if (visible) {
        QRect rect(QPoint(), geometry().size());
        QWindowSystemInterface::handleExposeEvent(window(), rect);
    } else {
        QWindowSystemInterface::handleExposeEvent(window(), QRegion());
    }

    m_visible = visible;
}

void QOffscreenWindow::requestActivateWindow()
{
qDebug() << "QOffscreenWindow::requestActivateWindow()" ;
    if (m_visible)
        QWindowSystemInterface::handleWindowActivated(window());
}

WId QOffscreenWindow::winId() const
{
///////////////////////qDebug() << "QOffscreenWindow::winId() const" << m_winId;

    return m_winId;
}

QMargins QOffscreenWindow::frameMargins() const
{
qDebug() << "QOffscreenWindow::frameMargins() const" << m_margins;

    return m_margins;
}

void QOffscreenWindow::setFrameMarginsEnabled(bool enabled)
{
qDebug() << "QOffscreenWindow::setFrameMarginsEnabled(bool enabled)";

    if (enabled && !(window()->flags() & Qt::FramelessWindowHint))
        m_margins = QMargins(2, 2, 2, 2);
    else
        m_margins = QMargins(0, 0, 0, 0);
}

void QOffscreenWindow::setWindowState(Qt::WindowState state)
{

qDebug() << "QOffscreenWindow::setWindowState(Qt::WindowState state)" << state;

    setFrameMarginsEnabled(state != Qt::WindowFullScreen);
    m_positionIncludesFrame = false;

    switch (state) {
    case Qt::WindowFullScreen:
qDebug() << "QOffscreenWindow::setWindowState(Qt::WindowState state) WindowFullScreen" << state;    
        setGeometryImpl(screen()->geometry());
        break;
    case Qt::WindowMaximized:
qDebug() << "QOffscreenWindow::setWindowState(Qt::WindowState state) WindowMaximized" << state;    
        setGeometryImpl(screen()->availableGeometry().adjusted(m_margins.left(), m_margins.top(), -m_margins.right(), -m_margins.bottom()));
        break;
    case Qt::WindowMinimized:
        break;
    case Qt::WindowNoState:
qDebug() << "QOffscreenWindow::setWindowState(Qt::WindowState state) WindowNoState" << state;    
        setGeometryImpl(m_normalGeometry);
        break;
    default:
        break;
    }

    QWindowSystemInterface::handleWindowStateChanged(window(), state);
}

QOffscreenWindow *QOffscreenWindow::windowForWinId(WId id)
{
qDebug() << "QOffscreenWindow::windowForWinId(WId id)" ;

    return m_windowForWinIdHash.value(id, 0);
}

QHash<WId, QOffscreenWindow *> QOffscreenWindow::m_windowForWinIdHash;

QT_END_NAMESPACE
