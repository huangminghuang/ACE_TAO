

add_ace_lib(TAO_IORManip
  OUTPUT_NAME TAO_IORManip
  PACKAGE TAO
  FOLDER tao/IORManipulation
  ASPECTS TAO
  DEFINE_SYMBOL TAO_IORManip_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode
)
target_cxx_sources(TAO_IORManip
  SOURCE_FILES IORManip_Filter.cpp
               IORManip_IIOP_Filter.cpp
               IORManip_Loader.cpp
               IORManipulation.cpp
  HEADER_FILES IORManip_Filter.h
               IORManip_IIOP_Filter.h
               IORManip_Loader.h
               IORManipulation.h
)


tao_idl_sources(
  TARGETS TAO_IORManip
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Gp -Gd -Sci -SS -Sorb -GX
            -Wb,export_macro=TAO_IORManip_Export
            -Wb,export_include=tao/IORManipulation/ior_manip_export.h
            -Wb,stub_export_file=ior_manip_export.h
            -Wb,include_guard=TAO_IORMANIP_SAFE_INCLUDE
            -Wb,safe_include=tao/IORManipulation/IORManip_Loader.h
            -iC tao/IORManipulation
            -Gxhst
  IDL_FILES IOR.pidl
)

