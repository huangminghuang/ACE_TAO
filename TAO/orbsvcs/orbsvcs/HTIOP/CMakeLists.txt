ace_requires("TARGET ACE_HTBP")

ace_add_lib(TAO_HTIOP
  DEFINE_SYMBOL HTIOP_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES ACE_HTBP TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_HTIOP
  SOURCE_FILES HTIOP_Acceptor.cpp
               HTIOP_Acceptor_Impl.cpp
               HTIOP_Completion_Handler.cpp
               HTIOP_Connection_Handler.cpp
               HTIOP_Connector.cpp
               HTIOP_Connector_Impl.cpp
               HTIOP_Endpoint.cpp
               HTIOP_Factory.cpp
               HTIOP_Profile.cpp
               HTIOP_Transport.cpp
  HEADER_FILES HTIOP_Acceptor.h
               HTIOP_Acceptor_Impl.h
               HTIOP_Completion_Handler.h
               HTIOP_Connection_Handler.h
               HTIOP_Connector.h
               HTIOP_Connector_Impl.h
               HTIOP_Endpoint.h
               HTIOP_Export.h
               HTIOP_Factory.h
               HTIOP_Profile.h
               HTIOP_Transport.h
  INLINE_FILES HTIOP_Acceptor.inl
               HTIOP_Endpoint.inl
)

tao_idl_sources(
  TARGETS TAO_HTIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=HTIOP_Export
            -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h -SS
  IDL_FILES ../HTIOP.idl
  WORKING_DIRECTORY ..
)

tao_idl_sources(
  TARGETS TAO_HTIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=HTIOP_Export
            -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h
            -SS -Sci -Gp -Gd -Sa -Sorb
  IDL_FILES htiop_endpoints.pidl
)
