
project(threadpools CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Futures
  OUTPUT_NAME Futures
  FOLDER ACE/examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Futures
  SOURCE_FILES Futures.cpp
)


ace_add_exe(LF_ThreadPool
  OUTPUT_NAME LF_ThreadPool
  FOLDER ACE/examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(LF_ThreadPool
  SOURCE_FILES LF_ThreadPool.cpp
)


ace_add_exe(Task_ThreadPool
  OUTPUT_NAME Task_ThreadPool
  FOLDER ACE/examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Task_ThreadPool
  SOURCE_FILES Task_ThreadPool.cpp
)


ace_add_exe(ThreadPool
  OUTPUT_NAME ThreadPool
  FOLDER ACE/examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(ThreadPool
  SOURCE_FILES ThreadPool.cpp
)


ace_add_exe(TP_Reactor
  OUTPUT_NAME TP_Reactor
  FOLDER ACE/examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TP_Reactor
  SOURCE_FILES TP_Reactor.cpp
)

