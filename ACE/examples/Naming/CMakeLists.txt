
project(Naming CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(ACE_OTHER)

add_ace_exe(Naming_Multiple_contexts
  OUTPUT_NAME multiple_contexts
  FOLDER examples/Naming
  LINK_LIBRARIES ACE
)
target_cxx_sources(Naming_Multiple_contexts
  SOURCE_FILES test_multiple_contexts.cpp
)


add_ace_exe(Naming_Non_existent
  OUTPUT_NAME non_existent
  FOLDER examples/Naming
  LINK_LIBRARIES ACE
)
target_cxx_sources(Naming_Non_existent
  SOURCE_FILES test_non_existent.cpp
)


add_ace_exe(Naming_Writers
  OUTPUT_NAME writers
  FOLDER examples/Naming
  LINK_LIBRARIES ACE
)
target_cxx_sources(Naming_Writers
  SOURCE_FILES test_writers.cpp
)


add_ace_exe(Naming_Open
  OUTPUT_NAME open
  FOLDER examples/Naming
  LINK_LIBRARIES ACE
)
target_cxx_sources(Naming_Open
  SOURCE_FILES test_open.cpp
)

