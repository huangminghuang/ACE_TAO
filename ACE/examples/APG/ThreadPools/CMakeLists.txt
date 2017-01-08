
project(threadpools CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Futures
  OUTPUT_NAME Futures
  FOLDER examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
target_cxx_sources(Futures
  SOURCE_FILES Futures.cpp
)


add_ace_exe(LF_ThreadPool
  OUTPUT_NAME LF_ThreadPool
  FOLDER examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
target_cxx_sources(LF_ThreadPool
  SOURCE_FILES LF_ThreadPool.cpp
)


add_ace_exe(Task_ThreadPool
  OUTPUT_NAME Task_ThreadPool
  FOLDER examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
target_cxx_sources(Task_ThreadPool
  SOURCE_FILES Task_ThreadPool.cpp
)


add_ace_exe(ThreadPool
  OUTPUT_NAME ThreadPool
  FOLDER examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
target_cxx_sources(ThreadPool
  SOURCE_FILES ThreadPool.cpp
)


add_ace_exe(TP_Reactor
  OUTPUT_NAME TP_Reactor
  FOLDER examples/APG/ThreadPools
  LINK_LIBRARIES ACE
)
target_cxx_sources(TP_Reactor
  SOURCE_FILES TP_Reactor.cpp
)

