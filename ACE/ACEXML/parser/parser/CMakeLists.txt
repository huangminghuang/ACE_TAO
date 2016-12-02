set(sources
  Entity_Manager.cpp
  Parser.cpp
  ParserContext.cpp
  ParserInternals.cpp
)

file(GLOB headers *.inl *.h)

add_ace_component(ACEXML_Parser
            SOURCES ${sources}
            PUBLIC_HEADER "${headers}"
            DEFINE_SYMBOL ACEXML_PARSER_BUILD_DLL
            PUBLIC_LINK_LIBRARIES ACEXML
            PACKAGE ACEXML)

