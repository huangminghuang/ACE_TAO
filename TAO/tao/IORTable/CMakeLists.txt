

ace_add_lib(TAO_IORTable
  OUTPUT_NAME TAO_IORTable
  PACKAGE TAO
  FOLDER tao/IORTable
  ASPECTS TAO
  DEFINE_SYMBOL TAO_IORTable_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PortableServer
)
ace_target_cxx_sources(TAO_IORTable
  SOURCE_FILES IORTable.cpp
               IOR_Table_Impl.cpp
               Table_Adapter.cpp
  HEADER_FILES IORTable.h
               IOR_Table_Impl.h
               Table_Adapter.h
)


tao_idl_sources(
  TARGETS TAO_IORTable
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -St -Gp -Gd -Sci -SS
            -Sorb
            -Wb,export_macro=TAO_IORTable_Export
            -Wb,export_include=tao/IORTable/iortable_export.h
            -Wb,stub_export_file=iortable_export.h
            -Wb,include_guard=TAO_IORTABLE_SAFE_INCLUDE
            -Wb,safe_include=tao/IORTable/IORTable.h
            -iC tao/IORTable -Gxhst
  IDL_FILES IORTable.pidl
)



ace_requires("NOT MINIMUM_CORBA" "NOT CORBA_E_MICRO" CORBA_MESSAGING)

ace_add_lib(TAO_Async_IORTable
  OUTPUT_NAME TAO_Async_IORTable
  PACKAGE TAO
  FOLDER tao/IORTable
  ASPECTS TAO
  DEFINE_SYMBOL TAO_Async_IORTable_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_Messaging
                        TAO_PortableServer
                        TAO_IORTable
)
ace_target_cxx_sources(TAO_Async_IORTable
  SOURCE_FILES Async_IORTable.cpp
               Async_IOR_Table_Impl.cpp
               Async_Table_Adapter.cpp
               Locate_ResponseHandler.cpp
  HEADER_FILES Async_IORTable.h
               Async_IOR_Table_Impl.h
               Async_Table_Adapter.h
               Locate_ResponseHandler.h
  INLINE_FILES Locate_ResponseHandler.inl
)


tao_idl_sources(
  TARGETS TAO_Async_IORTable
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -St -Gp -Gd -Sci -SS
            -Sorb
            -Wb,export_macro=TAO_Async_IORTable_Export
            -Wb,export_include=tao/IORTable/async_iortable_export.h
            -Wb,stub_export_file=async_iortable_export.h
            -Wb,include_guard=TAO_IORTABLE_SAFE_INCLUDE
            -Wb,safe_include=tao/IORTable/Async_IORTable.h
            -iC tao/IORTable -Gxhst
  IDL_FILES Async_IORTable.pidl
)

