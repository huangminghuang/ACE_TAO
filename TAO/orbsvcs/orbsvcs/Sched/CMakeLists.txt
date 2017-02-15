
ace_add_lib(TAO_RTSched
  DEFINE_SYMBOL TAO_RTSCHED_BUILD_DLL
  PACKAGE TAO
  FOLDER TAO/orbsvcs/orbsvcs/Sched
  PUBLIC_LINK_LIBRARIES TAO_PortableServer
                        TAO_CosNaming
                        TAO_Svc_Utils
)

include(../RTSched.cmake)

ace_target_cxx_sources(TAO_RTSched
  SOURCE_FILES Config_Scheduler.cpp
               DynSched.cpp
               Reconfig_Sched_Utils.cpp
               SchedEntry.cpp
               Scheduler.cpp
               Scheduler_Generic.cpp
               Strategy_Scheduler.cpp
  HEADER_FILES Config_Scheduler.h
               DynSched.h
               Reconfig_Sched_Utils.h
               Reconfig_Sched_Utils_T.h
               Reconfig_Scheduler.h
               Reconfig_Scheduler_T.h
               SchedEntry.h
               Scheduler.h
               Scheduler_Generic.h
               Strategy_Scheduler.h
               sched_export.h
  INLINE_FILES DynSched.inl
               SchedEntry.inl
  TEMPLATE_FILES Reconfig_Sched_Utils_T.cpp
                 Reconfig_Scheduler_T.cpp
)

tao_idl_sources(
  TARGETS TAO_RTSched
  IDL_FLAGS ${TAO_VERSIONING_IDL_FLAGS}
            -I${CMAKE_CURRENT_SOURCE_DIR}/../../../tao
            -I${CMAKE_CURRENT_SOURCE_DIR}/../..
            -I${CMAKE_CURRENT_SOURCE_DIR}/..
            -Wb,export_macro=TAO_RTSched_Export
            -Wb,export_include=orbsvcs/Sched/sched_export.h
  IDL_FILES ../RtecScheduler.idl
  WORKING_DIRECTORY ..
)


