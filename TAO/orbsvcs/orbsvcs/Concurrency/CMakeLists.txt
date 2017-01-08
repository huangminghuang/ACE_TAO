requires("NOT CORBA_E_MICRO")

add_ace_lib(TAO_CosConcurrency
  DEFINE_SYMBOL TAO_CosConcurrency_BUILD_DLL
  PACKAGE TAO
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../..>
                             $<INSTALL_INTERFACE:${TAO_INSTALL_DIR}/orbsvcs>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

target_cxx_sources(TAO_CosConcurrency
  HEADER_FILES concurrency_export.h
)

add_ace_lib(TAO_CosConcurrency_Skel
  DEFINE_SYMBOL TAO_CosConcurrency_Skel_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency TAO_PortableServer
)

target_cxx_sources(TAO_CosConcurrency_Skel
  HEADER_FILES concurrency_skel_export.h
)

tao_idl_sources(
  STUB_TARGETS TAO_CosConcurrency
  SKEL_TARGETS TAO_CosConcurrency_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_Concurrency_Export
            -Wb,stub_export_include=orbsvcs/Concurrency/concurrency_export.h
            -Wb,skel_export_macro=TAO_Concurrency_Skel_Export
            -Wb,skel_export_include=orbsvcs/Concurrency/concurrency_skel_export.h
  IDL_FILES ../CosConcurrencyControl.idl
  WORKING_DIRECTORY ..
)

add_ace_lib(TAO_CosConcurrency_Serv
  DEFINE_SYMBOL TAO_COSCONCURRENCY_SERV_BUILD_DLL
  PACKAGE TAO
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency_Skel TAO_Svc_Utils
)

target_cxx_sources(TAO_CosConcurrency_Serv
  SOURCE_FILES CC_Lock.cpp
               CC_LockSet.cpp
               CC_LockSetFactory.cpp
               Concurrency_Loader.cpp
               Concurrency_Utils.cpp
  HEADER_FILES CC_Lock.h
               CC_LockSet.h
               CC_LockSetFactory.h
               Concurrency_Loader.h
               Concurrency_Utils.h
               concurrency_export.h
)

