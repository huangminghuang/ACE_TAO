option(TAO_HAS_CORBA_E_MICRO "" OFF)
option(TAO_HAS_CORBA_E_COMPACT "" OFF)
option(TAO_HAS_MINIMUM_CORBA "" OFF)
option(TAO_HAS_IIOP "" ON)
option(TAO_HAS_OPTIMIZE_COLLOCATED_INVOCATIONS "" ON)
option(TAO_HAS_VALUETYPE_OUT_INDIRECTION "" ON)
option(TAO_HAS_TRANSPORT_CURRENT "" ON)
option(TAO_HAS_INTERCEPTORS "" ON)
option(TAO_HAS_RT_CORBA "" ON)
option(TAO_HAS_CORBA_MESSAGING "" ON)
option(TAO_HAS_AMI "" ON)
option(TAO_EXPLICIT_NEGOTIATE_CODESETS "" OFF)

if (TAO_HAS_MINIMUM_CORBA OR TAO_HAS_CORBA_E_MICRO OR TAO_HAS_CORBA_E_COMPACT)
  set(TAO_HAS_INTERCEPTORS CACHE INTERNAL "" FORCE)
endif()


set(TAO_OPTIONS
  TAO_HAS_CORBA_E_MICRO
  TAO_HAS_CORBA_E_COMPACT
  TAO_HAS_MINIMUM_CORBA
  TAO_HAS_IIOP
  TAO_HAS_OPTIMIZE_COLLOCATED_INVOCATIONS
  TAO_HAS_RT_CORBA
  TAO_HAS_INTERCEPTORS
  TAO_HAS_TRANSPORT_CURRENT
  TAO_HAS_CORBA_MESSAGING
  TAO_HAS_AMI
  TAO_EXPLICIT_NEGOTIATE_CODESETS
)