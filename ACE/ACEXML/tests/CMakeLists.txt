

ace_add_exe(Transcoder_Test
  OUTPUT_NAME Transcoder_Test
  FOLDER ACEXML/tests
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(Transcoder_Test
  SOURCE_FILES Transcoder_Test.cpp
)


ace_add_exe(NamespaceSupport_Test
  OUTPUT_NAME NamespaceSupport_Test
  FOLDER ACEXML/tests
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(NamespaceSupport_Test
  SOURCE_FILES NamespaceSupport_Test.cpp
)


ace_add_exe(HttpCharStream_Test
  OUTPUT_NAME HttpCharStream_Test
  FOLDER ACEXML/tests
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(HttpCharStream_Test
  SOURCE_FILES HttpCharStream_Test.cpp
)


ace_add_exe(ContentHandler_Test
  OUTPUT_NAME ContentHandler_Test
  FOLDER ACEXML/tests
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(ContentHandler_Test
  SOURCE_FILES ContentHandler_Test.cpp
)

add_subdirectory(util)
