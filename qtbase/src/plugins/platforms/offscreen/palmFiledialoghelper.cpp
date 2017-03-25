/***************************************************************************
**
** Copyright (C) 2013 Research In Motion
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

#include "palmFiledialoghelper.h"

#include "palmFilepicker.h"
////#include "palmbpseventfilter.h"
/////#include "palmscreen.h"
/////#include "palmintegration.h"
#include "qoffscreenintegration.h"
#include "qoffscreenwindow.h"
#include "qoffscreencommon.h"



#include <QDebug>
#include <QEventLoop>
#include <QScreen>
#include <QTimer>
#include <QWindow>

#ifdef palmFILEDIALOGHELPER_DEBUG
#define qFileDialogHelperDebug qDebug
#else
#define qFileDialogHelperDebug QT_NO_QDEBUG_MACRO
#endif

QT_BEGIN_NAMESPACE

palmFileDialogHelper::palmFileDialogHelper(const QOffscreenIntegration *integration)
    : QPlatformFileDialogHelper(),
      m_integration(integration),
      m_dialog(new palmFilePicker),
      m_acceptMode(QFileDialogOptions::AcceptOpen),
      m_selectedFilter()
{
    connect(m_dialog, &palmFilePicker::closed, this, &palmFileDialogHelper::emitSignals);
}

palmFileDialogHelper::~palmFileDialogHelper()
{
    delete m_dialog;
}

void palmFileDialogHelper::exec()
{
    qFileDialogHelperDebug() << Q_FUNC_INFO;

    // Clear any previous results
    m_dialog->setDirectories(QStringList());

    QEventLoop loop;
    connect(m_dialog, SIGNAL(closed()), &loop, SLOT(quit()));
    loop.exec();
}

bool palmFileDialogHelper::show(Qt::WindowFlags flags, Qt::WindowModality modality, QWindow *parent)
{
    Q_UNUSED(flags);
    Q_UNUSED(parent);
    Q_UNUSED(modality);

    qFileDialogHelperDebug() << Q_FUNC_INFO;

    // Create dialog
    const QSharedPointer<QFileDialogOptions> &opts = options();
    if (opts->acceptMode() == QFileDialogOptions::AcceptOpen) {
        // Select one or many files?
        const palmFilePicker::Mode mode = (opts->fileMode() == QFileDialogOptions::ExistingFiles)
            ? palmFilePicker::PickerMultiple : palmFilePicker::Picker;

        m_dialog->setMode(mode);

        // Set the actual list of extensions
        if (!opts->nameFilters().isEmpty())
            setNameFilters(opts->nameFilters());
        else
            setNameFilter(tr("All files (*.*)"));
    } else {
        const palmFilePicker::Mode mode = (opts->initiallySelectedFiles().count() >= 2)
            ? palmFilePicker::SaverMultiple : palmFilePicker::Saver;

        m_dialog->setMode(mode);

        if (!opts->initiallySelectedFiles().isEmpty()) {
            QStringList files;
            Q_FOREACH ( const QUrl &url, opts->initiallySelectedFiles() )
                files.append(url.toLocalFile());
            m_dialog->setDefaultSaveFileNames(files);
        }
    }

    // Cache the accept mode so we know which functions to use to get the results back
    m_acceptMode = opts->acceptMode();
    m_dialog->setTitle(opts->windowTitle());
    m_dialog->open();

    return true;
}

void palmFileDialogHelper::hide()
{
    qFileDialogHelperDebug() << Q_FUNC_INFO;
    m_dialog->close();
}

bool palmFileDialogHelper::defaultNameFilterDisables() const
{
    qFileDialogHelperDebug() << Q_FUNC_INFO;
    return false;
}

void palmFileDialogHelper::setDirectory(const QUrl &directory)
{
    m_dialog->addDirectory(directory.toLocalFile());
}

QUrl palmFileDialogHelper::directory() const
{
    qFileDialogHelperDebug() << Q_FUNC_INFO;
    if (!m_dialog->directories().isEmpty())
        return QUrl::fromLocalFile(m_dialog->directories().first());

    return QUrl();
}

void palmFileDialogHelper::selectFile(const QUrl &fileName)
{
    m_dialog->addDefaultSaveFileName(fileName.toLocalFile());
}

QList<QUrl> palmFileDialogHelper::selectedFiles() const
{
    qFileDialogHelperDebug() << Q_FUNC_INFO;
    QList<QUrl> urls;
    QStringList files = m_dialog->selectedFiles();
    Q_FOREACH (const QString &file, files)
        urls.append(QUrl::fromLocalFile(file));
    return urls;
}

void palmFileDialogHelper::setFilter()
{
    // No native api to support setting a filter from QDir::Filters
    qFileDialogHelperDebug() << Q_FUNC_INFO;
}

void palmFileDialogHelper::selectNameFilter(const QString &filter)
{
    qFileDialogHelperDebug() << Q_FUNC_INFO << "filter =" << filter;
    setNameFilter(filter);
}

QString palmFileDialogHelper::selectedNameFilter() const
{
    // For now there is no way for the user to change the selected filter
    // so this just reflects what the developer has set programmatically.
    qFileDialogHelperDebug() << Q_FUNC_INFO;
    return m_selectedFilter;
}

void palmFileDialogHelper::emitSignals()
{
    if (m_dialog->selectedFiles().isEmpty())
        Q_EMIT reject();
    else
        Q_EMIT accept();
}

void palmFileDialogHelper::setNameFilter(const QString &filter)
{
    qFileDialogHelperDebug() << Q_FUNC_INFO << "filter =" << filter;

    setNameFilters(QPlatformFileDialogHelper::cleanFilterList(filter));
}

void palmFileDialogHelper::setNameFilters(const QStringList &filters)
{
    qFileDialogHelperDebug() << Q_FUNC_INFO << "filters =" << filters;

    Q_ASSERT(!filters.isEmpty());

    m_dialog->setFilters(filters);
    m_selectedFilter = filters.first();
}

QT_END_NAMESPACE
