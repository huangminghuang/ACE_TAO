

ace_add_lib(websvcs
  OUTPUT_NAME websvcs
  FOLDER websvcs/lib
  DEFINE_SYMBOL ACE_WEBSVCS_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(websvcs
  SOURCE_FILES URL_Addr.cpp
  HEADER_FILES URL_Addr.h
  INLINE_FILES URL_Addr.inl
)

