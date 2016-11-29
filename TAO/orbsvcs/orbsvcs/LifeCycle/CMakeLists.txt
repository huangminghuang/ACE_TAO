add_orbsvcs_idls(LifeCycle
  IDLS ../CosLifeCycle.idl
)

add_orbsvcs_lib(TAO_CosLifeCycle
  DEFINE_SYMBOL TAO_COSLIFECYCLE_BUILD_DLL
  SOURCES ${LifeCycle_IDLS_STUB_FILES}
  PUBLIC_HEADER lifecycle_export.h
  PUBLIC_LINK_LIBRARIES TAO TAO_AnyTypeCode TAO_CosNaming

)

add_orbsvcs_lib(TAO_CosLifeCycle_Skel
  DEFINE_SYMBOL TAO_COSLIFECYCLE_SKEL_BUILD_DLL
  SOURCES ${LifeCycle_IDLS_SKEL_FILES}
  PUBLIC_HEADER lifecycle_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosLifeCycle TAO_PortableServer

)




