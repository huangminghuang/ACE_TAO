

ace_add_lib(TAO_FT_Naming
  DEFINE_SYMBOL TAO_FTNAMING_INTF_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Naming/FaultTolerant
  PUBLIC_LINK_LIBRARIES TAO_PortableGroup
                        TAO_CosNaming_Serv
)

ace_target_cxx_sources(TAO_FT_Naming
  SOURCE_FILES nsgroup_svc.cpp
  HEADER_FILES nsgroup_svc.h
               ftnaming_intf_export.h
)

tao_idl_sources(
  TARGETS TAO_FT_Naming
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -GC -Wb,export_macro=TAO_FtNaming_Intf_Export
            -Wb,export_include=orbsvcs/Naming/FaultTolerant/ftnaming_intf_export.h
            -I${TAO_ROOT}/tao
  IDL_FILES ../../FT_NamingManager.idl
  WORKING_DIRECTORY ../..
)


ace_add_lib(TAO_FT_Naming_Replication
  DEFINE_SYMBOL TAO_FTNAMING_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Naming/FaultTolerant
  PUBLIC_LINK_LIBRARIES TAO_FT_Naming
                        TAO_FTORB_Utils
)

ace_target_cxx_sources(TAO_FT_Naming_Replication
  HEADER_FILES ftnaming_export.h
)

tao_idl_sources(
  TARGETS TAO_FT_Naming_Replication
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${TAO_ROOT}/tao
            -GC -Wb,export_macro=TAO_FtNaming_Export
            -Wb,export_include=orbsvcs/Naming/FaultTolerant/ftnaming_export.h
  IDL_FILES ../../FT_NamingReplication.idl
  WORKING_DIRECTORY ../..
)

ace_add_lib(TAO_FT_Naming_Serv
  DEFINE_SYMBOL TAO_FTNAMING_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Naming/FaultTolerant
  PUBLIC_LINK_LIBRARIES TAO_FT_Naming TAO_CosLoadBalancing TAO_CosNaming_Serv TAO_FT_Naming_Replication

)
ace_target_cxx_sources(TAO_FT_Naming_Serv
  SOURCE_FILES FT_Naming_Manager.cpp
               FT_Naming_Replication_Manager.cpp
               FT_Naming_Server.cpp
               FT_Persistent_Naming_Context.cpp
               FT_Persistent_Naming_Context_Factory.cpp
               FT_Random.cpp
               FT_Round_Robin.cpp
               FT_Storable_Naming_Context.cpp
               FT_Storable_Naming_Context_Factory.cpp
               FT_PG_Object_Group_Storable.cpp
               FT_PG_Group_Factory.cpp
  HEADER_FILES FT_Naming_Manager.h
               FT_Naming_Replication_Manager.h
               FT_Naming_Server.h
               FT_Persistent_Naming_Context.h
               FT_Persistent_Naming_Context_Factory.h
               FT_Random.h
               FT_Round_Robin.h
               FT_Storable_Naming_Context.h
               FT_Storable_Naming_Context_Factory.h
               FT_PG_Object_Group_Storable.h
               FT_PG_Group_Factory.h
)
