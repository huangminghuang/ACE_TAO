
project(reactor CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Client
  OUTPUT_NAME Client
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(Client
  SOURCE_FILES Client.cpp
  HEADER_FILES Client.h
)


add_ace_exe(HAStatus
  OUTPUT_NAME HAStatus
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(HAStatus
  SOURCE_FILES HAStatus.cpp
)


add_ace_exe(HAStatus_AC
  OUTPUT_NAME HAStatus-AC
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(HAStatus_AC
  SOURCE_FILES HAStatus-AC.cpp
)


add_ace_exe(Reschedule
  OUTPUT_NAME Reschedule
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(Reschedule
  SOURCE_FILES Reschedule.cpp
)


add_ace_exe(Schedule_Timers
  OUTPUT_NAME Schedule_Timers
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(Schedule_Timers
  SOURCE_FILES Schedule_Timers.cpp
)


add_ace_exe(Timer_Cancel
  OUTPUT_NAME Timer_Cancel
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(Timer_Cancel
  SOURCE_FILES Timer_Cancel.cpp
)


add_ace_exe(reactor_Timers
  OUTPUT_NAME Timers
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(reactor_Timers
  SOURCE_FILES Timers.cpp
)


add_ace_exe(Timer_State_Data
  OUTPUT_NAME Timer_State_Data
  FOLDER examples/APG/Reactor
  LINK_LIBRARIES ACE
)
target_cxx_sources(Timer_State_Data
  SOURCE_FILES Timer_State_Data.cpp
)

