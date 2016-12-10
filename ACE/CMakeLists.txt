
cmake_minimum_required(VERSION 3.1)
project (ACE CXX)

enable_testing()
set(ACE_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(ace)

function(add_optional_subdirectories)
  foreach(_dir ${ARGN})
    option(BUILD_${_dir} "Wether to build ${dir}" ON)
    if (BUILD_${_dir})
      add_subdirectory(${_dir})
    endif()
  endforeach()
endfunction()

add_optional_subdirectories(
  apps
  tests
  performance-tests
  ACEXML
  protocols
  Kokyu
  examples
  netsvcs
)
