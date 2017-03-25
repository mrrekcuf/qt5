QMAKE_LFLAGS += '-Wl,-rpath,\'./runtime/lib\''
LIBS +=  -L./  -lSDL -lpdl -ldl -L$$QTPREFIX/plugins/imageformats -L$$QTPREFIX/lib  -lGLESv2
INCLUDEPATH = $$QTPREFI/include /opt/PalmPDK/include /opt/PalmPDK/include/SDL


QT      +=  webkitwidgets network widgets
HEADERS =   mainwindow.h
SOURCES =   main.cpp \
            mainwindow.cpp
RESOURCES = jquery.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webkitwidgets/fancybrowser
INSTALLS += target
