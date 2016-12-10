
project(MC_Test_Utilities CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

set(CMAKE_MACOSX_RPATH 1)
##############################
add_library(MC_Test_Utilities
  MC_Test_Utilities.cpp
)
set_target_properties(MC_Test_Utilities PROPERTIES
  OUTPUT_NAME MC_Test_Utilities
  DEFINE_SYMBOL MC_TEST_UTILITIES_BUILD_DLL
  LINK_LIBRARIES ACE
)
add_subdirectory(Bytes_Sent)
add_subdirectory(Group)
add_subdirectory(Message_Queue_Size)
add_subdirectory(Constraint)
add_subdirectory(Memory_Usage)
add_subdirectory(Num_Threads)
add_subdirectory(CPU_Load)
#####################################
