
project(logging CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Simple1
  OUTPUT_NAME Simple1
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Simple1
  SOURCE_FILES Simple1.cpp
)


ace_add_exe(Simple2
  OUTPUT_NAME Simple2
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Simple2
  SOURCE_FILES Simple2.cpp
)


ace_add_exe(Change_Mask
  OUTPUT_NAME Change_Mask
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Change_Mask
  SOURCE_FILES Change_Mask.cpp
)


ace_add_exe(Change_Instance_Default
  OUTPUT_NAME Change_Instance_Default
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Change_Instance_Default
  SOURCE_FILES Change_Instance_Default.cpp
)


ace_add_exe(Wrap_Macros
  OUTPUT_NAME Wrap_Macros
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Wrap_Macros
  SOURCE_FILES Wrap_Macros.cpp
)


ace_add_exe(Wrap_Macros_Alt
  OUTPUT_NAME Wrap_Macros_Alt
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Wrap_Macros_Alt
  SOURCE_FILES Wrap_Macros_Alt.cpp
)


ace_add_exe(Trace_Return
  OUTPUT_NAME Trace_Return
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Trace_Return
  SOURCE_FILES Trace_Return.cpp
)


ace_add_exe(Use_Stderr
  OUTPUT_NAME Use_Stderr
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Stderr
  SOURCE_FILES Use_Stderr.cpp
)


ace_add_exe(Howto_Syslog
  OUTPUT_NAME Howto_Syslog
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Howto_Syslog
  SOURCE_FILES Howto_Syslog.cpp
)


ace_add_exe(Use_Syslog
  OUTPUT_NAME Use_Syslog
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Syslog
  SOURCE_FILES Use_Syslog.cpp
)


ace_add_exe(Use_Ostream
  OUTPUT_NAME Use_Ostream
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Ostream
  SOURCE_FILES Use_Ostream.cpp
)


ace_add_exe(Use_Multiple_Sinks
  OUTPUT_NAME Use_Multiple_Sinks
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Multiple_Sinks
  SOURCE_FILES Use_Multiple_Sinks.cpp
)


ace_add_exe(Use_Callback
  OUTPUT_NAME Use_Callback
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Callback
  SOURCE_FILES Use_Callback.cpp
)


ace_add_exe(Use_Callback2
  OUTPUT_NAME Use_Callback2
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Callback2
  SOURCE_FILES Use_Callback2.cpp
)


ace_add_exe(Use_Logger
  OUTPUT_NAME Use_Logger
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Logger
  SOURCE_FILES Use_Logger.cpp
)


ace_add_exe(Use_Logging_Server
  OUTPUT_NAME Use_Logging_Server
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Logging_Server
  SOURCE_FILES Use_Logging_Server.cpp
)


ace_add_exe(Use_LogManager
  OUTPUT_NAME Use_LogManager
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_LogManager
  SOURCE_FILES Use_LogManager.cpp
)


ace_add_exe(Use_Logging_Strategy
  OUTPUT_NAME Use_Logging_Strategy
  FOLDER ACE/examples/APG/Logging
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Use_Logging_Strategy
  SOURCE_FILES Use_Logging_Strategy.cpp
)

