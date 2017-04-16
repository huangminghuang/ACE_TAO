

ace_add_lib(TAO_ZIOP
  OUTPUT_NAME TAO_ZIOP
  PACKAGE TAO
  FOLDER TAO/tao/ZIOP
  DEFINE_SYMBOL TAO_ZIOP_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_Compression
                        TAO_PI
)
ace_target_cxx_sources(TAO_ZIOP
  SOURCE_FILES ZIOP.cpp
               ZIOP_ORBInitializer.cpp
               ZIOP_PolicyFactory.cpp
               ZIOP_Policy_Validator.cpp
               ZIOP_Policy_i.cpp
               ZIOP_Service_Context_Handler.cpp
               ZIOP_Stub.cpp
               ZIOP_Stub_Factory.cpp
  HEADER_FILES ZIOP.h
               ZIOP_ORBInitializer.h
               ZIOP_PolicyFactory.h
               ZIOP_Policy_Validator.h
               ZIOP_Policy_i.h
               ZIOP_Service_Context_Handler.h
               ZIOP_Stub.h
               ZIOP_Stub_Factory.h
)


tao_idl_sources(
  TARGETS TAO_ZIOP
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Gp -Gd -Sci -SS -Sorb
            -Wb,export_macro=TAO_ZIOP_Export
            -Wb,export_include=tao/ZIOP/ziop_export.h
            -Wb,stub_export_file=ziop_export.h
            -Wb,include_guard=TAO_ZIOP_SAFE_INCLUDE
            -Wb,safe_include=tao/ZIOP/ZIOP.h
            -iC tao/ZIOP -Gxhst
  IDL_FILES ZIOP.pidl
)

