
project(Synch_Benchmarks_Synch_Lib CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)
##############################
add_library(Synch_Lib
  Benchmark_Base.cpp
)
set_target_properties(Synch_Lib PROPERTIES
  OUTPUT_NAME Synch_Lib
  DEFINE_SYMBOL "SYNCHLIB_BUILD_DLL"
  LINK_LIBRARIES "ACE"
	INTERFACE_LINK_LIBRARIES ACE
)
#####################################
