
project(Connection_Misc CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
##############################
add_executable(Connection_Misc_Handler
  Connection_Handler.cpp
)
set_target_properties(Connection_Misc_Handler PROPERTIES
  OUTPUT_NAME handler
	LINK_LIBRARIES ACE
)

##############################
add_executable(Connection_Misc_test_upipe
  test_upipe.cpp
)
set_target_properties(Connection_Misc_test_upipe PROPERTIES
  OUTPUT_NAME test_upipe
	LINK_LIBRARIES ACE
)
#####################################
