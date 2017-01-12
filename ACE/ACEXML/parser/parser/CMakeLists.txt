

ace_add_lib(ACEXML_Parser
  OUTPUT_NAME ACEXML_Parser
  PACKAGE ACE
  FOLDER ACEXML/parser/parser
  DEFINE_SYMBOL ACEXML_PARSER_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACEXML
                        ACE
)
ace_target_cxx_sources(ACEXML_Parser
  SOURCE_FILES Parser.cpp
               ParserInternals.cpp
               ParserContext.cpp
               Entity_Manager.cpp
  HEADER_FILES Entity_Manager.h
               Parser.h
               ParserContext.h
               ParserInternals.h
  INLINE_FILES Entity_Manager.inl
               Parser.inl
               ParserContext.inl
)

