

ace_add_lib(TAO_PortableServer
  OUTPUT_NAME TAO_PortableServer
  PACKAGE TAO
  FOLDER tao/PortableServer
  ASPECTS VALUETYPE_OUT_INDIRECTION
          TAO
  DEFINE_SYMBOL TAO_PORTABLESERVER_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_PortableServer
  SOURCE_FILES Acceptor_Filter_Factory.cpp
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
               Servant_var.cpp
               StrategyFactory.cpp
               ThreadPolicy.cpp
               ThreadStrategy.cpp
               ThreadStrategyFactoryImpl.cpp
               ThreadStrategyORBControl.cpp
               ThreadStrategySingle.cpp
               ThreadStrategySingleFactoryImpl.cpp
               Upcall_Command.cpp
               Upcall_Wrapper.cpp
  HEADER_FILES Acceptor_Filter_Factory.h
               Active_Object_Map.h
               Active_Object_Map_Entry.h
               Active_Policy_Strategies.h
               Any_SArg_Traits.h
               BD_String_SArgument_T.h
               Basic_SArgument_T.h
               Basic_SArguments.h
               Collocated_Arguments_Converter.h
               Collocated_Object_Proxy_Broker.h
               Creation_Time.h
               Default_Acceptor_Filter.h
               Default_Policy_Validator.h
               Default_Servant_Dispatcher.h
               Direct_Collocation_Upcall_Wrapper.h
               Fixed_Array_SArgument_T.h
               Fixed_Size_SArgument_T.h
               IdAssignmentPolicy.h
               IdAssignmentStrategy.h
               IdAssignmentStrategyFactory.h
               IdAssignmentStrategyFactoryImpl.h
               IdAssignmentStrategySystem.h
               IdAssignmentStrategyUser.h
               IdUniquenessPolicy.h
               IdUniquenessStrategy.h
               IdUniquenessStrategyFactory.h
               IdUniquenessStrategyFactoryImpl.h
               IdUniquenessStrategyMultiple.h
               IdUniquenessStrategyUnique.h
               IdUniquenessStrategyUniqueFactoryImpl.h
               ImR_Client_Adapter.h
               ImplicitActivationPolicy.h
               ImplicitActivationStrategy.h
               ImplicitActivationStrategyExplicit.h
               ImplicitActivationStrategyFactory.h
               ImplicitActivationStrategyFactoryImpl.h
               ImplicitActivationStrategyImplicit.h
               Key_Adapters.h
               LifespanPolicy.h
               LifespanStrategy.h
               LifespanStrategyFactory.h
               LifespanStrategyFactoryImpl.h
               LifespanStrategyPersistent.h
               LifespanStrategyPersistentFactoryImpl.h
               LifespanStrategyTransient.h
               LifespanStrategyTransientFactoryImpl.h
               Network_Priority_Hook.h
               Non_Servant_Upcall.h
               ORT_Adapter.h
               ORT_Adapter_Factory.h
               Object_Adapter.h
               Object_Adapter_Factory.h
               Object_SArg_Traits.h
               Object_SArgument_T.h
               Operation_Table.h
               Operation_Table_Binary_Search.h
               Operation_Table_Dynamic_Hash.h
               Operation_Table_Linear_Search.h
               Operation_Table_Perfect_Hash.h
               POAManager.h
               POAManagerFactory.h
               POA_Cached_Policies.h
               POA_Current.h
               POA_Current_Factory.h
               POA_Current_Impl.h
               POA_Guard.h
               POA_Policy_Set.h
               PS_ForwardA.h
               PS_ForwardC.h
               PS_ForwardS.h
               Policy_Strategy.h
               PortableServer.h
               PortableServer_Functions.h
               PortableServer_WFunctions.h
               Regular_POA.h
               RequestProcessingPolicy.h
               RequestProcessingStrategy.h
               RequestProcessingStrategyAOMOnly.h
               RequestProcessingStrategyAOMOnlyFactoryImpl.h
               RequestProcessingStrategyDefaultServant.h
               RequestProcessingStrategyDefaultServantFI.h
               RequestProcessingStrategyFactory.h
               RequestProcessingStrategyFactoryImpl.h
               RequestProcessingStrategyServantActivator.h
               RequestProcessingStrategyServantActivatorFI.h
               RequestProcessingStrategyServantLocator.h
               RequestProcessingStrategyServantLocatorFI.h
               RequestProcessingStrategyServantManager.h
               Root_POA.h
               SArg_Traits_T.h
               SUpcall_commands.h
               ServantRetentionPolicy.h
               ServantRetentionStrategy.h
               ServantRetentionStrategyFactory.h
               ServantRetentionStrategyFactoryImpl.h
               ServantRetentionStrategyNonRetain.h
               ServantRetentionStrategyNonRetainFactoryImpl.h
               ServantRetentionStrategyRetain.h
               ServantRetentionStrategyRetainFactoryImpl.h
               Servant_Base.h
               Servant_Dispatcher.h
               Servant_Location.h
               Servant_Upcall.h
               Servant_var.h
               Special_Basic_SArgument_T.h
               Special_Basic_SArguments.h
               StrategyFactory.h
               ThreadPolicy.h
               ThreadStrategy.h
               ThreadStrategyFactory.h
               ThreadStrategyFactoryImpl.h
               ThreadStrategyORBControl.h
               ThreadStrategySingle.h
               ThreadStrategySingleFactoryImpl.h
               TypeCode_SArg_Traits.h
               UB_String_SArgument_T.h
               UB_String_SArguments.h
               Upcall_Command.h
               Upcall_Wrapper.h
               Var_Array_SArgument_T.h
               Var_Size_SArgument_T.h
               Vector_SArgument_T.h
               get_arg.h
               poa_macros.h
               portableserver_export.h
  INLINE_FILES Active_Object_Map.inl
               Active_Policy_Strategies.inl
               BD_String_SArgument_T.inl
               Basic_SArgument_T.inl
               Creation_Time.inl
               Fixed_Array_SArgument_T.inl
               Fixed_Size_SArgument_T.inl
               Non_Servant_Upcall.inl
               Object_Adapter.inl
               Object_SArgument_T.inl
               POAManager.inl
               POA_Cached_Policies.inl
               POA_Current_Impl.inl
               POA_Policy_Set.inl
               Regular_POA.inl
               Root_POA.inl
               Servant_Base.inl
               Servant_Upcall.inl
               Servant_var.inl
               Special_Basic_SArgument_T.inl
               UB_String_SArgument_T.inl
               Var_Array_SArgument_T.inl
               Var_Size_SArgument_T.inl
               Vector_SArgument_T.inl
  TEMPLATE_FILES BD_String_SArgument_T.cpp
                 Basic_SArgument_T.cpp
                 Fixed_Array_SArgument_T.cpp
                 Fixed_Size_SArgument_T.cpp
                 Object_SArgument_T.cpp
                 Special_Basic_SArgument_T.cpp
                 UB_String_SArgument_T.cpp
                 Var_Array_SArgument_T.cpp
                 Var_Size_SArgument_T.cpp
                 Vector_SArgument_T.cpp
)


set(PortableServer_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS})
tao_idl_sources(
  TARGETS TAO_PortableServer
  STUB_TARGETS TAO_PortableServer
  IDL_FLAGS ${PortableServer_Idl_FLAGS}
            -Gp -Gd -Sci -SS -Sorb -GA
            -Wb,export_macro=TAO_PortableServer_Export
            -Wb,export_include=tao/PortableServer/portableserver_export.h
            -iC tao/PortableServer
  IDL_FILES ForwardRequest.pidl
)

tao_idl_sources(
  TARGETS TAO_PortableServer
  STUB_TARGETS TAO_PortableServer
  IDL_FLAGS ${PortableServer_Idl_FLAGS}
            -Gp -Gd -Sci -SS -Sorb -GA
            -Sal
            -Wb,export_macro=TAO_PortableServer_Export
            -Wb,export_include=tao/PortableServer/portableserver_export.h
            -iC tao/PortableServer
  IDL_FILES AdapterActivator.pidl
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

tao_idl_sources(
  TARGETS TAO_PortableServer
  STUB_TARGETS TAO_PortableServer
  IDL_FLAGS ${PortableServer_Idl_FLAGS}
            -Gp -Gd -Sci -SS -Sorb
            -Wb,export_macro=TAO_PortableServer_Export
            -Wb,export_include=tao/PortableServer/portableserver_export.h
            -iC tao/PortableServer
  IDL_FILES POAManager.pidl
            POAManagerFactory.pidl
            POA.pidl
            PS_Current.pidl
)

tao_idl_sources(
  TARGETS TAO_PortableServer
  STUB_TARGETS TAO_PortableServer
  IDL_FLAGS ${PortableServer_Idl_FLAGS}
            -Sa -St -Sa -St -Sa -St -Sci
            -SS -Sorb -Sa -GX
            -Wb,export_macro=TAO_PortableServer_Export
            -Wb,export_include=tao/PortableServer/portableserver_export.h
            -Wb,unique_include=tao/PortableServer/PortableServer.h
            -iC tao/PortableServer
  IDL_FILES PortableServer_include.pidl
)

tao_idl_sources(
  TARGETS TAO_PortableServer
  STUB_TARGETS TAO_PortableServer
  IDL_FLAGS ${PortableServer_Idl_FLAGS}
            -Sa -St -Sa -St -Sa -St -Sci
            -SS -Sorb -Sa -GX
            -Wb,export_macro=TAO_PortableServer_Export
            -Wb,export_include=tao/PortableServer/portableserver_export.h
            -Wb,include_guard=TAO_PORTABLESERVER_SAFE_INCLUDE
            -Wb,safe_include=tao/PortableServer/PortableServer.h
            -iC tao/PortableServer
  IDL_FILES PortableServer.pidl
)

ace_install_package_files(TAO
  PS_Forward.pidl
)

