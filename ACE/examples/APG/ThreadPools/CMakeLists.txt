
project(threadpools CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Futures
  Futures.cpp
)
set_target_properties(Futures PROPERTIES
  OUTPUT_NAME Futures
  LINK_LIBRARIES ACE
)

##############################
add_executable(LF_ThreadPool
  LF_ThreadPool.cpp
)
set_target_properties(LF_ThreadPool PROPERTIES
  OUTPUT_NAME LF_ThreadPool
  LINK_LIBRARIES ACE
)

##############################
add_executable(Task_ThreadPool
  Task_ThreadPool.cpp
)
set_target_properties(Task_ThreadPool PROPERTIES
  OUTPUT_NAME Task_ThreadPool
  LINK_LIBRARIES ACE
)

##############################
add_executable(ThreadPool
  ThreadPool.cpp
)
set_target_properties(ThreadPool PROPERTIES
  OUTPUT_NAME ThreadPool
  LINK_LIBRARIES ACE
)

##############################
add_executable(TP_Reactor
  TP_Reactor.cpp
)
set_target_properties(TP_Reactor PROPERTIES
  OUTPUT_NAME TP_Reactor
  LINK_LIBRARIES ACE
)
#####################################
