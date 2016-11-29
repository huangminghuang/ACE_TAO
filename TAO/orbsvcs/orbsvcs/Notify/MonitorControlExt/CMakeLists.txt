add_tao_idl_targets(Notify_MC_Ext_IDLS
  FLAGS -Wb,export_macro=TAO_Notify_MC_Ext_Export
        -Wb,export_include=orbsvcs/Notify/MonitorControlExt/notify_mc_ext_export.h
        -I${TAO_ROOT}/tao
        -o orbsvcs/Notify/MonitorControlExt
  IDLS NotifyMonitoringExt.idl
)

add_orbsvcs_lib(TAO_CosNotification_MC_Ext
  DEFINE_SYMBOL TAO_NOTIFY_MC_EXT_BUILD_DLL
  SOURCES MC_Default_Factory.cpp
          MC_Notify_Service.cpp
          MonitorConsumerAdmin.cpp
          MonitorEventChannel.cpp
          MonitorEventChannelFactory.cpp
          MonitorSupplierAdmin.cpp
          ${Notify_MC_Ext_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER MC_Default_Factory.h
                MC_Notify_Service.h
                MonitorConsumerAdmin.h
                MonitorEventChannel.h
                MonitorEventChannelFactory.h
                MonitorProxyPushSupplier.h
                MonitorProxySupplier_T.h
                MonitorSequenceProxyPushSupplier.h
                MonitorStructuredProxyPushSupplier.h
                MonitorSupplierAdmin.h
                MonitorProxySupplier_T.cpp
                notify_mc_ext_export.h
                ${Notify_MC_Ext_IDLS_HEADER_FILES}
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_MC TAO_CosNotification_Serv TAO_Monitor

)