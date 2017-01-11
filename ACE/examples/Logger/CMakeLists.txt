
project(Logger CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(client)
add_subdirectory(simple-server)
add_subdirectory(Acceptor-server)
