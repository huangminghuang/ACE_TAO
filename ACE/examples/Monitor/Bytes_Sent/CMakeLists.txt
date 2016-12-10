
project(Bytes_Sent CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Bytes_Sent
    bytes_sent.cpp
  )
  set_target_properties(Bytes_Sent PROPERTIES
    OUTPUT_NAME bytes_sent
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
