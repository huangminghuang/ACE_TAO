option(CORBA_E_MICRO "" OFF)
option(CORBA_E_COMPACT "" OFF)
option(MINIMUM_CORBA "" OFF)
option(TAO_NO_IIOP "" OFF)
option(OPTIMIZE_COLLOCATED_INVOCATIONS "" ON)
option(VALUETYPE_OUT_INDIRECTION "" ON)
option(CORBA_MESSAGING "" ON)
option(GEN_OSTREAM "" OFF)
# option(INTERCEPTOR "" ON)
option(AMI "" ON)
option(CORBA_MESSAGING "" ON)
option(TRANSPORT_CURRENT "" ON)


if (CORBA_E_MICRO)
  list(APPEND TAO_BASE_IDL_FLAGS -DCORBA_E_MICRO -Gce)
  list(APPEND TAO_COMPILE_DEFINITIONS CORBA_E_MICRO)
endif()

if (CORBA_E_COMPACT)
  list(APPEND TAO_BASE_IDL_FLAGS -DCORBA_E_COMPACT -Gce)
  list(APPEND TAO_COMPILE_DEFINITIONS CORBA_E_COMPACT)
endif()

if (MINIMUM_CORBA)
  list(APPEND TAO_BASE_IDL_FLAGS -DTAO_HAS_MINIMUM_POA -Gmc)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_MINIMUM_CORBA=1)
  set(INTERCEPTOR CACHE INTERNAL "" FORCE)
endif()

if (TAO_NO_IIOP)
  list(APPEND TAO_BASE_IDL_FLAGS -DTAO_LACKS_IIOP)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_IIOP=0)
endif()

if (NOT OPTIMIZE_COLLOCATED_INVOCATIONS)
  list(APPEND TAO_BASE_IDL_FLAGS -Sp -Sd)
endif()

if (GEN_OSTREAM)
  list(APPEND TAO_BASE_IDL_FLAGS -Gos)
  list(APPEND TAO_COMPILE_DEFINITIONS GEN_OSTREAM_OPS)
endif()

if (VALUETYPE_OUT_INDIRECTION)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_VALUETYPE_OUT_INDIRECTION)
endif()


if (NOT INTERCEPTOR)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_INTERCEPTORS=0)
endif()

if (NOT CORBA_MESSAGING)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_CORBA_MESSAGING=0)
else()
  set(OPTIONAL_MESSAGING "TAO_Messaging" CACHE INTERNAL "" FORCE)
endif()

if (RT_CORBA AND NOT CORBA_MESSAGING)
  message(FATAL_ERROR "RT_CORBA requires CORBA_MESSAGING to be enabled")
endif()

if (AMI AND NOT CORBA_MESSAGING)
  message(FATAL_ERROR "AMI requires CORBA_MESSAGING to be enabled")
endif()

option(RT_CORBA "" ON)
if (NOT RT_CORBA)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_RT_CORBA=0)
endif()

if (NOT TRANSPORT_CURRENT)
  list(APPEND TAO_COMPILE_DEFINITIONS TAO_HAS_TRANSPORT_CURRENT=0)
endif()

set(AMI_IDL_FLAGS -GC)

set(TAO_OPTIONS
  CORBA_E_MICRO
  CORBA_E_COMPACT
  MINIMUM_CORBA
  TAO_NO_IIOP
  OPTIMIZE_COLLOCATED_INVOCATIONS
  VALUETYPE_OUT_INDIRECTION
  RT_CORBA
  CORBA_MESSAGING
  GEN_OSTREAM
  INTERCEPTOR
  CORBA_MESSAGING
  TRANSPORT_CURRENT
  AMI
  AMI_LIBRARIES
  AMI_IDL_FLAGS
)