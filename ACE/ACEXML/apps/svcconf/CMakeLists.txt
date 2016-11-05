set(sources Svcconf_Handler.cpp
            Svcconf.cpp)
            
set(headers Svcconf_Handler.h Svcconf_Handler.inl Svcconf.h)
            
add_ace_lib(ACEXML_XML_Svc_Conf_Parser 
            SOURCES ${sources}
            PUBLIC_HEADER "${headers}"
            PUBLIC_LINK_LIBRARIES ACEXML
            PACKAGE ACEXML)
