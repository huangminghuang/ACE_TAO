

ace_requires("NOT ACE_USES_WCHAR")

ace_add_lib(JAWS2
  OUTPUT_NAME JAWS2
  FOLDER ACE/apps/JAWS2/JAWS
  DEFINE_SYMBOL JAWS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(JAWS2
  SOURCE_FILES Assoc_Array.cpp
               Cache_Manager.cpp
               Cache_Object.cpp
               Concurrency.cpp
               Data_Block.cpp
               FILE.cpp
               Filecache.cpp
               Headers.cpp
               IO_Acceptor.cpp
               IO_Handler.cpp
               Jaws_IO.cpp
               Parse_Headers.cpp
               Pipeline.cpp
               Pipeline_Tasks.cpp
               Policy.cpp
               Reaper.cpp
               Server.cpp
               Waiter.cpp
  HEADER_FILES Assoc_Array.h
               Cache_Hash_T.h
               Cache_Heap_T.h
               Cache_List_T.h
               Cache_Manager.h
               Cache_Manager_T.h
               Cache_Object.h
               Concurrency.h
               Data_Block.h
               Export.h
               FILE.h
               Filecache.h
               Hash_Bucket_T.h
               Headers.h
               IO_Acceptor.h
               IO_Handler.h
               Jaws_IO.h
               Parse_Headers.h
               Pipeline.h
               Pipeline_Handler_T.h
               Pipeline_Tasks.h
               Policy.h
               Reaper.h
               Server.h
               Waiter.h
  TEMPLATE_FILES Cache_Hash_T.cpp
                 Cache_Heap_T.cpp
                 Cache_List_T.cpp
                 Cache_Manager_T.cpp
                 Hash_Bucket_T.cpp
                 Pipeline_Handler_T.cpp
)

