TARGET = qlinuxfb

LIBS += -lSDL

PLUGIN_TYPE = platforms
PLUGIN_CLASS_NAME = QLinuxFbIntegrationPlugin
!equals(TARGET, $$QT_DEFAULT_QPA_PLUGIN): PLUGIN_EXTENDS = -
load(qt_plugin)

QT += core-private gui-private platformsupport-private

SOURCES = main.cpp qlinuxfbintegration.cpp qlinuxfbscreen.cpp \
    sdlscreen_private.cpp \
    sdlscreenthread.cpp \

#    palmprekeyboard.cpp \
#    dlgsymbols.cpp \
#    palmpremouse.cpp \
#    symbolbutton.cpp


#    sdlscreen.cpp \

HEADERS = qlinuxfbintegration.h qlinuxfbscreen.h \
    sdlscreen_private.h \
    sdlscreenthread.h \
    
#    palmprekeyboard.h \
#    dlgsymbols.h \
#    palmpremouse_private.h \
#    palmpremouse.h \
#    palmprekeyboard_private.h \
#    symbolbutton.h


#    sdlscreen.h \

CONFIG += qpa/genericunixfontdatabase

OTHER_FILES += linuxfb.json
