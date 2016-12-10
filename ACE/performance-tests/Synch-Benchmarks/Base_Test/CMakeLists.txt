
project(Synch_Benchmarks_Base_Test CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_library(Synch_Benchmarks_Base_Test MODULE
  Baseline_Test.cpp
  base_test.cpp
  mutex_test.cpp
)
set_target_properties(Synch_Benchmarks_Base_Test PROPERTIES
  OUTPUT_NAME Base_Test
  DEFINE_SYMBOL ""
  INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/.."
  LINK_LIBRARIES "Synch_Lib"
	INTERFACE_LINK_LIBRARIES "Synch_Lib"
)
#####################################
