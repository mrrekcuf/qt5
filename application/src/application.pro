###### added for WebOS  - begin
QMAKE_LFLAGS += '-Wl,-rpath,\'./runtime/lib\''
LIBS +=  -L./  -lSDL -lpdl -ldl -L$$QTPREFIX/plugins/imageformats -L$$QTPREFIX/lib  -L/opt/PalmPDK/lib -lz
INCLUDEPATH = /opt/qt.palm/qtbase/runtime/include \
	      /opt/qt.palm/qtbase/runtime/include/QtGui \
	      /opt/qt.palm/qtbase/runtime/include/QtGui/5.5.1/QtGui \
	      /opt/qt.palm/qtbase/runtime/include/QtCore \
	      /opt/qt.palm/qtbase/runtime/include/QtCore/5.5.1/QtCore \
	      /opt/qt.palm/qtbase/runtime/include/QtCore/5.5.1/QtCore \
	      ../../Libraries/armusr.palm/usr/local/ssl/include \
	      /opt/PalmPDK/include /opt/PalmPDK/include/SDL \

QTPREFIX = /opt/qt.palm/runtime
QMAKE_LFLAGS += '-Wl,-rpath,\'./\''

#####  added for WebOS  - end


QT += widgets

HEADERS       = mainwindow.h
SOURCES       = main.cpp \
                mainwindow.cpp
#! [0]
RESOURCES     = application.qrc
#! [0]

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/mainwindows/application
INSTALLS += target
