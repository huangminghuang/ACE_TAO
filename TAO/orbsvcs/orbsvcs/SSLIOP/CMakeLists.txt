
ace_add_lib(TAO_SSLIOP
  DEFINE_SYMBOL TAO_SSLIOP_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs/SSLIOP
  PUBLIC_INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
  PUBLIC_LINK_LIBRARIES TAO_Security TAO_PI_Server TAO_Svc_Utils ACE_SSL
)


tao_idl_sources(
  TARGETS TAO_SSLIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../../tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,export_macro=TAO_SSLIOP_Export
            -Wb,export_include=orbsvcs/SSLIOP/SSLIOP_Export.h
            -SS
  IDL_FILES ../SSLIOP.idl
  WORKING_DIRECTORY ..
)

tao_idl_sources(
  TARGETS TAO_SSLIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../../tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,export_macro=TAO_SSLIOP_Export
            -Wb,export_include=orbsvcs/SSLIOP/SSLIOP_Export.h
            -SS -Sci -Gp -Gd -Sa -Sorb
  IDL_FILES ssl_endpoints.pidl
)

find_package(MFC)
if (MFC_FOUND)
  set(params_dup params_dup.cpp)
else()
  set(params_dup params_dup.c)
endif()

ace_target_cxx_sources(TAO_SSLIOP
  SOURCE_FILES IIOP_SSL_Acceptor.cpp
               IIOP_SSL_Connection_Handler.cpp
               IIOP_SSL_Connector.cpp
               IIOP_SSL_Transport.cpp
               SSLIOP_Accept_Strategy.cpp
               SSLIOP_Acceptor.cpp
               SSLIOP_ClientCredentials.cpp
               SSLIOP_Connection_Handler.cpp
               SSLIOP_Connector.cpp
               SSLIOP_Credentials.cpp
               SSLIOP_CredentialsAcquirer.cpp
               SSLIOP_CredentialsAcquirerFactory.cpp
               SSLIOP_Current.cpp
               SSLIOP_Current_Impl.cpp
               SSLIOP_EVP_PKEY.cpp
               SSLIOP_Endpoint.cpp
               SSLIOP_Factory.cpp
               SSLIOP_Invocation_Interceptor.cpp
               SSLIOP_ORBInitializer.cpp
               SSLIOP_OwnCredentials.cpp
               SSLIOP_Profile.cpp
               SSLIOP_TargetCredentials.cpp
               SSLIOP_Transport.cpp
               SSLIOP_Util.cpp
               ${params_dup}
  HEADER_FILES IIOP_SSL_Acceptor.h
               IIOP_SSL_Connection_Handler.h
               IIOP_SSL_Connector.h
               IIOP_SSL_Transport.h
               SSLIOP_Accept_Strategy.h
               SSLIOP_Acceptor.h
               SSLIOP_ClientCredentials.h
               SSLIOP_Connection_Handler.h
               SSLIOP_Connector.h
               SSLIOP_Credentials.h
               SSLIOP_CredentialsAcquirer.h
               SSLIOP_CredentialsAcquirerFactory.h
               SSLIOP_Current.h
               SSLIOP_Current_Impl.h
               SSLIOP_EVP_PKEY.h
               SSLIOP_Endpoint.h
               SSLIOP_Export.h
               SSLIOP_Factory.h
               SSLIOP_Invocation_Interceptor.h
               SSLIOP_ORBInitializer.h
               SSLIOP_OpenSSL_st_T.h
               SSLIOP_OwnCredentials.h
               SSLIOP_Profile.h
               SSLIOP_SSL.h
               SSLIOP_TargetCredentials.h
               SSLIOP_Transport.h
               SSLIOP_Util.h
               SSLIOP_X509.h
               params_dup.h
  INLINE_FILES IIOP_SSL_Connection_Handler.inl
               SSLIOP_Acceptor.inl
               SSLIOP_Connection_Handler.inl
               SSLIOP_Credentials.inl
               SSLIOP_Current.inl
               SSLIOP_Current_Impl.inl
               SSLIOP_Endpoint.inl
               SSLIOP_OpenSSL_st_T.inl
  TEMPLATE_FILES SSLIOP_OpenSSL_st_T.cpp
)