



ace_add_lib(TAO_CosNotification_MC
  DEFINE_SYMBOL TAO_NOTIFY_MC_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/Notify/MonitorControl
  PUBLIC_LINK_LIBRARIES TAO_CosNaming
                        TAO_IORTable
                        TAO_Svc_Utils
                        TAO_Monitor
)

ace_target_cxx_sources(TAO_CosNotification_MC
  SOURCE_FILES Control.cpp
               Control_Registry.cpp
               MonitorManager.cpp
               NotificationServiceMonitor_i.cpp
               Timestamp_Monitor.cpp
  HEADER_FILES Control.h
               Control_Registry.h
               Dynamic_Statistic.h
               MonitorManager.h
               NotificationServiceMonitor_i.h
               Timestamp_Monitor.h
               notify_mc_export.h
)

tao_idl_sources(
  TARGETS TAO_CosNotification_MC
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=TAO_Notify_MC_Export
            -Wb,export_include=orbsvcs/Notify/MonitorControl/notify_mc_export.h
  IDL_FILES NotificationServiceMC.idl
)