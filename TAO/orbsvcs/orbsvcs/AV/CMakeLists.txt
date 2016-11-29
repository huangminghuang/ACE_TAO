
add_tao_idl_targets(AV_IDLS
  FLAGS -Wb,export_macro=TAO_AV_Export
        -Wb,export_include=orbsvcs/AV/AV_export.h
  IDLS  ../AVStreams.idl
        ../Null_MediaCtrl.idl
        ../sfp.idl
)


set(sources
  AVStreams_i.cpp
  AV_Core.cpp
  Endpoint_Strategy.cpp
  Endpoint_Strategy_T.cpp
  Fill_ACE_QoS.cpp
  FlowSpec_Entry.cpp
  Flows_T.cpp
  MCast.cpp
  md5c.cpp
  Policy.cpp
  Protocol_Factory.cpp
  QoS_UDP.cpp
  RTCP.cpp
  RTCP_Channel.cpp
  RTCP_Packet.cpp
  RTP.cpp
  TCP.cpp
  Transport.cpp
  UDP.cpp
  default_resource.cpp
  media_timer.cpp
  sfp.cpp
  SCTP_SEQ.cpp
  ${AV_IDL_OUTPUT_FILES}
)


set(headers
  AVStreams_i.h
  AV_Core.h
  AV_export.h
  Endpoint_Strategy.h
  Endpoint_Strategy_T.h
  Fill_ACE_QoS.h
  FlowSpec_Entry.h
  Flows_T.h
  MCast.h
  md5.h
  Policy.h
  Protocol_Factory.h
  QoS_UDP.h
  RTCP.h
  RTCP_Channel.h
  RTCP_Packet.h
  RTP.h
  Resource_Factory.h
  UDP.h
  default_resource.h
  global.h
  media_timer.h
  ntp-time.h
  sfp.h
  SCTP_SEQ.h
  Endpoint_Strategy_T.cpp
  Flows_T.cpp
  ${AV_IDL_HEADER_FILES}
)

add_orbsvcs_lib(TAO_AV
  DEFINE_SYMBOL TAO_AV_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_CosProperty_Serv
                        TAO_CosNaming
                        TAO_Svc_Utils
                        ACE_QoS

)

export_orbsvc_package(TAO_AV)