
project(threadmgmt CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Async_Cancel
  OUTPUT_NAME Async_Cancel
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Async_Cancel
  SOURCE_FILES Async_Cancel.cpp
)


ace_add_exe(Coop_Cancel
  OUTPUT_NAME Coop_Cancel
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Coop_Cancel
  SOURCE_FILES Coop_Cancel.cpp
)


ace_add_exe(ExitHandler
  OUTPUT_NAME ExitHandler
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ExitHandler
  SOURCE_FILES ExitHandler.cpp
)


ace_add_exe(Pool
  OUTPUT_NAME Pool
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Pool
  SOURCE_FILES Pool.cpp
)


ace_add_exe(Priorities
  OUTPUT_NAME Priorities
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Priorities
  SOURCE_FILES Priorities.cpp
)


ace_add_exe(Signals
  OUTPUT_NAME Signals
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Signals
  SOURCE_FILES Signals.cpp
)


ace_add_exe(Signals2
  OUTPUT_NAME Signals2
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Signals2
  SOURCE_FILES Signals2.cpp
)


ace_add_exe(Start_Hook
  OUTPUT_NAME Start_Hook
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Start_Hook
  SOURCE_FILES Start_Hook.cpp
)


ace_add_exe(State
  OUTPUT_NAME State
  FOLDER ACE/examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(State
  SOURCE_FILES State.cpp
)

