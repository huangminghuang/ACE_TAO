
project(ASX_Message_Queue CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(ASX_Message_Queue_Bounded_buffer
  OUTPUT_NAME bounded_buffer
  FOLDER ACE/examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_Message_Queue_Bounded_buffer
  SOURCE_FILES bounded_buffer.cpp
)


ace_add_exe(ASX_Message_Queue_Buffer_stream
  OUTPUT_NAME buffer_stream
  REQUIRES "NOT ACE_USES_WCHAR"
  FOLDER ACE/examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_Message_Queue_Buffer_stream
  SOURCE_FILES buffer_stream.cpp
)


ace_add_exe(ASX_Message_Queue_Priority_buffer
  OUTPUT_NAME priority_buffer
  FOLDER ACE/examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ASX_Message_Queue_Priority_buffer
  SOURCE_FILES priority_buffer.cpp
)

