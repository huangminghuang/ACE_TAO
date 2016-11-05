
project(CPU_Load CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(CPU_Load
    cpu_load.cpp
  )
  set_target_properties(CPU_Load PROPERTIES
    OUTPUT_NAME cpu_load
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
