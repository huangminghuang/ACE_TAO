project(Web_Crawler CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

file(GLOB sources *.cpp)
add_executable(Web_Crawler ${sources})
target_link_libraries(Web_Crawler ACE)