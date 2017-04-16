

ace_requires("NOT TAO_HAS_CORBA_E_MICRO" "NOT TAO_HAS_CORBA_E_COMPACT" "NOT TAO_HAS_MINIMUM_CORBA")

ace_add_lib(TAO_EndpointPolicy
  OUTPUT_NAME TAO_EndpointPolicy
  PACKAGE TAO
  FOLDER TAO/tao/EndpointPolicy
  DEFINE_SYMBOL TAO_ENDPOINTPOLICY_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_EndpointPolicy
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

