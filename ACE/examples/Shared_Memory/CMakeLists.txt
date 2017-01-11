
project(Shared_Memory CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Shared_Memory_Mm
  OUTPUT_NAME testmm
  FOLDER examples/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Memory_Mm
  SOURCE_FILES test_MM.cpp
)


add_ace_exe(Shared_Memory_Sv
  OUTPUT_NAME testsv
  FOLDER examples/Shared_Memory
  LINK_LIBRARIES ACE
)
target_cxx_sources(Shared_Memory_Sv
  SOURCE_FILES test_SV.cpp
)

