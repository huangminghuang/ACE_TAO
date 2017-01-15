

ace_requires("NOT TAO_HAS_CORBA_E_MICRO" TAO_HAS_CORBA_MESSAGING)

ace_add_lib(TAO_Async_ImR_Client_IDL
  OUTPUT_NAME TAO_Async_ImR_Client_IDL
  PACKAGE TAO
  FOLDER orbsvcs/ImplRepo_Service
  DEFINE_SYMBOL ASYNC_IMR_CLIENT_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Messaging
                        TAO_PortableServer
                        TAO_Valuetype
                        TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_Async_ImR_Client_IDL
  HEADER_FILES async_imr_client_export.h
)

set(TAO_Async_ImR_Client_IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                                   -Gp -Gd -Sorb
                                   -I${TAO_ROOT}/tao/ImR_Client
                                   -Wb,export_macro=Async_IMR_Client_Export
                                   -Wb,export_include=async_imr_client_export.h
                                   -I${TAO_ROOT}/orbsvcs)
tao_idl_sources(
  TARGETS TAO_Async_ImR_Client_IDL
  IDL_FLAGS ${TAO_Async_ImR_Client_IDL_FLAGS}
            -GA -GC
  IDL_FILES ../../tao/ImR_Client/ServerObject.idl
)

tao_idl_sources(
  TARGETS TAO_Async_ImR_Client_IDL
  IDL_FLAGS ${TAO_Async_ImR_Client_IDL_FLAGS}
            -GX -GH
  IDL_FILES ../../tao/ImR_Client/ImplRepo.idl
)


ace_add_lib(TAO_ImR_Activator_IDL
  OUTPUT_NAME TAO_ImR_Activator_IDL
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  DEFINE_SYMBOL ACTIVATOR_IDL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Async_ImR_Client_IDL
                        TAO_AnyTypeCode
                        TAO_Messaging
                        TAO_Valuetype
                        TAO_PortableServer
                        TAO_DynamicInterface
)
ace_target_cxx_sources(TAO_ImR_Activator_IDL
  HEADER_FILES activator_idl_export.h
)

tao_idl_sources(
  TARGETS TAO_ImR_Activator_IDL
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=ActivatorIDL_Export
            -Wb,export_include=activator_idl_export.h
            -I${TAO_ROOT}/tao/ImR_Client
            -I${TAO_ROOT}/orbsvcs -GH -GC
  IDL_FILES ImR_Activator.idl
)


ace_add_lib(TAO_ImR_Locator_IDL
  OUTPUT_NAME TAO_ImR_Locator_IDL
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  DEFINE_SYMBOL LOCATOR_IDL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Async_ImR_Client_IDL
                        TAO_AnyTypeCode
                        TAO_Messaging
                        TAO_Valuetype
                        TAO_ImR_Activator_IDL
                        TAO_PortableServer
                        TAO_DynamicInterface
)
ace_target_cxx_sources(TAO_ImR_Locator_IDL
  HEADER_FILES locator_idl_export.h
)

tao_idl_sources(
  TARGETS TAO_ImR_Locator_IDL
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=LocatorIDL_Export
            -Wb,export_include=locator_idl_export.h
            -I${TAO_ROOT}/tao/ImR_Client
            -I${TAO_ROOT}/orbsvcs -GH
  IDL_FILES ImR_Locator.idl
)


ace_add_lib(TAO_ImR_Activator
  OUTPUT_NAME TAO_ImR_Activator
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  DEFINE_SYMBOL ACTIVATOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Messaging
                        TAO_Async_ImR_Client_IDL
                        TAO_AnyTypeCode
                        TAO_CodecFactory
                        TAO_Svc_Utils
                        TAO_PI
                        TAO_DynamicInterface
                        TAO_Valuetype
                        TAO_ImR_Locator_IDL
                        TAO_ImR_Activator_IDL
                        TAO_PortableServer
                        ACEXML_Parser
)
ace_target_cxx_sources(TAO_ImR_Activator
  SOURCE_FILES Activator_Loader.cpp
               Activator_Options.cpp
               ImR_Activator_i.cpp
  HEADER_FILES Activator_Loader.h
               Activator_Options.h
               ImR_Activator_i.h
               activator_export.h
)


ace_add_lib(TAO_ImR_Locator
  OUTPUT_NAME TAO_ImR_Locator
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  DEFINE_SYMBOL LOCATOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Async_ImR_Client_IDL
                        TAO_AnyTypeCode
                        TAO_Svc_Utils
                        TAO_PortableServer
                        TAO_Messaging
                        TAO_Valuetype
                        TAO_Async_IORTable
                        TAO_ImR_Locator_IDL
                        TAO_IORManip
                        TAO_ImR_Activator_IDL
                        TAO_DynamicInterface
                        ACEXML_Parser
)
ace_target_cxx_sources(TAO_ImR_Locator
  SOURCE_FILES Activator_Info.cpp
               Adapter_Activator.cpp
               AsyncAccessManager.cpp
               AsyncListManager.cpp
               Config_Backing_Store.cpp
               Forwarder.cpp
               INS_Locator.cpp
               ImR_Locator_i.cpp
               ImR_ResponseHandler.cpp
               ImR_Utils.cpp
               Iterator.cpp
               LiveCheck.cpp
               Locator_Loader.cpp
               Locator_Options.cpp
               Locator_Repository.cpp
               Locator_XMLHandler.cpp
               Replicator.cpp
               Server_Info.cpp
               Shared_Backing_Store.cpp
               UpdateableServerInfo.cpp
               XML_Backing_Store.cpp
  HEADER_FILES Activator_Info.h
               Adapter_Activator.h
               AsyncAccessManager.h
               AsyncListManager.h
               Config_Backing_Store.h
               Forwarder.h
               INS_Locator.h
               ImR_Locator_i.h
               ImR_ResponseHandler.h
               Iterator.h
               LiveCheck.h
               Locator_Loader.h
               Locator_Options.h
               Locator_Repository.h
               Locator_XMLHandler.h
               Replicator.h
               Server_Info.h
               Shared_Backing_Store.h
               UpdateableServerInfo.h
               XML_Backing_Store.h
               locator_export.h
               utils.h
)


ace_add_exe(tao_imr_locator
  OUTPUT_NAME tao_imr_locator
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  LINK_LIBRARIES TAO_Async_ImR_Client_IDL
                 TAO_AnyTypeCode
                 TAO_Valuetype
                 TAO_Svc_Utils
                 TAO_ImR_Locator
                 TAO_Messaging
                 TAO_DynamicInterface
                 TAO_ImR_Locator_IDL
                 TAO_Async_IORTable
                 TAO_PI_Server
                 TAO_IORManip
                 TAO_ImR_Activator_IDL
                 TAO_PortableServer
                 ACEXML_Parser
)
ace_target_cxx_sources(tao_imr_locator
  SOURCE_FILES ImR_Locator.cpp
               Locator_NT_Service.cpp
  HEADER_FILES Locator_NT_Service.h
)


ace_add_exe(tao_imr_activator
  OUTPUT_NAME tao_imr_activator
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  LINK_LIBRARIES TAO_Async_ImR_Client_IDL
                 TAO_AnyTypeCode
                 TAO_Svc_Utils
                 TAO_ImR_Activator
                 TAO_Messaging
                 TAO_DynamicInterface
                 TAO_ImR_Locator_IDL
                 TAO_ImR_Activator_IDL
                 ACEXML_Parser
)
ace_target_cxx_sources(tao_imr_activator
  SOURCE_FILES Activator_NT_Service.cpp
               ImR_Activator.cpp
  HEADER_FILES Activator_NT_Service.h
)


ace_add_exe(tao_imr
  OUTPUT_NAME tao_imr
  PACKAGE TAO
  REQUIRES "NOT TAO_HAS_MINIMUM_CORBA"
           "NOT TAO_HAS_CORBA_E_COMPACT"
  FOLDER orbsvcs/ImplRepo_Service
  LINK_LIBRARIES TAO_AnyTypeCode
                 TAO_ImR_Client
                 TAO_Svc_Utils
                 TAO_Messaging
                 TAO_PortableServer
)
ace_target_cxx_sources(tao_imr
  SOURCE_FILES tao_imr.cpp
               tao_imr_i.cpp
  HEADER_FILES tao_imr_i.h
)

