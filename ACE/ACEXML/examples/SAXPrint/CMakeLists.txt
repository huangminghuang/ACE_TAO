

ace_add_exe(SAXPrint
  OUTPUT_NAME SAXPrint
  FOLDER ACE/ACEXML/examples/SAXPrint
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(SAXPrint
  SOURCE_FILES Print_Handler.cpp
               SAXPrint_Handler.cpp
               main.cpp
  HEADER_FILES Print_Handler.h
               SAXPrint_Handler.h
  INLINE_FILES SAXPrint_Handler.inl
)

