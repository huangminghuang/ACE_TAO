
project(Synch_Benchmarks_Perf_Test CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_library(Synch_Benchmarks_Perf_Test MODULE
  Adaptive_Lock_Performance_Test_Base.cpp
  Benchmark_Performance.cpp
  Performance_Test.cpp
  Performance_Test_Options.cpp
  adaptive_mutex_test.cpp
  adaptive_recursive_lock_test.cpp
  adaptive_sema_test.cpp
  condb_test.cpp
  conds_test.cpp
  context_test.cpp
  guard_test.cpp
  memory_test.cpp
  mutex_test.cpp
  pipe_proc_test.cpp
  pipe_thr_test.cpp
  recursive_lock_test.cpp
  rwrd_test.cpp
  rwwr_test.cpp
  sema_test.cpp
  sysvsema_test.cpp
  token_test.cpp
)
set_target_properties(Synch_Benchmarks_Perf_Test PROPERTIES
  OUTPUT_NAME Perf_Test
  DEFINE_SYMBOL ""
  INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/.."
  LINK_LIBRARIES "Synch_Lib"
	INTERFACE_LINK_LIBRARIES "Synch_Lib"
)
#####################################
