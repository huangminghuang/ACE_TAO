
project(Synch CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Synch
  OUTPUT_NAME proc_sema
  FOLDER examples/Synch
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Synch
  SOURCE_FILES proc_sema.cpp
)

