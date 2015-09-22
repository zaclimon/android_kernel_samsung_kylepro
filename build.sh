#
#
# GT-S7580 kernel compiler script
# Compiles the kernel for KylePro (GT-S7580)
# You must have a copy of GCC eabi 4.7 in your /home directory
#
# The result will be found in arch/arm/boot/zImage or the root of the kernel source
#

THREADS=`cat /proc/cpuinfo | grep -c processor`
export CROSS_COMPILE="$HOME/arm-eabi-4.7/bin/arm-eabi-"
make bcm21664_hawaii_ss_kylepro_rev00_defconfig
make -j$THREADS zImage

if [ -e arch/arm/boot/zImage ] ; then
cp arch/arm/boot/zImage ./
fi
