

ace_add_exe(util
  OUTPUT_NAME tester
  FOLDER ACE/ACEXML/tests/util
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
ace_target_cxx_sources(util
  SOURCE_FILES test.cpp
)

