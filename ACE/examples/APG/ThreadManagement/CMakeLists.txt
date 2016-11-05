
project(threadmgmt CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Async_Cancel
  Async_Cancel.cpp
)
set_target_properties(Async_Cancel PROPERTIES
  OUTPUT_NAME Async_Cancel
  LINK_LIBRARIES ACE
)

##############################
add_executable(Coop_Cancel
  Coop_Cancel.cpp
)
set_target_properties(Coop_Cancel PROPERTIES
  OUTPUT_NAME Coop_Cancel
  LINK_LIBRARIES ACE
)

##############################
add_executable(ExitHandler
  ExitHandler.cpp
)
set_target_properties(ExitHandler PROPERTIES
  OUTPUT_NAME ExitHandler
  LINK_LIBRARIES ACE
)

##############################
add_executable(Pool
  Pool.cpp
)
set_target_properties(Pool PROPERTIES
  OUTPUT_NAME Pool
  LINK_LIBRARIES ACE
)

##############################
add_executable(Priorities
  Priorities.cpp
)
set_target_properties(Priorities PROPERTIES
  OUTPUT_NAME Priorities
  LINK_LIBRARIES ACE
)

##############################
add_executable(Signals
  Signals.cpp
)
set_target_properties(Signals PROPERTIES
  OUTPUT_NAME Signals
  LINK_LIBRARIES ACE
)

##############################
add_executable(Signals2
  Signals2.cpp
)
set_target_properties(Signals2 PROPERTIES
  OUTPUT_NAME Signals2
  LINK_LIBRARIES ACE
)

##############################
add_executable(Start_Hook
  Start_Hook.cpp
)
set_target_properties(Start_Hook PROPERTIES
  OUTPUT_NAME Start_Hook
  LINK_LIBRARIES ACE
)

##############################
add_executable(State
  State.cpp
)
set_target_properties(State PROPERTIES
  OUTPUT_NAME State
  LINK_LIBRARIES ACE
)
#####################################
