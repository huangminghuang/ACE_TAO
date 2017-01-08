

requires(RT_CORBA CORBA_MESSAGING "NOT CORBA_E_COMPACT")

add_ace_lib(TAO_RTScheduler
  OUTPUT_NAME TAO_RTScheduler
  PACKAGE TAO
  FOLDER tao/RTScheduling
  ASPECTS TAO
  DEFINE_SYMBOL TAO_RTSCHEDULER_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                             $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PI_Server
                        TAO_PortableServer
                        TAO_RTCORBA
)
target_cxx_sources(TAO_RTScheduler
  SOURCE_FILES Current.cpp
               Distributable_Thread.cpp
               RTScheduler.cpp
               RTScheduler_Initializer.cpp
               RTScheduler_Loader.cpp
               RTScheduler_Manager.cpp
               Request_Interceptor.cpp
  HEADER_FILES Current.h
               Distributable_Thread.h
               RTScheduler.h
               RTScheduler_Initializer.h
               RTScheduler_Loader.h
               RTScheduler_Manager.h
               Request_Interceptor.h
               ThreadAction.h
               rtscheduler_export.h
  INLINE_FILES RTScheduler_Manager.inl
)


set(RTScheduler_Idl_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
                          -Sa -St)
tao_idl_sources(
  TARGETS TAO_RTScheduler
  IDL_FLAGS ${RTScheduler_Idl_FLAGS} -Gp
            -Gd -Sci -SS -Sorb -GX
            -Wb,export_macro=TAO_RTScheduler_Export
            -Wb,export_include=tao/RTScheduling/rtscheduler_export.h
            -Wb,include_guard=TAO_RTSCHEDULER_SAFE_INCLUDE
            -Wb,safe_include=tao/RTScheduling/RTScheduler.h
            -iC RTScheduling
  IDL_FILES RTScheduler.pidl
)

tao_idl_sources(
  TARGETS TAO_RTScheduler
  IDL_FLAGS ${RTScheduler_Idl_FLAGS} -SS
            -Sorb -GX -Sci
            -Wb,export_macro=TAO_RTScheduler_Export
            -Wb,export_include=tao/RTScheduling/rtscheduler_export.h
            -Wb,unique_include=tao/RTScheduling/RTScheduler.h
            -iC RTScheduling
  IDL_FILES RTScheduler_include.pidl
)

