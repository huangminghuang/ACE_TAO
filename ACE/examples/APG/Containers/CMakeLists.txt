
project(containers CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(DLList
  OUTPUT_NAME DLList
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(DLList
  SOURCE_FILES DLList.cpp
)


ace_add_exe(Stacks
  OUTPUT_NAME Stacks
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Stacks
  SOURCE_FILES Stacks.cpp
)


ace_add_exe(Queues
  OUTPUT_NAME Queues
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Queues
  SOURCE_FILES Queues.cpp
)


ace_add_exe(Array
  OUTPUT_NAME Array
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Array
  SOURCE_FILES Array.cpp
)


ace_add_exe(Sets
  OUTPUT_NAME Sets
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Sets
  SOURCE_FILES Sets.cpp
)


ace_add_exe(containers_Map_manager
  OUTPUT_NAME Map_Manager
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(containers_Map_manager
  SOURCE_FILES Map_Manager.cpp
)


ace_add_exe(Map_Manager_Specialization
  OUTPUT_NAME Map_Manager_Specialization
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Map_Manager_Specialization
  SOURCE_FILES Map_Manager_Specialization.cpp
)


ace_add_exe(containers_Hash_map
  OUTPUT_NAME Hash_Map
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(containers_Hash_map
  SOURCE_FILES Hash_Map.cpp
)


ace_add_exe(Hash_Map_Hash
  OUTPUT_NAME Hash_Map_Hash
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Hash_Map_Hash
  SOURCE_FILES Hash_Map_Hash.cpp
  HEADER_FILES Hash_Map_Hash.h
)


ace_add_exe(RB_Tree
  OUTPUT_NAME RB_Tree
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RB_Tree
  SOURCE_FILES RB_Tree.cpp
)


ace_add_exe(RB_Tree_Functors
  OUTPUT_NAME RB_Tree_Functors
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RB_Tree_Functors
  SOURCE_FILES RB_Tree_Functors.cpp
  HEADER_FILES RB_Tree_Functors.h
)


ace_add_exe(Allocator
  OUTPUT_NAME Allocator
  FOLDER ACE/examples/APG/Containers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Allocator
  SOURCE_FILES Allocator.cpp
)

