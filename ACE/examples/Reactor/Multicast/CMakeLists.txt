
project(Reactor_Multicast CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Reactor_Multicast_Client
  OUTPUT_NAME client
  FOLDER ACE/examples/Reactor/Multicast
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Multicast_Client
  SOURCE_FILES Log_Wrapper.cpp
               client.cpp
  HEADER_FILES Log_Wrapper.h
)


ace_add_exe(Reactor_Multicast_Server
  OUTPUT_NAME server
  FOLDER ACE/examples/Reactor/Multicast
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_Multicast_Server
  SOURCE_FILES Log_Wrapper.cpp
               server.cpp
  HEADER_FILES Log_Wrapper.h
)

