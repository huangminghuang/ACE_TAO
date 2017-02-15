
project(signals CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(SigAction
  OUTPUT_NAME SigAction
  FOLDER ACE/examples/APG/Signals
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SigAction
  SOURCE_FILES SigAction.cpp
)


ace_add_exe(SigGuard
  OUTPUT_NAME SigGuard
  FOLDER ACE/examples/APG/Signals
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SigGuard
  SOURCE_FILES SigGuard.cpp
)


ace_add_exe(SigHandler
  OUTPUT_NAME SigHandler
  FOLDER ACE/examples/APG/Signals
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SigHandler
  SOURCE_FILES SigHandler.cpp
)


ace_add_exe(SigHandlers
  OUTPUT_NAME SigHandlers
  FOLDER ACE/examples/APG/Signals
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SigHandlers
  SOURCE_FILES SigHandlers.cpp
)


ace_add_exe(SigInfo
  OUTPUT_NAME SigInfo
  FOLDER ACE/examples/APG/Signals
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SigInfo
  SOURCE_FILES SigInfo.cpp
)

