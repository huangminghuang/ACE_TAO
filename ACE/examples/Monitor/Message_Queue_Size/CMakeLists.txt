
project(Message_Queue_Size CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_Monitor)
  add_executable(Message_Queue_Size
    message_queue_size.cpp
  )
  set_target_properties(Message_Queue_Size PROPERTIES
    OUTPUT_NAME message_queue_size
    LINK_LIBRARIES ACE_Monitor MC_Test_Utilities
  )
endif()
#####################################
