

ace_add_exe(tao_cosnaming
  OUTPUT_NAME tao_cosnaming
  PACKAGE TAO
  FOLDER orbsvcs/Naming_Service
  ASPECTS NEGOTIATE_CODESETS
          TAO
  LINK_LIBRARIES TAO_AnyTypeCode
                 TAO_CosNaming_Serv
                 TAO_Svc_Utils
                 TAO_ImR_Client
)
ace_target_cxx_sources(tao_cosnaming
  SOURCE_FILES Naming_Server.cpp
               Naming_Service.cpp
  HEADER_FILES Naming_Service.h
)


ace_add_exe(tao_nt_cosnaming
  OUTPUT_NAME tao_nt_cosnaming
  PACKAGE TAO
  REQUIRES WINNT
  FOLDER orbsvcs/Naming_Service
  ASPECTS NEGOTIATE_CODESETS
          TAO
  LINK_LIBRARIES TAO_AnyTypeCode
                 TAO_CosNaming_Serv
                 TAO_Svc_Utils
)
ace_target_cxx_sources(tao_nt_cosnaming
  SOURCE_FILES NT_Naming_Server.cpp
               NT_Naming_Service.cpp
               Naming_Service.cpp
  HEADER_FILES NT_Naming_Service.h
               Naming_Service.h
)

