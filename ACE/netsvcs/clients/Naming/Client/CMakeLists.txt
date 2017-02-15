

ace_add_exe(Netsvcs_Client_Test
  OUTPUT_NAME client_test
  FOLDER ACE/netsvcs/clients/Naming/Client
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Netsvcs_Client_Test
  SOURCE_FILES Client_Test.cpp
               main.cpp
  HEADER_FILES Client_Test.h
)

