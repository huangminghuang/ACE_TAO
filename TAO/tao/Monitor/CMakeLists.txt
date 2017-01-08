

add_ace_lib(TAO_Monitor
  OUTPUT_NAME TAO_Monitor
  PACKAGE TAO
  FOLDER tao/Monitor
  DEFINE_SYMBOL TAO_MONITOR_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PortableServer
                        ACE_Monitor_Control
)
target_cxx_sources(TAO_Monitor
  SOURCE_FILES Monitor.cpp
               Monitor_Impl.cpp
  HEADER_FILES Monitor.h
               Monitor_Impl.h
               Monitor_export.h
)


set(Monitor_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                      -Gp -Gd -GA
                      -Wb,export_macro=TAO_Monitor_Export
                      -Wb,export_include=tao/Monitor/Monitor_export.h
                      -iC tao/Monitor)
tao_idl_sources(
  TARGETS TAO_Monitor
  IDL_FLAGS ${Monitor_Idl_FLAGS} -Sa -St
            -Wb,unique_include=tao/Monitor/Monitor.h
            -SS -Sci
  IDL_FILES Monitor_include.pidl
)

tao_idl_sources(
  TARGETS TAO_Monitor
  IDL_FLAGS ${Monitor_Idl_FLAGS} -Sa -St
            -Wb,include_guard=TAO_MONITOR_SAFE_INCLUDE
            -Wb,safe_include=tao/Monitor/Monitor.h
  IDL_FILES Monitor.pidl
)

tao_idl_sources(
  TARGETS TAO_Monitor
  IDL_FLAGS ${Monitor_Idl_FLAGS} -SS
            -Wb,include_guard=TAO_MONITOR_SAFE_INCLUDE
            -Wb,safe_include=tao/Monitor/Monitor.h
  IDL_FILES Monitor_Types.pidl
)

