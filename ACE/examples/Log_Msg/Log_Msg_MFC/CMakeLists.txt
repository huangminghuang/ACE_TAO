
project(Log_Msg_MFC CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()
find_package(MFC)
##############################
if(MFC_FOUND)
  add_executable(Log_Msg_MFC
    Log_Msg_MFC.cpp
    Log_Msg_MFCDlg.cpp
    MFC_Log.cpp
    StdAfx.cpp
  )
  set_target_properties(Log_Msg_MFC PROPERTIES
    OUTPUT_NAME Log_Msg_MFC
    LINK_LIBRARIES ACE
  )
endif()
#####################################
