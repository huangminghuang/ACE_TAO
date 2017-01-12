
project(Registry CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(WIN32)

ace_add_exe(Registry_Iterator
  OUTPUT_NAME iterator
  FOLDER examples/Registry
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Registry_Iterator
  SOURCE_FILES test_registry_iterator.cpp
)


ace_add_exe(Registry_Update
  OUTPUT_NAME update
  FOLDER examples/Registry
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Registry_Update
  SOURCE_FILES test_registry_update.cpp
)

