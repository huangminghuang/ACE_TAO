
project(logging CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Simple1
  Simple1.cpp
)
set_target_properties(Simple1 PROPERTIES
  OUTPUT_NAME Simple1
  LINK_LIBRARIES ACE
)

##############################
add_executable(Simple2
  Simple2.cpp
)
set_target_properties(Simple2 PROPERTIES
  OUTPUT_NAME Simple2
  LINK_LIBRARIES ACE
)

##############################
add_executable(Change_Mask
  Change_Mask.cpp
)
set_target_properties(Change_Mask PROPERTIES
  OUTPUT_NAME Change_Mask
  LINK_LIBRARIES ACE
)

##############################
add_executable(Change_Instance_Default
  Change_Instance_Default.cpp
)
set_target_properties(Change_Instance_Default PROPERTIES
  OUTPUT_NAME Change_Instance_Default
  LINK_LIBRARIES ACE
)

##############################
add_executable(Wrap_Macros
  Wrap_Macros.cpp
)
set_target_properties(Wrap_Macros PROPERTIES
  OUTPUT_NAME Wrap_Macros
  LINK_LIBRARIES ACE
)

##############################
add_executable(Wrap_Macros_Alt
  Wrap_Macros_Alt.cpp
)
set_target_properties(Wrap_Macros_Alt PROPERTIES
  OUTPUT_NAME Wrap_Macros_Alt
  LINK_LIBRARIES ACE
)

##############################
add_executable(Trace_Return
  Trace_Return.cpp
)
set_target_properties(Trace_Return PROPERTIES
  OUTPUT_NAME Trace_Return
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Stderr
  Use_Stderr.cpp
)
set_target_properties(Use_Stderr PROPERTIES
  OUTPUT_NAME Use_Stderr
  LINK_LIBRARIES ACE
)

##############################
add_executable(Howto_Syslog
  Howto_Syslog.cpp
)
set_target_properties(Howto_Syslog PROPERTIES
  OUTPUT_NAME Howto_Syslog
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Syslog
  Use_Syslog.cpp
)
set_target_properties(Use_Syslog PROPERTIES
  OUTPUT_NAME Use_Syslog
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Ostream
  Use_Ostream.cpp
)
set_target_properties(Use_Ostream PROPERTIES
  OUTPUT_NAME Use_Ostream
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Multiple_Sinks
  Use_Multiple_Sinks.cpp
)
set_target_properties(Use_Multiple_Sinks PROPERTIES
  OUTPUT_NAME Use_Multiple_Sinks
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Callback
  Use_Callback.cpp
)
set_target_properties(Use_Callback PROPERTIES
  OUTPUT_NAME Use_Callback
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Callback2
  Use_Callback2.cpp
)
set_target_properties(Use_Callback2 PROPERTIES
  OUTPUT_NAME Use_Callback2
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Logger
  Use_Logger.cpp
)
set_target_properties(Use_Logger PROPERTIES
  OUTPUT_NAME Use_Logger
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Logging_Server
  Use_Logging_Server.cpp
)
set_target_properties(Use_Logging_Server PROPERTIES
  OUTPUT_NAME Use_Logging_Server
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_LogManager
  Use_LogManager.cpp
)
set_target_properties(Use_LogManager PROPERTIES
  OUTPUT_NAME Use_LogManager
  LINK_LIBRARIES ACE
)

##############################
add_executable(Use_Logging_Strategy
  Use_Logging_Strategy.cpp
)
set_target_properties(Use_Logging_Strategy PROPERTIES
  OUTPUT_NAME Use_Logging_Strategy
  LINK_LIBRARIES ACE
)
#####################################
configure_file(client.conf client.conf COPYONLY)
configure_file(logging_strategy.conf logging_strategy.conf COPYONLY)
configure_file(server.conf server.conf COPYONLY)
