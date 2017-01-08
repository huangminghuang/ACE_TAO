

requires("NOT MINIMUM_CORBA" "NOT CORBA_E_MICRO" "NOT CORBA_E_COMPACT")

add_ace_lib(TAO_EndpointPolicy
  OUTPUT_NAME TAO_EndpointPolicy
  PACKAGE TAO
  FOLDER tao/EndpointPolicy
  ASPECTS TAO
  DEFINE_SYMBOL TAO_ENDPOINTPOLICY_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
target_cxx_sources(TAO_EndpointPolicy
  SOURCE_FILES EndpointPolicy.cpp
               EndpointPolicy_Factory.cpp
               EndpointPolicy_ORBInitializer.cpp
               EndpointPolicy_i.cpp
               Endpoint_Acceptor_Filter.cpp
               Endpoint_Acceptor_Filter_Factory.cpp
               Endpoint_Value_Impl.cpp
               IIOPEndpointValue_i.cpp
  HEADER_FILES EndpointPolicy.h
               EndpointPolicy_Export.h
               EndpointPolicy_Factory.h
               EndpointPolicy_ORBInitializer.h
               EndpointPolicy_i.h
               Endpoint_Acceptor_Filter.h
               Endpoint_Acceptor_Filter_Factory.h
               Endpoint_Value_Impl.h
               IIOPEndpointValue_i.h
)


tao_idl_sources(
  TARGETS TAO_EndpointPolicy
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -GA -SS -Sci -Sorb
            -Wb,export_macro=TAO_EndpointPolicy_Export
            -Wb,export_include=tao/EndpointPolicy/EndpointPolicy_Export.h
            -iC tao/EndpointPolicy
  IDL_FILES EndpointPolicy.pidl
            IIOPEndpointValue.pidl
            EndpointPolicyType.pidl
)

