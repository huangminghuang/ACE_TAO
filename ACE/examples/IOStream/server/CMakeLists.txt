
project(IOStream_Server CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(IOStream_Server
  OUTPUT_NAME iostream_server
  FOLDER examples/IOStream/server
  LINK_LIBRARIES ACE
)
target_cxx_sources(IOStream_Server
  SOURCE_FILES iostream_server.cpp
  HEADER_FILES iostream_server.h
)

