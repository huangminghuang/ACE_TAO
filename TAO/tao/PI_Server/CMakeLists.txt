

ace_add_lib(TAO_PI_Server
  OUTPUT_NAME TAO_PI_Server
  PACKAGE TAO
  FOLDER TAO/tao/PI_Server
  DEFINE_SYMBOL TAO_PI_SERVER_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_PI_Server
  SOURCE_FILES PICurrent_Guard.cpp
               PI_Server.cpp
               PI_Server_Loader.cpp
               PortableServer_ORBInitializer.cpp
               PortableServer_PolicyFactory.cpp
               ServerInterceptorAdapter.cpp
               ServerRequestDetails.cpp
               ServerRequestInfo.cpp
               ServerRequestInterceptorA.cpp
               ServerRequestInterceptorC.cpp
               ServerRequestInterceptor_Factory_Impl.cpp
  HEADER_FILES PICurrent_Guard.h
               PI_Server.h
               PI_Server_Loader.h
               Policy_Creator_T.h
               PortableServer_ORBInitializer.h
               PortableServer_PolicyFactory.h
               ServerInterceptorAdapter.h
               ServerRequestDetails.h
               ServerRequestInfo.h
               ServerRequestInterceptorA.h
               ServerRequestInterceptorC.h
               ServerRequestInterceptorS.h
               ServerRequestInterceptor_Factory_Impl.h
               pi_server_export.h
  INLINE_FILES ServerRequestDetails.inl
               ServerRequestInfo.inl
)


set(PI_Server_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                        -Wb,export_macro=TAO_PI_Server_Export
                        -Wb,export_include=tao/PI_Server/pi_server_export.h
                        -iC tao/PI_Server)
tao_idl_sources(
  TARGETS TAO_PI_Server
  IDL_FLAGS ${PI_Server_Idl_FLAGS} -Sci
            -SS -GA -Gp -Gd -Sorb -Sal
  IDL_FILES ServerRequestInfo.pidl
)

tao_idl_sources(
  TARGETS TAO_PI_Server
  IDL_FLAGS ${PI_Server_Idl_FLAGS} -Sa
            -St -SS -Sorb -GX -Sci
            -Wb,unique_include=tao/PI_Server/PI_Server.h
  IDL_FILES PI_Server_include.pidl
)

ace_install_package_files(TAO
  ServerRequestInterceptor.pidl
)

