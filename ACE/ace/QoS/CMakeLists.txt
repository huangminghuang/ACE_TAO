

ace_requires(RAPI_FOUND)

if (WIN32)
  set(RAPI_FOUND 1)
else()
  find_package(RAPI)
endif()


ace_add_lib(ACE_QoS
  OUTPUT_NAME ACE_QoS
  PACKAGE ACE
  COMPILE_DEFINITIONS ACE_HAS_QOS
  FOLDER ace/QoS
  DEFINE_SYMBOL ACE_QoS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  PUBLIC_LINK_LIBRARIES ACE
                        ${RAPI_LIBRARIES}
)
ace_target_cxx_sources(ACE_QoS
  SOURCE_FILES QoS_Decorator.cpp
               QoS_Manager.cpp
               QoS_Session_Factory.cpp
               QoS_Session_Impl.cpp
               SOCK_Dgram_Mcast_QoS.cpp
  HEADER_FILES QoS_Decorator.h
               QoS_Manager.h
               QoS_Session_Factory.h
               QoS_Session_Impl.h
               SOCK_Dgram_Mcast_QoS.h
  INLINE_FILES QoS_Session_Impl.inl
               SOCK_Dgram_Mcast_QoS.inl
)

