

ace_add_lib(Kokyu
  OUTPUT_NAME Kokyu
  PACKAGE ACE
  FOLDER ACE/Kokyu
  DEFINE_SYMBOL KOKYU_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES .
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Kokyu
  SOURCE_FILES Default_Dispatcher_Impl.cpp
               Dispatcher_Impl.cpp
               Dispatcher_Task.cpp
               Kokyu.cpp
               Kokyu_defs.cpp
  HEADER_FILES DSRT_CV_Dispatcher_Impl_T.h
               DSRT_Direct_Dispatcher_Impl_T.h
               DSRT_Dispatch_Item_T.h
               DSRT_Dispatcher_Impl_T.h
               DSRT_Sched_Queue_T.h
               Default_Dispatcher_Impl.h
               Dispatcher_Impl.h
               Dispatcher_Task.h
               Kokyu.h
               Kokyu_defs.h
               Kokyu_dsrt.h
               kokyu_config.h
               kokyu_export.h
  INLINE_FILES DSRT_Dispatch_Item_T.inl
               DSRT_Dispatcher_Impl_T.inl
               Default_Dispatcher_Impl.inl
               Dispatcher_Impl.inl
               Dispatcher_Task.inl
               Kokyu.inl
               Kokyu_defs.inl
               Kokyu_dsrt.inl
  TEMPLATE_FILES DSRT_CV_Dispatcher_Impl_T.cpp
                 DSRT_Direct_Dispatcher_Impl_T.cpp
                 DSRT_Dispatch_Item_T.cpp
                 DSRT_Dispatcher_Impl_T.cpp
                 DSRT_Sched_Queue_T.cpp
)

add_subdirectory(tests)
