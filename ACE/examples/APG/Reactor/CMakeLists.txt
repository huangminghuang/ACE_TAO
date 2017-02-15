
project(reactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Client
  OUTPUT_NAME Client
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Client
  SOURCE_FILES Client.cpp
  HEADER_FILES Client.h
)


ace_add_exe(HAStatus
  OUTPUT_NAME HAStatus
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(HAStatus
  SOURCE_FILES HAStatus.cpp
)


ace_add_exe(HAStatus_AC
  OUTPUT_NAME HAStatus-AC
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(HAStatus_AC
  SOURCE_FILES HAStatus-AC.cpp
)


ace_add_exe(Reschedule
  OUTPUT_NAME Reschedule
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Reschedule
  SOURCE_FILES Reschedule.cpp
)


ace_add_exe(Schedule_Timers
  OUTPUT_NAME Schedule_Timers
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Schedule_Timers
  SOURCE_FILES Schedule_Timers.cpp
)


ace_add_exe(Timer_Cancel
  OUTPUT_NAME Timer_Cancel
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timer_Cancel
  SOURCE_FILES Timer_Cancel.cpp
)


ace_add_exe(reactor_Timers
  OUTPUT_NAME Timers
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(reactor_Timers
  SOURCE_FILES Timers.cpp
)


ace_add_exe(Timer_State_Data
  OUTPUT_NAME Timer_State_Data
  FOLDER ACE/examples/APG/Reactor
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timer_State_Data
  SOURCE_FILES Timer_State_Data.cpp
)

