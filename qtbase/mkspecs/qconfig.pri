#configuration
CONFIG +=  cross_compile shared qpa no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = i386
    QT_TARGET_ARCH = arm
} else {
    QT_ARCH = arm
    QMAKE_DEFAULT_LIBDIRS = /opt/PalmPDK/arm-gcc.orig.4.3.3/lib/gcc/arm-none-linux-gnueabi/4.3.3 /opt/PalmPDK/arm-gcc.orig.4.3.3/lib/gcc /opt/PalmPDK/arm-gcc.orig.4.3.3/arm-none-linux-gnueabi/lib /opt/PalmPDK/arm-gcc/sysroot/lib /opt/PalmPDK/arm-gcc/sysroot/usr/lib
    QMAKE_DEFAULT_INCDIRS = /opt/PalmPDK/arm-gcc.orig.4.3.3/arm-none-linux-gnueabi/include/c++/4.3.3 /opt/PalmPDK/arm-gcc.orig.4.3.3/arm-none-linux-gnueabi/include/c++/4.3.3/arm-none-linux-gnueabi /opt/PalmPDK/arm-gcc.orig.4.3.3/arm-none-linux-gnueabi/include/c++/4.3.3/backward /opt/PalmPDK/arm-gcc.orig.4.3.3/lib/gcc/arm-none-linux-gnueabi/4.3.3/include /opt/PalmPDK/arm-gcc.orig.4.3.3/lib/gcc/arm-none-linux-gnueabi/4.3.3/include-fixed /opt/PalmPDK/arm-gcc.orig.4.3.3/arm-none-linux-gnueabi/include /opt/PalmPDK/arm-gcc/sysroot/usr/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config linuxfb opengl opengles2 shared qpa reduce_exports clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify system-jpeg system-png png system-freetype no-harfbuzz system-zlib iconv openssl alsa concurrent audio-backend release

#versioning
QT_VERSION = 5.5.1
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 5
QT_PATCH_VERSION = 1

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

# sysroot
!host_build {
    QMAKE_CFLAGS    += --sysroot=$$[QT_SYSROOT]
    QMAKE_CXXFLAGS  += --sysroot=$$[QT_SYSROOT]
    QMAKE_LFLAGS    += --sysroot=$$[QT_SYSROOT]
}

QT_GCC_MAJOR_VERSION = 4
QT_GCC_MINOR_VERSION = 3
QT_GCC_PATCH_VERSION = 3
