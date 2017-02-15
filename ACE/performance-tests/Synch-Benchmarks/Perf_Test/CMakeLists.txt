

ace_add_lib(Synch_Benchmarks_Perf_Test
  OUTPUT_NAME Perf_Test
  FOLDER ACE/performance-tests/Synch-Benchmarks/Perf_Test
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES Synch_Lib
                        ACE
)
ace_target_cxx_sources(Synch_Benchmarks_Perf_Test
  SOURCE_FILES Adaptive_Lock_Performance_Test_Base.cpp
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
  HEADER_FILES Adaptive_Lock_Performance_Test_Base.h
               Benchmark_Performance.h
               Performance_Test.h
               Performance_Test_Options.h
  INLINE_FILES Performance_Test_Options.inl
)

