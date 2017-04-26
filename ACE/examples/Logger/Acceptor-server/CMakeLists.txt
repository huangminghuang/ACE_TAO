
project(Logger_Acceptor_Server CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Logger_Acceptor_Server
  OUTPUT_NAME server_loggerd
  FOLDER ACE/examples/Logger/Acceptor-server
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Logger_Acceptor_Server
  SOURCE_FILES server_loggerd.cpp
  HEADER_FILES server_loggerd.h
)

