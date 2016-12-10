
project(Logger CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Acceptor-server)
add_subdirectory(simple-server)
add_subdirectory(client)
#####################################
