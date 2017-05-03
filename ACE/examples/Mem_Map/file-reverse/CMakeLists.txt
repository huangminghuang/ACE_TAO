
project(Mem_Map_File_Reverse CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Mem_Map_File_Reverse
  OUTPUT_NAME file-reverse
  FOLDER ACE/examples/Mem_Map/file-reverse
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mem_Map_File_Reverse
  SOURCE_FILES file-reverse.cpp
)

