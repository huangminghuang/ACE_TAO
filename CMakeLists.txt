project(ACE_TAO CXX)
cmake_minimum_required(VERSION 3.4)

if(EXISTS "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake/FindSanitizers.cmake")
  set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake" ${CMAKE_MODULE_PATH})
  find_package(Sanitizers)
endif()

add_subdirectory(ACE)
add_subdirectory(TAO)

SET(CPACK_PACKAGE_VERSION ${ACE_VERSION})
include(CPack)

