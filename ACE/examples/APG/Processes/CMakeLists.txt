
project(processes CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Process_Manager_Death
  Process_Manager_Death.cpp
)
set_target_properties(Process_Manager_Death PROPERTIES
  OUTPUT_NAME Process_Manager_Death
  LINK_LIBRARIES ACE
)

##############################
add_executable(Process_Manager_Spawn
  Process_Manager_Spawn.cpp
)
set_target_properties(Process_Manager_Spawn PROPERTIES
  OUTPUT_NAME Process_Manager_Spawn
  LINK_LIBRARIES ACE
)

##############################
add_executable(Process_Mutex
  Process_Mutex.cpp
)
set_target_properties(Process_Mutex PROPERTIES
  OUTPUT_NAME Process_Mutex
  LINK_LIBRARIES ACE
)

##############################
add_executable(Spawn
  Spawn.cpp
)
set_target_properties(Spawn PROPERTIES
  OUTPUT_NAME Spawn
  LINK_LIBRARIES ACE
)
#####################################
