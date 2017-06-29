

ace_requires(TAO_HAS_RT_CORBA)

ace_add_lib(TAO_RTCORBA
  OUTPUT_NAME TAO_RTCORBA
  PACKAGE TAO
  FOLDER TAO/tao/RTCORBA
  DEFINE_SYMBOL TAO_RTCORBA_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
)
ace_target_cxx_sources(TAO_RTCORBA
  GLOB_HEADERS
  SOURCE_FILES Continuous_Priority_Mapping.cpp
               Direct_Priority_Mapping.cpp
               Linear_Network_Priority_Mapping.cpp
               Linear_Priority_Mapping.cpp
               Multi_Priority_Mapping.cpp
               Network_Priority_Mapping.cpp
               Network_Priority_Mapping_Manager.cpp
               Priority_Mapping.cpp
               Priority_Mapping_Manager.cpp
               RTCORBA.cpp
               RT_Current.cpp
               RT_Endpoint_Selector_Factory.cpp
               RT_Endpoint_Utils.cpp
               RT_Invocation_Endpoint_Selectors.cpp
               RT_Mutex.cpp
               RT_ORB.cpp
               RT_ORBInitializer.cpp
               RT_ORB_Loader.cpp
               RT_PolicyFactory.cpp
               RT_Policy_i.cpp
               RT_ProtocolPropertiesA.cpp
               RT_ProtocolPropertiesC.cpp
               RT_Protocols_Hooks.cpp
               RT_Service_Context_Handler.cpp
               RT_Stub.cpp
               RT_Stub_Factory.cpp
               RT_Thread_Lane_Resources_Manager.cpp
               RT_Transport_Descriptor.cpp
               RT_Transport_Descriptor_Property.cpp
               Thread_Pool.cpp
)


set(RTCORBA_Core_idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                           -Sci -SS -Sorb -GX
                           -Wb,export_macro=TAO_RTCORBA_Export
                           -Wb,export_include=tao/RTCORBA/rtcorba_export.h
                           -iC tao/RTCORBA)
tao_idl_sources(
  TARGETS TAO_RTCORBA
  IDL_FLAGS ${RTCORBA_Core_idl_FLAGS} -Sa
            -St -Sa
            -Wb,unique_include=tao/RTCORBA/RTCORBA.h
  IDL_FILES RTCORBA_include.pidl
)

tao_idl_sources(
  TARGETS TAO_RTCORBA
  IDL_FLAGS ${RTCORBA_Core_idl_FLAGS} -Gp
            -Gd
            -Wb,include_guard=TAO_RTCORBA_SAFE_INCLUDE
            -Wb,safe_include=tao/RTCORBA/RTCORBA.h
  IDL_FILES RTCORBA.pidl
)

ace_install_package_files(TAO
  RT_ProtocolProperties.pidl
)

