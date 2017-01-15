

ace_requires(TAO_HAS_RT_CORBA)

ace_add_lib(TAO_RTCORBA
  OUTPUT_NAME TAO_RTCORBA
  PACKAGE TAO
  FOLDER tao/RTCORBA
  DEFINE_SYMBOL TAO_RTCORBA_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
)
ace_target_cxx_sources(TAO_RTCORBA
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
  HEADER_FILES Continuous_Priority_Mapping.h
               Direct_Priority_Mapping.h
               Linear_Network_Priority_Mapping.h
               Linear_Priority_Mapping.h
               Multi_Priority_Mapping.h
               Network_Priority_Mapping.h
               Network_Priority_Mapping_Manager.h
               Priority_Mapping.h
               Priority_Mapping_Manager.h
               RTCORBA.h
               RT_Current.h
               RT_Endpoint_Selector_Factory.h
               RT_Endpoint_Utils.h
               RT_Invocation_Endpoint_Selectors.h
               RT_Mutex.h
               RT_ORB.h
               RT_ORBInitializer.h
               RT_ORB_Loader.h
               RT_PolicyFactory.h
               RT_Policy_i.h
               RT_ProtocolPropertiesA.h
               RT_ProtocolPropertiesC.h
               RT_ProtocolPropertiesS.h
               RT_Protocols_Hooks.h
               RT_Service_Context_Handler.h
               RT_Stub.h
               RT_Stub_Factory.h
               RT_Thread_Lane_Resources_Manager.h
               RT_Transport_Descriptor.h
               RT_Transport_Descriptor_Property.h
               Thread_Pool.h
               rtcorba_export.h
               rtcorba_typedefs.h
  INLINE_FILES Network_Priority_Mapping_Manager.inl
               Priority_Mapping_Manager.inl
               RT_Transport_Descriptor.inl
               RT_Transport_Descriptor_Property.inl
               Thread_Pool.inl
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

