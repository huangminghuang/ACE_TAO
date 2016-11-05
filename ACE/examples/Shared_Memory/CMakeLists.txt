project(Shared_Memory CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

add_executable(Shared_Memory_test_MM test_MM.cpp)
set_target_properties(Shared_Memory_test_MM PROPERTIES OUTPUT_NAME testmm)
target_link_libraries(Shared_Memory_test_MM ACE)

add_executable(Shared_Memory_test_SV test_SV.cpp)
set_target_properties(Shared_Memory_test_SV PROPERTIES OUTPUT_NAME testsv)
target_link_libraries(Shared_Memory_test_SV ACE)