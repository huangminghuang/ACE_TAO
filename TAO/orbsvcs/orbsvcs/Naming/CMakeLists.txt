
add_orbsvcs_idls(Naming
  IDLS ../CosNaming.idl
)

add_orbsvcs_lib(TAO_CosNaming
  DEFINE_SYMBOL TAO_NAMING_BUILD_DLL
  SOURCES Naming_Client.cpp
          ${Naming_IDLS_STUB_FILES}
  PUBLIC_HEADER naming_export.h
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils

)


add_orbsvcs_lib(TAO_CosNaming_Skel
  DEFINE_SYMBOL TAO_NAMING_SKEL_BUILD_DLL
  SOURCES ${Naming_IDLS_SKEL_FILES}
  PUBLIC_HEADER naming_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosNaming

)


set(cosnaming_serv_sources
  Entries.cpp
  Hash_Naming_Context.cpp
  Naming_Context_Interface.cpp
  Naming_Loader.cpp
  Naming_Server.cpp
  Storable_Naming_Context_Factory.cpp
  Transient_Naming_Context.cpp
)

if (NOT CORBA_E_MICRO)
  list(APPEND cosnaming_serv_sources
    Persistent_Context_Index.cpp
    Persistent_Entries.cpp
    Persistent_Naming_Context.cpp
    Storable.cpp
    Storable_Naming_Context.cpp
    Storable_Naming_Context_Activator.cpp
    Storable_Naming_Context_ReaderWriter.cpp
    Persistent_Naming_Context_Factory.cpp
    Storable_Naming_Context_Factory.cpp
  )
endif()


file(GLOB headers *.h *.inl)

add_orbsvcs_lib(TAO_CosNaming_Serv
  DEFINE_SYMBOL TAO_NAMING_SERV_BUILD_DLL
  SOURCES ${cosnaming_serv_sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_CosNaming_Skel
                        TAO_IORTable
                        ${OPTIONAL_MESSAGING}

)



