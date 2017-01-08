
add_ace_lib(TAO_CosProperty
  DEFINE_SYMBOL TAO_PROPERTY_BUILD_DLL
  PACKAGE TAO
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../..>
                             $<INSTALL_INTERFACE:${TAO_INSTALL_DIR}/orbsvcs>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

target_cxx_sources(TAO_CosProperty
  HEADER_FILES property_export.h
)

add_ace_lib(TAO_CosProperty_Skel
  DEFINE_SYMBOL TAO_PROPERTY_SKEL_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_CosProperty TAO_PortableServer
)

target_cxx_sources(TAO_CosProperty
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

add_ace_lib(TAO_CosProperty_Serv
  DEFINE_SYMBOL TAO_PROPERTY_SERV_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_CosProperty_Skel TAO_Svc_Utils
)

target_cxx_sources(TAO_CosProperty_Serv
  SOURCE_FILES CosPropertyService_i.cpp
  HEADER_FILES CosPropertyService_i.h
)