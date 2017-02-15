
ace_add_lib(TAO_CosNotification_MC_Ext
  DEFINE_SYMBOL TAO_NOTIFY_MC_EXT_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Notify/MonitorControlEx
  PUBLIC_LINK_LIBRARIES TAO_CosNotification_MC
                        TAO_CosNotification_Serv
                        TAO_Monitor
)

ace_target_cxx_sources(TAO_CosNotification_MC_Ext
  SOURCE_FILES MC_Default_Factory.cpp
                MC_Notify_Service.cpp
                MonitorConsumerAdmin.cpp
                MonitorEventChannel.cpp
                MonitorEventChannelFactory.cpp
                MonitorSupplierAdmin.cpp
  HEADER_FILES MC_Default_Factory.h
                MC_Notify_Service.h
                MonitorConsumerAdmin.h
                MonitorEventChannel.h
                MonitorEventChannelFactory.h
                MonitorProxyPushSupplier.h
                MonitorProxySupplier_T.h
                MonitorSequenceProxyPushSupplier.h
                MonitorStructuredProxyPushSupplier.h
                MonitorSupplierAdmin.h
                notify_mc_ext_export.h
  TEMPLATE_FILES MonitorProxySupplier_T.cpp
)

tao_idl_sources(
  TARGETS TAO_CosNotification_MC_Ext
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=TAO_Notify_MC_Ext_Export
            -Wb,export_include=orbsvcs/Notify/MonitorControlExt/notify_mc_ext_export.h
            -I${TAO_ROOT}/tao
            -I${TAO_ROOT}/orbsvcs
  IDL_FILES NotifyMonitoringExt.idl
)
