
add_library(Qt5::QWebOSIntegrationPlugin MODULE IMPORTED)

_populate_Gui_plugin_properties(QWebOSIntegrationPlugin RELEASE "platforms/libqwebos.so")

list(APPEND Qt5Gui_PLUGINS Qt5::QWebOSIntegrationPlugin)
