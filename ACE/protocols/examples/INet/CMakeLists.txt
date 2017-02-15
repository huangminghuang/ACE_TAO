

ace_add_exe(HTTP_Simple_exec
  OUTPUT_NAME http_simple_wget
  FOLDER ACE/protocols/examples/INet
  LINK_LIBRARIES ACE_INet
                 ACE
)
ace_target_cxx_sources(HTTP_Simple_exec
  SOURCE_FILES HTTP_Simple_exec.cpp
)


ace_add_exe(HTTPS_Simple_exec
  OUTPUT_NAME https_simple_wget
  FOLDER ACE/protocols/examples/INet
  LINK_LIBRARIES ACE_INet
                 ACE
)
ace_target_cxx_sources(HTTPS_Simple_exec
  SOURCE_FILES HTTP_Simple_exec.cpp
)


ace_add_exe(FTP_Simple_exec
  OUTPUT_NAME ftp_simple_wget
  FOLDER ACE/protocols/examples/INet
  LINK_LIBRARIES ACE_INet
                 ACE
)
ace_target_cxx_sources(FTP_Simple_exec
  SOURCE_FILES FTP_Simple_exec.cpp
)

