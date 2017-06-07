project(ACE_TAO CXX)
cmake_minimum_required(VERSION 3.4)

add_subdirectory(ACE)
add_subdirectory(TAO)

SET(CPACK_PACKAGE_VERSION ${ACE_VERSION})
include(CPack)

