

ace_add_lib(netsvcs
  OUTPUT_NAME netsvcs
  FOLDER ACE/netsvcs/lib
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(netsvcs
  SOURCE_FILES Client_Logging_Handler.cpp
               Log_Message_Receiver.cpp
               Name_Handler.cpp
               Server_Logging_Handler.cpp
               TS_Clerk_Handler.cpp
               TS_Server_Handler.cpp
               Time_Request_Reply.cpp
               Token_Handler.cpp
  HEADER_FILES Base_Optimizer.h
               Client_Logging_Handler.h
               Log_Message_Receiver.h
               Name_Handler.h
               Server_Logging_Handler.h
               Server_Logging_Handler_T.h
               TS_Clerk_Handler.h
               TS_Server_Handler.h
               Time_Request_Reply.h
               Token_Handler.h
  TEMPLATE_FILES Server_Logging_Handler_T.cpp
)

