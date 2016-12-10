
project(Log_Msg CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Log_Msg_test_log_msg
  test_log_msg.cpp
)
set_target_properties(Log_Msg_test_log_msg PROPERTIES
  OUTPUT_NAME test_log_msg
  LINK_LIBRARIES ACE
)

##############################
add_executable(Log_Msg_test_ostream
  test_ostream.cpp
)
set_target_properties(Log_Msg_test_ostream PROPERTIES
  OUTPUT_NAME test_ostream
  LINK_LIBRARIES ACE
)

##############################
add_executable(Log_Msg_test_callback
  test_callback.cpp
)
set_target_properties(Log_Msg_test_callback PROPERTIES
  OUTPUT_NAME test_callback
  LINK_LIBRARIES ACE
)
add_subdirectory(Log_Msg_MFC)
#####################################
