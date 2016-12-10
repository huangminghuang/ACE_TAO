
project(threads CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Activate
  Activate.cpp
)
set_target_properties(Activate PROPERTIES
  OUTPUT_NAME Activate
  LINK_LIBRARIES ACE
)

##############################
add_executable(Condition_Variables
  Condition_Variables.cpp
)
set_target_properties(Condition_Variables PROPERTIES
  OUTPUT_NAME Condition_Variables
  LINK_LIBRARIES ACE
)

##############################
add_executable(Guards
  Guards.cpp
)
set_target_properties(Guards PROPERTIES
  OUTPUT_NAME Guards
  LINK_LIBRARIES ACE
)

##############################
add_executable(Message_Blocks
  Message_Blocks.cpp
)
set_target_properties(Message_Blocks PROPERTIES
  OUTPUT_NAME Message_Blocks
  LINK_LIBRARIES ACE
)

##############################
add_executable(Message_Queue
  Message_Queue.cpp
)
set_target_properties(Message_Queue PROPERTIES
  OUTPUT_NAME Message_Queue
  LINK_LIBRARIES ACE
)

##############################
add_executable(Mutexes
  Mutexes.cpp
)
set_target_properties(Mutexes PROPERTIES
  OUTPUT_NAME Mutexes
  LINK_LIBRARIES ACE
)
#####################################
