
add_orbsvcs_idls(Sched
  EXPORT_PREFIX TAO_RTSched
  IDLS ../RtecScheduler.idl
)

file(GLOB headers *.h *.inl *_T.cpp)

add_orbsvcs_lib(TAO_RTSched
  DEFINE_SYMBOL TAO_RTSched
  SOURCES ${Sched_IDLS_OUTPUT_FILES}
          ../Scheduler_Factory.cpp
          ../Runtime_Scheduler.cpp
          ../Scheduler_Utilities.cpp
          Config_Scheduler.cpp
          DynSched.cpp
          Reconfig_Sched_Utils.cpp
          SchedEntry.cpp
          Scheduler_Generic.cpp
          Scheduler.cpp
          Strategy_Scheduler.cpp
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES TAO_PortableServer TAO_CosNaming TAO_Svc_Utils

)

install(FILES ../Runtime_Scheduler.h
              ../Scheduler_Factory.h
              ../Scheduler_Factory.inl
              ../Scheduler_Utilities.h
              ../Scheduler_Utilities.inl
        DESTINATION include/orbsvcs
)
