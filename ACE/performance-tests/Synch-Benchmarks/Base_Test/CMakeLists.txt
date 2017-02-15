

ace_add_lib(Synch_Benchmarks_Base_Test
  OUTPUT_NAME Base_Test
  FOLDER ACE/performance-tests/Synch-Benchmarks/Base_Test
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES Synch_Lib
                        ACE
)
ace_target_cxx_sources(Synch_Benchmarks_Base_Test
  SOURCE_FILES Baseline_Test.cpp
               base_test.cpp
               mutex_test.cpp
  HEADER_FILES Baseline_Test.h
  INLINE_FILES Baseline_Test.inl
)

