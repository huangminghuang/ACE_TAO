
add_tao_component(
  NAME IORTable
  ADD_IDL_FLAGS -Gp -Gd -Sci -SS -Sorb -Sa -St
                -Wb,export_macro=TAO_IORTable_Export
                -Wb,export_include=tao/IORTable/iortable_export.h
                -Wb,stub_export_file=iortable_export.h
                -Wb,include_guard=TAO_IORTABLE_SAFE_INCLUDE
                -Wb,safe_include=tao/IORTable/IORTable.h
                -iC tao/IORTable -Gxhst
  IDL_FILES IORTable.pidl
  SOURCES IORTable.cpp
          IOR_Table_Impl.cpp
          Table_Adapter.cpp
          IORTableC.cpp
  PUBLIC_LINK_LIBRARIES TAO_PortableServer
)