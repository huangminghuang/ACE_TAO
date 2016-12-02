
option(BUILD_ACE_INET "Whether to build ACE_INet package" ON)

if (BUILD_ACE_INET)
  set(inet_sources
    IOS_util.cpp
    INet_Log.cpp
    HeaderBase.cpp
    Request.cpp
    Response.cpp
    RequestHandler.cpp
    ConnectionCache.cpp
    ClientRequestHandler.cpp
    HTTP_Status.cpp
    HTTP_Header.cpp
    HTTP_Response.cpp
    HTTP_Request.cpp
    HTTP_IOStream.cpp
    HTTP_SessionBase.cpp
    HTTP_BasicAuthentication.cpp
    URLBase.cpp
    AuthenticationBase.cpp
    HTTP_URL.cpp
    HTTP_ClientRequestHandler.cpp
    FTP_Request.cpp
    FTP_Response.cpp
    FTP_IOStream.cpp
    FTP_URL.cpp
    FTP_ClientRequestHandler.cpp
  )
  set(inet_headers
    IOS_util.h
    INet_Log.h
    HeaderBase.h
    HeaderBase.inl
    Request.h
    Response.h
    RequestHandler.h
    ConnectionCache.h
    ConnectionCache.inl
    ClientRequestHandler.h
    ClientRequestHandler.inl
    HTTP_Status.h
    HTTP_Status.inl
    HTTP_Header.h
    HTTP_Header.inl
    HTTP_Response.h
    HTTP_Response.inl
    HTTP_Request.h
    HTTP_Request.inl
    HTTP_IOStream.h
    HTTP_IOStream.inl
    HTTP_SessionBase.h
    HTTP_SessionBase.inl
    HTTP_BasicAuthentication.h
    HTTP_BasicAuthentication.inl
    URLBase.h
    URLBase.inl
    AuthenticationBase.h
    AuthenticationBase.inl
    HTTP_URL.h
    HTTP_URL.inl
    HTTP_ClientRequestHandler.h
    HTTP_ClientRequestHandler.inl
    FTP_Request.h
    FTP_Request.inl
    FTP_Response.h
    FTP_Response.inl
    FTP_IOStream.h
    FTP_IOStream.inl
    FTP_URL.h
    FTP_URL.inl
    FTP_ClientRequestHandler.h
    FTP_ClientRequestHandler.inl
    BidirStreamBuffer.h
    BidirStreamBuffer.cpp
    BufferedStreamBuffer.h
    BufferedStreamBuffer.cpp
    HTTP_Session.h
    HTTP_Session.cpp
    HTTP_StreamPolicy.h
    HTTP_StreamPolicy.cpp
    HTTP_StreamPolicyBase.h
    HTTP_StreamPolicyBase.cpp
    Sock_IOStream.h
    Sock_IOStream.cpp
    StreamHandler.h
    StreamHandler.cpp
    StreamInterceptor.h
    StreamInterceptor.cpp
    String_IOStream.h
    String_IOStream.cpp
    FTP_Session.h
    FTP_Session.cpp
    INet_Export.h
  )

  set(ACE_INet "" CACHE INTERNAL "")

  add_ace_component(ACE_INet
    OUTPUT_NAME ACE_INet
    DEFINE_SYMBOL ACE_INET_BUILD_DLL
    SOURCES ${inet_sources}
    PUBLIC_HEADER ${inet_headers}
    PUBLIC_LINK_LIBRARIES ACE
    PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
    HEADERS_INSTALL_DESTINATION ace/INet
    PACKAGE ACE_INet
  )

  if (TARGET ACE_SSL)
    set(inet_ssl_sources
      SSL_X509Cert.cpp
      SSL_CertificateCallback.cpp
      SSL_PasswordCallback.cpp
      SSL_CallbackManager.cpp
      HTTPS_Context.cpp
      HTTPS_URL.cpp
      HTTPS_SessionFactory.cpp
      SSL_Proxy_Connector.cpp
    )

    set(inet_ssl_headers
      SSL_X509Cert.h
      SSL_X509Cert.inl
      SSL_CertificateCallback.h
      SSL_CertificateCallback.inl
      SSL_PasswordCallback.h
      SSL_CallbackManager.h
      SSL_CallbackManager.inl
      HTTPS_Context.h
      HTTPS_Context.inl
      HTTPS_URL.h
      HTTPS_URL.inl
      HTTPS_SessionFactory.h
      SSL_Proxy_Connector.h
      SSLSock_IOStream.h
      SSLSock_IOStream.cpp
      HTTPS_Session.h
      HTTPS_Session.cpp
      INet_SSL_Export.h
    )

    add_ace_component(ACE_INet_SSL
      OUTPUT_NAME ACE_INet_SSL
      DEFINE_SYMBOL ACE_INET_SSL_BUILD_DLL
      SOURCES ${inet_ssl_sources}
      PUBLIC_HEADER ${inet_ssl_headers}
      PUBLIC_LINK_LIBRARIES ACE_INet ACE_SSL
      HEADERS_INSTALL_DESTINATION ace/INet
      PACKAGE ACE_INet
      WHEN OPENSSL_FOUND
    )
  endif()

  export_ace_package(ACE_INet)
endif()