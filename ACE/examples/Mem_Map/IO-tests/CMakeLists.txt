
project(Mem_Map_IO_Tests CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Mem_Map_IO_Tests
  OUTPUT_NAME test_io
  FOLDER examples/Mem_Map/IO-tests
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mem_Map_IO_Tests
  SOURCE_FILES test_io.cpp
               IO_Test.cpp
  HEADER_FILES IO_Test.h
)

