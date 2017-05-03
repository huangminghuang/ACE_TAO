cmake_minimum_required(VERSION 3.4)
project (ACE)

if (CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if (NOT ACE_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" ACE_VERSION ${VERSION_FILE_CONTENT})
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
include(disable_warnings)
include(visibility_check)
include(ace_utils)
include(ace_options)
include(try_enable_ccache)

option(BUILD_SHARED_LIBS "" ON)
enable_testing()

ace_add_package(ACE VERSION ${ACE_VERSION})

set(ACE_SUBDIRS
  "ace;ACEXML;apps;ASNMP;protocols;Kokyu;netsvcs;websvcs;performance-tests;examples;tests"
  CACHE STRING "Specify the ACE subdirectories to build"
)

foreach(subdir ${ACE_SUBDIRS})
  add_subdirectory(${subdir})
endforeach()

add_subdirectory(bin)

ace_install_package(ACE
  CONFIG_OPTIONS ${ACE_OPTIONS} CMAKE_CXX_STANDARD CMAKE_CXX_STANDARD_REQUIRED
  CONFIG_INCLUDE_FILES cmake/ace_utils.cmake cmake/try_enable_ccache.cmake
  INCLUDED_FILES_USE cmake/PackageConfig.cmake.in
  OPTIONAL_PACKAGES Qt4
)