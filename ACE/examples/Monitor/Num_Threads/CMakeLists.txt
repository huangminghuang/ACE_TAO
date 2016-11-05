
project(Num_Threads CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Num_Threads
    num_threads.cpp
  )
  set_target_properties(Num_Threads PROPERTIES
    OUTPUT_NAME num_threads
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
