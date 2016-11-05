
project(Shared_Malloc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Shared_Malloc
  Malloc.cpp
  Options.cpp
  test_malloc.cpp
)
set_target_properties(Shared_Malloc PROPERTIES
  OUTPUT_NAME malloc
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Shared_Malloc_multiple
  Malloc.cpp
  Options.cpp
  test_multiple_mallocs.cpp
)
set_target_properties(Shared_Malloc_multiple PROPERTIES
  OUTPUT_NAME multiple
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Shared_Malloc_persistence
  test_persistence.cpp
)
set_target_properties(Shared_Malloc_persistence PROPERTIES
  OUTPUT_NAME persistence
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Shared_Malloc_posind
  Malloc.cpp
  Options.cpp
  test_position_independent_malloc.cpp
)
set_target_properties(Shared_Malloc_posind PROPERTIES
  OUTPUT_NAME posind
  LINK_LIBRARIES "ACE"
)
#####################################
