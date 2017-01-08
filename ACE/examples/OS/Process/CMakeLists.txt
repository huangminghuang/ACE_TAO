
project(OS_Process CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(OS_Process_Imore
  OUTPUT_NAME imore
  FOLDER examples/OS/Process
  LINK_LIBRARIES ACE
)
target_cxx_sources(OS_Process_Imore
  SOURCE_FILES imore.cpp
)


add_ace_exe(OS_Process_Process
  OUTPUT_NAME process
  FOLDER examples/OS/Process
  LINK_LIBRARIES ACE
)
target_cxx_sources(OS_Process_Process
  SOURCE_FILES process.cpp
)

