
project(Reactor_Misc CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Reactor_Misc_Event_handler_t
  OUTPUT_NAME event_handler_t
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Event_handler_t
  SOURCE_FILES test_event_handler_t.cpp
)


add_ace_exe(Reactor_Misc_Demuxing
  OUTPUT_NAME demuxing
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Demuxing
  SOURCE_FILES test_demuxing.cpp
)


add_ace_exe(Reactor_Misc_Early_timeouts
  OUTPUT_NAME early_timeouts
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Early_timeouts
  SOURCE_FILES test_early_timeouts.cpp
)


add_ace_exe(Reactor_Misc_Notification
  OUTPUT_NAME notification
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Notification
  SOURCE_FILES notification.cpp
)


add_ace_exe(Reactor_Misc_Pingpong
  OUTPUT_NAME pingpong
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Pingpong
  SOURCE_FILES pingpong.cpp
)


add_ace_exe(Reactor_Misc_Reactors
  OUTPUT_NAME reactors
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Reactors
  SOURCE_FILES test_reactors.cpp
)


add_ace_exe(Reactor_Misc_Signals_1
  OUTPUT_NAME signals_1
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Signals_1
  SOURCE_FILES test_signals_1.cpp
)


add_ace_exe(Reactor_Misc_Signals_2
  OUTPUT_NAME signals_2
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Signals_2
  SOURCE_FILES test_signals_2.cpp
)


add_ace_exe(Reactor_Misc_Timer_queue
  OUTPUT_NAME timer_queue
  FOLDER examples/Reactor/Misc
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reactor_Misc_Timer_queue
  SOURCE_FILES test_timer_queue.cpp
)

