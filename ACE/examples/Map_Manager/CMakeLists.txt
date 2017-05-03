
project(Map_Manager CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Map_Manager
  OUTPUT_NAME Map_Manager
  FOLDER ACE/examples/Map_Manager
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Map_Manager
  SOURCE_FILES test_hash_map_manager.cpp
)

