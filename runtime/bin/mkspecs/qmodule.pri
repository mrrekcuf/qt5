CONFIG +=  cross_compile qpa neon pcre
QT_BUILD_PARTS +=  tools libs
QT_SKIP_MODULES +=  qtandroidextras qtactiveqt qtdoc qtserialport qtwayland qtmacextras qtlocation qtsensors qtx11extras qtwinextras qttools qtenginio qtactiveqt
QT_NO_DEFINES =  ACCESSIBILITY CUPS DBUS EGL EGLFS EGL_X11 EVDEV EVENTFD FONTCONFIG GLIB HARFBUZZ IMAGEFORMAT_JPEG LIBPROXY NIS OPENVG PULSEAUDIO QML_DEBUGGER SESSIONMANAGER SHAPE STYLE_GTK TABLET TSLIB XCURSOR XFIXES XINERAMA XINPUT XRENDER XSYNC ZLIB
QT_QCONFIG_PATH = 
host_build {
    QT_CPU_FEATURES.i386 = 
} else {
    QT_CPU_FEATURES.arm =  neon
}
QT_COORD_TYPE = double
QT_LFLAGS_ODBC   = -lodbc
styles += mac fusion windows
DEFINES += QT_NO_MTDEV
DEFINES += QT_NO_LIBUDEV
DEFINES += QT_NO_EVDEV
DEFINES += QT_NO_TSLIB
DEFINES += QT_NO_LIBINPUT
DEFINES +=  "QT_NO_PRINTER" "QT_NO_PRINTPREVIEWDIALOG" "QT_NO_PRINTDIALOG"
INCLUDEPATH +=  "/opt/PalmPDK/include" "/opt/PalmPDK/include/openssl" "/opt/PalmPDK/include/openpng12" "/opt/PalmPDK/include/GLES" "/opt/PalmPDK/include/GLES2" "/opt/PalmPDK/include/SDL" "/opt/PalmPDK/arm-gcc/arm-none-linux-gnueabi/libc/usr/include" "/opt/dbus/runtime/include" "/opt/expat/runtime/include"
LIBS +=  -L"/opt/PalmPDK/device/lib" -L"/opt/PalmPDK/arm-gcc/arm-none-linux-gnueabi/libc/lib" -l"stdc++" -l"m"
sql-drivers = 
sql-plugins =  sqlite
