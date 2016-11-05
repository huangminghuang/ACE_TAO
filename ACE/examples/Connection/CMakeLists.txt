
project(Connection CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(non_blocking)
add_subdirectory(misc)
add_subdirectory(blocking)
#####################################
