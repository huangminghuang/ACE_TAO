
project(ASX_Message_Queue CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(ASX_Message_Queue_Bounded_buffer
  OUTPUT_NAME bounded_buffer
  FOLDER examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_Message_Queue_Bounded_buffer
  SOURCE_FILES bounded_buffer.cpp
)


add_ace_exe(ASX_Message_Queue_Buffer_stream
  OUTPUT_NAME buffer_stream
  REQUIRES "NOT USES_WCHAR"
  FOLDER examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_Message_Queue_Buffer_stream
  SOURCE_FILES buffer_stream.cpp
)


add_ace_exe(ASX_Message_Queue_Priority_buffer
  OUTPUT_NAME priority_buffer
  FOLDER examples/ASX/Message_Queue
  LINK_LIBRARIES ACE
)
target_cxx_sources(ASX_Message_Queue_Priority_buffer
  SOURCE_FILES priority_buffer.cpp
)

