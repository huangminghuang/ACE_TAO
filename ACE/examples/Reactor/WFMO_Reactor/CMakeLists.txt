
project(WFMO_Reactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Abandoned
    Abandoned.cpp
  )
  set_target_properties(WFMO_Reactor_Abandoned PROPERTIES
    OUTPUT_NAME abandoned
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_APC
    APC.cpp
  )
  set_target_properties(WFMO_Reactor_APC PROPERTIES
    OUTPUT_NAME apc
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Console_Input
    Console_Input.cpp
  )
  set_target_properties(WFMO_Reactor_Console_Input PROPERTIES
    OUTPUT_NAME console_input
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Directory_Changes
    Directory_Changes.cpp
  )
  set_target_properties(WFMO_Reactor_Directory_Changes PROPERTIES
    OUTPUT_NAME directory_changes
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Exceptions
    Exceptions.cpp
  )
  set_target_properties(WFMO_Reactor_Exceptions PROPERTIES
    OUTPUT_NAME exceptions
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Handle_Close
    Handle_Close.cpp
  )
  set_target_properties(WFMO_Reactor_Handle_Close PROPERTIES
    OUTPUT_NAME handle_close
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Multithreading
    Multithreading.cpp
  )
  set_target_properties(WFMO_Reactor_Multithreading PROPERTIES
    OUTPUT_NAME multithreading
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Network_Events
    Network_Events.cpp
  )
  set_target_properties(WFMO_Reactor_Network_Events PROPERTIES
    OUTPUT_NAME network_events
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Prerun_State_Changes
    Prerun_State_Changes.cpp
  )
  set_target_properties(WFMO_Reactor_Prerun_State_Changes PROPERTIES
    OUTPUT_NAME prerun_state_changes
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Registration
    Registration.cpp
  )
  set_target_properties(WFMO_Reactor_Registration PROPERTIES
    OUTPUT_NAME registration
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Registry_Changes
    Registry_Changes.cpp
  )
  set_target_properties(WFMO_Reactor_Registry_Changes PROPERTIES
    OUTPUT_NAME registry_changes
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Removals
    Removals.cpp
  )
  set_target_properties(WFMO_Reactor_Removals PROPERTIES
    OUTPUT_NAME removals
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Suspended_Removals
    Suspended_Removals.cpp
  )
  set_target_properties(WFMO_Reactor_Suspended_Removals PROPERTIES
    OUTPUT_NAME suspended_removals
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Talker
    Talker.cpp
  )
  set_target_properties(WFMO_Reactor_Talker PROPERTIES
    OUTPUT_NAME talker
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Timeouts
    Timeouts.cpp
  )
  set_target_properties(WFMO_Reactor_Timeouts PROPERTIES
    OUTPUT_NAME timeouts
    LINK_LIBRARIES ACE
  )
endif()

##############################
if(WIN32)
  add_executable(WFMO_Reactor_Window_Messages
    Window_Messages.cpp
  )
  set_target_properties(WFMO_Reactor_Window_Messages PROPERTIES
    OUTPUT_NAME window_messages
    LINK_LIBRARIES ACE
  )
endif()
#####################################
