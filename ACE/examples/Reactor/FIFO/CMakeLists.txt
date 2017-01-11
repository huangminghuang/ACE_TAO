
project(Reactor_FIFO CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Reactor_FIFO_Client
  OUTPUT_NAME client
  FOLDER examples/Reactor/FIFO
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_FIFO_Client
  SOURCE_FILES client.cpp
)


add_ace_exe(Reactor_FIFO_Server
  OUTPUT_NAME server
  FOLDER examples/Reactor/FIFO
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_FIFO_Server
  SOURCE_FILES server.cpp
)

