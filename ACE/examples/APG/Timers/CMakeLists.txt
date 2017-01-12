
project(timers CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Alarm
  OUTPUT_NAME Alarm
  FOLDER examples/APG/Timers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Alarm
  SOURCE_FILES Alarm.cpp
)


ace_add_exe(Task
  OUTPUT_NAME Task
  FOLDER examples/APG/Timers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task
  SOURCE_FILES Task.cpp
)


ace_add_exe(Timers
  OUTPUT_NAME Timers
  FOLDER examples/APG/Timers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Timers
  SOURCE_FILES CB.cpp
               Timers.cpp
               TimerDispatcher.cpp
  HEADER_FILES CB.h
               TimerDispatcher.h
)


ace_add_exe(Upcall
  OUTPUT_NAME Upcall
  FOLDER examples/APG/Timers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Upcall
  SOURCE_FILES PCB.cpp
               Upcall.cpp
               PTimerDispatcher.cpp
  HEADER_FILES PCB.h
               PTimerDispatcher.h
               Upcall.h
)

