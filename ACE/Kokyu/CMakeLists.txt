

ace_add_lib(Kokyu
  OUTPUT_NAME Kokyu
  PACKAGE ACE
  FOLDER Kokyu
  DEFINE_SYMBOL KOKYU_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>>
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Kokyu
  SOURCE_FILES Default_Dispatcher_Impl.cpp
               Kokyu.cpp
               Kokyu_defs.cpp
               Dispatcher_Impl.cpp
               Dispatcher_Task.cpp
  HEADER_FILES Default_Dispatcher_Impl.h
               Dispatcher_Impl.h
               Dispatcher_Task.h
               DSRT_CV_Dispatcher_Impl_T.h
               DSRT_Direct_Dispatcher_Impl_T.h
               DSRT_Dispatch_Item_T.h
               DSRT_Dispatcher_Impl_T.h
               DSRT_Sched_Queue_T.h
               Kokyu.h
               kokyu_config.h
               Kokyu_defs.h
               Kokyu_dsrt.h
               kokyu_export.h
  INLINE_FILES Dispatcher_Impl.inl
               Kokyu.inl
               Default_Dispatcher_Impl.inl
               Dispatcher_Task.inl
               Kokyu_defs.inl
               Kokyu_dsrt.inl
               DSRT_Dispatcher_Impl_T.inl
               DSRT_Dispatch_Item_T.inl
  TEMPLATE_FILES Kokyu_dsrt.cpp
                 DSRT_Direct_Dispatcher_Impl_T.cpp
                 DSRT_Dispatcher_Impl_T.cpp
                 DSRT_Dispatch_Item_T.cpp
                 DSRT_Sched_Queue_T.cpp
                 DSRT_CV_Dispatcher_Impl_T.cpp
)

add_subdirectory(tests)
