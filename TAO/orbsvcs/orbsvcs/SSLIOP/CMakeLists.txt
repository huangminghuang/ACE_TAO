find_package(OpenSSL)
if (NOT OPENSSL_FOUND)
  message(AUTHOR_WARNING "skipping SSLIOP because no OpenSSL is found")

  return()
endif()

add_orbsvcs_idls(SSLIOP
  FLAGS -SS
  IDLS ../SSLIOP.idl
)

add_tao_idl_targets(SSLIOP_Endpoint_IDLS
  FLAGS -Wb,export_macro=TAO_SSLIOP_Export
        -Wb,export_include=orbsvcs/SSLIOP/SSLIOP_Export.h
        -SS -Sci -Gp -Gd -Sa -Sorb
        -o SSLIOP
  IDLS ssl_endpoints.pidl
)

file(GLOB headers *.h *.inl)

set(sources
  IIOP_SSL_Acceptor.cpp
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
  SSLIOP_Endpoint.cpp
  SSLIOP_EVP_PKEY.cpp
  SSLIOP_Factory.cpp
  SSLIOP_Invocation_Interceptor.cpp
  SSLIOP_ORBInitializer.cpp
  SSLIOP_OwnCredentials.cpp
  SSLIOP_Profile.cpp
  SSLIOP_TargetCredentials.cpp
  SSLIOP_Transport.cpp
  SSLIOP_Util.cpp
  ${SSLIOP_IDLS_OUTPUT_FILES}
  ${SSLIOP_Endpoint_IDLS_OUTPUT_FILES}
)

find_package(MFC)
if (MFC_FOUND)
  list(APPEND sources params_dup.cpp)
else()
  list(APPEND sources params_dup.c)
endif()

add_orbsvcs_lib(TAO_SSLIOP
  DEFINE_SYMBOL TAO_SSLIOP_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER SSLIOP_OpenSSL_st_T.cpp ${headers}
  PUBLIC_LINK_LIBRARIES TAO_Security TAO_PI_Server TAO_Svc_Utils ${OPENSSL_LIBRARIES}

)


