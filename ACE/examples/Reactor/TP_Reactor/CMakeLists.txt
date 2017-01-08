
project(TP_Reactor CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(TP_Reactor_Client
  OUTPUT_NAME client
  FOLDER examples/Reactor/TP_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(TP_Reactor_Client
  SOURCE_FILES client.cpp
)


add_ace_exe(TP_Reactor_Server
  OUTPUT_NAME server
  FOLDER examples/Reactor/TP_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(TP_Reactor_Server
  SOURCE_FILES AcceptHandler.cpp
               server.cpp
               ReadHandler.cpp
  HEADER_FILES AcceptHandler.h
               ReadHandler.h
)

