
project(shared_memory CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(shared_memory_Hash_map
  OUTPUT_NAME Hash_Map
  FOLDER ACE/examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(shared_memory_Hash_map
  SOURCE_FILES Hash_Map.cpp
)


ace_add_exe(Malloc
  OUTPUT_NAME Malloc
  FOLDER ACE/examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Malloc
  SOURCE_FILES Malloc.cpp
)


ace_add_exe(Mem_Map
  OUTPUT_NAME Mem_Map
  FOLDER ACE/examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mem_Map
  SOURCE_FILES Mem_Map.cpp
)


ace_add_exe(PI_Malloc
  OUTPUT_NAME PI_Malloc
  FOLDER ACE/examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(PI_Malloc
  SOURCE_FILES PI_Malloc.cpp
)


ace_add_exe(Pool_Growth
  OUTPUT_NAME Pool_Growth
  FOLDER ACE/examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Pool_Growth
  SOURCE_FILES Pool_Growth.cpp
)

