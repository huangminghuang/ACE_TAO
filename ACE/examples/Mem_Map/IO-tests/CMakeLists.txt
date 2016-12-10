
project(Mem_Map_IO_Tests CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Mem_Map_IO_Tests
  IO_Test.cpp
  test_io.cpp
)
set_target_properties(Mem_Map_IO_Tests PROPERTIES
  OUTPUT_NAME test_io
  LINK_LIBRARIES ACE
)
#####################################
