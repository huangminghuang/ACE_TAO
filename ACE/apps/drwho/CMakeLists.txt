

requires("NOT USES_WCHAR")

add_ace_exe(drwho_-client
  OUTPUT_NAME client
  FOLDER apps/drwho
  LINK_LIBRARIES ACE
)
target_cxx_sources(drwho_-client
  SOURCE_FILES PMC_Ruser.cpp
               SM_Server.cpp
               HT_Client.cpp
               SMR_Server.cpp
               Options.cpp
               BS_Server.cpp
               Drwho_Node.cpp
               PM_Client.cpp
               File_Manager.cpp
               PMS_All.cpp
               BS_Client.cpp
               SM_Client.cpp
               PMS_Ruser.cpp
               SML_Server.cpp
               Single_Lookup.cpp
               Binary_Search.cpp
               Protocol_Manager.cpp
               PM_Server.cpp
               Multicast_Manager.cpp
               HT_Server.cpp
               SMR_Client.cpp
               Comm_Manager.cpp
               Hash_Table.cpp
               PMC_All.cpp
               PMC_Flo.cpp
               Rwho_DB_Manager.cpp
               CM_Server.cpp
               PMS_Usr.cpp
               client.cpp
               SML_Client.cpp
               PMS_Flo.cpp
               PMC_Usr.cpp
               CM_Client.cpp
               Select_Manager.cpp
               SL_Server.cpp
               Protocol_Record.cpp
               Search_Struct.cpp
               SL_Client.cpp
  HEADER_FILES Comm_Manager.h
               Select_Manager.h
               Protocol_Manager.h
               Drwho_Node.h
               Rwho_DB_Manager.h
               Multicast_Manager.h
               Protocol_Record.h
               Options.h
               File_Manager.h
               Hash_Table.h
               Binary_Search.h
               Search_Struct.h
               Single_Lookup.h
               SML_Server.h
               SM_Server.h
               PMS_Usr.h
               SL_Server.h
               PMS_Flo.h
               PM_Server.h
               HT_Server.h
               BS_Server.h
               PMS_All.h
               PMS_Ruser.h
               SMR_Server.h
               CM_Client.h
               SM_Client.h
               SMR_Client.h
               PM_Client.h
               HT_Client.h
               BS_Client.h
               PMC_All.h
               PMC_Flo.h
               PMC_Usr.h
               SL_Client.h
               PMC_Ruser.h
               SML_Client.h
               CM_Server.h
)


add_ace_exe(drwho_-server
  OUTPUT_NAME server
  FOLDER apps/drwho
  LINK_LIBRARIES ACE
)
target_cxx_sources(drwho_-server
  SOURCE_FILES CM_Server.cpp
               SM_Server.cpp
               HT_Client.cpp
               SMR_Server.cpp
               Options.cpp
               BS_Server.cpp
               Drwho_Node.cpp
               PM_Client.cpp
               File_Manager.cpp
               PMS_All.cpp
               BS_Client.cpp
               SM_Client.cpp
               PMS_Ruser.cpp
               SML_Server.cpp
               PMC_Ruser.cpp
               Single_Lookup.cpp
               Binary_Search.cpp
               Protocol_Manager.cpp
               PM_Server.cpp
               Multicast_Manager.cpp
               HT_Server.cpp
               SMR_Client.cpp
               Comm_Manager.cpp
               Hash_Table.cpp
               PMC_All.cpp
               PMC_Flo.cpp
               Rwho_DB_Manager.cpp
               server.cpp
               PMS_Usr.cpp
               SML_Client.cpp
               PMS_Flo.cpp
               PMC_Usr.cpp
               CM_Client.cpp
               Select_Manager.cpp
               SL_Server.cpp
               Protocol_Record.cpp
               Search_Struct.cpp
               SL_Client.cpp
  HEADER_FILES Comm_Manager.h
               Select_Manager.h
               Protocol_Manager.h
               Drwho_Node.h
               Rwho_DB_Manager.h
               Multicast_Manager.h
               Protocol_Record.h
               Options.h
               File_Manager.h
               Hash_Table.h
               Binary_Search.h
               Search_Struct.h
               Single_Lookup.h
               SML_Server.h
               SM_Server.h
               PMS_Usr.h
               SL_Server.h
               PMS_Flo.h
               PM_Server.h
               HT_Server.h
               BS_Server.h
               PMS_All.h
               PMS_Ruser.h
               SMR_Server.h
               CM_Client.h
               SM_Client.h
               SMR_Client.h
               PM_Client.h
               HT_Client.h
               BS_Client.h
               PMC_All.h
               PMC_Flo.h
               PMC_Usr.h
               SL_Client.h
               PMC_Ruser.h
               SML_Client.h
               CM_Server.h
)

