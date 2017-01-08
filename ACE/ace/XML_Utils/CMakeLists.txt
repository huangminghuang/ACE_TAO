find_package(XercesC)

requires(XercesC_FOUND)

add_ace_lib(ACE_XML_Utils
  OUTPUT_NAME ACE_XML_Utils
  PACKAGE ACE
  FOLDER ace/XML_Utils
  DEFINE_SYMBOL XML_UTILS_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${XercesC_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES ACE
                        ${XercesC_LIBRARIES}
)
target_cxx_sources(ACE_XML_Utils
  SOURCE_FILES XML_Error_Handler.cpp
               XML_Schema_Resolver.cpp
               XML_Typedefs.cpp
               XercesString.cpp
  HEADER_FILES XML_Error_Handler.h
               XML_Helper.h
               XML_Schema_Resolver.h
               XML_Typedefs.h
               XML_Utils_Export.h
               XercesString.h
)

include("XSCRT/CMakeLists.txt")
include("XMLSchema/CMakeLists.txt")
