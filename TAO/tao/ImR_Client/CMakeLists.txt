

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_ImR_Client
  OUTPUT_NAME TAO_ImR_Client
  PACKAGE TAO
  FOLDER TAO/tao/ImR_Client
  DEFINE_SYMBOL TAO_IMR_CLIENT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_IORManip
                        TAO_AnyTypeCode
                        TAO_Valuetype
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_ImR_Client
  SOURCE_FILES ImR_Client.cpp
               ServerObject_i.cpp
  HEADER_FILES ImR_Client.h
               ServerObject_i.h
               imr_client_export.h
)


set(ImR_Client_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS})
tao_idl_sources(
  TARGETS TAO_ImR_Client
  IDL_FLAGS ${ImR_Client_Idl_FLAGS} -Gp
            -Gd -Sorb -GA
            -Wb,export_macro=TAO_IMR_Client_Export
            -Wb,export_include=tao/ImR_Client/imr_client_export.h
            -iC tao/ImR_Client
  IDL_FILES ServerObject.idl
)

tao_idl_sources(
  TARGETS TAO_ImR_Client
  IDL_FLAGS ${ImR_Client_Idl_FLAGS} -Gp
            -Gd -Sorb -GX
            -I${TAO_INCLUDE_DIR}/tao/ImR_Client
            -Wb,export_macro=TAO_IMR_Client_Export
            -Wb,export_include=tao/ImR_Client/imr_client_export.h
            -iC tao/ImR_Client
  IDL_FILES ImplRepo.idl
)

