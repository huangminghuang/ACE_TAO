project(Timer_Queue CXX)
cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MACOSX_RPATH 1)

add_library(Timer_Queue_Library
    Async_Timer_Queue_Test.cpp
    Driver.cpp
    Reactor_Timer_Queue_Test.cpp
    Thread_Timer_Queue_Test.cpp
    Thread_Timer_Queue_Custom_Handler_Test.cpp
    Custom_Handler.cpp)

set_target_properties(Timer_Queue_Library PROPERTIES
  OUTPUT_NAME tqtd
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL)

target_link_libraries(Timer_Queue_Library  ACE)


add_executable(Asynch_Timer_Queue_Test main_async.cpp)
target_link_libraries(Asynch_Timer_Queue_Test Timer_Queue_Library)

add_executable(Reactor_Timer_Queue_Test main_reactor.cpp)
target_link_libraries(Reactor_Timer_Queue_Test Timer_Queue_Library)

add_executable(Thread_Timer_Queue_Test main_thread.cpp)
target_link_libraries(Thread_Timer_Queue_Test Timer_Queue_Library)

add_executable(Thread_Custom_Handlers_Timer_Queue_Test main_thread_custom_handler.cpp)
target_link_libraries(Thread_Custom_Handlers_Timer_Queue_Test Timer_Queue_Library)