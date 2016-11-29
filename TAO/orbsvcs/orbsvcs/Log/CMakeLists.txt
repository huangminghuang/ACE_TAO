

add_orbsvcs_idls(Log
  IDLS ../DsLogAdmin.idl
       ../DsLogNotification.idl
)

add_orbsvcs_lib(TAO_DsLogAdmin
  DEFINE_SYMBOL TAO_LOG_BUILD_DLL
  SOURCES ${Log_IDLS_STUB_FILES}
  PUBLIC_HEADER log_export.h
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_DsLogAdmin_Skel
  DEFINE_SYMBOL TAO_LOG_SKEL_BUILD_DLL
  SOURCES ${Log_IDLS_SKEL_FILES}
  PUBLIC_HEADER log_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin TAO_PortableServer

)

set(log_serv_sources
  BasicLogFactory_i.cpp
  BasicLog_i.cpp
  Hash_Iterator_i.cpp
  Hash_LogRecordStore.cpp
  Hash_LogStore.cpp
  Hash_Persistence_Strategy.cpp
  Iterator_i.cpp
  LogActivator.cpp
  LogMgr_i.cpp
  LogNotification.cpp
  LogRecordStore.cpp
  Log_Compaction_Handler.cpp
  Log_Constraint_Interpreter.cpp
  Log_Constraint_Visitors.cpp
  Log_Flush_Handler.cpp
  Log_i.cpp
)

set(log_serv_headers
  LogStore.h
  Log_Persistence_Strategy.h
  log_serv_export.h
)

add_orbsvcs_lib(TAO_DsLogAdmin_Serv
  DEFINE_SYMBOL TAO_LOG_SERV_BUILD_DLL
  SOURCES ${log_serv_sources}
  PUBLIC_HEADER ${log_serv_headers}
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin_Skel TAO_DynamicAny TAO_Utils TAO_Svc_Utils TAO_ETCL ACE_ETCL_Parser

)

add_orbsvcs_idls(EventLog
  IDLS ../DsEventLogAdmin.idl
)

add_orbsvcs_lib(TAO_DsEventLogAdmin
  DEFINE_SYMBOL TAO_EVENTLOG_BUILD_DLL
  SOURCES ${EventLog_IDLS_STUB_FILES}
  PUBLIC_HEADER eventlog_export.h
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin TAO_CosEvent

)

add_orbsvcs_lib(TAO_DsEventLogAdmin_Skel
  DEFINE_SYMBOL TAO_EVENTLOG_SKEL_BUILD_DLL
  SOURCES ${EventLog_IDLS_SKEL_FILES}
  PUBLIC_HEADER eventlog_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_DsEventLogAdmin TAO_DsLogAdmin_Skel TAO_CosEvent_Skel

)

add_orbsvcs_lib(TAO_DsEventLogAdmin_Serv
  DEFINE_SYMBOL TAO_EVENTLOG_SERV_BUILD_DLL
  SOURCES EventLogConsumer.cpp
          EventLogFactory_i.cpp
          EventLogNotification.cpp
          EventLog_i.cpp
  PUBLIC_HEADER eventlog_serv_export.h
  PUBLIC_LINK_LIBRARIES TAO_DsEventLogAdmin_Skel TAO_DsLogAdmin_Serv TAO_CosEvent_Serv

)

add_orbsvcs_idls(RTEventLog
  IDLS ../RTEventLogAdmin.idl
)

add_orbsvcs_lib(TAO_RTEventLogAdmin
  DEFINE_SYMBOL TAO_RTEVENTLOG_BUILD_DLL
  SOURCES ${RTEventLog_IDLS_STUB_FILES}
  PUBLIC_HEADER rteventlog_export.h
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin TAO_RTEvent

)

add_orbsvcs_lib(TAO_RTEventLogAdmin_Skel
  DEFINE_SYMBOL TAO_RTEVENTLOG_SKEL_BUILD_DLL
  SOURCES ${RTEventLog_IDLS_SKEL_FILES}
  PUBLIC_HEADER log_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_RTEventLogAdmin TAO_DsEventLogAdmin_Skel TAO_RTEvent_Skel

)

add_orbsvcs_lib(TAO_RTEventLogAdmin_Serv
  DEFINE_SYMBOL TAO_RTEVENTLOG_SERV_BUILD_DLL
  SOURCES RTEventLogConsumer.cpp
          RTEventLogFactory_i.cpp
          RTEventLogNotification.cpp
          RTEventLog_i.cpp
  PUBLIC_HEADER rteventlog_serv_export.h
  PUBLIC_LINK_LIBRARIES TAO_RTEventLogAdmin_Skel TAO_DsEventLogAdmin_Serv TAO_RTEvent_Serv TAO_RTSched

)


