
project(shared_memory CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(shared_memory_Hash_Map
  Hash_Map.cpp
)
set_target_properties(shared_memory_Hash_Map PROPERTIES
  OUTPUT_NAME Hash_Map
  LINK_LIBRARIES ACE
)

##############################
add_executable(Malloc
  Malloc.cpp
)
set_target_properties(Malloc PROPERTIES
  OUTPUT_NAME Malloc
  LINK_LIBRARIES ACE
)

##############################
add_executable(Mem_Map
  Mem_Map.cpp
)
set_target_properties(Mem_Map PROPERTIES
  OUTPUT_NAME Mem_Map
  LINK_LIBRARIES ACE
)

##############################
add_executable(PI_Malloc
  PI_Malloc.cpp
)
set_target_properties(PI_Malloc PROPERTIES
  OUTPUT_NAME PI_Malloc
  LINK_LIBRARIES ACE
)

##############################
add_executable(Pool_Growth
  Pool_Growth.cpp
)
set_target_properties(Pool_Growth PROPERTIES
  OUTPUT_NAME Pool_Growth
  LINK_LIBRARIES ACE
)
#####################################
