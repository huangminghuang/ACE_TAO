

add_ace_lib(TAO_SmartProxies
  OUTPUT_NAME TAO_SmartProxies
  PACKAGE TAO
  FOLDER tao/SmartProxies
  ASPECTS TAO
  DEFINE_SYMBOL TAO_SMARTPROXIES_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO
)
target_cxx_sources(TAO_SmartProxies
  SOURCE_FILES Smart_Proxies.cpp
  HEADER_FILES Smart_Proxies.h
  INLINE_FILES Smart_Proxies.inl
)

