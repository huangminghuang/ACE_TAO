
project(threadmgmt CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Async_Cancel
  OUTPUT_NAME Async_Cancel
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Async_Cancel
  SOURCE_FILES Async_Cancel.cpp
)


add_ace_exe(Coop_Cancel
  OUTPUT_NAME Coop_Cancel
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Coop_Cancel
  SOURCE_FILES Coop_Cancel.cpp
)


add_ace_exe(ExitHandler
  OUTPUT_NAME ExitHandler
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(ExitHandler
  SOURCE_FILES ExitHandler.cpp
)


add_ace_exe(Pool
  OUTPUT_NAME Pool
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Pool
  SOURCE_FILES Pool.cpp
)


add_ace_exe(Priorities
  OUTPUT_NAME Priorities
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Priorities
  SOURCE_FILES Priorities.cpp
)


add_ace_exe(Signals
  OUTPUT_NAME Signals
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Signals
  SOURCE_FILES Signals.cpp
)


add_ace_exe(Signals2
  OUTPUT_NAME Signals2
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Signals2
  SOURCE_FILES Signals2.cpp
)


add_ace_exe(Start_Hook
  OUTPUT_NAME Start_Hook
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(Start_Hook
  SOURCE_FILES Start_Hook.cpp
)


add_ace_exe(State
  OUTPUT_NAME State
  FOLDER examples/APG/ThreadManagement
  LINK_LIBRARIES ACE
)
target_cxx_sources(State
  SOURCE_FILES State.cpp
)

