
project(Registry CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(WIN32)

add_ace_exe(Registry_Iterator
  OUTPUT_NAME iterator
  FOLDER examples/Registry
  LINK_LIBRARIES ACE
)
target_cxx_sources(Registry_Iterator
  SOURCE_FILES test_registry_iterator.cpp
)


add_ace_exe(Registry_Update
  OUTPUT_NAME update
  FOLDER examples/Registry
  LINK_LIBRARIES ACE
)
target_cxx_sources(Registry_Update
  SOURCE_FILES test_registry_update.cpp
)

