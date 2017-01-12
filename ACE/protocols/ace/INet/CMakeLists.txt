

ace_requires("NOT EXCLUDE_INET" "NOT OLD_STDSTREAM")

ace_add_lib(ACE_INet
  OUTPUT_NAME ACE_INet
  PACKAGE ACE
  FOLDER protocols/ace/INet
  DEFINE_SYMBOL ACE_INET_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<BUILD_INTERFACE:${ACE_ROOT}/protocols>
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ACE_INet
  SOURCE_FILES AuthenticationBase.cpp
               FTP_Request.cpp
               ClientRequestHandler.cpp
               FTP_ClientRequestHandler.cpp
               HTTP_SessionBase.cpp
               Response.cpp
               HeaderBase.cpp
               ConnectionCache.cpp
               HTTP_URL.cpp
               HTTP_Response.cpp
               HTTP_Request.cpp
               RequestHandler.cpp
               FTP_IOStream.cpp
               HTTP_Header.cpp
               HTTP_Status.cpp
               IOS_util.cpp
               FTP_URL.cpp
               HTTP_ClientRequestHandler.cpp
               INet_Log.cpp
               HTTP_BasicAuthentication.cpp
               URLBase.cpp
               HTTP_IOStream.cpp
               Request.cpp
               FTP_Response.cpp
  HEADER_FILES INet_Export.h
               IOS_util.h
               INet_Log.h
               HeaderBase.h
               Request.h
               Response.h
               RequestHandler.h
               ConnectionCache.h
               ClientRequestHandler.h
               HTTP_Status.h
               HTTP_Header.h
               HTTP_Response.h
               HTTP_Request.h
               HTTP_IOStream.h
               HTTP_SessionBase.h
               HTTP_BasicAuthentication.h
               URLBase.h
               AuthenticationBase.h
               HTTP_URL.h
               HTTP_ClientRequestHandler.h
               FTP_Request.h
               FTP_Response.h
               FTP_IOStream.h
               FTP_URL.h
               FTP_ClientRequestHandler.h
               BidirStreamBuffer.h
               BufferedStreamBuffer.h
               HTTP_Session.h
               HTTP_StreamPolicy.h
               HTTP_StreamPolicyBase.h
               Sock_IOStream.h
               StreamHandler.h
               StreamInterceptor.h
               String_IOStream.h
               FTP_Session.h
  INLINE_FILES HeaderBase.inl
               ConnectionCache.inl
               ClientRequestHandler.inl
               HTTP_Status.inl
               HTTP_Header.inl
               HTTP_Response.inl
               HTTP_Request.inl
               HTTP_IOStream.inl
               HTTP_SessionBase.inl
               HTTP_BasicAuthentication.inl
               URLBase.inl
               AuthenticationBase.inl
               HTTP_URL.inl
               HTTP_ClientRequestHandler.inl
               FTP_Request.inl
               FTP_Response.inl
               FTP_IOStream.inl
               FTP_URL.inl
               FTP_ClientRequestHandler.inl
  TEMPLATE_FILES BidirStreamBuffer.cpp
                 BufferedStreamBuffer.cpp
                 HTTP_Session.cpp
                 HTTP_StreamPolicy.cpp
                 HTTP_StreamPolicyBase.cpp
                 Sock_IOStream.cpp
                 StreamHandler.cpp
                 StreamInterceptor.cpp
                 String_IOStream.cpp
                 FTP_Session.cpp
)



ace_add_lib(ACE_INet_SSL
  OUTPUT_NAME ACE_INet_SSL
  PACKAGE ACE
  FOLDER protocols/ace/INet
  DEFINE_SYMBOL ACE_INET_SSL_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${ACE_ROOT}/protocols>
  PUBLIC_LINK_LIBRARIES ACE_INet
                        ACE_SSL
                        ACE
)
ace_target_cxx_sources(ACE_INet_SSL
  SOURCE_FILES HTTPS_URL.cpp
               SSL_X509Cert.cpp
               SSL_CallbackManager.cpp
               HTTPS_SessionFactory.cpp
               SSL_Proxy_Connector.cpp
               SSL_CertificateCallback.cpp
               SSL_PasswordCallback.cpp
               HTTPS_Context.cpp
  HEADER_FILES INet_SSL_Export.h
               SSL_X509Cert.h
               SSL_CertificateCallback.h
               SSL_PasswordCallback.h
               SSL_CallbackManager.h
               HTTPS_Context.h
               HTTPS_URL.h
               HTTPS_SessionFactory.h
               SSL_Proxy_Connector.h
               SSLSock_IOStream.h
               HTTPS_Session.h
  INLINE_FILES SSL_X509Cert.inl
               SSL_CertificateCallback.inl
               SSL_CallbackManager.inl
               HTTPS_Context.inl
               HTTPS_URL.inl
  TEMPLATE_FILES SSLSock_IOStream.cpp
                 HTTPS_Session.cpp
)

