

ace_requires("NOT TAO_HAS_CORBA_E_MICRO" ACE_HAS_THREADS)

ace_add_lib(TAO_Dynamic_TP
  OUTPUT_NAME TAO_Dynamic_TP
  PACKAGE TAO
  FOLDER tao/Dynamic_TP
  DEFINE_SYMBOL TAO_DYNAMIC_TP_BUILD_DLL
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_CSD_ThreadPool
                        TAO_PortableServer
                        TAO_CSD_Framework
)
ace_target_cxx_sources(TAO_Dynamic_TP
  SOURCE_FILES DTP_Config.cpp
               DTP_ORBInitializer.cpp
               DTP_ORB_Loader.cpp
               DTP_POA_Loader.cpp
               DTP_POA_Strategy.cpp
               DTP_Task.cpp
               DTP_Thread_Lane_Resources_Manager.cpp
               DTP_Thread_Pool.cpp
  HEADER_FILES DTP_Config.h
               DTP_ORBInitializer.h
               DTP_ORB_Loader.h
               DTP_POA_Loader.h
               DTP_POA_Strategy.h
               DTP_Task.h
               DTP_Thread_Lane_Resources_Manager.h
               DTP_Thread_Pool.h
  INLINE_FILES DTP_POA_Strategy.inl
               DTP_Task.inl
               DTP_Thread_Pool.inl
)

