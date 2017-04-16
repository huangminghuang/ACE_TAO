

ace_requires("NOT TAO_HAS_CORBA_E_MICRO")

ace_add_lib(TAO_CSD_Framework
  OUTPUT_NAME TAO_CSD_Framework
  PACKAGE TAO
  FOLDER TAO/tao/CSD_Framework
  DEFINE_SYMBOL TAO_CSD_FW_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_CSD_Framework
  SOURCE_FILES CSD_Default_Servant_Dispatcher.cpp
               CSD_FW_Server_Request_Wrapper.cpp
               CSD_Framework_Loader.cpp
               CSD_ORBInitializer.cpp
               CSD_Object_Adapter.cpp
               CSD_Object_Adapter_Factory.cpp
               CSD_POA.cpp
               CSD_Strategy_Base.cpp
               CSD_Strategy_Proxy.cpp
               CSD_Strategy_Repository.cpp
  HEADER_FILES CSD_Default_Servant_Dispatcher.h
               CSD_FW_Export.h
               CSD_FW_Server_Request_Wrapper.h
               CSD_Framework_Loader.h
               CSD_ORBInitializer.h
               CSD_Object_Adapter.h
               CSD_Object_Adapter_Factory.h
               CSD_POA.h
               CSD_Strategy_Base.h
               CSD_Strategy_Proxy.h
               CSD_Strategy_Repository.h
  INLINE_FILES CSD_FW_Server_Request_Wrapper.inl
               CSD_POA.inl
               CSD_Strategy_Base.inl
               CSD_Strategy_Proxy.inl
)


tao_idl_sources(
  TARGETS TAO_CSD_Framework
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sci -SS -Gp -Gd -Sorb -GA
            -Sal
            -Wb,export_macro=TAO_CSD_FW_Export
            -Wb,export_include=tao/CSD_Framework/CSD_FW_Export.h
            -iC tao/CSD_Framework
  IDL_FILES CSD_Framework.pidl
)

