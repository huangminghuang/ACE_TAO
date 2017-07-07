ace_requires("NOT TAO_HAS_MINIMUM_CORBA"
         "NOT TAO_HAS_CORBA_E_MICRO"
         "NOT TAO_HAS_CORBA_E_COMPACT"
         TAO_HAS_CORBA_MESSAGING
)

ace_add_lib(TAO_PortableGroup
  DEFINE_SYMBOL TAO_PORTABLEGROUP_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/PortableGroup
  PUBLIC_LINK_LIBRARIES  TAO_CosNaming
                         TAO_IORManip
                         TAO_Messaging
                         TAO_Svc_Utils
  UNITY_CXX_MINIMUM_PARTITIONS 2
)

ace_target_cxx_sources(TAO_PortableGroup
  SOURCE_FILES Fragments_Cleanup_Strategy.cpp
               GOA.cpp
               MIOP.cpp
               PG_Default_Property_Validator.cpp
               PG_FactoryRegistry.cpp
               PG_GenericFactory.cpp
               PG_Group_Factory.cpp
               PG_Group_Guard.cpp
               PG_Group_List_Store.cpp
               PG_Location_Equal_To.cpp
               PG_Location_Hash.cpp
               PG_MemberInfo.cpp
               PG_Null_Property_Validator.cpp
               PG_ObjectGroupManager.cpp
               PG_Object_Adapter_Factory.cpp
               PG_Object_Group.cpp
               PG_Object_Group_Manipulator.cpp
               PG_Object_Group_Storable.cpp
               PG_Operators.cpp
               PG_Properties_Encoder.cpp
               PG_Properties_Support.cpp
               PG_PropertyManager.cpp
               PG_Property_Set.cpp
               PG_Property_Utils.cpp
               PG_Servant_Dispatcher.cpp
               PG_Utils.cpp
               PortableGroup_Acceptor_Registry.cpp
               PortableGroup_Loader.cpp
               PortableGroup_ORBInitializer.cpp
               PortableGroup_Request_Dispatcher.cpp
               Portable_Group_Map.cpp
               UIPMC_Acceptor.cpp
               UIPMC_Connection_Handler.cpp
               UIPMC_Connector.cpp
               UIPMC_Endpoint.cpp
               UIPMC_Mcast_Connection_Handler.cpp
               UIPMC_Mcast_Transport.cpp
               UIPMC_Message_Block_Data_Iterator.cpp
               UIPMC_Transport.cpp
               UIPMC_Transport_Recv_Packet.cpp
               UIPMC_Wait_Never.cpp
               miop_resource.cpp
               UIPMC_Profile.cpp
               UIPMC_Factory.cpp

  HEADER_FILES Fragments_Cleanup_Strategy.h
               GOA.h
               MIOP.h
               PG_Default_Property_Validator.h
               PG_FactoryRegistry.h
               PG_Factory_Map.h
               PG_Factory_Set.h
               PG_GenericFactory.h
               PG_Group_Factory.h
               PG_Group_Guard.h
               PG_Group_List_Store.h
               PG_Location_Equal_To.h
               PG_Location_Hash.h
               PG_Location_Map.h
               PG_MemberInfo.h
               PG_Null_Property_Validator.h
               PG_ObjectGroupManager.h
               PG_ObjectGroup_Map.h
               PG_Object_Adapter_Factory.h
               PG_Object_Group.h
               PG_Object_Group_Manipulator.h
               PG_Object_Group_Storable.h
               PG_Operators.h
               PG_Properties_Encoder.h
               PG_Properties_Support.h
               PG_PropertyManager.h
               PG_Property_Set.h
               PG_Property_Set_Find.h
               PG_Property_Utils.h
               PG_Servant_Dispatcher.h
               PG_Utils.h
               PG_conf.h
               PortableGroup_Acceptor_Registry.h
               PortableGroup_Loader.h
               PortableGroup_ORBInitializer.h
               PortableGroup_Request_Dispatcher.h
               Portable_Group_Map.h
               UIPMC_Acceptor.h
               UIPMC_Connection_Handler.h
               UIPMC_Connector.h
               UIPMC_Endpoint.h
               UIPMC_Factory.h
               UIPMC_Mcast_Connection_Handler.h
               UIPMC_Mcast_Transport.h
               UIPMC_Message_Block_Data_Iterator.h
               UIPMC_Profile.h
               UIPMC_Transport.h
               UIPMC_Transport_Recv_Packet.h
               UIPMC_Wait_Never.h
               miop_resource.h
               miopconf.h
               portablegroup_export.h
  INLINE_FILES Fragments_Cleanup_Strategy.inl
               PG_Location_Equal_To.inl
               PG_Location_Hash.inl
               PG_Properties_Encoder.inl
               UIPMC_Acceptor.inl
               UIPMC_Endpoint.inl
)


set(PortableGroup_IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                            -Wb,export_macro=TAO_PortableGroup_Export
                            -Wb,export_include=orbsvcs/PortableGroup/portablegroup_export.h
                            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
                            -I${CMAKE_CURRENT_SOURCE_DIR}/..
)

tao_idl_sources(
  TARGETS TAO_PortableGroup
  IDL_FLAGS ${PortableGroup_IDL_FLAGS}
  IDL_FILES ../miop.idl
            ../PortableGroup_Simple_DS.idl
  WORKING_DIRECTORY ..
)

tao_idl_sources(
  TARGETS TAO_PortableGroup
  IDL_FLAGS ${PortableGroup_IDL_FLAGS} -GC
  IDL_FILES ../PortableGroup.idl
  WORKING_DIRECTORY ..
)