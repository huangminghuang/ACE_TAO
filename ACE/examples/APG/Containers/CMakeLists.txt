
project(containers CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(DLList
  OUTPUT_NAME DLList
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(DLList
  SOURCE_FILES DLList.cpp
)


add_ace_exe(Stacks
  OUTPUT_NAME Stacks
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Stacks
  SOURCE_FILES Stacks.cpp
)


add_ace_exe(Queues
  OUTPUT_NAME Queues
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Queues
  SOURCE_FILES Queues.cpp
)


add_ace_exe(Array
  OUTPUT_NAME Array
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Array
  SOURCE_FILES Array.cpp
)


add_ace_exe(Sets
  OUTPUT_NAME Sets
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Sets
  SOURCE_FILES Sets.cpp
)


add_ace_exe(containers_Map_manager
  OUTPUT_NAME Map_Manager
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(containers_Map_manager
  SOURCE_FILES Map_Manager.cpp
)


add_ace_exe(Map_Manager_Specialization
  OUTPUT_NAME Map_Manager_Specialization
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Map_Manager_Specialization
  SOURCE_FILES Map_Manager_Specialization.cpp
)


add_ace_exe(containers_Hash_map
  OUTPUT_NAME Hash_Map
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(containers_Hash_map
  SOURCE_FILES Hash_Map.cpp
)


add_ace_exe(Hash_Map_Hash
  OUTPUT_NAME Hash_Map_Hash
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Hash_Map_Hash
  SOURCE_FILES Hash_Map_Hash.cpp
  HEADER_FILES Hash_Map_Hash.h
)


add_ace_exe(RB_Tree
  OUTPUT_NAME RB_Tree
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(RB_Tree
  SOURCE_FILES RB_Tree.cpp
)


add_ace_exe(RB_Tree_Functors
  OUTPUT_NAME RB_Tree_Functors
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(RB_Tree_Functors
  SOURCE_FILES RB_Tree_Functors.cpp
  HEADER_FILES RB_Tree_Functors.h
)


add_ace_exe(Allocator
  OUTPUT_NAME Allocator
  FOLDER examples/APG/Containers
  LINK_LIBRARIES ACE
)
target_cxx_sources(Allocator
  SOURCE_FILES Allocator.cpp
)

