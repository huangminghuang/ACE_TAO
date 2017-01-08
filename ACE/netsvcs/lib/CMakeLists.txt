

add_ace_lib(netsvcs
  OUTPUT_NAME netsvcs
  FOLDER netsvcs/lib
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(netsvcs
  SOURCE_FILES Time_Request_Reply.cpp
               TS_Clerk_Handler.cpp
               TS_Server_Handler.cpp
               Log_Message_Receiver.cpp
               Name_Handler.cpp
               Server_Logging_Handler.cpp
               Token_Handler.cpp
               Client_Logging_Handler.cpp
  HEADER_FILES Time_Request_Reply.h
               TS_Server_Handler.h
               TS_Clerk_Handler.h
               Client_Logging_Handler.h
               Name_Handler.h
               Log_Message_Receiver.h
               Server_Logging_Handler.h
               Token_Handler.h
               Base_Optimizer.h
               Server_Logging_Handler_T.h
  TEMPLATE_FILES Base_Optimizer.cpp
                 Server_Logging_Handler_T.cpp
)

