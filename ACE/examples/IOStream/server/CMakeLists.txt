
project(IOStream_Server CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(IOStream_Server
  OUTPUT_NAME iostream_server
  FOLDER ACE/examples/IOStream/server
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(IOStream_Server
  SOURCE_FILES iostream_server.cpp
  HEADER_FILES iostream_server.h
)

