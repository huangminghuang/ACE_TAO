

add_ace_lib(TAO_IFR_Client
  OUTPUT_NAME TAO_IFR_Client
  PACKAGE TAO
  FOLDER tao/IFR_Client
  ASPECTS TAO
  DEFINE_SYMBOL TAO_IFR_CLIENT_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)
target_cxx_sources(TAO_IFR_Client
  SOURCE_FILES IFR_Client_Adapter_Impl.cpp
  HEADER_FILES IFR_Client_Adapter_Impl.h
)


add_ace_lib(TAO_IFR_Client_skel
  OUTPUT_NAME TAO_IFR_Client_skel
  PACKAGE TAO
  FOLDER tao/IFR_Client
  ASPECTS TAO
  DEFINE_SYMBOL TAO_IFR_CLIENT_SKEL_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_IFR_Client
                        TAO_PortableServer
                        TAO_AnyTypeCode
)

set(IFR_Client_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                         -GX
                         -Wb,stub_export_macro=TAO_IFR_CLIENT_Export
                         -Wb,stub_export_include=tao/IFR_Client/ifr_client_export.h
                         -Wb,stub_export_file=ifr_client_export.h
                         -Wb,skel_export_macro=TAO_IFR_CLIENT_SKEL_Export
                         -Wb,skel_export_include=tao/IFR_Client/ifr_client_skel_export.h
                         -Wb,skel_export_file=ifr_client_skel_export.h
                         -iC tao/IFR_Client -GT)
tao_idl_sources(
  STUB_TARGETS TAO_IFR_Client
  SKEL_TARGETS TAO_IFR_Client_skel
  IDL_FLAGS ${IFR_Client_Idl_FLAGS}
            -Gxhst -Gxhsk
  IDL_FILES IFR_Base.pidl
)

tao_idl_sources(
  STUB_TARGETS TAO_IFR_Client
  SKEL_TARGETS TAO_IFR_Client_skel
  IDL_FLAGS ${IFR_Client_Idl_FLAGS}
  IDL_FILES IFR_Basic.pidl
            IFR_Components.pidl
            IFR_Extended.pidl
)

