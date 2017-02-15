
project(Threads CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Threads_Auto_event
  OUTPUT_NAME auto_event
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Auto_event
  SOURCE_FILES auto_event.cpp
)


ace_add_exe(Threads_Barrier1
  OUTPUT_NAME barrier1
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Barrier1
  SOURCE_FILES barrier1.cpp
)


ace_add_exe(Threads_Barrier2
  OUTPUT_NAME barrier2
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Barrier2
  SOURCE_FILES barrier2.cpp
)


ace_add_exe(Threads_Cancel
  OUTPUT_NAME cancel
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Cancel
  SOURCE_FILES cancel.cpp
)


ace_add_exe(Threads_Future1
  OUTPUT_NAME future1
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Future1
  SOURCE_FILES future1.cpp
)


ace_add_exe(Threads_Future2
  OUTPUT_NAME future2
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Future2
  SOURCE_FILES future2.cpp
)


ace_add_exe(Threads_Manual_event
  OUTPUT_NAME manual_event
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Manual_event
  SOURCE_FILES manual_event.cpp
)


ace_add_exe(Threads_Process_mutex
  OUTPUT_NAME process_mutex
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Process_mutex
  SOURCE_FILES process_mutex.cpp
)


ace_add_exe(Threads_Process_semaphore
  OUTPUT_NAME process_semaphore
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Process_semaphore
  SOURCE_FILES process_semaphore.cpp
)


ace_add_exe(Threads_Reader_writer
  OUTPUT_NAME reader_writer
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Reader_writer
  SOURCE_FILES reader_writer.cpp
)


ace_add_exe(Threads_Recursive_mutex
  OUTPUT_NAME recursive_mutex
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Recursive_mutex
  SOURCE_FILES recursive_mutex.cpp
)


ace_add_exe(Threads_Task_five
  OUTPUT_NAME task_five
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Task_five
  SOURCE_FILES task_five.cpp
)


ace_add_exe(Threads_Task_four
  OUTPUT_NAME task_four
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Task_four
  SOURCE_FILES task_four.cpp
)


ace_add_exe(Threads_Task_three
  OUTPUT_NAME task_three
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Task_three
  SOURCE_FILES task_three.cpp
)


ace_add_exe(Threads_Task_two
  OUTPUT_NAME task_two
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Task_two
  SOURCE_FILES task_two.cpp
)


ace_add_exe(Threads_Task_one
  OUTPUT_NAME task_one
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Task_one
  SOURCE_FILES task_one.cpp
)


ace_add_exe(Threads_Thread_manager
  OUTPUT_NAME thread_manager
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Thread_manager
  SOURCE_FILES thread_manager.cpp
)


ace_add_exe(Threads_Thread_pool
  OUTPUT_NAME thread_pool
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Thread_pool
  SOURCE_FILES thread_pool.cpp
)


ace_add_exe(Threads_Thread_specific
  OUTPUT_NAME thread_specific
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Thread_specific
  SOURCE_FILES thread_specific.cpp
  HEADER_FILES thread_specific.h
)


ace_add_exe(Threads_Token
  OUTPUT_NAME token
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Token
  SOURCE_FILES token.cpp
)


ace_add_exe(Threads_Tss1
  OUTPUT_NAME tss1
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Tss1
  SOURCE_FILES tss1.cpp
)


ace_add_exe(Threads_Tss2
  OUTPUT_NAME tss2
  FOLDER ACE/examples/Threads
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Threads_Tss2
  SOURCE_FILES tss2.cpp
)

