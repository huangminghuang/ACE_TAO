ace_target_cxx_sources(TAO_IDL_FE
  SOURCE_FILES fe_global.cpp
               fe_utils.cpp
               fe_obv_header.cpp
               fe_private.cpp
               fe_home_header.cpp
               fe_interface_header.cpp
               fe_extern.cpp
               idl.yy.cpp
               idl.tab.cpp
               fe_declarator.cpp
               fe_lookup.cpp
               fe_init.cpp
               fe_component_header.cpp
  HEADER_FILES idl.tab.hpp
  SUBGROUP \\fe
)

