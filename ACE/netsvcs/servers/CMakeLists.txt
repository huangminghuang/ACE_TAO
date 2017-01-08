

add_ace_exe(Netsvcs_server
  OUTPUT_NAME ace_netsvcs
  FOLDER netsvcs/servers
  INCLUDE_DIRECTORIES ${ACE_ROOT}/netsvcs/lib
  LINK_LIBRARIES ACE
                 netsvcs
)
target_cxx_sources(Netsvcs_server
  SOURCE_FILES main.cpp
)

