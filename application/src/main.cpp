/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

//! [0]
#include <QApplication>

//////////  added for WebOS  - begin
#include <QLibraryInfo>
#include <QFontDatabase>
#include <QtDebug>
//////////  added for WebOS  - begin


#include "mainwindow.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(application);

//////////  added for WebOS  - begin
	QCoreApplication::addLibraryPath("./runtime/lib/fonts");
	QCoreApplication::addLibraryPath("./runtime/lib/plugins");
	QCoreApplication::addLibraryPath("./runtime/plugins");
	QCoreApplication::addLibraryPath("./runtime/plugins/imageformats");
	QCoreApplication::addLibraryPath("./runtime/plugins/platforms");

    char *newargvExtra[] = {"-platform",
							"offscreen",
							} ;

    char **newargv  = new char*[argc+2];
    for (int i=0; i< argc; i++) {
        newargv[i] = argv[i]; 
    }
    newargv[argc] = newargvExtra[0]; 
    newargv[argc+1] = newargvExtra[1]; 

    int newargc = argc +2;

    QApplication app(newargc, newargv);				

	QFontDatabase::addApplicationFont("./runtime/lib/fonts/wqy-microhei.ttc");	// chinese font

//////////  added for WebOS  - end

	
///// comment the original
/////    QApplication app(argc, argv);

    app.setOrganizationName("QtProject");
    app.setApplicationName("Application Example");
    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
//! [0]
