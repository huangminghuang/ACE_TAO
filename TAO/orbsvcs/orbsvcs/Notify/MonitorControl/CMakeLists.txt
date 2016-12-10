
add_tao_idl_targets(Notify_MC_IDLS
  FLAGS -Wb,export_macro=TAO_Notify_MC_Export
        -Wb,export_include=orbsvcs/Notify/MonitorControl/notify_mc_export.h
        -o orbsvcs/Notify/MonitorControl
  IDL_FILES NotificationServiceMC.idl
)

#message("Notify_MC_IDLS_OUTPUT_FILES = ${Notify_MC_IDLS_OUTPUT_FILES}")

add_orbsvcs_lib(TAO_CosNotification_MC
  DEFINE_SYMBOL TAO_NOTIFY_MC_BUILD_DLL
  SOURCES Control.cpp
          Control_Registry.cpp
          MonitorManager.cpp
          NotificationServiceMonitor_i.cpp
          Timestamp_Monitor.cpp
          ${Notify_MC_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER Control.h
                Control_Registry.h
                Dynamic_Statistic.h
                MonitorManager.h
                NotificationServiceMonitor_i.h
                Timestamp_Monitor.h
                notify_mc_export.h
                ${Notify_MC_IDLS_HEADER_FILES}
  PUBLIC_LINK_LIBRARIES TAO_CosNaming TAO_IORTable TAO_Svc_Utils TAO_Monitor

)