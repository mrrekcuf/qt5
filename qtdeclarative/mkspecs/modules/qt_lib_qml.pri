QT_MODULE_BIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/bin
QT_MODULE_INCLUDE_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/include
QT_MODULE_IMPORT_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/imports
QT_MODULE_QML_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/qml
QT_MODULE_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/lib
QT_MODULE_HOST_LIB_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/lib
QT_MODULE_LIBEXEC_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/libexec
QT_MODULE_PLUGIN_BASE = /opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/plugins
include(/opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/mkspecs/modules-inst/qt_lib_qml.pri)
QT.qml.priority = 1
include(/opt/qt-everywhere-opensource-src-5.5.1/qtdeclarative/mkspecs/modules-inst/qt_lib_qml_private.pri)
QT.qml_private.priority = 1