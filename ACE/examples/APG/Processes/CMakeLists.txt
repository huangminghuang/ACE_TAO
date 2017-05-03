
project(processes CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Process_Manager_Death
  OUTPUT_NAME Process_Manager_Death
  FOLDER ACE/examples/APG/Processes
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Manager_Death
  SOURCE_FILES Process_Manager_Death.cpp
)


ace_add_exe(Process_Manager_Spawn
  OUTPUT_NAME Process_Manager_Spawn
  FOLDER ACE/examples/APG/Processes
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Manager_Spawn
  SOURCE_FILES Process_Manager_Spawn.cpp
)


ace_add_exe(Process_Mutex
  OUTPUT_NAME Process_Mutex
  FOLDER ACE/examples/APG/Processes
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Process_Mutex
  SOURCE_FILES Process_Mutex.cpp
)


ace_add_exe(Spawn
  OUTPUT_NAME Spawn
  FOLDER ACE/examples/APG/Processes
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Spawn
  SOURCE_FILES Spawn.cpp
)

