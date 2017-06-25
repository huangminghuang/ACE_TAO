

set(ORBSVCS_LIB_INCLUDE_DIRS $<BUILD_INTERFACE:${TAO_SOURCE_DIR}/orbsvcs>
                             $<BUILD_INTERFACE:${TAO_BINARY_DIR}/orbsvcs>
                             $<INSTALL_INTERFACE:${TAO_INSTALL_DIR}/orbsvcs>)

ace_add_lib(TAO_Svc_Utils
  DEFINE_SYMBOL TAO_SVC_UTILS_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs
  PUBLIC_INCLUDE_DIRECTORIES ${ORBSVCS_LIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_AnyTypeCode
)

ace_target_cxx_sources(TAO_Svc_Utils
  SOURCE_FILES Shutdown_Utilities.cpp
               Time_Utilities.cpp
               IOR_Multicast.cpp
               Daemon_Utilities.cpp
               Log_Macros.cpp
  HEADER_FILES Daemon_Utilities.h
               IOR_Multicast.h
               Log_Macros.h
               Shutdown_Utilities.h
               Time_Utilities.h
               svc_utils_export.h
  INLINE_FILES Time_Utilities.inl
)

tao_idl_sources(
  TARGETS TAO_Svc_Utils
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -Wb,export_macro=TAO_Svc_Utils_Export
            -Wb,export_include=orbsvcs/svc_utils_export.h
  IDL_FILES TimeBase.idl
            RtecBase.idl
)

add_subdirectory(Property)
add_subdirectory(Naming)
add_subdirectory(PortableGroup)
add_subdirectory(CosEvent)
add_subdirectory(Concurrency)
add_subdirectory(Time)
add_subdirectory(LifeCycle)
add_subdirectory(LoadBalancing)
add_subdirectory(Trader)
add_subdirectory(HTIOP)
add_subdirectory(IFRService)
add_subdirectory(Security)
add_subdirectory(SSLIOP)
add_subdirectory(Sched)
add_subdirectory(Event)
add_subdirectory(Notify)
add_subdirectory(FaultTolerance)
add_subdirectory(Naming/FaultTolerant)
add_subdirectory(Log)
add_subdirectory(FtRtEvent)
add_subdirectory(AV)

