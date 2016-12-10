cmake_minimum_required(VERSION 3.1)
project (ace_apps CXX)

if (NOT ACE_ROOT)
    find_package(ACE REQUIRED CONFIG)
endif()


enable_testing()

include(../cmake/common.cmake)

add_subdirectory(gperf)
add_subdirectory(drwho)
add_subdirectory(Gateway)
add_subdirectory(mkcsregdb)
add_subdirectory(soreduce)