

ace_requires("NOT ACE_USES_WCHAR")

ace_add_lib(JAWS3
  OUTPUT_NAME JAWS3
  FOLDER ACE/apps/JAWS3/jaws3
  DEFINE_SYMBOL JAWS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(JAWS3
  SOURCE_FILES Asynch_IO.cpp
               Concurrency.cpp
               Config_File.cpp
               Datagram.cpp
               Event_Completer.cpp
               Event_Dispatcher.cpp
               FILE.cpp
               Jaws_IO.cpp
               Options.cpp
               Protocol_Handler.cpp
               Reactive_IO.cpp
               Signal_Task.cpp
               Symbol_Table.cpp
               Synch_IO.cpp
               THYBRID_Concurrency.cpp
               TPOOL_Concurrency.cpp
               TPR_Concurrency.cpp
               Task_Timer.cpp
               Templates.cpp
               Timer.cpp
               Timer_Helpers.cpp
  HEADER_FILES Asynch_IO.h
               Asynch_IO_Helpers.h
               Cached_Allocator_T.h
               Concurrency.h
               Concurrency_T.h
               Config_File.h
               Datagram.h
               Event_Completer.h
               Event_Dispatcher.h
               Event_Result.h
               Export.h
               FILE.h
               Jaws_IO.h
               Options.h
               Protocol_Handler.h
               Reactive_IO.h
               Reactive_IO_Helpers.h
               Signal_Task.h
               Symbol_Table.h
               Synch_IO.h
               THYBRID_Concurrency.h
               TPOOL_Concurrency.h
               TPR_Concurrency.h
               Task_Timer.h
               Timer.h
               Timer_Helpers.h
  TEMPLATE_FILES Cached_Allocator_T.cpp
                 Concurrency_T.cpp
)


ace_add_exe(JAWS3_server
  OUTPUT_NAME main
  FOLDER ACE/apps/JAWS3/jaws3
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  LINK_LIBRARIES JAWS3
                 ACE
)
ace_target_cxx_sources(JAWS3_server
  SOURCE_FILES main.cpp
)

