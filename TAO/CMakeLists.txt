project(TAO)
cmake_minimum_required(VERSION 3.3)

if(NOT TARGET ACE)
  find_package(ACE REQUIRED COMPONENTS ace_gperf CONFIG)
endif()


if (NOT TAO_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" TAO_VERSION ${VERSION_FILE_CONTENT})
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(WHITELIST_TARGETS "" CACHE STRING "")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
option(BUILD_SHARED_LIBS "" ON)

include(cmake/tao_options.cmake)
include(cmake/tao_aspects.cmake)
include(cmake/tao_idl_sources.cmake)

ace_add_package(TAO VERSION ${TAO_VERSION})


add_subdirectory(TAO_IDL)
add_subdirectory(tao)
ace_add_optional_subdirectory(orbsvcs)

ace_install_package(TAO
  CONFIG_OPTIONS ${TAO_OPTIONS}
  PREREQUISITE ACE
  EXTRA_CMAKE_FILES cmake/tao_aspects.cmake
                    cmake/tao_idl_sources.cmake
)
