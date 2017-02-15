
project(Log_Msg_MFC CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
find_package(MFC)

ace_requires(MFC_FOUND)

ace_add_exe(Log_Msg_MFC
  OUTPUT_NAME Log_Msg_MFC
  FOLDER ACE/examples/Log_Msg/Log_Msg_MFC
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Log_Msg_MFC
  SOURCE_FILES Log_Msg_MFC.cpp
               Log_Msg_MFCDlg.cpp
               MFC_Log.cpp
               StdAfx.cpp
  HEADER_FILES Log_Msg_MFC.h
               Log_Msg_MFCDlg.h
               MFC_Log.h
               StdAfx.h
)

