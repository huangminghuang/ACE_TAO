
project(Log_Msg CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Log_Msg_Test_log_msg
  OUTPUT_NAME test_log_msg
  FOLDER ACE/examples/Log_Msg
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_Test_log_msg
  SOURCE_FILES test_log_msg.cpp
)


ace_add_exe(Log_Msg_Test_ostream
  OUTPUT_NAME test_ostream
  FOLDER ACE/examples/Log_Msg
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_Test_ostream
  SOURCE_FILES test_ostream.cpp
)


ace_add_exe(Log_Msg_Test_callback
  OUTPUT_NAME test_callback
  FOLDER ACE/examples/Log_Msg
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_Test_callback
  SOURCE_FILES test_callback.cpp
)

add_subdirectory(Log_Msg_MFC)
