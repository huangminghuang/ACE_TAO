
project(Timer_Queue CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(Timer_Queue_Library
  OUTPUT_NAME tqtd
  FOLDER examples/Timer_Queue
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(Timer_Queue_Library
  SOURCE_FILES Driver.cpp
               Thread_Timer_Queue_Test.cpp
               Async_Timer_Queue_Test.cpp
               Custom_Handler.cpp
               Reactor_Timer_Queue_Test.cpp
               Thread_Timer_Queue_Custom_Handler_Test.cpp
  HEADER_FILES Custom_Handler.h
               Async_Timer_Queue_Test.h
               Thread_Timer_Queue_Custom_Handler_Test.h
               Reactor_Timer_Queue_Test.h
               Thread_Timer_Queue_Test.h
               Driver.h
)


add_ace_exe(Timer_Queue_Async
  OUTPUT_NAME Asynch_Timer_Queue_Test
  FOLDER examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
target_cxx_sources(Timer_Queue_Async
  SOURCE_FILES main_async.cpp
)


add_ace_exe(Timer_Queue_Reactor
  OUTPUT_NAME Reactor_Timer_Queue_Test
  FOLDER examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
target_cxx_sources(Timer_Queue_Reactor
  SOURCE_FILES main_reactor.cpp
)


add_ace_exe(Timer_Queue_Thread
  OUTPUT_NAME Thread_Timer_Queue_Test
  FOLDER examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
target_cxx_sources(Timer_Queue_Thread
  SOURCE_FILES main_thread.cpp
)


add_ace_exe(Timer_Queue_Thread_custom_handlers
  OUTPUT_NAME Thread_Custom_Handlers_Timer_Queue_Test
  FOLDER examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
target_cxx_sources(Timer_Queue_Thread_custom_handlers
  SOURCE_FILES main_thread_custom_handler.cpp
)

