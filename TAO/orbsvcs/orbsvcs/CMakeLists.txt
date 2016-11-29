project(TAO_orbsvcs_libs CXX)
cmake_minimum_required(VERSION 3.1)

set(ORBSVCS_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/..)

# if (NOT TARGET TAO)
  find_package(TAO ${TAO_VERSION} REQUIRED CONFIG)
# endif()

include(orbsvcs.cmake)

add_orbsvcs_idls(Svc_Utils
  IDLS TimeBase.idl
       RtecBase.idl
)

set(sources
  Shutdown_Utilities.cpp
  Time_Utilities.cpp
  IOR_Multicast.cpp
  Daemon_Utilities.cpp
  Log_Macros.cpp
  ${Svc_Utils_IDLS_OUTPUT_FILES}
)

set(headers
  Daemon_Utilities.h
  IOR_Multicast.h
  Log_Macros.h
  Shutdown_Utilities.h
  Time_Utilities.h
  svc_utils_export.h
  ${Svc_Utils_IDLS_HEADER_FILES}
)

add_orbsvcs_lib(TAO_Svc_Utils
  DEFINE_SYMBOL TAO_SVC_UTILS_BUILD_DLL
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_AnyTypeCode
  PACKAGE TAO_orbsvcs
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


export_package(TAO_orbsvcs
  VERSION ${TAO_VERSION}
  PREREQUISITE TAO
)

