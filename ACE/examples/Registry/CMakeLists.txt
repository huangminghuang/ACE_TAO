project(Registry CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


if (WIN32)
  add_executable(test_registry_iterator test_registry_iterator.cpp)
  target_link_libraries(test_registry_iterator ACE)

  add_executable(test_registry_update test_registry_update.cpp)
  target_link_libraries(test_registry_update ACE)
endif()