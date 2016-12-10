
project(timers CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Alarm
  Alarm.cpp
)
set_target_properties(Alarm PROPERTIES
  OUTPUT_NAME Alarm
  LINK_LIBRARIES ACE
)

##############################
add_executable(Task
  Task.cpp
)
set_target_properties(Task PROPERTIES
  OUTPUT_NAME Task
  LINK_LIBRARIES ACE
)

##############################
add_executable(Timers
  Timers.cpp
  CB.cpp
  TimerDispatcher.cpp
)
set_target_properties(Timers PROPERTIES
  OUTPUT_NAME Timers
  LINK_LIBRARIES ACE
)

##############################
add_executable(Upcall
  Upcall.cpp
  PCB.cpp
  PTimerDispatcher.cpp
)
set_target_properties(Upcall PROPERTIES
  OUTPUT_NAME Upcall
  LINK_LIBRARIES ACE
)
#####################################
