
project(Web_Crawler CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(Web_Crawler
  OUTPUT_NAME main
  FOLDER ACE/examples/Web_Crawler
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Web_Crawler
  SOURCE_FILES Command_Processor.cpp
               HTTP_URL.cpp
               Iterators.cpp
               Mem_Map_Stream.cpp
               Options.cpp
               URL.cpp
               URL_Addr.cpp
               URL_Status.cpp
               URL_Visitor.cpp
               URL_Visitor_Factory.cpp
               Web_Crawler.cpp
               main.cpp
  HEADER_FILES Command_Processor.h
               HTTP_URL.h
               Iterators.h
               Mem_Map_Stream.h
               Options.h
               URL.h
               URL_Addr.h
               URL_Status.h
               URL_Visitor.h
               URL_Visitor_Factory.h
               Web_Crawler.h
)

