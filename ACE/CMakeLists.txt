cmake_minimum_required(VERSION 3.3)
project (ACE)

set(CMAKE_CXX_STANDARD 98 CACHE STRING "specifies the C++ standard requested to build this project")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT ACE_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" ACE_VERSION ${VERSION_FILE_CONTENT})
endif()

#include(cmake/disable_warnings.cmake)
include(cmake/visibility_check.cmake)
include(cmake/ace_utils.cmake)
include(cmake/ace_options.cmake)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)


enable_testing()
add_package(ACE VERSION ${ACE_VERSION})

add_subdirectory(ace)
add_subdirectory(ACEXML)
add_subdirectory(apps)
add_subdirectory(ASNMP)
add_subdirectory(protocols)
add_subdirectory(Kokyu)
add_subdirectory(netsvcs)
add_subdirectory(websvcs)
add_subdirectory(performance-tests)
add_subdirectory(examples)

install_package(ACE
  CONFIG_OPTIONS ${ACE_OPTIONS} CMAKE_CXX_STANDARD CMAKE_CXX_STANDARD_REQUIRED
  EXTRA_CMAKE_FILES cmake/ace_utils.cmake
  EXTRA_INSTALL_FILES cmake/PackageConfig.cmake.in
  OPTIONAL_PACKAGES Qt4
)