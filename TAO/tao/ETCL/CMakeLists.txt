

ace_add_lib(TAO_ETCL
  OUTPUT_NAME TAO_ETCL
  PACKAGE TAO
  FOLDER TAO/tao/ETCL
  DEFINE_SYMBOL TAO_ETCL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_ETCL
                        TAO_AnyTypeCode
)
ace_target_cxx_sources(TAO_ETCL
  SOURCE_FILES TAO_ETCL_Constraint.cpp
  HEADER_FILES TAO_ETCL_Constraint.h
  INLINE_FILES TAO_ETCL_Constraint.inl
)

