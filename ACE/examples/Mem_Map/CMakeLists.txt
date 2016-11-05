
project(Mem_Map CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(IO-tests)
add_subdirectory(file-reverse)
#####################################
