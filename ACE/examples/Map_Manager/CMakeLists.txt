project(Map_Manager CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(Map_Manager test_hash_map_manager.cpp)
target_link_libraries(Map_Manager ACE)