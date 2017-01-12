
project(Semaphores CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Semaphores_Starter
  OUTPUT_NAME starter
  FOLDER examples/Semaphores
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Semaphores_Starter
  SOURCE_FILES starter.cpp
)


ace_add_exe(Semaphores_Worker
  OUTPUT_NAME worker
  FOLDER examples/Semaphores
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Semaphores_Worker
  SOURCE_FILES worker.cpp
)

