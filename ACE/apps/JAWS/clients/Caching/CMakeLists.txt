

ace_requires(ACE_FILECACHE)

ace_add_exe(http_client
  OUTPUT_NAME http_client
  FOLDER ACE/apps/JAWS/clients/Caching
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(http_client
  SOURCE_FILES http_client.cpp
               http_handler.cpp
  HEADER_FILES http_handler.h
)

