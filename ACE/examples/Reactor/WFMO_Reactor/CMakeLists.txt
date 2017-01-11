
project(WFMO_Reactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(WIN32)

add_ace_exe(WFMO_Reactor_Abandoned
  OUTPUT_NAME abandoned
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Abandoned
  SOURCE_FILES Abandoned.cpp
)


add_ace_exe(WFMO_Reactor_Apc
  OUTPUT_NAME apc
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Apc
  SOURCE_FILES APC.cpp
)


add_ace_exe(WFMO_Reactor_Console_input
  OUTPUT_NAME console_input
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Console_input
  SOURCE_FILES Console_Input.cpp
)


add_ace_exe(WFMO_Reactor_Directory_changes
  OUTPUT_NAME directory_changes
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Directory_changes
  SOURCE_FILES Directory_Changes.cpp
)


add_ace_exe(WFMO_Reactor_Exceptions
  OUTPUT_NAME exceptions
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Exceptions
  SOURCE_FILES Exceptions.cpp
)


add_ace_exe(WFMO_Reactor_Handle_close
  OUTPUT_NAME handle_close
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Handle_close
  SOURCE_FILES Handle_Close.cpp
)


add_ace_exe(WFMO_Reactor_Multithreading
  OUTPUT_NAME multithreading
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Multithreading
  SOURCE_FILES Multithreading.cpp
)


add_ace_exe(WFMO_Reactor_Network_events
  OUTPUT_NAME network_events
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Network_events
  SOURCE_FILES Network_Events.cpp
)


add_ace_exe(WFMO_Reactor_Prerun_state_changes
  OUTPUT_NAME prerun_state_changes
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Prerun_state_changes
  SOURCE_FILES Prerun_State_Changes.cpp
)


add_ace_exe(WFMO_Reactor_Registration
  OUTPUT_NAME registration
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Registration
  SOURCE_FILES Registration.cpp
)


add_ace_exe(WFMO_Reactor_Registry_changes
  OUTPUT_NAME registry_changes
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Registry_changes
  SOURCE_FILES Registry_Changes.cpp
)


add_ace_exe(WFMO_Reactor_Removals
  OUTPUT_NAME removals
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Removals
  SOURCE_FILES Removals.cpp
)


add_ace_exe(WFMO_Reactor_Suspended_removals
  OUTPUT_NAME suspended_removals
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Suspended_removals
  SOURCE_FILES Suspended_Removals.cpp
)


add_ace_exe(WFMO_Reactor_Talker
  OUTPUT_NAME talker
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Talker
  SOURCE_FILES Talker.cpp
)


add_ace_exe(WFMO_Reactor_Timeouts
  OUTPUT_NAME timeouts
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Timeouts
  SOURCE_FILES Timeouts.cpp
)


add_ace_exe(WFMO_Reactor_Window_messages
  OUTPUT_NAME window_messages
  FOLDER examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(WFMO_Reactor_Window_messages
  SOURCE_FILES Window_Messages.cpp
)

