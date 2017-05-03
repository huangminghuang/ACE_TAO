
project(Mem_Map_IO_Tests CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Mem_Map_IO_Tests
  OUTPUT_NAME test_io
  FOLDER ACE/examples/Mem_Map/IO-tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mem_Map_IO_Tests
  SOURCE_FILES IO_Test.cpp
               test_io.cpp
  HEADER_FILES IO_Test.h
)

