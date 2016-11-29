
add_orbsvcs_idls(Property
  IDLS ../CosProperty.idl
)

add_orbsvcs_lib(TAO_CosProperty
  DEFINE_SYMBOL TAO_PROPERTY_BUILD_DLL
  SOURCES ${Property_IDLS_STUB_FILES}
  PUBLIC_HEADER property_export.h
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_CosProperty_Skel
  DEFINE_SYMBOL TAO_PROPERTY_SKEL_BUILD_DLL
  SOURCES ${Property_IDLS_SKEL_FILES}
  PUBLIC_HEADER property_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosProperty TAO_PortableServer

)


add_orbsvcs_lib(TAO_CosProperty_Serv
  DEFINE_SYMBOL TAO_PROPERTY_SERV_BUILD_DLL
  SOURCES CosPropertyService_i.cpp
  PUBLIC_HEADER CosPropertyService_i.h
                CosPropertyService_i.inl
  PUBLIC_LINK_LIBRARIES TAO_CosProperty_Skel TAO_Svc_Utils

)

