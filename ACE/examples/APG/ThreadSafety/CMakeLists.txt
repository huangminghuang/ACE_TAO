
project(threadsafety CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Atomic_Op
  OUTPUT_NAME Atomic_Op
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Atomic_Op
  SOURCE_FILES Atomic_Op.cpp
)


ace_add_exe(Barrier
  OUTPUT_NAME Barrier
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Barrier
  SOURCE_FILES Barrier.cpp
)


ace_add_exe(Mutex
  OUTPUT_NAME Mutex
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mutex
  SOURCE_FILES Mutex.cpp
)


ace_add_exe(RW_Lock
  OUTPUT_NAME RW_Lock
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(RW_Lock
  SOURCE_FILES RW_Lock.cpp
)


ace_add_exe(Semaphore
  OUTPUT_NAME Semaphore
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Semaphore
  SOURCE_FILES Semaphore.cpp
)


ace_add_exe(Tokens
  OUTPUT_NAME Tokens
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Tokens
  SOURCE_FILES Tokens.cpp
)


ace_add_exe(Tokens_Deadlock
  OUTPUT_NAME Tokens_Deadlock
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Tokens_Deadlock
  SOURCE_FILES Tokens_Deadlock.cpp
)


ace_add_exe(TSS
  OUTPUT_NAME TSS
  FOLDER ACE/examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(TSS
  SOURCE_FILES TSS.cpp
)

