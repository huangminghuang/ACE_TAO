
project(Logger_Simple_Server CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Logger_Simple_Server
  OUTPUT_NAME server_loggerd
  FOLDER examples/Logger/simple-server
  LINK_LIBRARIES ACE
)
target_cxx_sources(Logger_Simple_Server
  SOURCE_FILES Logging_Acceptor.cpp
               Logging_Handler.cpp
               server_loggerd.cpp
  HEADER_FILES Logging_Acceptor.h
               Logging_Handler.h
)

