
project(Logger_Acceptor_Server CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Logger_Acceptor_Server
  OUTPUT_NAME server_loggerd
  FOLDER examples/Logger/Acceptor-server
  LINK_LIBRARIES ACE
)
target_cxx_sources(Logger_Acceptor_Server
  SOURCE_FILES server_loggerd.cpp
  HEADER_FILES server_loggerd.h
)

