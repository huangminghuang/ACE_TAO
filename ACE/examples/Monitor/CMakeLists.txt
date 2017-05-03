
project(MC_Test_Utilities CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(MC_Test_Utilities
  OUTPUT_NAME MC_Test_Utilities
  FOLDER ACE/examples/Monitor
  DEFINE_SYMBOL MC_TEST_UTILITIES_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(MC_Test_Utilities
  SOURCE_FILES MC_Test_Utilities.cpp
  HEADER_FILES MC_Test_Utilities.h
)

add_subdirectory(Bytes_Sent)
add_subdirectory(Constraint)
add_subdirectory(CPU_Load)
add_subdirectory(Group)
add_subdirectory(Memory_Usage)
add_subdirectory(Message_Queue_Size)
add_subdirectory(Num_Threads)
