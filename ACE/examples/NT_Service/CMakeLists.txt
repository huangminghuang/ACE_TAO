
project(NT_Service CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(WIN32)

ace_add_exe(NT_Service
  OUTPUT_NAME main
  FOLDER ACE/examples/NT_Service
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(NT_Service
  SOURCE_FILES main.cpp
               ntsvc.cpp
  HEADER_FILES ntsvc.h
)

