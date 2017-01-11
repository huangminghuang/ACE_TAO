
project(Mem_Map CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(file-reverse)
add_subdirectory(IO-tests)
