

ace_requires(RT_CORBA "NOT CORBA_E_COMPACT")

ace_add_lib(TAO_RTPortableServer
  OUTPUT_NAME TAO_RTPortableServer
  PACKAGE TAO
  FOLDER tao/RTPortableServer
  ASPECTS TAO
  DEFINE_SYMBOL TAO_RTPORTABLESERVER_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
                        TAO_RTCORBA
)
ace_target_cxx_sources(TAO_RTPortableServer
  SOURCE_FILES RTPortableServer.cpp
               RT_Acceptor_Filters.cpp
               RT_Collocation_Resolver.cpp
               RT_Object_Adapter_Factory.cpp
               RT_POA.cpp
               RT_Policy_Validator.cpp
               RT_Servant_Dispatcher.cpp
  HEADER_FILES RTPortableServer.h
               RT_Acceptor_Filters.h
               RT_Collocation_Resolver.h
               RT_Object_Adapter_Factory.h
               RT_POA.h
               RT_Policy_Validator.h
               RT_Servant_Dispatcher.h
               rtportableserver_export.h
  INLINE_FILES RT_POA.inl
)


set(RTPortableServer_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                               -Sa -St -Sci -SS -Sorb -GX
                               -Wb,export_macro=TAO_RTPortableServer_Export
                               -Wb,export_include=tao/RTPortableServer/rtportableserver_export.h
                               -iC RTPortableServer)
tao_idl_sources(
  TARGETS TAO_RTPortableServer
  IDL_FLAGS ${RTPortableServer_Idl_FLAGS}
            -Gp -Gd
            -Wb,include_guard=TAO_RT_PORTABLESERVER_SAFE_INCLUDE
            -Wb,safe_include=tao/RTPortableServer/RTPortableServer.h
  IDL_FILES RTPortableServer.pidl
)

tao_idl_sources(
  TARGETS TAO_RTPortableServer
  IDL_FLAGS ${RTPortableServer_Idl_FLAGS}
            -Sa
            -Wb,unique_include=tao/RTPortableServer/RTPortableServer.h
  IDL_FILES RTPortableServer_include.pidl
)

