#************************************************************
# (C) Copyright 2015 Suleman Saya, All rights reserved.
#
# Date: 02/28/2015 09:15:00
# Revision: 2.0
#************************************************************

export TARGET=arm-none-linux-gnueabi
export PRJROOT=`pwd`
export PREFIX=${PRJROOT}/BUILD/toolchain
export SYSROOT=${PREFIX}/${TARGET}
export PATH=${PREFIX}/bin:$PATH

unset LD_LIBRARY_PATH
