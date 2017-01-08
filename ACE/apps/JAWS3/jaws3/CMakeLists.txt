

requires("NOT USES_WCHAR")

add_ace_lib(JAWS3
  OUTPUT_NAME JAWS3
  FOLDER apps/JAWS3/jaws3
  DEFINE_SYMBOL JAWS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(JAWS3
  SOURCE_FILES Datagram.cpp
               Options.cpp
               Event_Completer.cpp
               THYBRID_Concurrency.cpp
               TPOOL_Concurrency.cpp
               Concurrency.cpp
               Timer_Helpers.cpp
               FILE.cpp
               Protocol_Handler.cpp
               Reactive_IO.cpp
               Asynch_IO.cpp
               TPR_Concurrency.cpp
               Templates.cpp
               Task_Timer.cpp
               Jaws_IO.cpp
               Timer.cpp
               Synch_IO.cpp
               Symbol_Table.cpp
               Event_Dispatcher.cpp
               Signal_Task.cpp
               Config_File.cpp
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
               Task_Timer.h
               THYBRID_Concurrency.h
               Timer.h
               Timer_Helpers.h
               TPOOL_Concurrency.h
               TPR_Concurrency.h
  TEMPLATE_FILES Cached_Allocator_T.cpp
                 Concurrency_T.cpp
)


add_ace_exe(JAWS3_server
  OUTPUT_NAME main
  FOLDER apps/JAWS3/jaws3
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  LINK_LIBRARIES JAWS3
                 ACE
)
target_cxx_sources(JAWS3_server
  SOURCE_FILES main.cpp
)

