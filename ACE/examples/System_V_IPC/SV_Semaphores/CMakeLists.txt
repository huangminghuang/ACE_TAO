
project(SV_Semaphores CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(SV_Semaphores_1
  OUTPUT_NAME sem1
  FOLDER ACE/examples/System_V_IPC/SV_Semaphores
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Semaphores_1
  SOURCE_FILES Semaphores_1.cpp
)


ace_add_exe(SV_Semaphores_2
  OUTPUT_NAME sem2
  FOLDER ACE/examples/System_V_IPC/SV_Semaphores
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SV_Semaphores_2
  SOURCE_FILES Semaphores_2.cpp
)

