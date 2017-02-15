
project(WFMO_Reactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(WIN32)

ace_add_exe(WFMO_Reactor_Abandoned
  OUTPUT_NAME abandoned
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Abandoned
  SOURCE_FILES Abandoned.cpp
)


ace_add_exe(WFMO_Reactor_Apc
  OUTPUT_NAME apc
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Apc
  SOURCE_FILES APC.cpp
)


ace_add_exe(WFMO_Reactor_Console_input
  OUTPUT_NAME console_input
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Console_input
  SOURCE_FILES Console_Input.cpp
)


ace_add_exe(WFMO_Reactor_Directory_changes
  OUTPUT_NAME directory_changes
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Directory_changes
  SOURCE_FILES Directory_Changes.cpp
)


ace_add_exe(WFMO_Reactor_Exceptions
  OUTPUT_NAME exceptions
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Exceptions
  SOURCE_FILES Exceptions.cpp
)


ace_add_exe(WFMO_Reactor_Handle_close
  OUTPUT_NAME handle_close
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Handle_close
  SOURCE_FILES Handle_Close.cpp
)


ace_add_exe(WFMO_Reactor_Multithreading
  OUTPUT_NAME multithreading
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Multithreading
  SOURCE_FILES Multithreading.cpp
)


ace_add_exe(WFMO_Reactor_Network_events
  OUTPUT_NAME network_events
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Network_events
  SOURCE_FILES Network_Events.cpp
)


ace_add_exe(WFMO_Reactor_Prerun_state_changes
  OUTPUT_NAME prerun_state_changes
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Prerun_state_changes
  SOURCE_FILES Prerun_State_Changes.cpp
)


ace_add_exe(WFMO_Reactor_Registration
  OUTPUT_NAME registration
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Registration
  SOURCE_FILES Registration.cpp
)


ace_add_exe(WFMO_Reactor_Registry_changes
  OUTPUT_NAME registry_changes
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Registry_changes
  SOURCE_FILES Registry_Changes.cpp
)


ace_add_exe(WFMO_Reactor_Removals
  OUTPUT_NAME removals
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Removals
  SOURCE_FILES Removals.cpp
)


ace_add_exe(WFMO_Reactor_Suspended_removals
  OUTPUT_NAME suspended_removals
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Suspended_removals
  SOURCE_FILES Suspended_Removals.cpp
)


ace_add_exe(WFMO_Reactor_Talker
  OUTPUT_NAME talker
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Talker
  SOURCE_FILES Talker.cpp
)


ace_add_exe(WFMO_Reactor_Timeouts
  OUTPUT_NAME timeouts
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Timeouts
  SOURCE_FILES Timeouts.cpp
)


ace_add_exe(WFMO_Reactor_Window_messages
  OUTPUT_NAME window_messages
  FOLDER ACE/examples/Reactor/WFMO_Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(WFMO_Reactor_Window_messages
  SOURCE_FILES Window_Messages.cpp
)

