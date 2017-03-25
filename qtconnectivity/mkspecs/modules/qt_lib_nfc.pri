QT_MODULE_BIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/bin
QT_MODULE_INCLUDE_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/include
QT_MODULE_IMPORT_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/imports
QT_MODULE_QML_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/qml
QT_MODULE_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/lib
QT_MODULE_HOST_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/lib
QT_MODULE_LIBEXEC_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/libexec
QT_MODULE_PLUGIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/plugins
include(/opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/mkspecs/modules-inst/qt_lib_nfc.pri)
QT.nfc.priority = 1
include(/opt/qt-everywhere-opensource-src-5.5.1/qtconnectivity/mkspecs/modules-inst/qt_lib_nfc_private.pri)
QT.nfc_private.priority = 1
