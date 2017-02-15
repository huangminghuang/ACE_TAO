
project(Naming CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(ACE_OTHER)

ace_add_exe(Naming_Multiple_contexts
  OUTPUT_NAME multiple_contexts
  FOLDER ACE/examples/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Naming_Multiple_contexts
  SOURCE_FILES test_multiple_contexts.cpp
)


ace_add_exe(Naming_Non_existent
  OUTPUT_NAME non_existent
  FOLDER ACE/examples/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Naming_Non_existent
  SOURCE_FILES test_non_existent.cpp
)


ace_add_exe(Naming_Writers
  OUTPUT_NAME writers
  FOLDER ACE/examples/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Naming_Writers
  SOURCE_FILES test_writers.cpp
)


ace_add_exe(Naming_Open
  OUTPUT_NAME open
  FOLDER ACE/examples/Naming
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Naming_Open
  SOURCE_FILES test_open.cpp
)

