
project(Timer_Queue CXX)
cmake_minimum_required(VERSION 3.4)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(Timer_Queue_Library
  OUTPUT_NAME tqtd
  FOLDER ACE/examples/Timer_Queue
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
  UNITY_CXX_MINIMUM_PARTITIONS 2
)
ace_target_cxx_sources(Timer_Queue_Library
  SOURCE_FILES Async_Timer_Queue_Test.cpp
               Custom_Handler.cpp
               Driver.cpp
               Reactor_Timer_Queue_Test.cpp
               Thread_Timer_Queue_Custom_Handler_Test.cpp
               Thread_Timer_Queue_Test.cpp
  HEADER_FILES Async_Timer_Queue_Test.h
               Custom_Handler.h
               Driver.h
               Reactor_Timer_Queue_Test.h
               Thread_Timer_Queue_Custom_Handler_Test.h
               Thread_Timer_Queue_Test.h
)


ace_add_exe(Timer_Queue_Async
  OUTPUT_NAME Asynch_Timer_Queue_Test
  FOLDER ACE/examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
ace_target_cxx_sources(Timer_Queue_Async
  SOURCE_FILES main_async.cpp
)


ace_add_exe(Timer_Queue_Reactor
  OUTPUT_NAME Reactor_Timer_Queue_Test
  FOLDER ACE/examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
ace_target_cxx_sources(Timer_Queue_Reactor
  SOURCE_FILES main_reactor.cpp
)


ace_add_exe(Timer_Queue_Thread
  OUTPUT_NAME Thread_Timer_Queue_Test
  FOLDER ACE/examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
ace_target_cxx_sources(Timer_Queue_Thread
  SOURCE_FILES main_thread.cpp
)


ace_add_exe(Timer_Queue_Thread_custom_handlers
  OUTPUT_NAME Thread_Custom_Handlers_Timer_Queue_Test
  FOLDER ACE/examples/Timer_Queue
  LINK_LIBRARIES Timer_Queue_Library
                 ACE
)
ace_target_cxx_sources(Timer_Queue_Thread_custom_handlers
  SOURCE_FILES main_thread_custom_handler.cpp
)

