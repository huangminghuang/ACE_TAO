project(RMCast_SendMsg_Example CXX)

include(../../../../cmake/common.cmake)

if (NOT TARGET ACE_RMCast)
  find_package(ACE_RMCast REQUIRED CONFIG)
endif()

add_ace_exe(RMCast_Sender
            OUTPUT_NAME sender
            SOURCE_FILES Sender.cpp
            LINK_LIBRARIES ACE_RMCast)

add_ace_exe(RMCast_Receiver
            OUTPUT_NAME receiver
            SOURCE_FILES Receiver.cpp
            LINK_LIBRARIES ACE_RMCast)


