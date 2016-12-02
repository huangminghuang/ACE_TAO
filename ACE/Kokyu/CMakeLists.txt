project(Kokyu CXX)

include(../cmake/common.cmake)

set(sources
  Dispatcher_Impl.cpp
  Kokyu.cpp
  Default_Dispatcher_Impl.cpp
  Dispatcher_Task.cpp
  Kokyu_defs.cpp
)

file(GLOB headers *.h *.inl)
list(APPEND headers
  Kokyu_dsrt.cpp
  DSRT_Direct_Dispatcher_Impl_T.cpp
  DSRT_Dispatcher_Impl_T.cpp
  DSRT_Dispatch_Item_T.cpp
  DSRT_Sched_Queue_T.cpp
  DSRT_CV_Dispatcher_Impl_T.cpp
)

add_ace_component(Kokyu
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  PUBLIC_LINK_LIBRARIES ACE
  PACKAGE Kokyu
)

export_ace_package(Kokyu)

add_subdirectory(tests)