#
# Find the AIO client includes and library
#

# This module defines
# AIO_INCLUDE_DIR, where to find ace.h
# AIO_LIBRARY, the libraries to link against
# AIO_FOUND, if false, you cannot build anything that requires AIO

# also defined, but not for general use are
# AIO_LIBRARY, where to find the AIO library.

set(AIO_FOUND 0)

find_path(AIO_INCLUDE_DIR
          NAMES aio.h)

find_library(AIO_LIBRARY
             NAMES rt)

if (AIO_LIBRARY AND AIO_INCLUDE_DIR)
  set(AIO_FOUND 1)
else()
  set(AIO_LIBRARY "")
endif(AIO_LIBRARY AND AIO_INCLUDE_DIR)

mark_as_advanced(AIO_FOUND AIO_LIBRARY AIO_INCLUDE_DIR)