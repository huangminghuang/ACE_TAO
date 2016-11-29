list(APPEND TAO_BASE_IDL_FLAGS
  -GX
  -Wb,stub_export_macro=TAO_IFR_CLIENT_Export
  -Wb,stub_export_include=tao/IFR_Client/ifr_client_export.h
  -Wb,stub_export_file=ifr_client_export.h
  -Wb,skel_export_macro=TAO_IFR_CLIENT_SKEL_Export
  -Wb,skel_export_include=tao/IFR_Client/ifr_client_skel_export.h
  -Wb,skel_export_file=ifr_client_skel_export.h
  -iC tao/IFR_Client -GT
)


add_tao_idl_targets(IFR_Client_IDLS
  IDLS IFR_Basic.pidl
       IFR_Components.pidl
       IFR_Extended.pidl
)

add_tao_idl_targets(IFR_Client_IDLS
  FLAGS -Gxhst -Gxhsk
  IDLS IFR_Base.pidl
)


add_tao_component(
  NAME IFR_Client
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
  SOURCES IFR_Client_Adapter_Impl.cpp
          ${IFR_Client_IDLS_STUB_FILES}
  PUBLIC_HEADER IFR_Client_Adapter_Impl.h
                ${IFR_Client_IDLS_STUB_HEADER_FILES}
                ${IFR_Client_IDLS_ANYOP_HEADER_FILES}
)

add_tao_component(
  NAME IFR_Client_skel
  IDLS ""
  SOURCES ${IFR_Client_IDLS_SKEL_FILES}
  PUBLIC_HEADER ${IFR_Client_IDLS_SKEL_HEADER_FILES}
  PUBLIC_LINK_LIBRARIES TAO_IFR_Client TAO_PortableServer
)