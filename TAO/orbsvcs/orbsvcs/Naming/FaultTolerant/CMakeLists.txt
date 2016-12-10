
add_orbsvcs_idls(FtNaming_Intf
  FLAGS -GC -I${TAO_ROOT}/tao
  IDL_FILES ../../FT_NamingManager.idl
)

add_orbsvcs_lib(TAO_FT_Naming
  DEFINE_SYMBOL TAO_FTNAMING_INTF_BUILD_DLL
  SOURCES ${FtNaming_Intf_IDLS_OUTPUT_FILES} nsgroup_svc.cpp
  PUBLIC_HEADER nsgroup_svc.h ftnaming_intf_export.h
  PUBLIC_LINK_LIBRARIES TAO_PortableGroup TAO_CosNaming_Serv

)

add_orbsvcs_idls(FtNaming
  FLAGS -GC -I${TAO_ROOT}/tao
  IDL_FILES ../../FT_NamingReplication.idl
)

add_orbsvcs_lib(TAO_FT_Naming_Replication
  DEFINE_SYMBOL TAO_FTNAMING_BUILD_DLL
  SOURCES ${FtNaming_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER ftnaming_export.h
  PUBLIC_LINK_LIBRARIES TAO_FT_Naming TAO_FTORB_Utils

)

add_orbsvcs_lib(TAO_FT_Naming_Serv
  DEFINE_SYMBOL TAO_FTNAMING_BUILD_DLL
  SOURCES FT_Naming_Manager.cpp
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
  PUBLIC_HEADER FT_Naming_Manager.h
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
  PUBLIC_LINK_LIBRARIES TAO_FT_Naming TAO_CosLoadBalancing TAO_CosNaming_Serv TAO_FT_Naming_Replication

)

