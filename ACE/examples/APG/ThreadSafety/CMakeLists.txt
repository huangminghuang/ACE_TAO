
project(threadsafety CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Atomic_Op
  OUTPUT_NAME Atomic_Op
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Atomic_Op
  SOURCE_FILES Atomic_Op.cpp
)


add_ace_exe(Barrier
  OUTPUT_NAME Barrier
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Barrier
  SOURCE_FILES Barrier.cpp
)


add_ace_exe(Mutex
  OUTPUT_NAME Mutex
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Mutex
  SOURCE_FILES Mutex.cpp
)


add_ace_exe(RW_Lock
  OUTPUT_NAME RW_Lock
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(RW_Lock
  SOURCE_FILES RW_Lock.cpp
)


add_ace_exe(Semaphore
  OUTPUT_NAME Semaphore
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Semaphore
  SOURCE_FILES Semaphore.cpp
)


add_ace_exe(Tokens
  OUTPUT_NAME Tokens
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Tokens
  SOURCE_FILES Tokens.cpp
)


add_ace_exe(Tokens_Deadlock
  OUTPUT_NAME Tokens_Deadlock
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(Tokens_Deadlock
  SOURCE_FILES Tokens_Deadlock.cpp
)


add_ace_exe(TSS
  OUTPUT_NAME TSS
  FOLDER examples/APG/ThreadSafety
  LINK_LIBRARIES ACE
)
target_cxx_sources(TSS
  SOURCE_FILES TSS.cpp
)

