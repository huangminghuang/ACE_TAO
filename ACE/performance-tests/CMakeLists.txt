cmake_minimum_required(VERSION 3.1)
project (ace-performance-tests CXX)
if (NOT ACE_ROOT)
    find_package(ACE REQUIRED CONFIG)
endif()


enable_testing()

include(../cmake/common.cmake)

add_subdirectory(Misc)
#add_subdirectory(RPC)
#add_subdirectory(SCTP)
add_subdirectory(Server_Concurrency)
add_subdirectory(Synch-Benchmarks)
add_subdirectory(TCP)
add_subdirectory(UDP)