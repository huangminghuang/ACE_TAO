

ace_add_exe(Websvcs_Test
  OUTPUT_NAME Test_Url_Addr
  FOLDER ACE/websvcs/tests
  LINK_LIBRARIES websvcs
                 ACE
)
ace_target_cxx_sources(Websvcs_Test
  SOURCE_FILES Test_URL_Addr.cpp
)

