if (MINIMUM_CORBA OR CORBA_E_MICRO OR CORBA_E_COMPACT OR (NOT TARGET TAO_Messaging))
  return()
endif()

add_orbsvcs_idls(PortableGroup
  IDL_FILES  ../miop.idl
        ../PortableGroup_Simple_DS.idl
)

add_orbsvcs_idls(PortableGroup
  FLAGS -GC
  IDL_FILES  ../PortableGroup.idl
)

file(GLOB sources *.cpp)
file(GLOB header *.h *.inl)

add_orbsvcs_lib(TAO_PortableGroup
  DEFINE_SYMBOL TAO_PORTABLEGROUP_BUILD_DLL
  SOURCES ${sources} ${PortableGroup_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES  TAO_CosNaming TAO_IORManip TAO_Messaging TAO_Svc_Utils

)

