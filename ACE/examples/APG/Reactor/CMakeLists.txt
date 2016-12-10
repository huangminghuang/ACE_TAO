
project(reactor CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Client
  Client.cpp
)
set_target_properties(Client PROPERTIES
  OUTPUT_NAME Client
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(HAStatus
  HAStatus.cpp
)
set_target_properties(HAStatus PROPERTIES
  OUTPUT_NAME HAStatus
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(HAStatus_AC
  HAStatus-AC.cpp
)
set_target_properties(HAStatus_AC PROPERTIES
  OUTPUT_NAME HAStatus-AC
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Reschedule
  Reschedule.cpp
)
set_target_properties(Reschedule PROPERTIES
  OUTPUT_NAME Reschedule
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Schedule_Timers
  Schedule_Timers.cpp
)
set_target_properties(Schedule_Timers PROPERTIES
  OUTPUT_NAME Schedule_Timers
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Timer_Cancel
  Timer_Cancel.cpp
)
set_target_properties(Timer_Cancel PROPERTIES
  OUTPUT_NAME Timer_Cancel
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(reactor_Timers
  Timers.cpp
)
set_target_properties(reactor_Timers PROPERTIES
  OUTPUT_NAME Timers
  LINK_LIBRARIES "ACE"
)

##############################
add_executable(Timer_State_Data
  Timer_State_Data.cpp
)
set_target_properties(Timer_State_Data PROPERTIES
  OUTPUT_NAME Timer_State_Data
  LINK_LIBRARIES "ACE"
)
#####################################
