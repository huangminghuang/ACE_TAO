
project(threads CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Activate
  OUTPUT_NAME Activate
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Activate
  SOURCE_FILES Activate.cpp
)


ace_add_exe(Condition_Variables
  OUTPUT_NAME Condition_Variables
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Condition_Variables
  SOURCE_FILES Condition_Variables.cpp
)


ace_add_exe(Guards
  OUTPUT_NAME Guards
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Guards
  SOURCE_FILES Guards.cpp
)


ace_add_exe(Message_Blocks
  OUTPUT_NAME Message_Blocks
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Blocks
  SOURCE_FILES Message_Blocks.cpp
)


ace_add_exe(Message_Queue
  OUTPUT_NAME Message_Queue
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Message_Queue
  SOURCE_FILES Message_Queue.cpp
)


ace_add_exe(Mutexes
  OUTPUT_NAME Mutexes
  FOLDER ACE/examples/APG/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Mutexes
  SOURCE_FILES Mutexes.cpp
)

