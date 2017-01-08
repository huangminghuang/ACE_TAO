
project(SV_Semaphores CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(SV_Semaphores_1
  OUTPUT_NAME sem1
  FOLDER examples/System_V_IPC/SV_Semaphores
  LINK_LIBRARIES ACE
)
target_cxx_sources(SV_Semaphores_1
  SOURCE_FILES Semaphores_1.cpp
)


add_ace_exe(SV_Semaphores_2
  OUTPUT_NAME sem2
  FOLDER examples/System_V_IPC/SV_Semaphores
  LINK_LIBRARIES ACE
)
target_cxx_sources(SV_Semaphores_2
  SOURCE_FILES Semaphores_2.cpp
)

