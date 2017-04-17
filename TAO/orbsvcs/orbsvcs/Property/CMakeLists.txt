
ace_add_lib(TAO_CosProperty
  DEFINE_SYMBOL TAO_PROPERTY_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Property
  PUBLIC_INCLUDE_DIRECTORIES ${ORBSVCS_LIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_CosProperty
  HEADER_FILES property_export.h
)

ace_add_lib(TAO_CosProperty_Skel
  DEFINE_SYMBOL TAO_PROPERTY_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Property
  PUBLIC_LINK_LIBRARIES TAO_CosProperty TAO_PortableServer
)

ace_target_cxx_sources(TAO_CosProperty
  HEADER_FILES property_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_CosProperty
  SKEL_TARGETS TAO_CosProperty_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,stub_export_macro=TAO_Property_Export
            -Wb,stub_export_include=orbsvcs/Property/property_export.h
            -Wb,skel_export_macro=TAO_Property_Skel_Export
            -Wb,skel_export_include=orbsvcs/Property/property_skel_export.h
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..

  IDL_FILES ../CosProperty.idl
  WORKING_DIRECTORY ..
)

ace_add_lib(TAO_CosProperty_Serv
  DEFINE_SYMBOL TAO_PROPERTY_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Property
  PUBLIC_LINK_LIBRARIES TAO_CosProperty_Skel TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_CosProperty_Serv
  SOURCE_FILES CosPropertyService_i.cpp
  HEADER_FILES CosPropertyService_i.h
)