project(Shared_Malloc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(bpr_thread bpr_thread.cpp BPR_Drivers.cpp Thread_Bounded_Packet_Relay.cpp)
target_compile_definitions(bpr_thread PRIVATE ACE_HAS_DEFERRED_TIMER_COMMANDS)
target_link_libraries(bpr_thread ACE)