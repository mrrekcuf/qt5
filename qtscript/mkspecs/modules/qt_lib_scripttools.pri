QT_MODULE_BIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/bin
QT_MODULE_INCLUDE_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/include
QT_MODULE_IMPORT_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/imports
QT_MODULE_QML_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/qml
QT_MODULE_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/lib
QT_MODULE_HOST_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/lib
QT_MODULE_LIBEXEC_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/libexec
QT_MODULE_PLUGIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtscript/plugins
include(/opt/qt-everywhere-opensource-src-5.5.1/qtscript/mkspecs/modules-inst/qt_lib_scripttools.pri)
QT.scripttools.priority = 1
include(/opt/qt-everywhere-opensource-src-5.5.1/qtscript/mkspecs/modules-inst/qt_lib_scripttools_private.pri)
QT.scripttools_private.priority = 1
