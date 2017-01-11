
project(signals CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(SigAction
  OUTPUT_NAME SigAction
  FOLDER examples/APG/Signals
  LINK_LIBRARIES ACE
)
target_cxx_sources(SigAction
  SOURCE_FILES SigAction.cpp
)


add_ace_exe(SigGuard
  OUTPUT_NAME SigGuard
  FOLDER examples/APG/Signals
  LINK_LIBRARIES ACE
)
target_cxx_sources(SigGuard
  SOURCE_FILES SigGuard.cpp
)


add_ace_exe(SigHandler
  OUTPUT_NAME SigHandler
  FOLDER examples/APG/Signals
  LINK_LIBRARIES ACE
)
target_cxx_sources(SigHandler
  SOURCE_FILES SigHandler.cpp
)


add_ace_exe(SigHandlers
  OUTPUT_NAME SigHandlers
  FOLDER examples/APG/Signals
  LINK_LIBRARIES ACE
)
target_cxx_sources(SigHandlers
  SOURCE_FILES SigHandlers.cpp
)


add_ace_exe(SigInfo
  OUTPUT_NAME SigInfo
  FOLDER examples/APG/Signals
  LINK_LIBRARIES ACE
)
target_cxx_sources(SigInfo
  SOURCE_FILES SigInfo.cpp
)

