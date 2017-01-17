

ace_add_lib(TAO_FtRtEvent
  DEFINE_SYMBOL TAO_FTRTEVENT_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/FtRtEvent
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils
                        TAO_RTEvent_Serv
                        TAO_CosNaming
                        TAO_PI_Server
)

ace_target_cxx_sources(TAO_FtRtEvent
  SOURCE_FILES FTEC_Gateway.cpp
               Log.cpp
               Safe_InputCDR.cpp
               UUID.cpp
  HEADER_FILES FTEC_Gateway.h
               Log.h
               Safe_InputCDR.h
               ScopeGuard.h
               UUID.h
               activate_with_id.h
               ftrtevent_export.h
               resolve_init.h
  INLINE_FILES FTEC_Gateway.inl
               Log.inl
               Safe_InputCDR.inl
               UUID.inl
)

tao_idl_sources(
  TARGETS TAO_FtRtEvent
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${TAO_ROOT}/tao
            -I${TAO_ROOT}/orbsvcs
            -I${TAO_ROOT}/orbsvcs/orbsvcs
            -Wb,export_macro=TAO_FtRtEvent_Export
            -Wb,export_include=orbsvcs/FtRtEvent/Utils/ftrtevent_export.h
  IDL_FILES ../../FtRtecEventChannelAdmin.idl
  WORKING_DIRECTORY ../..
)

tao_idl_sources(
  TARGETS TAO_FtRtEvent
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${TAO_ROOT}/tao
            -I${TAO_ROOT}/orbsvcs
            -I${TAO_ROOT}/orbsvcs/orbsvcs
            -GC -Wb,export_macro=TAO_FtRtEvent_Export
            -Wb,export_include=orbsvcs/FtRtEvent/Utils/ftrtevent_export.h
  IDL_FILES ../../FTRT.idl
            ../../FtRtecEventComm.idl
            ../../FTRT_GroupManager.idl
  WORKING_DIRECTORY ../..
)
