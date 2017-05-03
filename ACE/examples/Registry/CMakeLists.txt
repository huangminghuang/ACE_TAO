
project(Registry CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(WIN32)

ace_add_exe(Registry_Iterator
  OUTPUT_NAME iterator
  FOLDER ACE/examples/Registry
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Registry_Iterator
  SOURCE_FILES test_registry_iterator.cpp
)


ace_add_exe(Registry_Update
  OUTPUT_NAME update
  FOLDER ACE/examples/Registry
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Registry_Update
  SOURCE_FILES test_registry_update.cpp
)

