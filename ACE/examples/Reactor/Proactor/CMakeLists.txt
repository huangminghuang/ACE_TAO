
project(Proactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Proactor_cancel
  test_cancel.cpp
)
set_target_properties(Proactor_cancel PROPERTIES
  OUTPUT_NAME test_cancel
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_end_event_loops
  test_end_event_loop.cpp
)
set_target_properties(Proactor_end_event_loops PROPERTIES
  OUTPUT_NAME test_end_event_loop
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_multiple_loops
  test_multiple_loops.cpp
)
set_target_properties(Proactor_multiple_loops PROPERTIES
  OUTPUT_NAME test_multiple_loops
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_post_completions
  post_completions.cpp
)
set_target_properties(Proactor_post_completions PROPERTIES
  OUTPUT_NAME test_post_completions
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_proactor
  test_proactor.cpp
)
set_target_properties(Proactor_proactor PROPERTIES
  OUTPUT_NAME test_proactor
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_timeout
  test_timeout.cpp
)
set_target_properties(Proactor_timeout PROPERTIES
  OUTPUT_NAME test_timeout
  LINK_LIBRARIES ACE
)

##############################
add_executable(Proactor_udp_proactor
  test_udp_proactor.cpp
)
set_target_properties(Proactor_udp_proactor PROPERTIES
  OUTPUT_NAME test_udp_proactor
  LINK_LIBRARIES ACE
)
#####################################
