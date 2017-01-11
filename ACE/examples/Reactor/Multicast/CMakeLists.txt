
project(Reactor_Multicast CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Reactor_Multicast_Client
  OUTPUT_NAME client
  FOLDER examples/Reactor/Multicast
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Multicast_Client
  SOURCE_FILES client.cpp
               Log_Wrapper.cpp
  HEADER_FILES Log_Wrapper.h
)


add_ace_exe(Reactor_Multicast_Server
  OUTPUT_NAME server
  FOLDER examples/Reactor/Multicast
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Multicast_Server
  SOURCE_FILES Log_Wrapper.cpp
               server.cpp
  HEADER_FILES Log_Wrapper.h
)

