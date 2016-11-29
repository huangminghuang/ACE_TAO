project(TAO CXX)
cmake_minimum_required(VERSION 3.1)

if(NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

if (NOT TARGET ace_gperf)
  find_package(ace_gperf)
endif()

if (NOT TAO_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" TAO_VERSION ${VERSION_FILE_CONTENT})
endif()

set(TAO_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

include(../cmake/AddInstallableLib.cmake)
include(cmake/AddTaoIdlTargets.cmake)
include(cmake/AddTaoLib.cmake)

add_subdirectory(TAO_IDL)
add_subdirectory(tao)


# This makes the project importable from the build directory


add_subdirectory(orbsvcs)