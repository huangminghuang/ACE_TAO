

ace_add_lib(Synch_Lib
  OUTPUT_NAME Synch_Lib
  FOLDER performance-tests/Synch-Benchmarks/Synch_Lib
  DEFINE_SYMBOL SYNCHLIB_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Synch_Lib
  SOURCE_FILES Benchmark_Base.cpp
  HEADER_FILES Benchmark_Base.h
)

