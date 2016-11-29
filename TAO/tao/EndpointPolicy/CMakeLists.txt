add_tao_component(
  NAME EndpointPolicy
  PUBLIC_LINK_LIBRARIES  TAO_PortableServer TAO_PI
  ADD_IDL_FLAGS -GA -SS -Sci -Sorb
                -Wb,export_macro=TAO_EndpointPolicy_Export
                -Wb,export_include=tao/EndpointPolicy/EndpointPolicy_Export.h
                -iC tao/EndpointPolicy
  IDLS EndpointPolicy.pidl
        IIOPEndpointValue.pidl
        EndpointPolicyType.pidl
)


