
if(CORBA_E_MICRO)
  return()
endif()

add_orbsvcs_idls(Concurrency
  IDL_FILES ../CosConcurrencyControl.idl
)


add_orbsvcs_lib(TAO_CosConcurrency
  DEFINE_SYMBOL TAO_CosConcurrency_BUILD_DLL
  SOURCES ${Concurrency_IDLS_STUB_FILES}
  PUBLIC_HEADER concurrency_export.h
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode

)

add_orbsvcs_lib(TAO_CosConcurrency_Skel
  DEFINE_SYMBOL TAO_CosConcurrency_Skel_BUILD_DLL
  SOURCES ${Concurrency_IDLS_SKEL_FILES}
  PUBLIC_HEADER concurrency_skel_export.h
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency TAO_PortableServer

)

set(sources
  CC_Lock.cpp
  CC_LockSet.cpp
  CC_LockSetFactory.cpp
  Concurrency_Loader.cpp
  Concurrency_Utils.cpp
)

set(headers
  CC_Lock.h
  CC_LockSet.h
  CC_LockSetFactory.h
  Concurrency_Loader.h
  Concurrency_Utils.h
  concurrency_export.h
)

add_orbsvcs_lib(TAO_CosConcurrency_Serv
  DEFINE_SYMBOL TAO_COSCONCURRENCY_SERV_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency_Skel TAO_Svc_Utils

)

