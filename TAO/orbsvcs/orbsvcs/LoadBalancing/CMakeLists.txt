
add_orbsvcs_idls(LoadBalancing
  FLAGS -GC
  IDL_FILES  ../CosLoadBalancing.idl
        ../LB_ORT.idl
)

set(sources
  LB_LeastLoaded.cpp
  LB_LoadMinimum.cpp
  LB_LoadAverage.cpp
  LB_LoadAlert.cpp
  LB_LoadAlertInfo.cpp
  LB_LoadAlert_Handler.cpp
  LB_LoadManager.cpp
  LB_MemberLocator.cpp
  LB_Pull_Handler.cpp
  LB_Random.cpp
  LB_RoundRobin.cpp
  LB_ClientComponent.cpp
  LB_ClientORBInitializer.cpp
  LB_ClientRequestInterceptor.cpp
  LB_ServerRequestInterceptor.cpp
  LB_IORInterceptor.cpp
  LB_ObjectReferenceFactory.cpp
  LB_ORBInitializer.cpp
  LB_Component.cpp
  LB_CPU_Utilization_Monitor.cpp
  LB_CPU_Load_Average_Monitor.cpp
  ${LoadBalancing_IDLS_OUTPUT_FILES}
)

file(GLOB headers *.h *.inl)

add_orbsvcs_lib(TAO_CosLoadBalancing
  DEFINE_SYMBOL TAO_COSLOADBALANCING_BUILD_DLL
  SOURCES        ${sources}
  PUBLIC_HEADER  ${headers}
  PUBLIC_LINK_LIBRARIES TAO_PortableGroup
                        TAO_CosNaming
                        TAO_IORManip
                        TAO_PI_Server
                        TAO_IORInterceptor

)

