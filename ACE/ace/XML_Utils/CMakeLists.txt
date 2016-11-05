set(BUILD_XML_Utils OPTIONAL CACHE STRING "Whether to build ACE_XML_Utils component")
as_trinary_option(BUILD_XML_Utils)

if (BUILD_XML_Utils)
    find_package_ex(XercesC ${BUILD_XML_Utils})

    add_ace_lib(ACE_XML_Utils
        SOURCES                    XML_Error_Handler.cpp 
                                   XercesString.cpp 
                                   XML_Schema_Resolver.cpp 
                                   XML_Typedefs.cpp
        PUBLIC_HEADER              XML_Utils_Export.h
                                   XML_Error_Handler.h
                                   XercesString.h
                                   XML_Schema_Resolver.h
                                   XML_Typedefs.h
                                   XML_Helper.h
        PUBLIC_HEADER_DIRS         XMLSchema XSCRT
        DEFINE_SYMBOL              XML_UTILS_BUILD_DLL
        PUBLIC_LINK_LIBRARIES      ACE ${XercesC_LIBRARIES}
        PUBLIC_INCLUDE_DIRECTORIES ${XercesC_INCLUDE_DIRS}
        PACKAGE                    ACE
        WHEN                       XercesC_FOUND
    )
endif(BUILD_XML_Utils)