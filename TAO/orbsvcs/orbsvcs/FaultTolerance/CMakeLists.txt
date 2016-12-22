add_tao_idl_command(FT_ORB_Utils_IDLS
  IDL_FLAGS -Wb,skel_export_include=tao/PortableServer/PolicyS.h
            -Wb,export_macro=TAO_FT_ORB_Utils_Export
            -Wb,export_include=orbsvcs/FaultTolerance/FT_ORB_Utils_export.h
            -o orbsvcs
  IDL_FILES ../FT_CORBA_ORB.idl
)

install(FILES ${FT_ORB_Utils_IDLS_HEADER_FILES}
        DESTINATION include/orbsvcs)

add_orbsvcs_lib(TAO_FTORB_Utils
  DEFINE_SYMBOL TAO_FT_ORB_UTILS_BUILD_DLL
  SOURCES ${FT_ORB_Utils_IDLS_OUTPUT_FILES} FT_IOGR_Property.cpp
  PUBLIC_HEADER FT_ORB_Utils_export.h FT_IOGR_Property.h FT_IOGR_Property.inl
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode TAO_IORManip TAO_PortableServer TAO_PortableGroup TAO_Svc_Utils

)

add_orbsvcs_lib(TAO_FT_ClientORB
  DEFINE_SYMBOL TAO_FT_CLIENTORB_BUILD_DLL
  SOURCES FT_ClientRequest_Interceptor.cpp
          FT_ClientORBInitializer.cpp
          FT_ClientPolicyFactory.cpp
          FT_ClientPolicy_i.cpp
          FT_ClientService_Activate.cpp
          FT_Endpoint_Selector_Factory.cpp
          FT_Invocation_Endpoint_Selectors.cpp
          FT_Service_Callbacks.cpp
  PUBLIC_HEADER FT_ClientORBInitializer.h
                FT_ClientORB_export.h
                FT_ClientPolicyFactory.h
                FT_ClientPolicy_i.h
                FT_ClientPolicy_i.inl
                FT_ClientRequest_Interceptor.h
                FT_ClientService_Activate.h
                FT_Endpoint_Selector_Factory.h
                FT_Invocation_Endpoint_Selectors.h
                FT_Service_Callbacks.h
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils TAO_Messaging TAO_PortableGroup TAO_Svc_Utils

)

add_orbsvcs_lib(TAO_FT_ServerORB
  DEFINE_SYMBOL TAO_FT_SERVERORB_BUILD_DL
  SOURCES FT_ServerORBInitializer.cpp
          FT_ServerPolicyFactory.cpp
          FT_ServerPolicy_i.cpp
          FT_ServerRequest_Interceptor.cpp
          FT_ServerService_Activate.cpp
  PUBLIC_HEADER FT_ServerORBInitializer.h
                FT_ServerORB_export.h
                FT_ServerPolicyFactory.h
                FT_ServerPolicy_i.h
                FT_ServerPolicy_i.inl
                FT_ServerRequest_Interceptor.h
                FT_ServerService_Activate.h
                FT_Service_Activate.h
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils TAO_Messaging TAO_PortableGroup TAO_Svc_Utils TAO_PI_Server TAO_PortableServer

)

add_tao_idl_command(FaultTolerance_IDLS
  IDL_FLAGS -Wb,export_macro=TAO_FT_Export
        -Wb,export_include=orbsvcs/FaultTolerance/fault_tol_export.h
        -Wb,skel_export_include=tao/PortableServer/PolicyS.h
        -I${TAO_ROOT}/tao
        -o orbsvcs
  IDL_FILES ../FT_CORBA.idl
       ../FT_Replica.idl
       ../FT_Notifier.idl
       ../FT_FaultDetectorFactory.idl
       ../FT_ReplicationManager.idl
)

install(FILES ${FaultTolerance_IDLS_HEADER_FILES}
        DESTINATION include/orbsvcs)

add_orbsvcs_lib(TAO_FaultTolerance
  DEFINE_SYMBOL TAO_FT_BUILD_DLL
  SOURCES ${FaultTolerance_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER fault_tol_export.h
  PUBLIC_LINK_LIBRARIES TAO_PI TAO_PI_Server TAO_CosNotification TAO_FT_ClientORB TAO_FT_ServerORB TAO_PortableGroup

)


