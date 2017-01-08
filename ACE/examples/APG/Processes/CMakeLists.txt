
project(processes CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Process_Manager_Death
  OUTPUT_NAME Process_Manager_Death
  FOLDER examples/APG/Processes
  LINK_LIBRARIES ACE
)
target_cxx_sources(Process_Manager_Death
  SOURCE_FILES Process_Manager_Death.cpp
)


add_ace_exe(Process_Manager_Spawn
  OUTPUT_NAME Process_Manager_Spawn
  FOLDER examples/APG/Processes
  LINK_LIBRARIES ACE
)
target_cxx_sources(Process_Manager_Spawn
  SOURCE_FILES Process_Manager_Spawn.cpp
)


add_ace_exe(Process_Mutex
  OUTPUT_NAME Process_Mutex
  FOLDER examples/APG/Processes
  LINK_LIBRARIES ACE
)
target_cxx_sources(Process_Mutex
  SOURCE_FILES Process_Mutex.cpp
)


add_ace_exe(Spawn
  OUTPUT_NAME Spawn
  FOLDER examples/APG/Processes
  LINK_LIBRARIES ACE
)
target_cxx_sources(Spawn
  SOURCE_FILES Spawn.cpp
)

