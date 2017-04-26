
project(IOStream_Client CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(IOStream_Client
  OUTPUT_NAME iostream_client
  FOLDER ACE/examples/IOStream/client
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(IOStream_Client
  SOURCE_FILES iostream_client.cpp
)

