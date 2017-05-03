
project(Logger CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Acceptor-server)
add_subdirectory(client)
add_subdirectory(simple-server)
