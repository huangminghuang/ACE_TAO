
project(Reactor_Misc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Reactor_Misc_event_handler_t
  test_event_handler_t.cpp
)
set_target_properties(Reactor_Misc_event_handler_t PROPERTIES
  OUTPUT_NAME event_handler_t
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_demuxing
  test_demuxing.cpp
)
set_target_properties(Reactor_Misc_demuxing PROPERTIES
  OUTPUT_NAME demuxing
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_early_timeouts
  test_early_timeouts.cpp
)
set_target_properties(Reactor_Misc_early_timeouts PROPERTIES
  OUTPUT_NAME early_timeouts
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_notification
  notification.cpp
)
set_target_properties(Reactor_Misc_notification PROPERTIES
  OUTPUT_NAME notification
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_pingpong
  pingpong.cpp
)
set_target_properties(Reactor_Misc_pingpong PROPERTIES
  OUTPUT_NAME pingpong
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_reactors
  test_reactors.cpp
)
set_target_properties(Reactor_Misc_reactors PROPERTIES
  OUTPUT_NAME reactors
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_signals_1
  test_signals_1.cpp
)
set_target_properties(Reactor_Misc_signals_1 PROPERTIES
  OUTPUT_NAME signals_1
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_signals_2
  test_signals_2.cpp
)
set_target_properties(Reactor_Misc_signals_2 PROPERTIES
  OUTPUT_NAME signals_2
  LINK_LIBRARIES ACE
)

##############################
add_executable(Reactor_Misc_timer_queue
  test_timer_queue.cpp
)
set_target_properties(Reactor_Misc_timer_queue PROPERTIES
  OUTPUT_NAME timer_queue
  LINK_LIBRARIES ACE
)
#####################################
