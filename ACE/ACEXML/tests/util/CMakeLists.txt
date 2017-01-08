

add_ace_exe(util
  OUTPUT_NAME tester
  FOLDER ACEXML/tests/util
  LINK_LIBRARIES ACE
                 ACEXML_Parser
)
target_cxx_sources(util
  SOURCE_FILES test.cpp
)

