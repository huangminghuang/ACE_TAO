find_package(OpenSSL)

requires(OPENSSL_FOUND)

add_ace_lib(ACE_SSL
  OUTPUT_NAME ACE_SSL
  PACKAGE ACE
  FOLDER ace/SSL
  DEFINE_SYMBOL ACE_SSL_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${OPENSSL_INCLUDE_DIR}
  PUBLIC_LINK_LIBRARIES ${OPENSSL_LIBRARIES}
                        ACE
)
target_cxx_sources(ACE_SSL
  SOURCE_FILES SSL_Asynch_BIO.cpp
               SSL_Asynch_Stream.cpp
               SSL_Context.cpp
               SSL_Initializer.cpp
               SSL_SOCK.cpp
               SSL_SOCK_Acceptor.cpp
               SSL_SOCK_Connector.cpp
               SSL_SOCK_Stream.cpp
  HEADER_FILES SSL_Asynch_BIO.h
               SSL_Asynch_Stream.h
               SSL_Context.h
               SSL_Initializer.h
               SSL_SOCK.h
               SSL_SOCK_Acceptor.h
               SSL_SOCK_Connector.h
               SSL_SOCK_Stream.h
  INLINE_FILES SSL_Asynch_Stream.inl
               SSL_Context.inl
               SSL_SOCK.inl
               SSL_SOCK_Acceptor.inl
               SSL_SOCK_Connector.inl
               SSL_SOCK_Stream.inl
)

