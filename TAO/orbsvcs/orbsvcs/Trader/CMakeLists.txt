
add_ace_lib(TAO_CosTrading
  DEFINE_SYMBOL TAO_TRADING_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../..>
                             $<INSTALL_INTERFACE:${TAO_INSTALL_DIR}/orbsvcs>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)

target_cxx_sources(TAO_CosTrading
  HEADER_FILES trading_export.h
)

add_ace_lib(TAO_CosTrading_Skel
  DEFINE_SYMBOL TAO_TRADING_SKEL_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_CosTrading TAO_PortableServer
)

target_cxx_sources(TAO_CosTrading_Skel
  HEADER_FILES trading_skel_export.h
)


tao_idl_sources(
  STUB_TARGETS TAO_CosTrading
  SKEL_TARGETS TAO_CosTrading_Skel
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,stub_export_macro=TAO_Trading_Export
            -Wb,stub_export_include=orbsvcs/Trader/trading_export.h
            -Wb,skel_export_macro=TAO_Trading_Skel_Export
            -Wb,skel_export_include=orbsvcs/Trader/trading_skel_export.h
  IDL_FILES ../CosTrading.idl
            ../CosTradingRepos.idl
            ../CosTradingDynamic.idl
  WORKING_DIRECTORY ..
)

add_ace_lib(TAO_CosTrading_Serv
  DEFINE_SYMBOL TAO_TRADING_SERV_BUILD_DLL
  PACKAGE TAO
  FOLDER orbsvcs/orbsvcs
  PUBLIC_LINK_LIBRARIES TAO_CosTrading_Skel
                        TAO_DynamicAny
                        TAO_Svc_Utils
                        TAO_IORTable
                        TAO_Utils
)

target_cxx_sources(TAO_CosTrading_Serv
  SOURCE_FILES Constraint_Interpreter.cpp
               Constraint_Nodes.cpp
               Constraint_Visitors.cpp
               Constraint_l.cpp
               Constraint_y.cpp
               Interpreter.cpp
               Interpreter_Utils.cpp
               Offer_Database.cpp
               Offer_Iterators.cpp
               Service_Type_Repository.cpp
               Trader.cpp
               Trader_Constraint_Visitors.cpp
               Trader_Interfaces.cpp
               Trader_Utils.cpp
               Trading_Loader.cpp
  HEADER_FILES Constraint_Interpreter.h
               Constraint_Nodes.h
               Constraint_Tokens.h
               Constraint_Visitors.h
               Interpreter.h
               Interpreter_Utils.h
               Interpreter_Utils_T.h
               Offer_Database.h
               Offer_Iterators.h
               Offer_Iterators_T.h
               Service_Type_Repository.h
               Trader.h
               Trader_Constraint_Visitors.h
               Trader_Interfaces.h
               Trader_T.h
               Trader_Utils.h
               Trading_Loader.h
               trading_export.h
               trading_serv_export.h
               trading_skel_export.h
  INLINE_FILES Constraint_Nodes.inl
  TEMPLATE_FILES Interpreter_Utils_T.cpp
                 Offer_Iterators_T.cpp
                 Trader_T.cpp
)
