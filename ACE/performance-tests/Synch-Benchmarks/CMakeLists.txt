
project(Synch_Benchmarks CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Synch_Lib)
#####################################
add_subdirectory(Base_Test)

##############################
add_executable(Synch_Benchmarks
  synch_driver.cpp
)
set_target_properties(Synch_Benchmarks PROPERTIES
  OUTPUT_NAME synch_driver
  LINK_LIBRARIES "Synch_Lib"
)
add_subdirectory(Perf_Test)
#####################################
file(COPY svcconf DESTINATION svcconf)