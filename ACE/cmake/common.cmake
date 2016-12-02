
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/../VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" ACE_VERSION ${VERSION_FILE_CONTENT})
endif()

include(${CMAKE_CURRENT_LIST_DIR}/disable_warnings.cmake)
set(ACE_SOURCE_ROOT ${CMAKE_CURRENT_LIST_DIR}/..)

include(${CMAKE_CURRENT_LIST_DIR}/visibility_check.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/AddInstallableLib.cmake)

function(add_ace_component name)
  add_installable_lib(${name} VERSION ${ACE_VERSION} HEADER_ROOT ${ACE_SOURCE_ROOT} ${ARGN})
endfunction()

function(export_ace_package package_name)
  export_package(${package_name} VERSION ${ACE_VERSION} PREREQUISITE ACE ${ARGN})
endfunction()


if ((NOT TARGET ACE) AND (NOT SKIP_FIND_ACE))
    find_package(ACE ${ACE_VERSION} EXACT REQUIRED CONFIG)
endif()

include(${CMAKE_CURRENT_LIST_DIR}/AddAceUtils.cmake)
