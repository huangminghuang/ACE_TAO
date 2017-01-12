

ace_requires("NOT MINIMUM_CORBA" "NOT CORBA_E_MICRO" "NOT CORBA_E_COMPACT")

ace_add_lib(TAO_DiffServPolicy
  OUTPUT_NAME TAO_DiffServPolicy
  PACKAGE TAO
  FOLDER tao/DiffServPolicy
  ASPECTS TAO
  DEFINE_SYMBOL TAO_DIFFSERVPOLICY_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
)
ace_target_cxx_sources(TAO_DiffServPolicy
  SOURCE_FILES Client_Network_Priority_Policy.cpp
               DiffServPolicy.cpp
               DiffServPolicy_Factory.cpp
               DiffServPolicy_ORBInitializer.cpp
               DiffServ_Network_Priority_Hook.cpp
               DiffServ_Protocols_Hooks.cpp
               DiffServ_Service_Context_Handler.cpp
               Server_Network_Priority_Policy.cpp
  HEADER_FILES Client_Network_Priority_Policy.h
               DiffServPolicy.h
               DiffServPolicy_Export.h
               DiffServPolicy_Factory.h
               DiffServPolicy_ORBInitializer.h
               DiffServ_Network_Priority_Hook.h
               DiffServ_Protocols_Hooks.h
               DiffServ_Service_Context_Handler.h
               Server_Network_Priority_Policy.h
)


tao_idl_sources(
  TARGETS TAO_DiffServPolicy
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -GA -SS -Sci -Sorb
            -Wb,export_macro=TAO_DiffServPolicy_Export
            -Wb,export_include=tao/DiffServPolicy/DiffServPolicy_Export.h
            -Wb,include_guard=TAO_DIFFSERVPOLICY_SAFE_INCLUDE
            -Wb,safe_include=tao/DiffServPolicy/DiffServPolicy.h
            -iC tao/DiffServPolicy
  IDL_FILES DiffServPolicy.pidl
)

