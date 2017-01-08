


add_ace_lib(TAO_AV
  DEFINE_SYMBOL TAO_AV_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_CosProperty_Serv
                        TAO_CosNaming
                        TAO_Svc_Utils
                        ACE_QoS

)

target_cxx_sources(TAO_AV
  SOURCE_FILES AVStreams_i.cpp
               AV_Core.cpp
               Endpoint_Strategy.cpp
               Fill_ACE_QoS.cpp
               FlowSpec_Entry.cpp
               MCast.cpp
               Policy.cpp
               Protocol_Factory.cpp
               QoS_UDP.cpp
               RTCP.cpp
               RTCP_Channel.cpp
               RTCP_Packet.cpp
               RTP.cpp
               SCTP_SEQ.cpp
               TCP.cpp
               Transport.cpp
               UDP.cpp
               default_resource.cpp
               md5c.cpp
               media_timer.cpp
               sfp.cpp
  HEADER_FILES AVStreams_i.h
               AV_Core.h
               AV_export.h
               Endpoint_Strategy.h
               Endpoint_Strategy_T.h
               Fill_ACE_QoS.h
               FlowSpec_Entry.h
               Flows_T.h
               MCast.h
               Policy.h
               Protocol_Factory.h
               QoS_UDP.h
               RTCP.h
               RTCP_Channel.h
               RTCP_Packet.h
               RTP.h
               Resource_Factory.h
               SCTP_SEQ.h
               TCP.h
               Transport.h
               UDP.h
               default_resource.h
               global.h
               md5.h
               media_timer.h
               ntp-time.h
               sfp.h
  INLINE_FILES AVStreams_i.inl
               FlowSpec_Entry.inl
               MCast.inl
               Policy.inl
               QoS_UDP.inl
               Transport.inl
               UDP.inl
  TEMPLATE_FILES Endpoint_Strategy_T.cpp
                 Flows_T.cpp
)


tao_idl_sources(
  TARGETS AV_IDLS
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${TAO_ROOT}/orbsvcs
            -I${TAO_ROOT}/orbsvcs/orbsvcs
            -Wb,export_macro=TAO_AV_Export
            -Wb,export_include=orbsvcs/AV/AV_export.h
  IDL_FILES  ../AVStreams.idl
             ../Null_MediaCtrl.idl
             ../sfp.idl
  WORKING_DIRECTORY ..
)


