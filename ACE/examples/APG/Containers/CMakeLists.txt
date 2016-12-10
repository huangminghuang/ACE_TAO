
project(containers CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(DLList
  DLList.cpp
)
set_target_properties(DLList PROPERTIES
  OUTPUT_NAME DLList
  LINK_LIBRARIES ACE
)

##############################
add_executable(Stacks
  Stacks.cpp
)
set_target_properties(Stacks PROPERTIES
  OUTPUT_NAME Stacks
  LINK_LIBRARIES ACE
)

##############################
add_executable(Queues
  Queues.cpp
)
set_target_properties(Queues PROPERTIES
  OUTPUT_NAME Queues
  LINK_LIBRARIES ACE
)

##############################
add_executable(Array
  Array.cpp
)
set_target_properties(Array PROPERTIES
  OUTPUT_NAME Array
  LINK_LIBRARIES ACE
)

##############################
add_executable(Sets
  Sets.cpp
)
set_target_properties(Sets PROPERTIES
  OUTPUT_NAME Sets
  LINK_LIBRARIES ACE
)

##############################
add_executable(containers_Map_Manager
  Map_Manager.cpp
)
set_target_properties(containers_Map_Manager PROPERTIES
  OUTPUT_NAME Map_Manager
  LINK_LIBRARIES ACE
)

##############################
add_executable(Map_Manager_Specialization
  Map_Manager_Specialization.cpp
)
set_target_properties(Map_Manager_Specialization PROPERTIES
  OUTPUT_NAME Map_Manager_Specialization
  LINK_LIBRARIES ACE
)

##############################
add_executable(containers_Hash_Map
  Hash_Map.cpp
)
set_target_properties(containers_Hash_Map PROPERTIES
  OUTPUT_NAME Hash_Map
  LINK_LIBRARIES ACE
)

##############################
add_executable(Hash_Map_Hash
  Hash_Map_Hash.cpp
)
set_target_properties(Hash_Map_Hash PROPERTIES
  OUTPUT_NAME Hash_Map_Hash
  LINK_LIBRARIES ACE
)

##############################
add_executable(RB_Tree
  RB_Tree.cpp
)
set_target_properties(RB_Tree PROPERTIES
  OUTPUT_NAME RB_Tree
  LINK_LIBRARIES ACE
)

##############################
add_executable(RB_Tree_Functors
  RB_Tree_Functors.cpp
)
set_target_properties(RB_Tree_Functors PROPERTIES
  OUTPUT_NAME RB_Tree_Functors
  LINK_LIBRARIES ACE
)

##############################
add_executable(Allocator
  Allocator.cpp
)
set_target_properties(Allocator PROPERTIES
  OUTPUT_NAME Allocator
  LINK_LIBRARIES ACE
)
#####################################
