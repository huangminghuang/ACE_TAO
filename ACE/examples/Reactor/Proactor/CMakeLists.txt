
project(Proactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Proactor_Cancel
  OUTPUT_NAME test_cancel
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Cancel
  SOURCE_FILES test_cancel.cpp
  HEADER_FILES test_cancel.h
)


ace_add_exe(Proactor_End_event_loops
  OUTPUT_NAME test_end_event_loop
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_End_event_loops
  SOURCE_FILES test_end_event_loop.cpp
)


ace_add_exe(Proactor_Multiple_loops
  OUTPUT_NAME test_multiple_loops
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Multiple_loops
  SOURCE_FILES test_multiple_loops.cpp
)


ace_add_exe(Proactor_Post_completions
  OUTPUT_NAME test_post_completions
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Post_completions
  SOURCE_FILES post_completions.cpp
)


ace_add_exe(Proactor_Proactor
  OUTPUT_NAME test_proactor
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Proactor
  SOURCE_FILES test_proactor.cpp
  HEADER_FILES test_proactor.h
)


ace_add_exe(Proactor_Timeout
  OUTPUT_NAME test_timeout
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Timeout
  SOURCE_FILES test_timeout.cpp
)


ace_add_exe(Proactor_Udp_proactor
  OUTPUT_NAME test_udp_proactor
  FOLDER ACE/examples/Reactor/Proactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Proactor_Udp_proactor
  SOURCE_FILES test_udp_proactor.cpp
)

