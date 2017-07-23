
ace_add_lib(TAO_Catior_i
  PACKAGE TAO
  DEFINE_SYMBOL CATIOR_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_RTCORBA TAO_Messaging TAO_ZIOP
)

ace_target_cxx_sources(TAO_Catior_i
  SOURCE_FILES Catior_i.cpp
)

ace_add_exe(tao_catior
  PACKAGE TAO
  LINK_LIBRARIES TAO_Catior_i TAO_CosNaming
)

ace_target_cxx_sources(tao_catior
  SOURCE_FILES catior.cpp
)
