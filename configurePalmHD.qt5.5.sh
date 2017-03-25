export PKG_CONFIG_PATH=/opt/qt.palm/lib/pkconfig

### need to mod font path in source code  qfontdatabase_qws.cpp
export -n QMAKESPEC


./configure  \
-sysroot ${SYSROOT} \
-prefix ./runtime \
-extprefix ./runtime \
-hostprefix ./runtime/bin \
-opensource \
-confirm-license \
-openssl \
-skip qtandroidextras -skip qtactiveqt -skip qtdoc  \
-skip qtserialport  -skip qtwayland \
-skip qtmacextras -skip qtlocation -skip sensors \
-skip qtx11extras -skip qtwinextras \
-skip qttools \
-skip qtenginio -skip qtactiveqt \
-no-feature-accessibility \
-release \
-system-libpng \
-system-zlib \
-system-freetype \
-system-libjpeg \
-alsa \
-qt-pcre \
-no-cups \
-no-nis \
-no-accessibility \
-no-dbus \
-no-gtkstyle \
-no-xinput \
-no-sm \
-no-xshape \
-no-xsync \
-no-xinerama \
-no-xcursor \
-no-xfixes \
-no-pch \
-no-glib \
-no-harfbuzz \
-no-qml-debug \
-force-pkg-config \
-no-largefile \
-no-gstreamer \
-no-xinput2 \
-no-xkbcommon-evdev \
-no-xcb \
-no-xcb-xlib \
-no-xkbcommon-evdev \
-no-kms \
-no-system-proxies  \
-no-journald  \
-no-mtdev  \
-no-c++11 \
-no-separate-debug-info \
-reduce-exports \
-no-android-style-assets \
-I${PalmPDK}/include \
-I${PalmPDK}/include/openssl \
-I${PalmPDK}/include/openpng12 \
-I${PalmPDK}/include/GLES \
-I${PalmPDK}/include/GLES2 \
-I${PalmPDK}/include/SDL \
-L${PalmPDK}/device/lib \
-I${PalmPDK}/arm-gcc/arm-none-linux-gnueabi/libc/usr/include \
-L${PalmPDK}/arm-gcc/arm-none-linux-gnueabi/libc/lib \
-I/opt/dbus/runtime/include \
-I/opt/expat/runtime/include \
-verbose \
-no-compile-examples \
-nomake examples -nomake tests \
-make tools \
-platform linux-g++ \
-make libs \
-xplatform linux-arm-gnueabi-g++ \
-no-qpa-platform-guard \
-D QT_NO_PRINTER \
-D QT_NO_PRINTPREVIEWDIALOG \
-D QT_NO_PRINTDIALOG \
-no-evdev \
-no-rpath \
-lstdc++ -lm \
-opengl es2 \




