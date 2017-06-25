

ace_requires("NOT EXCLUDE_INET" "NOT OLD_STDSTREAM")

ace_add_lib(ACE_INet
  OUTPUT_NAME ACE_INet
  PACKAGE ACE
  FOLDER ACE/protocols/ace/INet
  DEFINE_SYMBOL ACE_INET_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ../..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_INet
  SOURCE_FILES AuthenticationBase.cpp
               ClientRequestHandler.cpp
               ConnectionCache.cpp
               FTP_ClientRequestHandler.cpp
               FTP_IOStream.cpp
               FTP_Request.cpp
               FTP_Response.cpp
               FTP_URL.cpp
               HTTP_BasicAuthentication.cpp
               HTTP_ClientRequestHandler.cpp
               HTTP_Header.cpp
               HTTP_IOStream.cpp
               HTTP_Request.cpp
               HTTP_Response.cpp
               HTTP_SessionBase.cpp
               HTTP_Status.cpp
               HTTP_URL.cpp
               HeaderBase.cpp
               INet_Log.cpp
               IOS_util.cpp
               Request.cpp
               RequestHandler.cpp
               Response.cpp
               URLBase.cpp
  HEADER_FILES AuthenticationBase.h
               BidirStreamBuffer.h
               BufferedStreamBuffer.h
               ClientRequestHandler.h
               ConnectionCache.h
               FTP_ClientRequestHandler.h
               FTP_IOStream.h
               FTP_Request.h
               FTP_Response.h
               FTP_Session.h
               FTP_URL.h
               HTTP_BasicAuthentication.h
               HTTP_ClientRequestHandler.h
               HTTP_Header.h
               HTTP_IOStream.h
               HTTP_Request.h
               HTTP_Response.h
               HTTP_Session.h
               HTTP_SessionBase.h
               HTTP_Status.h
               HTTP_StreamPolicy.h
               HTTP_StreamPolicyBase.h
               HTTP_URL.h
               HeaderBase.h
               INet_Export.h
               INet_Log.h
               IOS_util.h
               Request.h
               RequestHandler.h
               Response.h
               Sock_IOStream.h
               StreamHandler.h
               StreamInterceptor.h
               String_IOStream.h
               URLBase.h
  INLINE_FILES AuthenticationBase.inl
               ClientRequestHandler.inl
               ConnectionCache.inl
               FTP_ClientRequestHandler.inl
               FTP_IOStream.inl
               FTP_Request.inl
               FTP_Response.inl
               FTP_URL.inl
               HTTP_BasicAuthentication.inl
               HTTP_ClientRequestHandler.inl
               HTTP_Header.inl
               HTTP_IOStream.inl
               HTTP_Request.inl
               HTTP_Response.inl
               HTTP_SessionBase.inl
               HTTP_Status.inl
               HTTP_URL.inl
               HeaderBase.inl
               URLBase.inl
)



ace_add_lib(ACE_INet_SSL
  OUTPUT_NAME ACE_INet_SSL
  PACKAGE ACE
  FOLDER ACE/protocols/ace/INet
  DEFINE_SYMBOL ACE_INET_SSL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_INet
                        ACE_SSL
                        ACE
)
ace_target_cxx_sources(ACE_INet_SSL
  SOURCE_FILES HTTPS_Context.cpp
               HTTPS_SessionFactory.cpp
               HTTPS_URL.cpp
               SSL_CallbackManager.cpp
               SSL_CertificateCallback.cpp
               SSL_PasswordCallback.cpp
               SSL_Proxy_Connector.cpp
               SSL_X509Cert.cpp
  HEADER_FILES HTTPS_Context.h
               HTTPS_Session.h
               HTTPS_SessionFactory.h
               HTTPS_URL.h
               INet_SSL_Export.h
               SSLSock_IOStream.h
               SSL_CallbackManager.h
               SSL_CertificateCallback.h
               SSL_PasswordCallback.h
               SSL_Proxy_Connector.h
               SSL_X509Cert.h
  INLINE_FILES HTTPS_Context.inl
               HTTPS_URL.inl
               SSL_CallbackManager.inl
               SSL_CertificateCallback.inl
               SSL_X509Cert.inl
)

