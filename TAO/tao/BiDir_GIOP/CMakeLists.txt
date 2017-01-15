

ace_add_lib(TAO_BiDirGIOP
  OUTPUT_NAME TAO_BiDirGIOP
  PACKAGE TAO
  FOLDER tao/BiDir_GIOP
  DEFINE_SYMBOL TAO_BIDIRGIOP_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
)
ace_target_cxx_sources(TAO_BiDirGIOP
  SOURCE_FILES BiDirGIOP.cpp
               BiDirPolicy_Validator.cpp
               BiDir_ORBInitializer.cpp
               BiDir_PolicyFactory.cpp
               BiDir_Policy_i.cpp
               BiDir_Service_Context_Handler.cpp
  HEADER_FILES BiDirGIOP.h
               BiDirPolicy_Validator.h
               BiDir_ORBInitializer.h
               BiDir_PolicyFactory.h
               BiDir_Policy_i.h
               BiDir_Service_Context_Handler.h
)


tao_idl_sources(
  TARGETS TAO_BiDirGIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Sa -St -Gp -Gd -Sci -SS
            -Sorb -Sa -St
            -Wb,stub_export_macro=TAO_BIDIRGIOP_Export
            -Wb,stub_export_include=tao/BiDir_GIOP/bidirgiop_export.h
            -Wb,stub_export_file=bidirgiop_export.h
            -Wb,include_guard=TAO_BIDIRGIOP_SAFE_INCLUDE
            -Wb,safe_include=tao/BiDir_GIOP/BiDirGIOP.h
            -iC BiDir_GIOP -Gxhst
  IDL_FILES BiDirPolicy.pidl
)

