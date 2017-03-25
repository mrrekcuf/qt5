QT_MODULE_BIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/bin
QT_MODULE_INCLUDE_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/include
QT_MODULE_IMPORT_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/imports
QT_MODULE_QML_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/qml
QT_MODULE_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/lib
QT_MODULE_HOST_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/lib
QT_MODULE_LIBEXEC_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/libexec
QT_MODULE_PLUGIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtquick1/plugins
include(/opt/qt-everywhere-opensource-src-5.5.1/qtquick1/mkspecs/modules-inst/qt_lib_declarative.pri)
QT.declarative.priority = 1
include(/opt/qt-everywhere-opensource-src-5.5.1/qtquick1/mkspecs/modules-inst/qt_lib_declarative_private.pri)
QT.declarative_private.priority = 1
