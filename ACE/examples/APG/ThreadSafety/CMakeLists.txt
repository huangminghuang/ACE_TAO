
project(threadsafety CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Atomic_Op
  Atomic_Op.cpp
)
set_target_properties(Atomic_Op PROPERTIES
  OUTPUT_NAME Atomic_Op
  LINK_LIBRARIES ACE
)

##############################
add_executable(Barrier
  Barrier.cpp
)
set_target_properties(Barrier PROPERTIES
  OUTPUT_NAME Barrier
  LINK_LIBRARIES ACE
)

##############################
add_executable(Mutex
  Mutex.cpp
)
set_target_properties(Mutex PROPERTIES
  OUTPUT_NAME Mutex
  LINK_LIBRARIES ACE
)

##############################
add_executable(RW_Lock
  RW_Lock.cpp
)
set_target_properties(RW_Lock PROPERTIES
  OUTPUT_NAME RW_Lock
  LINK_LIBRARIES ACE
)

##############################
add_executable(Semaphore
  Semaphore.cpp
)
set_target_properties(Semaphore PROPERTIES
  OUTPUT_NAME Semaphore
  LINK_LIBRARIES ACE
)

##############################
add_executable(Tokens
  Tokens.cpp
)
set_target_properties(Tokens PROPERTIES
  OUTPUT_NAME Tokens
  LINK_LIBRARIES ACE
)

##############################
add_executable(Tokens_Deadlock
  Tokens_Deadlock.cpp
)
set_target_properties(Tokens_Deadlock PROPERTIES
  OUTPUT_NAME Tokens_Deadlock
  LINK_LIBRARIES ACE
)

##############################
add_executable(TSS
  TSS.cpp
)
set_target_properties(TSS PROPERTIES
  OUTPUT_NAME TSS
  LINK_LIBRARIES ACE
)
#####################################
