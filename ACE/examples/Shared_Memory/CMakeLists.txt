
project(Shared_Memory CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Shared_Memory_Mm
  OUTPUT_NAME testmm
  FOLDER ACE/examples/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Memory_Mm
  SOURCE_FILES test_MM.cpp
)


ace_add_exe(Shared_Memory_Sv
  OUTPUT_NAME testsv
  FOLDER ACE/examples/Shared_Memory
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Shared_Memory_Sv
  SOURCE_FILES test_SV.cpp
)

