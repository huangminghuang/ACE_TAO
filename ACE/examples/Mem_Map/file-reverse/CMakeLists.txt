
project(Mem_Map_File_Reverse CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Mem_Map_File_Reverse
  file-reverse.cpp
)
set_target_properties(Mem_Map_File_Reverse PROPERTIES
  OUTPUT_NAME file
  LINK_LIBRARIES ACE
)
#####################################
