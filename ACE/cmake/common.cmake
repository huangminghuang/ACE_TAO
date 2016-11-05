
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/../VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" ACE_VERSION ${VERSION_FILE_CONTENT})
endif()

include(${CMAKE_CURRENT_LIST_DIR}/disable_warnings.cmake)
set(ACE_SOURCE_ROOT ${CMAKE_CURRENT_LIST_DIR}/..)

function(add_ace_exe target)
    set(oneValueArgs OUTPUT_NAME)
    set(multiValueArgs SOURCES LINK_LIBRARIES)
    cmake_parse_arguments(_arg "" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    add_executable(${target} ${_arg_SOURCES})
    if (NOT _arg_OUTPUT_NAME)
      set(_arg_OUTPUT_NAME ${target})
    endif()
    set_target_properties(${target} PROPERTIES
      OUTPUT_NAME "${_arg_OUTPUT_NAME}"
    )

    target_link_libraries(${target} ACE ${_arg_LINK_LIBRARIES})
endfunction()

include(${CMAKE_CURRENT_LIST_DIR}/visibility_check.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../../cmake/AddInstallableLib.cmake)

function(add_ace_lib name)
  add_installable_lib(${name} VERSION ${ACE_VERSION} HEADER_ROOT ${ACE_SOURCE_ROOT} ${ARGN})
endfunction()

function(export_ace_package package_name)
  export_package(${package_name} VERSION ${ACE_VERSION} PREREQUISITE ACE ${ARGN})
endfunction()


if ((NOT TARGET ACE) AND (NOT SKIP_FIND_ACE))
    find_package(ACE ${ACE_VERSION} EXACT REQUIRED CONFIG)
endif()


