
project(IOStream_Client CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(IOStream_Client
  OUTPUT_NAME iostream_client
  FOLDER examples/IOStream/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(IOStream_Client
  SOURCE_FILES iostream_client.cpp
)

