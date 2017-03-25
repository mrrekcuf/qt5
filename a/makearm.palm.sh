export PATH="/opt/PalmPDK/arm-gcc/bin:/opt/palmQT/bin:/opt/CodeSourcery/Sourcery_CodeBench_Lite_for_ARM_GNU_Linux/bin::$PATH"
export CC="arm-none-linux-gnueabi-gcc"
export xbuild="arm-none-linux-gnueabi-"
#export PATH="/opt/bbndk/host_10_1_0_132/linux/x86/usr/bin:$PATH"
#export CC="arm-unknown-nto-qnx8.0.0eabi-gcc"
#export xbuild="arm-unknown-nto-qnx8.0.0eabi-"



#######./configure --prefix=/opt/Libraries/opus-1.1 --enable-static  --host arm-linux-gnueabi --with-internal-glib
#make CC="${xbuild}gcc" AR="${xbuild}ar r" RANLIB="${xbuild}ranlib"
#make install prefix=/opt/Libraries/armusr


##./configure --prefix=/opt/Libraries/opus-1.1 --enable-static  --host arm-unknown-nto-qnx8.0.0eabi
########./configure --prefix=/opt/Libraries/opus-1.1  --host arm-unknown-nto-qnx8.0.0eabi
make CC="${xbuild}gcc" AR="${xbuild}ar " RANLIB="${xbuild}ranlib"
######make install prefix=/opt/Libraries/armusr.palm

$CC -g -O2 -MT linux-atomic.lo -MD -MP -MF linux-atomic.Tpo -c -o linux-atomic.lo linux-atomic.c
###mkdir .libs
$CC -g -O2 -MT linux-atomic.lo -MD -MP -MF linux-atomic.Tpo -c linux-atomic.c -fPIC -DPIC -o .libs/linux-atomic.o
$CC -g -O2 -MT linux-atomic.lo -MD -MP -MF linux-atomic.Tpo -c linux-atomic.c -o linux-atomic.o >/dev/null 2>&1
arm-none-linux-gnueabi-ar cru .libs/liblinux-atomic.a .libs/linux-atomic.o
arm-none-linux-gnueabi-ranlib .libs/liblinux-atomic.a