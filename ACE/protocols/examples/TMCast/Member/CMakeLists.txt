project(TMCast_Member_Example CXX)

include(../../../../cmake/common.cmake)

if (NOT TARGET ACE_TMCast)
  find_package(ACE_TMCast REQUIRED CONFIG)
endif()

add_ace_exe(TMCast_Member
            OUTPUT_NAME member
            SOURCE_FILES member.cpp
            LINK_LIBRARIES ACE_TMCast)