project(Naming CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

function(add_naming_exes)
  foreach(_name ${ARGN})
    add_executable(Naming_${_name} test_${_name}.cpp)
    set_target_properties(Naming_${_name} PROPERTIES OUTPUT_NAME ${_name})
    target_link_libraries(Naming_${_name} ACE)
  endforeach()
endfunction()

add_naming_exes(multiple_contexts non_existent open writers)