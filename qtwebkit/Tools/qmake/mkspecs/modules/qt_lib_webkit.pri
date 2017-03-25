QT_MODULE_BIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/bin
QT_MODULE_INCLUDE_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/include
QT_MODULE_IMPORT_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/imports
QT_MODULE_QML_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/qml
QT_MODULE_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/lib
QT_MODULE_HOST_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/lib
QT_MODULE_LIBEXEC_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/libexec
QT_MODULE_PLUGIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/plugins
include(/opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/Tools/qmake/mkspecs/modules-inst/qt_lib_webkit.pri)
QT.webkit.priority = 1
include(/opt/qt-everywhere-opensource-src-5.5.1/qtwebkit/Tools/qmake/mkspecs/modules-inst/qt_lib_webkit_private.pri)
QT.webkit_private.priority = 1
