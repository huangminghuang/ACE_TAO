ace_requires(TAO_HAS_CORBA_MESSAGING)

ace_add_lib(TAO_Security
  DEFINE_SYMBOL TAO_SECURITY_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Security
  PUBLIC_LINK_LIBRARIES TAO_Messaging TAO_Svc_Utils
)

tao_idl_sources(
  TARGETS TAO_Security
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../../tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,export_macro=TAO_Security_Export
            -Wb,export_include=orbsvcs/Security/security_export.h
  IDL_FILES ../CSI.idl
            ../CSIIOP.idl
            ../GSSUP.idl
            ../Security.idl
            ../SecurityLevel1.idl
            ../SecurityLevel2.idl
            ../SecurityLevel3.idl
  WORKING_DIRECTORY ..
)

ace_target_cxx_sources(TAO_Security
  SOURCE_FILES CSI_Utils.cpp
               SL2_EstablishTrustPolicy.cpp
               SL2_QOPPolicy.cpp
               SL2_SecurityManager.cpp
               SL3_ContextEstablishmentPolicy.cpp
               SL3_CredentialsAcquirerFactory.cpp
               SL3_CredentialsCurator.cpp
               SL3_ObjectCredentialsPolicy.cpp
               SL3_PolicyFactory.cpp
               SL3_SecurityCurrent.cpp
               SL3_SecurityCurrent_Impl.cpp
               SL3_SecurityManager.cpp
               Security_Current.cpp
               Security_Current_Impl.cpp
               Security_ORBInitializer.cpp
               Security_PolicyFactory.cpp
  HEADER_FILES CSI_Utils.h
               SL2_EstablishTrustPolicy.h
               SL2_QOPPolicy.h
               SL2_SecurityManager.h
               SL3_ContextEstablishmentPolicy.h
               SL3_CredentialsAcquirerFactory.h
               SL3_CredentialsCurator.h
               SL3_ObjectCredentialsPolicy.h
               SL3_PolicyFactory.h
               SL3_SecurityCurrent.h
               SL3_SecurityCurrent_Impl.h
               SL3_SecurityManager.h
               Security_Current.h
               Security_Current_Impl.h
               Security_ORBInitializer.h
               Security_PolicyFactory.h
               security_export.h
  INLINE_FILES SL3_SecurityCurrent.inl
               Security_Current.inl
)

