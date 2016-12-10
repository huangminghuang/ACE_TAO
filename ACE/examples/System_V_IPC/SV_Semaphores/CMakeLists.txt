project(SV_Message_Queues CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_executable(Semaphores_1 Semaphores_1.cpp)
target_link_libraries(Semaphores_1 ACE)

add_executable(Semaphores_2 Semaphores_1.cpp)
target_link_libraries(Semaphores_2 ACE)
