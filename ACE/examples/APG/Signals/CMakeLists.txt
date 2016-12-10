
project(signals CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(SigAction
  SigAction.cpp
)
set_target_properties(SigAction PROPERTIES
  OUTPUT_NAME SigAction
  LINK_LIBRARIES ACE
)

##############################
add_executable(SigGuard
  SigGuard.cpp
)
set_target_properties(SigGuard PROPERTIES
  OUTPUT_NAME SigGuard
  LINK_LIBRARIES ACE
)

##############################
add_executable(SigHandler
  SigHandler.cpp
)
set_target_properties(SigHandler PROPERTIES
  OUTPUT_NAME SigHandler
  LINK_LIBRARIES ACE
)

##############################
add_executable(SigHandlers
  SigHandlers.cpp
)
set_target_properties(SigHandlers PROPERTIES
  OUTPUT_NAME SigHandlers
  LINK_LIBRARIES ACE
)

##############################
add_executable(SigInfo
  SigInfo.cpp
)
set_target_properties(SigInfo PROPERTIES
  OUTPUT_NAME SigInfo
  LINK_LIBRARIES ACE
)
#####################################
