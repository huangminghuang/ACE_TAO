
project(Mem_Map_File_Reverse CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Mem_Map_File_Reverse
  OUTPUT_NAME file-reverse
  FOLDER examples/Mem_Map/file-reverse
  LINK_LIBRARIES ACE
)
target_cxx_sources(Mem_Map_File_Reverse
  SOURCE_FILES file-reverse.cpp
)

