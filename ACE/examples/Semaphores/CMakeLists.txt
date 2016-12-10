project(Shared_Malloc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(Semaphores_starter starter.cpp)
set_target_properties(Semaphores_starter PROPERTIES OUTPUT_NAME starter)
target_link_libraries(Semaphores_starter ACE)

add_executable(Semaphores_worker worker.cpp)
set_target_properties(Semaphores_worker PROPERTIES OUTPUT_NAME worker)
target_link_libraries(Semaphores_worker ACE)