
project(Shared_Malloc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Shared_Malloc
  OUTPUT_NAME malloc
  FOLDER ACE/examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Malloc
  SOURCE_FILES Malloc.cpp
               Options.cpp
               test_malloc.cpp
  HEADER_FILES Malloc.h
               Options.h
)


ace_add_exe(Shared_Malloc_Multiple
  OUTPUT_NAME multiple
  FOLDER ACE/examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Malloc_Multiple
  SOURCE_FILES Malloc.cpp
               Options.cpp
               test_multiple_mallocs.cpp
  HEADER_FILES Malloc.h
               Options.h
)


ace_add_exe(Shared_Malloc_Persistence
  OUTPUT_NAME persistence
  FOLDER ACE/examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Malloc_Persistence
  SOURCE_FILES test_persistence.cpp
)


ace_add_exe(Shared_Malloc_Posind
  OUTPUT_NAME posind
  FOLDER ACE/examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Malloc_Posind
  SOURCE_FILES Malloc.cpp
               Options.cpp
               test_position_independent_malloc.cpp
  HEADER_FILES Malloc.h
               Options.h
               test_position_independent_malloc.h
)

