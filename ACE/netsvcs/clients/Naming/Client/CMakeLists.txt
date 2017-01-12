

ace_add_exe(Netsvcs_Client_Test
  OUTPUT_NAME client_test
  FOLDER netsvcs/clients/Naming/Client
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Netsvcs_Client_Test
  SOURCE_FILES main.cpp
               Client_Test.cpp
  HEADER_FILES Client_Test.h
)

