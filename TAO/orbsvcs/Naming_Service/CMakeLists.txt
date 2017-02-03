

ace_add_exe(Naming_Service
  OUTPUT_NAME tao_cosnaming
  PACKAGE TAO
  FOLDER orbsvcs/Naming_Service
  LINK_LIBRARIES TAO_AnyTypeCode
                 TAO_CosNaming_Serv
                 TAO_Svc_Utils
                 TAO_ImR_Client
)
ace_target_cxx_sources(Naming_Service
  SOURCE_FILES Naming_Server.cpp
               Naming_Service.cpp
  HEADER_FILES Naming_Service.h
)


ace_add_exe(NT_Naming_Service
  OUTPUT_NAME tao_nt_cosnaming
  PACKAGE TAO
  REQUIRES WIN32
  FOLDER orbsvcs/Naming_Service
  LINK_LIBRARIES TAO_AnyTypeCode
                 TAO_CosNaming_Serv
                 TAO_Svc_Utils
)
ace_target_cxx_sources(NT_Naming_Service
  SOURCE_FILES NT_Naming_Server.cpp
               NT_Naming_Service.cpp
               Naming_Service.cpp
  HEADER_FILES NT_Naming_Service.h
               Naming_Service.h
)

