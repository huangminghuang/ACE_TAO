
ace_target_cxx_sources(TAO_RTEvent
  SOURCE_FILES Event_Utilities.cpp
  HEADER_FILES Event_Utilities.h
               Event_Utilities.inl
               Event_Service_Constants.h
)

tao_idl_sources(TAO_RTEvent
  STUB_TARGETS TAO_RTEvent
  SKEL_TARGETS TAO_RTEvent_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_LIST_DIR}/../../tao
            -I${CMAKE_CURRENT_LIST_DIR}/..
            -I${CMAKE_CURRENT_LIST_DIR} -GT
            -Wb,stub_export_macro=TAO_RTEvent_Export
            -Wb,stub_export_include=orbsvcs/Event/event_export.h
            -Wb,skel_export_macro=TAO_RTEvent_Skel_Export
            -Wb,skel_export_include=orbsvcs/Event/event_skel_export.h
  IDL_FILES RtecDefaultEventData.idl
            RtecEventComm.idl
            RtecEventChannelAdmin.idl
            RtecUDPAdmin.idl
)