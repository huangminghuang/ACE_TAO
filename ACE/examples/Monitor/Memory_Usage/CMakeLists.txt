
project(Memory_Usage CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Memory_Usage
    memory_usage.cpp
  )
  set_target_properties(Memory_Usage PROPERTIES
    OUTPUT_NAME memory_usage
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
