
ace_add_lib(TAO_FTORB_Utils
  DEFINE_SYMBOL TAO_FT_ORB_UTILS_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
                        TAO_IORManip
                        TAO_PortableServer
                        TAO_PortableGroup
                        TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_FTORB_Utils
  SOURCE_FILES FT_IOGR_Property.cpp
  HEADER_FILES FT_ORB_Utils_export.h
               FT_IOGR_Property.h
  INLINE_FILES FT_IOGR_Property.inl
)

tao_idl_sources(
  TARGETS TAO_FTORB_Utils
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,skel_export_include=tao/PortableServer/PolicyS.h
            -Wb,export_macro=TAO_FT_ORB_Utils_Export
            -Wb,export_include=orbsvcs/FaultTolerance/FT_ORB_Utils_export.h
  IDL_FILES ../FT_CORBA_ORB.idl
  WORKING_DIRECTORY ..
)

ace_add_lib(TAO_FT_ClientORB
  DEFINE_SYMBOL TAO_FT_CLIENTORB_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils
                        TAO_Messaging
                        TAO_PortableGroup
                        TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_FT_ClientORB
  SOURCE_FILES FT_ClientRequest_Interceptor.cpp
               FT_ClientORBInitializer.cpp
               FT_ClientPolicyFactory.cpp
               FT_ClientPolicy_i.cpp
               FT_ClientService_Activate.cpp
               FT_Endpoint_Selector_Factory.cpp
               FT_Invocation_Endpoint_Selectors.cpp
               FT_Service_Callbacks.cpp
  HEADER_FILES FT_ClientORBInitializer.h
               FT_ClientORB_export.h
               FT_ClientPolicyFactory.h
               FT_ClientPolicy_i.h
               FT_ClientRequest_Interceptor.h
               FT_ClientService_Activate.h
               FT_Endpoint_Selector_Factory.h
               FT_Invocation_Endpoint_Selectors.h
               FT_Service_Callbacks.h
  INLINE_FILES FT_ClientPolicy_i.inl
)


ace_add_lib(TAO_FT_ServerORB
  DEFINE_SYMBOL TAO_FT_SERVERORB_BUILD_DL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_FTORB_Utils
                        TAO_Messaging
                        TAO_PortableGroup
                        TAO_Svc_Utils
                        TAO_PI_Server
                        TAO_PortableServer

)

ace_target_cxx_sources(TAO_FT_ServerORB
  SOURCE_FILES FT_ServerORBInitializer.cpp
               FT_ServerPolicyFactory.cpp
               FT_ServerPolicy_i.cpp
               FT_ServerRequest_Interceptor.cpp
               FT_ServerService_Activate.cpp
  HEADER_FILES FT_ServerORBInitializer.h
               FT_ServerORB_export.h
               FT_ServerPolicyFactory.h
               FT_ServerPolicy_i.h
               FT_ServerRequest_Interceptor.h
               FT_ServerService_Activate.h
               FT_Service_Activate.h
  INLINE_FILES FT_ServerPolicy_i.inl
)

ace_add_lib(TAO_FaultTolerance
  DEFINE_SYMBOL TAO_FT_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PI_Server
                        TAO_CosNotification
                        TAO_FT_ClientORB
                        TAO_FT_ServerORB
                        TAO_PortableGroup
)

ace_target_cxx_sources(TAO_FaultTolerance
  HEADER_FILES fault_tol_export.h
)

tao_idl_sources(
  TARGETS TAO_FaultTolerance
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${TAO_ROOT}/tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,export_macro=TAO_FT_Export
            -Wb,export_include=orbsvcs/FaultTolerance/fault_tol_export.h
            -Wb,skel_export_include=tao/PortableServer/PolicyS.h

  IDL_FILES ../FT_CORBA.idl
            ../FT_Replica.idl
            ../FT_Notifier.idl
            ../FT_FaultDetectorFactory.idl
            ../FT_ReplicationManager.idl
  WORKING_DIRECTORY ..
)

