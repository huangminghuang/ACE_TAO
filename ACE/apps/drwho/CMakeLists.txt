

ace_requires("NOT ACE_USES_WCHAR" ACE_HAS_PWD_H)

ace_add_exe(drwho_-client
  OUTPUT_NAME client
  FOLDER ACE/apps/drwho
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(drwho_-client
  SOURCE_FILES BS_Client.cpp
               BS_Server.cpp
               Binary_Search.cpp
               CM_Client.cpp
               CM_Server.cpp
               Comm_Manager.cpp
               Drwho_Node.cpp
               File_Manager.cpp
               HT_Client.cpp
               HT_Server.cpp
               Hash_Table.cpp
               Multicast_Manager.cpp
               Options.cpp
               PMC_All.cpp
               PMC_Flo.cpp
               PMC_Ruser.cpp
               PMC_Usr.cpp
               PMS_All.cpp
               PMS_Flo.cpp
               PMS_Ruser.cpp
               PMS_Usr.cpp
               PM_Client.cpp
               PM_Server.cpp
               Protocol_Manager.cpp
               Protocol_Record.cpp
               Rwho_DB_Manager.cpp
               SL_Client.cpp
               SL_Server.cpp
               SML_Client.cpp
               SML_Server.cpp
               SMR_Client.cpp
               SMR_Server.cpp
               SM_Client.cpp
               SM_Server.cpp
               Search_Struct.cpp
               Select_Manager.cpp
               Single_Lookup.cpp
               client.cpp
  HEADER_FILES BS_Client.h
               BS_Server.h
               Binary_Search.h
               CM_Client.h
               CM_Server.h
               Comm_Manager.h
               Drwho_Node.h
               File_Manager.h
               HT_Client.h
               HT_Server.h
               Hash_Table.h
               Multicast_Manager.h
               Options.h
               PMC_All.h
               PMC_Flo.h
               PMC_Ruser.h
               PMC_Usr.h
               PMS_All.h
               PMS_Flo.h
               PMS_Ruser.h
               PMS_Usr.h
               PM_Client.h
               PM_Server.h
               Protocol_Manager.h
               Protocol_Record.h
               Rwho_DB_Manager.h
               SL_Client.h
               SL_Server.h
               SML_Client.h
               SML_Server.h
               SMR_Client.h
               SMR_Server.h
               SM_Client.h
               SM_Server.h
               Search_Struct.h
               Select_Manager.h
               Single_Lookup.h
)


ace_add_exe(drwho_-server
  OUTPUT_NAME server
  FOLDER ACE/apps/drwho
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(drwho_-server
  SOURCE_FILES BS_Client.cpp
               BS_Server.cpp
               Binary_Search.cpp
               CM_Client.cpp
               CM_Server.cpp
               Comm_Manager.cpp
               Drwho_Node.cpp
               File_Manager.cpp
               HT_Client.cpp
               HT_Server.cpp
               Hash_Table.cpp
               Multicast_Manager.cpp
               Options.cpp
               PMC_All.cpp
               PMC_Flo.cpp
               PMC_Ruser.cpp
               PMC_Usr.cpp
               PMS_All.cpp
               PMS_Flo.cpp
               PMS_Ruser.cpp
               PMS_Usr.cpp
               PM_Client.cpp
               PM_Server.cpp
               Protocol_Manager.cpp
               Protocol_Record.cpp
               Rwho_DB_Manager.cpp
               SL_Client.cpp
               SL_Server.cpp
               SML_Client.cpp
               SML_Server.cpp
               SMR_Client.cpp
               SMR_Server.cpp
               SM_Client.cpp
               SM_Server.cpp
               Search_Struct.cpp
               Select_Manager.cpp
               Single_Lookup.cpp
               server.cpp
  HEADER_FILES BS_Client.h
               BS_Server.h
               Binary_Search.h
               CM_Client.h
               CM_Server.h
               Comm_Manager.h
               Drwho_Node.h
               File_Manager.h
               HT_Client.h
               HT_Server.h
               Hash_Table.h
               Multicast_Manager.h
               Options.h
               PMC_All.h
               PMC_Flo.h
               PMC_Ruser.h
               PMC_Usr.h
               PMS_All.h
               PMS_Flo.h
               PMS_Ruser.h
               PMS_Usr.h
               PM_Client.h
               PM_Server.h
               Protocol_Manager.h
               Protocol_Record.h
               Rwho_DB_Manager.h
               SL_Client.h
               SL_Server.h
               SML_Client.h
               SML_Server.h
               SMR_Client.h
               SMR_Server.h
               SM_Client.h
               SM_Server.h
               Search_Struct.h
               Select_Manager.h
               Single_Lookup.h
)

