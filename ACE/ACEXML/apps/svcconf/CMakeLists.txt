set(sources Svcconf_Handler.cpp
            Svcconf.cpp)

set(headers Svcconf_Handler.h Svcconf_Handler.inl Svcconf.h)

add_ace_component(ACEXML_XML_Svc_Conf_Parser
  DEFINE_SYMBOL ACEXML_XML_SVC_CONF_PARSER_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER "${headers}"
  PUBLIC_LINK_LIBRARIES ACEXML
  PACKAGE ACEXML
)
