find_package(zziplib)

ace_add_lib(ACEXML
  OUTPUT_NAME ACEXML
  PACKAGE ACE
  FOLDER ACEXML/common
  DEFINE_SYMBOL ACEXML_BUILD_DLL
  PUBLIC_COMPILE_DEFINITIONS $<$<BOOL:${ZZIPLIB_FOUND}>:USE_ZZIP>
  PUBLIC_INCLUDE_DIRECTORIES ${ZZIPLIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES ACE
                        ${ZZIPLIB_LIBRARIES}
)
ace_target_cxx_sources(ACEXML
  SOURCE_FILES XMLReader.cpp
               ContentHandler.cpp
               DTDHandler.cpp
               LocatorImpl.cpp
               Validator.cpp
               HttpCharStream.cpp
               Attributes_Def_Builder.cpp
               InputSource.cpp
               Element_Def_Builder.cpp
               Attributes.cpp
               StreamFactory.cpp
               SAXExceptions.cpp
               ErrorHandler.cpp
               Transcode.cpp
               ZipCharStream.cpp
               URL_Addr.cpp
               DTD_Manager.cpp
               Locator.cpp
               XML_Util.cpp
               EntityResolver.cpp
               NamespaceSupport.cpp
               Mem_Map_Stream.cpp
               CharStream.cpp
               FileCharStream.cpp
               Exception.cpp
               AttributesImpl.cpp
               Encoding.cpp
               StrCharStream.cpp
               XMLFilterImpl.cpp
               DefaultHandler.cpp
  HEADER_FILES ACEXML_Export.h
               Attributes.h
               ContentHandler.h
               DTDHandler.h
               EntityResolver.h
               ErrorHandler.h
               Locator.h
               XMLFilter.h
               XMLReader.h
               XML_Types.h
               XML_Util.h
               LocatorImpl.h
               Validator.h
               HttpCharStream.h
               Attributes_Def_Builder.h
               InputSource.h
               Element_Def_Builder.h
               StreamFactory.h
               SAXExceptions.h
               Transcode.h
               ZipCharStream.h
               URL_Addr.h
               DTD_Manager.h
               NamespaceSupport.h
               Mem_Map_Stream.h
               CharStream.h
               FileCharStream.h
               Exception.h
               AttributesImpl.h
               Encoding.h
               StrCharStream.h
               XMLFilterImpl.h
               DefaultHandler.h
  INLINE_FILES LocatorImpl.inl
               SAXExceptions.inl
               URL_Addr.inl
               Exception.inl
               AttributesImpl.inl
               XMLFilterImpl.inl
)

if(ACE_CODECS)
  ace_target_cxx_sources(ACEXML
    SOURCE_FILES XML_Codecs.cpp
    HEADER_FILES XML_Codecs.h
  )
endif()
