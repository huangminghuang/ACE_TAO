
project(Reactor_FIFO CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Reactor_FIFO_Client
  OUTPUT_NAME client
  FOLDER ACE/examples/Reactor/FIFO
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_FIFO_Client
  SOURCE_FILES client.cpp
)


ace_add_exe(Reactor_FIFO_Server
  OUTPUT_NAME server
  FOLDER ACE/examples/Reactor/FIFO
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reactor_FIFO_Server
  SOURCE_FILES server.cpp
)

