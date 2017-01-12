add_ace_lib(TAO_CosLifeCycle
  DEFINE_SYMBOL TAO_COSLIFECYCLE_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO TAO_AnyTypeCode TAO_CosNaming
)

target_cxx_sources(TAO_CosLifeCycle
  HEADER_FILES lifecycle_export.h
)

add_ace_lib(TAO_CosLifeCycle_Skel
  DEFINE_SYMBOL TAO_COSLIFECYCLE_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_CosLifeCycle TAO_PortableServer
)

target_cxx_sources(TAO_CosLifeCycle_Skel
  HEADER_FILES lifecycle_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_CosLifeCycle
  SKEL_TARGETS TAO_CosLifeCycle_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_LifeCycle_Export
            -Wb,stub_export_include=orbsvcs/LifeCycle/lifecycle_export.h
            -Wb,skel_export_macro=TAO_LifeCycle_Skel_Export
            -Wb,skel_export_include=orbsvcs/LifeCycle/lifecycle_skel_export.h
  IDL_FILES ../CosLifeCycle.idl
  WORKING_DIRECTORY ..
)