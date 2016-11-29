add_tao_component(
  NAME SmartProxies
  SOURCES Smart_Proxies.cpp
  PUBLIC_HEADER Smart_Proxies.h
                Smart_Proxies.inl
                smartproxies_export.h
  PUBLIC_LINK_LIBRARIES TAO
)