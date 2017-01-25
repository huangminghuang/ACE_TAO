cmake_minimum_required(VERSION 3.3)
project (ACE)

set(CMAKE_CXX_STANDARD "" CACHE STRING "specifies the C++ standard requested to build this project")
if (CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if (NOT ACE_VERSION)
  file(READ "${CMAKE_CURRENT_LIST_DIR}/VERSION" VERSION_FILE_CONTENT)
  string(REGEX MATCH "([0-9]\\.)+[0-9]" ACE_VERSION ${VERSION_FILE_CONTENT})
endif()

include(cmake/disable_warnings.cmake)
include(cmake/visibility_check.cmake)
include(cmake/ace_utils.cmake)
include(cmake/ace_options.cmake)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(WHITELIST_TARGETS "" CACHE STRING "")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
option(BUILD_SHARED_LIBS "" ON)

enable_testing()
ace_add_package(ACE VERSION ${ACE_VERSION})

add_subdirectory(ace)
ace_add_optional_subdirectory(ACEXML)
ace_add_optional_subdirectory(apps)
ace_add_optional_subdirectory(ASNMP)
ace_add_optional_subdirectory(protocols)
ace_add_optional_subdirectory(Kokyu)
ace_add_optional_subdirectory(netsvcs)
ace_add_optional_subdirectory(websvcs)
ace_add_optional_subdirectory(performance-tests)
ace_add_optional_subdirectory(examples)

ace_install_package(ACE
  CONFIG_OPTIONS ${ACE_OPTIONS} CMAKE_CXX_STANDARD CMAKE_CXX_STANDARD_REQUIRED
  EXTRA_CMAKE_FILES cmake/ace_utils.cmake
  EXTRA_INSTALL_FILES cmake/PackageConfig.cmake.in
  OPTIONAL_PACKAGES Qt4
)