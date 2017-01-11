
project(Web_Crawler CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Web_Crawler
  OUTPUT_NAME main
  FOLDER examples/Web_Crawler
  LINK_LIBRARIES ACE
)
target_cxx_sources(Web_Crawler
  SOURCE_FILES Iterators.cpp
               main.cpp
               Mem_Map_Stream.cpp
               Command_Processor.cpp
               URL_Addr.cpp
               URL_Visitor_Factory.cpp
               HTTP_URL.cpp
               Options.cpp
               Web_Crawler.cpp
               URL_Visitor.cpp
               URL.cpp
               URL_Status.cpp
  HEADER_FILES URL.h
               Options.h
               Web_Crawler.h
               HTTP_URL.h
               URL_Addr.h
               Iterators.h
               Mem_Map_Stream.h
               Command_Processor.h
               URL_Visitor_Factory.h
               URL_Visitor.h
               URL_Status.h
)

