project(TAO)
cmake_minimum_required(VERSION 3.4)

if(NOT TARGET ACE)
  find_package(ACE REQUIRED COMPONENTS ace_gperf CONFIG)
endif()


if (NOT TAO_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" TAO_VERSION ${VERSION_FILE_CONTENT})
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
include(tao_options)
include(tao_idl_sources)
ace_try_enable_ccache()

option(BUILD_SHARED_LIBS "" ON)

ace_add_package(TAO VERSION ${TAO_VERSION})

set(TAO_SUBDIRS "TAO_IDL;tao;orbsvcs;utils;tests" CACHE STRING "Specify the TAO subdirectories to be built")

foreach(subdir ${TAO_SUBDIRS})
  add_subdirectory(${subdir})
endforeach()

include(cmake/export_tao_hosttools.cmake)

if (tao IN_LIST TAO_SUBDIRS)
  ace_install_package(TAO
    CONFIG_OPTIONS ${TAO_OPTIONS}
    PREREQUISITE ACE
    CONFIG_INCLUDE_FILES cmake/tao_idl_sources.cmake
  )
endif()

