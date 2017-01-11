
project(MC_Test_Utilities CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(MC_Test_Utilities
  OUTPUT_NAME MC_Test_Utilities
  FOLDER examples/Monitor
  DEFINE_SYMBOL MC_TEST_UTILITIES_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(MC_Test_Utilities
  SOURCE_FILES MC_Test_Utilities.cpp
  HEADER_FILES MC_Test_Utilities.h
)

add_subdirectory(Memory_Usage)
add_subdirectory(Message_Queue_Size)
add_subdirectory(Group)
add_subdirectory(Num_Threads)
add_subdirectory(CPU_Load)
add_subdirectory(Constraint)
add_subdirectory(Bytes_Sent)
