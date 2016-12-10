add_library(drwho STATIC
    Comm_Manager.cpp
    Select_Manager.cpp
    Protocol_Manager.cpp
    Drwho_Node.cpp
    Rwho_DB_Manager.cpp
    Multicast_Manager.cpp
    Protocol_Record.cpp
    Options.cpp
    File_Manager.cpp
    Hash_Table.cpp
    Binary_Search.cpp
    Search_Struct.cpp
    Single_Lookup.cpp
    SML_Server.cpp
    SM_Server.cpp
    PMS_Usr.cpp
    SL_Server.cpp
    PMS_Flo.cpp
    PM_Server.cpp
    HT_Server.cpp
    BS_Server.cpp
    PMS_All.cpp
    PMS_Ruser.cpp
    SMR_Server.cpp
    CM_Client.cpp
    SM_Client.cpp
    SMR_Client.cpp
    PM_Client.cpp
    HT_Client.cpp
    BS_Client.cpp
    PMC_All.cpp
    PMC_Flo.cpp
    PMC_Usr.cpp
    SL_Client.cpp
    PMC_Ruser.cpp
    SMR_Client.cpp
    SML_Client.cpp
    CM_Server.cpp
)

target_link_libraries(drwho ACE)

add_ace_exe(drwho-Client
            OUTPUT_NAME client
            SOURCE_FILES client.cpp
            LINK_LIBRARIES drwho)

add_ace_exe(drwho-Server
            OUTPUT_NAME server
            SOURCE_FILES server.cpp
            LINK_LIBRARIES drwho)

