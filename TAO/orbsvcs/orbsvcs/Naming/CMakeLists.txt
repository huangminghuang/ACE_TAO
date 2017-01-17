
ace_add_lib(TAO_CosNaming
  DEFINE_SYMBOL TAO_NAMING_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/Naming
  PUBLIC_LINK_LIBRARIES TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_CosNaming
  SOURCE_FILES Naming_Client.cpp
  HEADER_FILES naming_export.h
               Naming_Client.h
)

ace_add_lib(TAO_CosNaming_Skel
  DEFINE_SYMBOL TAO_NAMING_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/Naming
  PUBLIC_LINK_LIBRARIES TAO_CosNaming
)

ace_target_cxx_sources(TAO_CosNaming_Skel
  HEADER_FILES naming_skel_export
)

tao_idl_sources(
  STUB_TARGETS TAO_CosNaming
  SKEL_TARGETS TAO_CosNaming_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,stub_export_macro=TAO_Naming_Export
            -Wb,stub_export_include=orbsvcs/Naming/naming_export.h
            -Wb,skel_export_macro=TAO_Naming_Skel_Export
            -Wb,skel_export_include=orbsvcs/Naming/naming_skel_export.h
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
  IDL_FILES ../CosNaming.idl
  WORKING_DIRECTORY ..
)

ace_add_lib(TAO_CosNaming_Serv
  DEFINE_SYMBOL TAO_NAMING_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/Naming
  PUBLIC_LINK_LIBRARIES TAO_CosNaming_Skel
                        TAO_IORTable
                        TAO_Messaging
)

ace_target_cxx_sources(TAO_CosNaming_Serv
  SOURCE_FILES Entries.cpp
               Hash_Naming_Context.cpp
               Naming_Context_Interface.cpp
               Naming_Loader.cpp
               Naming_Server.cpp
               Storable_Naming_Context_Factory.cpp
               Transient_Naming_Context.cpp
  HEADER_FILES Entries.h
              Hash_Naming_Context.h
              Naming_Context_Interface.h
              Naming_Loader.h
              Naming_Server.h
              Storable_Naming_Context_Factory.h
              Transient_Naming_Context.h
)

if (NOT TAO_HAS_CORBA_E_MICRO)
  ace_target_cxx_sources(TAO_CosNaming_Serv
    SOURCE_FILES Persistent_Context_Index.cpp
                 Persistent_Entries.cpp
                 Persistent_Naming_Context.cpp
                 Storable.cpp
                 Storable_Naming_Context.cpp
                 Storable_Naming_Context_Activator.cpp
                 Storable_Naming_Context_ReaderWriter.cpp
                 Persistent_Naming_Context_Factory.cpp
                 Storable_Naming_Context_Factory.cpp
    HEADER_FILES Persistent_Context_Index.h
                 Persistent_Entries.h
                 Persistent_Naming_Context.h
                 Storable.h
                 Storable_Naming_Context.h
                 Storable_Naming_Context_Activator.h
                 Storable_Naming_Context_ReaderWriter.h
                 Persistent_Naming_Context_Factory.h
                 Storable_Naming_Context_Factory.h
    INLINE_FILES Storable.inl
)
endif()






