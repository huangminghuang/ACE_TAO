

ace_add_exe(Svr_Conc_Queue_Based_Workers
  OUTPUT_NAME workers
  FOLDER ACE/performance-tests/Server_Concurrency/Queue_Based_Workers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Svr_Conc_Queue_Based_Workers
  SOURCE_FILES workers.cpp
)


ace_add_exe(Svr_Conc_Queue_Based_Workers_Rtcorba
  OUTPUT_NAME RT_CORBA_Workers
  FOLDER ACE/performance-tests/Server_Concurrency/Queue_Based_Workers
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Svr_Conc_Queue_Based_Workers_Rtcorba
  SOURCE_FILES RT_CORBA_Workers.cpp
  HEADER_FILES RT_CORBA_Workers.h
)

