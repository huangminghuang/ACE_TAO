
project(shared_memory CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(shared_memory_Hash_map
  OUTPUT_NAME Hash_Map
  FOLDER examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(shared_memory_Hash_map
  SOURCE_FILES Hash_Map.cpp
)


add_ace_exe(Malloc
  OUTPUT_NAME Malloc
  FOLDER examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(Malloc
  SOURCE_FILES Malloc.cpp
)


add_ace_exe(Mem_Map
  OUTPUT_NAME Mem_Map
  FOLDER examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(Mem_Map
  SOURCE_FILES Mem_Map.cpp
)


add_ace_exe(PI_Malloc
  OUTPUT_NAME PI_Malloc
  FOLDER examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(PI_Malloc
  SOURCE_FILES PI_Malloc.cpp
)


add_ace_exe(Pool_Growth
  OUTPUT_NAME Pool_Growth
  FOLDER examples/APG/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(Pool_Growth
  SOURCE_FILES Pool_Growth.cpp
)

