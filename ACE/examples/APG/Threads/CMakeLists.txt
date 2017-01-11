
project(threads CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Activate
  OUTPUT_NAME Activate
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Activate
  SOURCE_FILES Activate.cpp
)


add_ace_exe(Condition_Variables
  OUTPUT_NAME Condition_Variables
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Condition_Variables
  SOURCE_FILES Condition_Variables.cpp
)


add_ace_exe(Guards
  OUTPUT_NAME Guards
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Guards
  SOURCE_FILES Guards.cpp
)


add_ace_exe(Message_Blocks
  OUTPUT_NAME Message_Blocks
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Message_Blocks
  SOURCE_FILES Message_Blocks.cpp
)


add_ace_exe(Message_Queue
  OUTPUT_NAME Message_Queue
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Message_Queue
  SOURCE_FILES Message_Queue.cpp
)


add_ace_exe(Mutexes
  OUTPUT_NAME Mutexes
  FOLDER examples/APG/Threads
  LINK_LIBRARIES ACE
)
target_cxx_sources(Mutexes
  SOURCE_FILES Mutexes.cpp
)

