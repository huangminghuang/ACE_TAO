
project(Shared_Malloc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Shared_Malloc
  OUTPUT_NAME malloc
  FOLDER examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Malloc
  SOURCE_FILES Options.cpp
               test_malloc.cpp
               Malloc.cpp
  HEADER_FILES Options.h
               Malloc.h
)


add_ace_exe(Shared_Malloc_Multiple
  OUTPUT_NAME multiple
  FOLDER examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Malloc_Multiple
  SOURCE_FILES Options.cpp
               test_multiple_mallocs.cpp
               Malloc.cpp
  HEADER_FILES Options.h
               Malloc.h
)


add_ace_exe(Shared_Malloc_Persistence
  OUTPUT_NAME persistence
  FOLDER examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Malloc_Persistence
  SOURCE_FILES test_persistence.cpp
)


add_ace_exe(Shared_Malloc_Posind
  OUTPUT_NAME posind
  FOLDER examples/Shared_Malloc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Malloc_Posind
  SOURCE_FILES Options.cpp
               test_position_independent_malloc.cpp
               Malloc.cpp
  HEADER_FILES test_position_independent_malloc.h
               Options.h
               Malloc.h
)

