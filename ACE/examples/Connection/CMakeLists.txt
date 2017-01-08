
project(Connection CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(non_blocking)
add_subdirectory(blocking)
add_subdirectory(misc)
