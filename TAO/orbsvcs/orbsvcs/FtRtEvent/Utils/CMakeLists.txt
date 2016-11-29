

add_orbsvcs_idls(FtRtEvent
  IDLS ../../FtRtecEventChannelAdmin.idl
)

add_orbsvcs_idls(FtRtEvent
  FLAGS -GC
  IDLS ../../FTRT.idl
       ../../FtRtecEventComm.idl
       ../../FTRT_GroupManager.idl
)

file(GLOB headers *.h *.inl)

add_orbsvcs_lib(TAO_FtRtEvent
  DEFINE_SYMBOL TAO_FtRtEvent
  SOURCES ${FtRtEvent_IDLS_OUTPUT_FILES}
          FTEC_Gateway.cpp
          Log.cpp
          Safe_InputCDR.cpp
          UUID.cpp
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils TAO_RTEvent_Serv TAO_CosNaming TAO_PI_Server
)