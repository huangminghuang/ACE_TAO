
set(sources
    Attributes_Def_Builder.cpp
    Attributes.cpp
    AttributesImpl.cpp
    CharStream.cpp
    ContentHandler.cpp
    DefaultHandler.cpp
    DTDHandler.cpp
    DTD_Manager.cpp
    Element_Def_Builder.cpp
    Encoding.cpp
    EntityResolver.cpp
    ErrorHandler.cpp
    Exception.cpp
    FileCharStream.cpp
    HttpCharStream.cpp
    InputSource.cpp
    Locator.cpp
    LocatorImpl.cpp
    Mem_Map_Stream.cpp
    NamespaceSupport.cpp
    SAXExceptions.cpp
    StrCharStream.cpp
    StreamFactory.cpp
    Transcode.cpp
    URL_Addr.cpp
    Validator.cpp
    XMLFilterImpl.cpp
    XMLReader.cpp
    XML_Util.cpp
    ZipCharStream.cpp
)


file(GLOB headers *.inl *.h)
add_ace_component(ACEXML
            SOURCES ${sources}
            PUBLIC_HEADER "${headers}"
            DEFINE_SYMBOL ACEXML_BUILD_DLL
            PUBLIC_INCLUDE_DIRECTORIES ${ZZIPLIB_INCLUDE_DIRS}
            PUBLIC_LINK_LIBRARIES ACE ${ZZIPLIB_LIBRARIES}
            PACKAGE ACEXML)

if (ZZILIB_FOUND)
  target_compile_definitions(ACEXML PUBLIC USE_ZZIP)
endif(ZZILIB_FOUND)


