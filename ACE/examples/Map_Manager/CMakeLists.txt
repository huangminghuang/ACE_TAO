
project(Map_Manager CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Map_Manager
  OUTPUT_NAME Map_Manager
  FOLDER examples/Map_Manager
  LINK_LIBRARIES ACE
)
target_cxx_sources(Map_Manager
  SOURCE_FILES test_hash_map_manager.cpp
)

