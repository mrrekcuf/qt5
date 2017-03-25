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
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <syslog.h>
#define SYSLOG(...) syslog(__VA_ARGS__)

#include <QLibraryInfo>
#include <QFontDatabase>

#include <QDebug>

#include <GLES2/gl2.h>
#include "SDL.h"
#include "PDL.h"


// 
#include <signal.h>
static void m_cleanup(int sig)
{
SYSLOG(LOG_ERR, "Byeeeeeeee");
qDebug() << "Bye :)";
// your destructor stuff
////if (m_obj) delete m_obj; m_obj = NULL;
////if (sig == SIGINT) qApp->quit();
}





#include <QtWidgets>
#include "mainwindow.h"

static void showHelp(QCommandLineParser &parser, const QString errorMessage = QString())
{
    QString text;
    QTextStream str(&text);
    str << "<html><head/><body>";
    if (!errorMessage.isEmpty())
        str << "<p>" << errorMessage << "</p>";
    str << "<pre>" << parser.helpText() << "</pre></body></html>";
    QMessageBox box(errorMessage.isEmpty() ? QMessageBox::Information : QMessageBox::Warning,
        QGuiApplication::applicationDisplayName(), text, QMessageBox::Ok);
    box.setTextInteractionFlags(Qt::TextBrowserInteraction);
    box.exec();
}

int main(int argc, char * argv[])
{

char newargvc5[255] ;
QString filenameLaunch;
filenameLaunch = "";

newargvc5[0] = NULL ;
filenameLaunch.sprintf("%s", argv[0]);

char *newargvExtra[] = {"-platform",
		    "offscreen",
////'		    "linuxfb",  
///		    "linuxfb:fb=/dev/fb1",
/////		    "-display",
/////		    "\"LinuxFb:/dev/fb1:size=800x480:rotation=90:depth=32\"" 
		    } ;

char **newargv  = new char*[argc+2];
for (int i=0; i< argc; i++) {
    newargv[i] = argv[i]; 
}
newargv[argc] = newargvExtra[0]; 
newargv[argc+1] = newargvExtra[1]; 


////newargv[0] = argv[0]; //// newargvc1 ;
////newargv[1] = newargvc2 ;
////newargv[2] = newargvc3 ;
////newargv[3] = newargvc4 ;
////newargv[4] = newargvc5 ;
//argv[1] = newargv[1] ;
//argv[2] = newargv[2] ;
//argv[3] = newargv[3] ;


//strcpy( argv[1], "-display") ;
//strcpy( argv[2], "webos") ;
qDebug() << "count" << argc ;
qDebug() << "1>" << argv[0] << "<" ;
qDebug() << "2>" << argv[1] << "<" ;
qDebug() << argc << ">" << newargv[argc] << "<" ;
qDebug() << argc+1 << ">" << newargv[argc+1] << "<" ; 

///argc += 2;
int newargc = argc +2;

/////    QCoreApplication::addLibraryPath("app/native/lib");

////    QCoreApplication::addLibraryPath("lib/plugins");
////    QCoreApplication::addLibraryPath("gfxdrivers");
///    QCoreApplication::addLibraryPath("plugins");
////    app.addLibraryPath("/media/cryptofs/apps/usr/palm/applications/com.kcuf.app.tuya/qt/plugins");

//    bps_set_verbosity(2);

QCoreApplication::addLibraryPath("./runtime/lib/fonts");
QCoreApplication::addLibraryPath("./runtime/lib/plugins");
QCoreApplication::addLibraryPath("./runtime/plugins");
QCoreApplication::addLibraryPath("./runtime/plugins/imageformats");
QCoreApplication::addLibraryPath("./runtime/plugins/platforms");


qDebug() << QLibraryInfo::location(QLibraryInfo::PrefixPath);
qDebug() << QLibraryInfo::location(QLibraryInfo::LibrariesPath);
qDebug() << QLibraryInfo::location(QLibraryInfo::PluginsPath);
qDebug() << QLibraryInfo::location(QLibraryInfo::TranslationsPath);

SYSLOG(LOG_ERR, "***** plugin log start 111");

signal(SIGINT, m_cleanup);
signal(SIGTERM, m_cleanup);

////QObject::connect(&a, SIGNAL(aboutToQuit()),&w,SLOT(cleanup()));

/////QApplication app(argc, argv);    
QApplication app(newargc, newargv);

SYSLOG(LOG_ERR, "***** plugin log end 222222");    
/**/

//    window.show();

//////virtualkeyboard_request_events(0);
/////virtualkeyboard_show();


//KBThread *t = new KBThread();
//QObject::connect(t, SIGNAL(finished()), t, SLOT(quit()));
//t->start();
    
////    MyEventFilter *filter = new MyEventFilter;
/////    QCoreApplication::eventDispatcher()->installNativeEventFilter(filter);
        

////Foo* _foo = new Foo();		
	
// Load the embedded font.
////QString fontPath = ";
////QFontDatabase::addApplicationFont("./runtime/lib/fonts/DejaVuSans.ttf");
////QFontDatabase::addApplicationFont("./runtime/lib/fonts/BabelStoneHan.ttf");
QFontDatabase::addApplicationFont("./runtime/lib/fonts/wqy-microhei.ttc");
////QFontDatabase::addApplicationFont("./runtime/lib/fonts/arial.ttf");

qDebug() << "QFontDatabase::addApplicationFont'./runtime/lib/fonts/wqy-microhei.ttc')";		    		
QFontDatabase qfd ;
qDebug() << qfd.families(QFontDatabase::SimplifiedChinese);
qDebug() << qfd.families(QFontDatabase::TraditionalChinese);
qDebug() << qfd.families(QFontDatabase::Any);
qDebug() << qfd.families(QFontDatabase::Hebrew);
qDebug() << qfd.families(QFontDatabase::Arabic);
qDebug() << qfd.families(QFontDatabase::Thai);
qDebug() << qfd.families(QFontDatabase::Japanese);
qDebug() << qfd.families(QFontDatabase::Korean);



/////    QApplication app(argc, argv);

    QCommandLineParser commandLineParser;
    commandLineParser.addPositionalArgument(QStringLiteral("url"),
        QStringLiteral("The url to be loaded in the browser window."));
    commandLineParser.process(app);
    QStringList positionalArguments = commandLineParser.positionalArguments();

    QUrl url;
    if (positionalArguments.size() > 1) {
        showHelp(commandLineParser, QStringLiteral("Too many arguments."));
        return -1;
    } else if (positionalArguments.size() == 1)
        url = QUrl::fromUserInput(positionalArguments.at(0));
    else
        url = QUrl("http://www.qt-project.org");

    if (!url.isValid()) {
        showHelp(commandLineParser, QString("%1 is not a valid url.").arg(positionalArguments.at(0)));
        return -1;
    }

    MainWindow browser(url);
    browser.show();
    return app.exec();
}
