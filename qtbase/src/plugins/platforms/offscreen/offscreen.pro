TARGET = qoffscreen

QT += widgets

#####################
LIBS += -lSDL -lpdl -ldl



PLUGIN_TYPE = platforms
PLUGIN_CLASS_NAME = QOffscreenIntegrationPlugin
!equals(TARGET, $$QT_DEFAULT_QPA_PLUGIN): PLUGIN_EXTENDS = -
load(qt_plugin)

QT += core-private gui-private platformsupport-private

SOURCES =   main.cpp \
            qoffscreenintegration.cpp \
            qoffscreenwindow.cpp \
            qoffscreencommon.cpp \
    sdlscreen_private.cpp \
    sdlscreenthread.cpp \
    palmpremouse.cpp \
    palmprekeyboard.cpp \
    dlgsymbols.cpp \
    symbolbutton.cpp \
    
    
##qqnxglcontext.cpp \
##qqnxeglwindow.cpp \
#    palmFiledialoghelper.cpp \
#    palmFilepicker.cpp \


HEADERS =   qoffscreenintegration.h \
            qoffscreenwindow.h \
            qoffscreencommon.h \
    sdlscreen_private.h \
    sdlscreenthread.h \
    palmpremouse_private.h \
    palmpremouse.h \
    palmprekeyboard.h \
    dlgsymbols.h \
    palmprekeyboard_private.h \
    symbolbutton.h \


##qqnxglcontext.h \
##qqnxeglwindow.h \
#    palmFiledialoghelper.h \
#    palmFilepicker.h \



OTHER_FILES += offscreen.json

contains(QT_CONFIG, xlib):contains(QT_CONFIG, opengl):!contains(QT_CONFIG, opengles2) {
    SOURCES += qoffscreenintegration_x11.cpp
    HEADERS += qoffscreenintegration_x11.h
    system(echo "Using X11 offscreen integration with GLX")
} else {
    SOURCES += qoffscreenintegration_dummy.cpp
}
