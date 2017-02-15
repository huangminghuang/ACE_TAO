

ace_add_lib(Gateway
  OUTPUT_NAME Gateway
  FOLDER ACE/apps/Gateway/Gateway
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Gateway
  SOURCE_FILES Concrete_Connection_Handlers.cpp
               Config_Files.cpp
               Connection_Handler.cpp
               Connection_Handler_Acceptor.cpp
               Connection_Handler_Connector.cpp
               Event_Channel.cpp
               Event_Forwarding_Discriminator.cpp
               File_Parser.cpp
               Gateway.cpp
               Options.cpp
  HEADER_FILES Concrete_Connection_Handlers.h
               Config_Files.h
               Connection_Handler.h
               Connection_Handler_Acceptor.h
               Connection_Handler_Connector.h
               Event_Channel.h
               Event_Forwarding_Discriminator.h
               File_Parser.h
               Gateway.h
               Options.h
)


ace_add_exe(gatewayd
  OUTPUT_NAME gatewayd
  FOLDER ACE/apps/Gateway/Gateway
  LINK_LIBRARIES Gateway
                 ACE
)
ace_target_cxx_sources(gatewayd
  SOURCE_FILES gatewayd.cpp
)

