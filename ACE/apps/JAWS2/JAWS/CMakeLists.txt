

ace_requires("NOT USES_WCHAR")

ace_add_lib(JAWS2
  OUTPUT_NAME JAWS2
  FOLDER apps/JAWS2/JAWS
  DEFINE_SYMBOL JAWS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(JAWS2
  SOURCE_FILES Data_Block.cpp
               Cache_Manager.cpp
               Pipeline_Tasks.cpp
               Concurrency.cpp
               Filecache.cpp
               FILE.cpp
               Waiter.cpp
               Jaws_IO.cpp
               Cache_Object.cpp
               IO_Acceptor.cpp
               Headers.cpp
               Parse_Headers.cpp
               Server.cpp
               Assoc_Array.cpp
               Reaper.cpp
               Pipeline.cpp
               Policy.cpp
               IO_Handler.cpp
  HEADER_FILES Assoc_Array.h
               Cache_Manager.h
               Cache_Object.h
               Concurrency.h
               Data_Block.h
               FILE.h
               Filecache.h
               Headers.h
               Jaws_IO.h
               IO_Acceptor.h
               IO_Handler.h
               Parse_Headers.h
               Pipeline.h
               Pipeline_Tasks.h
               Policy.h
               Reaper.h
               Server.h
               Waiter.h
               Cache_Hash_T.h
               Cache_Heap_T.h
               Cache_List_T.h
               Pipeline_Handler_T.h
               Hash_Bucket_T.h
               Cache_Manager_T.h
  TEMPLATE_FILES Cache_Hash_T.cpp
                 Cache_Heap_T.cpp
                 Cache_List_T.cpp
                 Pipeline_Handler_T.cpp
                 Hash_Bucket_T.cpp
                 Cache_Manager_T.cpp
)

