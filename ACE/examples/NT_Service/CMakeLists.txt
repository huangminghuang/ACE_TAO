project(NT_Service CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


if (WIN32)
  add_executable(ntsvc main.cpp ntsvc.cpp)
  target_link_libraries(ntsvc ACE)
endif()