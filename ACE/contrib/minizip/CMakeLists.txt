cmake_minimum_required(VERSION 3.4)
project(minizip C)
include(../../ace_version.cmake)
find_package(zlib)

if (ZLIB_FOUND)
  add_library(minizip zip.c unzip.c ioapi.c)
  set_target_properties(minizip PROPERTIES
                        VERSION "${ACE_VERSION}"
                        SOVERSION "${ACE_SO_VERSION}"
                        PUBLIC_HEADER minizip_export.h ioapi.h unzip.h zip.h
                        DEFINE_SYMBOL MINIZIP_BUILD_DLL
                        INCLUDE_DIRECTORIES ${ZLIB_INCLUDE_DIRS}
                        INTERFACE_INCLUDE_DIRECTORIES ${ZLIB_INCLUDE_DIRS}
                        LINK_LIBRARIES ${ZLIB_LIBRARIES}
                        INTERFACE_LINK_LIBRARIES ${ZLIB_LIBRARIES})

  install(TARGETS minizip
          EXPORT  minizipConfig
          LIBRARY DESTINATION lib
          ARCHIVE DESTINATION lib
          PUBLIC_HEADER DESTINATION "include")

  install(EXPORT minizipConfig DESTINATION lib/minizip/cmake)
  # This makes the project importable from the build directory
  export(PACKAGE minizip)
  export(TARGETS minizip FILE minizipConfig.cmake)
endif(ZLIB_FOUND)