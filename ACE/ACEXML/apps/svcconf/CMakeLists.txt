

add_ace_lib(ACEXML_XML_Svc_Conf_Parser
  OUTPUT_NAME ACEXML_XML_Svc_Conf_Parser
  PACKAGE ACE
  FOLDER ACEXML/apps/svcconf
  PUBLIC_LINK_LIBRARIES ACE
                        ACEXML_Parser
)
target_cxx_sources(ACEXML_XML_Svc_Conf_Parser
  SOURCE_FILES Svcconf.cpp
               Svcconf_Handler.cpp
  HEADER_FILES Svcconf.h
               Svcconf_Handler.h
  INLINE_FILES Svcconf_Handler.inl
)

