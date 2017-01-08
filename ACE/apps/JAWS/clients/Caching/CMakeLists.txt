

requires(ACE_FILECACHE)

add_ace_exe(http_client
  OUTPUT_NAME http_client
  FOLDER apps/JAWS/clients/Caching
  LINK_LIBRARIES ACE
)
target_cxx_sources(http_client
  SOURCE_FILES http_handler.cpp
               http_client.cpp
  HEADER_FILES http_handler.h
)

