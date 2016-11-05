
project(ASX_Message_Queue CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(ASX_Message_Queue_Bounded_Buffer
  bounded_buffer.cpp
)
set_target_properties(ASX_Message_Queue_Bounded_Buffer PROPERTIES
  OUTPUT_NAME bounded_buffer
  LINK_LIBRARIES ACE
)

##############################
add_executable(ASX_Message_Queue_Buffer_Stream
  buffer_stream.cpp
)
set_target_properties(ASX_Message_Queue_Buffer_Stream PROPERTIES
  OUTPUT_NAME buffer_stream
  LINK_LIBRARIES ACE
)

##############################
add_executable(ASX_Message_Queue_Priority_Buffer
  priority_buffer.cpp
)
set_target_properties(ASX_Message_Queue_Priority_Buffer PROPERTIES
  OUTPUT_NAME priority_buffer
  LINK_LIBRARIES ACE
)
#####################################
