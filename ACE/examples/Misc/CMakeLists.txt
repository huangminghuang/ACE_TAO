project(Misc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG OPTIONAL_COMPONENTS XtReactor)
endif()

function(add_misc_exes lib)
  foreach(_name ${ARGN})
    add_executable(Misc_${_name} ${_name}.cpp)
    set_target_properties(Misc_${_name} PROPERTIES OUTPUT_NAME ${_name})
    target_link_libraries(Misc_${_name} ${lib})
  endforeach()
endfunction()

add_misc_exes(ACE
  test_dump
  test_profile_timer
  test_read_buffer
  test_set
  test_sstring
  test_timestamp
  test_trace
)

if (ACE_XtReactor_FOUND)
  add_misc_exes(ACE_XtReactor
    test_XtReactor1
    test_XtReactor2
  )
endif()
