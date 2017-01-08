

add_ace_exe(SAXPrint
  OUTPUT_NAME SAXPrint
  FOLDER ACEXML/examples/SAXPrint
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
target_cxx_sources(SAXPrint
  SOURCE_FILES SAXPrint_Handler.cpp
               main.cpp
               Print_Handler.cpp
  HEADER_FILES Print_Handler.h
               SAXPrint_Handler.h
  INLINE_FILES SAXPrint_Handler.inl
)

