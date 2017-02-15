

ace_add_exe(asnmp_agent
  OUTPUT_NAME agent
  FOLDER ACE/ASNMP/agent
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_agent
  SOURCE_FILES agent_impl.cpp
               main.cpp
               snmp_agent.cpp
  HEADER_FILES agent_impl.h
               snmp_agent.h
)

