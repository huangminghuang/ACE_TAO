project(Synch CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(proc_sema proc_sema.cpp)
target_link_libraries(proc_sema ACE)