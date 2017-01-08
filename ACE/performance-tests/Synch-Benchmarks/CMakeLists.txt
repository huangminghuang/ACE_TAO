add_subdirectory(Synch_Lib)


add_ace_exe(Synch_Benchmarks
  OUTPUT_NAME synch_driver
  FOLDER performance-tests/Synch-Benchmarks
  LINK_LIBRARIES Synch_Lib
                 ACE
)
target_cxx_sources(Synch_Benchmarks
  SOURCE_FILES synch_driver.cpp
)

add_subdirectory(Base_Test)
add_subdirectory(Perf_Test)
