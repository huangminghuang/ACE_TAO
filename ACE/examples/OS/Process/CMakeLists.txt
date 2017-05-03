
project(OS_Process CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(OS_Process_Imore
  OUTPUT_NAME imore
  FOLDER ACE/examples/OS/Process
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(OS_Process_Imore
  SOURCE_FILES imore.cpp
)


ace_add_exe(OS_Process_Process
  OUTPUT_NAME process
  FOLDER ACE/examples/OS/Process
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(OS_Process_Process
  SOURCE_FILES process.cpp
)

