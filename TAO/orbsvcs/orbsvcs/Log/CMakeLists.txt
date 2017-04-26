


ace_add_lib(TAO_DsLogAdmin
  DEFINE_SYMBOL TAO_LOG_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_INCLUDE_DIRECTORIES ${ORBSVCS_LIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_DsLogAdmin
  HEADER_FILES log_export.h
)

ace_add_lib(TAO_DsLogAdmin_Skel
  DEFINE_SYMBOL TAO_LOG_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin
                        TAO_PortableServer
)

ace_target_cxx_sources(TAO_DsLogAdmin_Skel
  HEADER_FILES log_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_DsLogAdmin
  SKEL_TARGETS TAO_DsLogAdmin_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_Log_Export
            -Wb,stub_export_include=orbsvcs/Log/log_export.h
            -Wb,skel_export_macro=TAO_Log_Skel_Export
            -Wb,skel_export_include=orbsvcs/Log/log_skel_export.h
  IDL_FILES ../DsLogAdmin.idl
            ../DsLogNotification.idl
  WORKING_DIRECTORY ..
)


ace_add_lib(TAO_DsLogAdmin_Serv
  DEFINE_SYMBOL TAO_LOG_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin_Skel
                        TAO_DynamicAny
                        TAO_Utils
                        TAO_Svc_Utils
                        TAO_ETCL
                        ACE_ETCL_Parser
)

ace_target_cxx_sources(TAO_DsLogAdmin_Serv
  SOURCE_FILES BasicLogFactory_i.cpp
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
  HEADER_FILES BasicLogFactory_i.h
               BasicLog_i.h
               Hash_Iterator_i.h
               Hash_LogRecordStore.h
               Hash_LogStore.h
               Hash_Persistence_Strategy.h
               Iterator_i.h
               LogActivator.h
               LogMgr_i.h
               LogNotification.h
               LogRecordStore.h
               Log_Compaction_Handler.h
               Log_Constraint_Interpreter.h
               Log_Constraint_Visitors.h
               Log_Flush_Handler.h
               Log_i.h
               LogStore.h
               Log_Persistence_Strategy.h
               log_serv_export.h
)

ace_add_lib(TAO_DsEventLogAdmin
  DEFINE_SYMBOL TAO_EVENTLOG_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin
                        TAO_CosEvent
)

ace_target_cxx_sources(TAO_DsEventLogAdmin
  HEADER_FILES eventlog_export.h
)


ace_add_lib(TAO_DsEventLogAdmin_Skel
  DEFINE_SYMBOL TAO_EVENTLOG_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsEventLogAdmin
                        TAO_DsLogAdmin_Skel
                        TAO_CosEvent_Skel

)

ace_target_cxx_sources(TAO_DsEventLogAdmin_Skel
  HEADER_FILES eventlog_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_DsEventLogAdmin
  SKEL_TARGETS TAO_DsEventLogAdmin_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_EventLog_Export
            -Wb,stub_export_include=orbsvcs/Log/eventlog_export.h
            -Wb,skel_export_macro=TAO_EventLog_Skel_Export
            -Wb,skel_export_include=orbsvcs/Log/eventlog_skel_export.h
  IDL_FILES ../DsEventLogAdmin.idl
  WORKING_DIRECTORY ..
)

ace_add_lib(TAO_DsEventLogAdmin_Serv
  DEFINE_SYMBOL TAO_EVENTLOG_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsEventLogAdmin_Skel
                        TAO_DsLogAdmin_Serv
                        TAO_CosEvent_Serv

)

ace_target_cxx_sources(TAO_DsEventLogAdmin_Serv
  SOURCE_FILES EventLogConsumer.cpp
               EventLogFactory_i.cpp
               EventLogNotification.cpp
               EventLog_i.cpp
  HEADER_FILES eventlog_serv_export.h
)


ace_add_lib(TAO_RTEventLogAdmin
  DEFINE_SYMBOL TAO_RTEVENTLOG_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_DsLogAdmin
                        TAO_RTEvent
)

ace_target_cxx_sources(TAO_RTEventLogAdmin
  HEADER_FILES rteventlog_export.h
)


ace_add_lib(TAO_RTEventLogAdmin_Skel
  DEFINE_SYMBOL TAO_RTEVENTLOG_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_RTEventLogAdmin
                        TAO_DsEventLogAdmin_Skel
                        TAO_RTEvent_Skel
)

ace_target_cxx_sources(TAO_RTEventLogAdmin_Skel
  HEADER_FILES log_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_RTEventLogAdmin
  SKEL_TARGETS TAO_RTEventLogAdmin_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${TAO_INCLUDE_DIR}/tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_RTEventLog_Export
            -Wb,stub_export_include=orbsvcs/Log/rteventlog_export.h
            -Wb,skel_export_macro=TAO_RTEventLog_Skel_Export
            -Wb,skel_export_include=orbsvcs/Log/rteventlog_skel_export.h
  IDL_FILES ../RTEventLogAdmin.idl
  WORKING_DIRECTORY ..
)


ace_add_lib(TAO_RTEventLogAdmin_Serv
  DEFINE_SYMBOL TAO_RTEVENTLOG_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Log
  PUBLIC_LINK_LIBRARIES TAO_RTEventLogAdmin_Skel
                        TAO_DsEventLogAdmin_Serv
                        TAO_RTEvent_Serv
                        TAO_RTSched
)

ace_target_cxx_sources(TAO_RTEventLogAdmin_Serv
  SOURCE_FILES RTEventLogConsumer.cpp
               RTEventLogFactory_i.cpp
               RTEventLogNotification.cpp
               RTEventLog_i.cpp
  HEADER_FILES RTEventLogConsumer.h
               RTEventLogFactory_i.h
               RTEventLogNotification.h
               RTEventLog_i.h
               rteventlog_serv_export.h
)

