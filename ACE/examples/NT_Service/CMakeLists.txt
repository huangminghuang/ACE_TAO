
project(NT_Service CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(WIN32)

add_ace_exe(NT_Service
  OUTPUT_NAME main
  FOLDER examples/NT_Service
  LINK_LIBRARIES ACE
)
target_cxx_sources(NT_Service
  SOURCE_FILES main.cpp
               ntsvc.cpp
  HEADER_FILES ntsvc.h
)

