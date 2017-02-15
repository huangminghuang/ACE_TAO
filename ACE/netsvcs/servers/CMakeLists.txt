

ace_add_exe(Netsvcs_server
  OUTPUT_NAME ace_netsvcs
  FOLDER ACE/netsvcs/servers
  INCLUDE_DIRECTORIES ${ACE_ROOT}/netsvcs/lib
  LINK_LIBRARIES ACE
                 netsvcs
)
ace_target_cxx_sources(Netsvcs_server
  SOURCE_FILES main.cpp
)

