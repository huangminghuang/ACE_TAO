
if (NOT TARGET ACE_RMCast)
  find_package(ACE_RMCast REQUIRED CONFIG)
endif()

add_ace_exe(RMCast_Test_Sender
            OUTPUT_NAME sender
            SOURCE_FILES Sender.cpp
            LINK_LIBRARIES ACE_RMCast)

add_ace_exe(RMCast_Test_Receiver
            OUTPUT_NAME receiver
            SOURCE_FILES Receiver.cpp
            LINK_LIBRARIES ACE_RMCast)

add_test(NAME RMCast
         COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_test.pl)

set_tests_properties(RMCast PROPERTIES
  ENVIRONMENT ACE_ROOT=${CMAKE_CURRENT_SOURCE_DIR}/../../..)