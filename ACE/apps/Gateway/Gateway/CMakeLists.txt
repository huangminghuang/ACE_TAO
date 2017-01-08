

add_ace_lib(Gateway
  OUTPUT_NAME Gateway
  FOLDER apps/Gateway/Gateway
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(Gateway
  SOURCE_FILES Event_Forwarding_Discriminator.cpp
               Gateway.cpp
               Event_Channel.cpp
               Concrete_Connection_Handlers.cpp
               Config_Files.cpp
               Connection_Handler_Connector.cpp
               File_Parser.cpp
               Options.cpp
               Connection_Handler_Acceptor.cpp
               Connection_Handler.cpp
  HEADER_FILES Concrete_Connection_Handlers.h
               Config_Files.h
               File_Parser.h
               Gateway.h
               Event_Channel.h
               Event_Forwarding_Discriminator.h
               Options.h
               Connection_Handler.h
               Connection_Handler_Acceptor.h
               Connection_Handler_Connector.h
)


add_ace_exe(gatewayd
  OUTPUT_NAME gatewayd
  FOLDER apps/Gateway/Gateway
  LINK_LIBRARIES Gateway
                 ACE
)
target_cxx_sources(gatewayd
  SOURCE_FILES gatewayd.cpp
)

