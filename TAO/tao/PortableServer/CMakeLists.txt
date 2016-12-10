add_tao_idl_targets(PortableServer_IDLS
  FLAGS -Gp -Gd -Sci -SS -Sorb -GA
        -Wb,export_macro=TAO_PortableServer_Export
        -Wb,export_include=tao/PortableServer/portableserver_export.h
        -iC tao/PortableServer
  IDL_FILES  ForwardRequest.pidl
)

add_tao_idl_targets(PortableServer_IDLS
  FLAGS -Gp -Gd -Sci -SS -Sorb -GA -Sal
        -Wb,export_macro=TAO_PortableServer_Export
        -Wb,export_include=tao/PortableServer/portableserver_export.h
        -iC tao/PortableServer
  IDL_FILES  AdapterActivator.pidl
        IdAssignmentPolicy.pidl
        IdUniquenessPolicy.pidl
        ImplicitActivationPolicy.pidl
        LifespanPolicy.pidl
        RequestProcessingPolicy.pidl
        ServantActivator.pidl
        ServantLocator.pidl
        ServantManager.pidl
        ServantRetentionPolicy.pidl
        ThreadPolicy.pidl
)

add_tao_idl_targets(PortableServer_IDLS
  FLAGS -Gp -Gd -Sci -SS -Sorb
        -Wb,export_macro=TAO_PortableServer_Export
        -Wb,export_include=tao/PortableServer/portableserver_export.h
        -iC tao/PortableServer
  IDL_FILES  POAManager.pidl
        POAManagerFactory.pidl
        POA.pidl
        PS_Current.pidl
)


add_tao_idl_targets(PortableServer_IDLS
  FLAGS -Sci -SS -Sorb -Sa -GX
        -Wb,export_macro=TAO_PortableServer_Export
        -Wb,export_include=tao/PortableServer/portableserver_export.h
        -Wb,unique_include=tao/PortableServer/PortableServer.h
        -iC tao/PortableServer
  IDL_FILES PortableServer_include.pidl
)

add_tao_idl_targets(PortableServer_IDLS
  FLAGS -Sci -SS -Sorb -Sa -GX
        -Wb,export_macro=TAO_PortableServer_Export
        -Wb,export_include=tao/PortableServer/portableserver_export.h
        -Wb,include_guard=TAO_PORTABLESERVER_SAFE_INCLUDE
        -Wb,safe_include=tao/PortableServer/PortableServer.h
        -iC tao/PortableServer
  IDL_FILES PortableServer.pidl
)

file(GLOB headers *.h *.inl *_T.cpp *.pidl)

list(APPEND headers
  Servant_var.cpp
  ${PortableServer_IDLS_HEADER_FILES}
)

set(sources
  Acceptor_Filter_Factory.cpp
  Active_Object_Map.cpp
  Active_Object_Map_Entry.cpp
  Active_Policy_Strategies.cpp
  Collocated_Arguments_Converter.cpp
  Collocated_Object_Proxy_Broker.cpp
  Creation_Time.cpp
  Default_Acceptor_Filter.cpp
  Default_Policy_Validator.cpp
  Default_Servant_Dispatcher.cpp
  Direct_Collocation_Upcall_Wrapper.cpp
  IdAssignmentPolicy.cpp
  IdAssignmentStrategy.cpp
  IdAssignmentStrategyFactoryImpl.cpp
  IdAssignmentStrategySystem.cpp
  IdAssignmentStrategyUser.cpp
  IdUniquenessPolicy.cpp
  IdUniquenessStrategyFactoryImpl.cpp
  IdUniquenessStrategyMultiple.cpp
  IdUniquenessStrategyUnique.cpp
  IdUniquenessStrategyUniqueFactoryImpl.cpp
  ImR_Client_Adapter.cpp
  ImplicitActivationPolicy.cpp
  ImplicitActivationStrategy.cpp
  ImplicitActivationStrategyExplicit.cpp
  ImplicitActivationStrategyFactoryImpl.cpp
  ImplicitActivationStrategyImplicit.cpp
  Key_Adapters.cpp
  LifespanPolicy.cpp
  LifespanStrategy.cpp
  LifespanStrategyFactoryImpl.cpp
  LifespanStrategyPersistent.cpp
  LifespanStrategyPersistentFactoryImpl.cpp
  LifespanStrategyTransient.cpp
  LifespanStrategyTransientFactoryImpl.cpp
  Network_Priority_Hook.cpp
  Non_Servant_Upcall.cpp
  ORT_Adapter_Factory.cpp
  Object_Adapter.cpp
  Object_Adapter_Factory.cpp
  Operation_Table.cpp
  Operation_Table_Binary_Search.cpp
  Operation_Table_Dynamic_Hash.cpp
  Operation_Table_Linear_Search.cpp
  Operation_Table_Perfect_Hash.cpp
  POAManager.cpp
  POAManagerFactory.cpp
  POA_Cached_Policies.cpp
  POA_Current.cpp
  POA_Current_Factory.cpp
  POA_Current_Impl.cpp
  POA_Guard.cpp
  POA_Policy_Set.cpp
  PS_ForwardA.cpp
  PS_ForwardC.cpp
  PortableServer.cpp
  PortableServer_Functions.cpp
  PortableServer_WFunctions.cpp
  Regular_POA.cpp
  RequestProcessingPolicy.cpp
  RequestProcessingStrategy.cpp
  RequestProcessingStrategyAOMOnly.cpp
  RequestProcessingStrategyAOMOnlyFactoryImpl.cpp
  RequestProcessingStrategyDefaultServant.cpp
  RequestProcessingStrategyDefaultServantFI.cpp
  RequestProcessingStrategyFactoryImpl.cpp
  RequestProcessingStrategyServantActivator.cpp
  RequestProcessingStrategyServantActivatorFI.cpp
  RequestProcessingStrategyServantLocator.cpp
  RequestProcessingStrategyServantLocatorFI.cpp
  RequestProcessingStrategyServantManager.cpp
  Root_POA.cpp
  SUpcall_commands.cpp
  ServantRetentionPolicy.cpp
  ServantRetentionStrategyFactoryImpl.cpp
  ServantRetentionStrategyNonRetain.cpp
  ServantRetentionStrategyNonRetainFactoryImpl.cpp
  ServantRetentionStrategyRetain.cpp
  ServantRetentionStrategyRetainFactoryImpl.cpp
  Servant_Base.cpp
  Servant_Dispatcher.cpp
  Servant_Upcall.cpp
  StrategyFactory.cpp
  ThreadPolicy.cpp
  ThreadStrategy.cpp
  ThreadStrategyFactoryImpl.cpp
  ThreadStrategyORBControl.cpp
  ThreadStrategySingle.cpp
  ThreadStrategySingleFactoryImpl.cpp
  Upcall_Command.cpp
  Upcall_Wrapper.cpp
  ${PortableServer_IDLS_OUTPUT_FILES}
)

add_tao_component(
  NAME PortableServer
  SOURCES ${sources}
  PUBLIC_HEADER "${headers}"
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

