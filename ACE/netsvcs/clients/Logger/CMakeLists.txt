

ace_add_exe(direct_logging
  OUTPUT_NAME direct_logging
  FOLDER netsvcs/clients/Logger
  LINK_LIBRARIES ACE
                 netsvcs
)
ace_target_cxx_sources(direct_logging
  SOURCE_FILES direct_logging.cpp
)


ace_add_exe(indirect_logging
  OUTPUT_NAME indirect_logging
  FOLDER netsvcs/clients/Logger
  LINK_LIBRARIES ACE
                 netsvcs
)
ace_target_cxx_sources(indirect_logging
  SOURCE_FILES indirect_logging.cpp
)

