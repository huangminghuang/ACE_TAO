ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_CosConcurrency
  DEFINE_SYMBOL TAO_CONCURRENCY_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Concurrency
  PUBLIC_INCLUDE_DIRECTORIES ${ORBSVCS_LIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_CosConcurrency
  HEADER_FILES concurrency_export.h
)

ace_add_lib(TAO_CosConcurrency_Skel
  DEFINE_SYMBOL TAO_CONCURRENCY_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Concurrency
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency TAO_PortableServer
)

ace_target_cxx_sources(TAO_CosConcurrency_Skel
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

ace_add_lib(TAO_CosConcurrency_Serv
  DEFINE_SYMBOL TAO_CONCURRENCY_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Concurrency
  PUBLIC_LINK_LIBRARIES TAO_CosConcurrency_Skel TAO_Svc_Utils
)

ace_target_cxx_sources(TAO_CosConcurrency_Serv
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

