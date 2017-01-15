ace_requires(TAO_HAS_CORBA_MESSAGING)

ace_add_lib(TAO_CosLoadBalancing
  DEFINE_SYMBOL TAO_COSLOADBALANCING_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_PortableGroup
                        TAO_CosNaming
                        TAO_IORManip
                        TAO_PI_Server
                        TAO_IORInterceptor

)

tao_idl_sources(
  TARGETS TAO_CosLoadBalancing
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -GC
            -Wb,export_macro=TAO_LoadBalancing_Export
            -Wb,export_include=orbsvcs/LoadBalancing/LoadBalancing_export.h
  IDL_FILES ../CosLoadBalancing.idl
            ../LB_ORT.idl
  WORKING_DIRECTORY ..
)

ace_target_cxx_sources(TAO_CosLoadBalancing
  SOURCE_FILES LB_CPU_Load_Average_Monitor.cpp
               LB_CPU_Utilization_Monitor.cpp
               LB_ClientComponent.cpp
               LB_ClientORBInitializer.cpp
               LB_ClientRequestInterceptor.cpp
               LB_Component.cpp
               LB_IORInterceptor.cpp
               LB_LeastLoaded.cpp
               LB_LoadAlert.cpp
               LB_LoadAlertInfo.cpp
               LB_LoadAlert_Handler.cpp
               LB_LoadAverage.cpp
               LB_LoadManager.cpp
               LB_LoadMinimum.cpp
               LB_MemberLocator.cpp
               LB_ORBInitializer.cpp
               LB_ObjectReferenceFactory.cpp
               LB_Pull_Handler.cpp
               LB_Random.cpp
               LB_RoundRobin.cpp
               LB_ServerRequestInterceptor.cpp
  HEADER_FILES LB_CPU_Load_Average_Monitor.h
               LB_CPU_Utilization_Monitor.h
               LB_ClientComponent.h
               LB_ClientORBInitializer.h
               LB_ClientRequestInterceptor.h
               LB_Component.h
               LB_IORInterceptor.h
               LB_LeastLoaded.h
               LB_LoadAlert.h
               LB_LoadAlertInfo.h
               LB_LoadAlertMap.h
               LB_LoadAlert_Handler.h
               LB_LoadAverage.h
               LB_LoadListMap.h
               LB_LoadManager.h
               LB_LoadMap.h
               LB_LoadMinimum.h
               LB_Location_Index_Map.h
               LB_MemberLocator.h
               LB_MonitorMap.h
               LB_ORBInitializer.h
               LB_ObjectReferenceFactory.h
               LB_Pull_Handler.h
               LB_Random.h
               LB_RoundRobin.h
               LB_ServerRequestInterceptor.h
               LB_conf.h
               LoadBalancing_export.h
  INLINE_FILES LB_LeastLoaded.inl
               LB_LoadAlert.inl
               LB_LoadAverage.inl
               LB_LoadMinimum.inl
)

