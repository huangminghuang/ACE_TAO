find_package(zziplib)

ace_add_lib(ACEXML
  OUTPUT_NAME ACEXML
  PACKAGE ACE
  FOLDER ACE/ACEXML/common
  DEFINE_SYMBOL ACEXML_BUILD_DLL
  PUBLIC_COMPILE_DEFINITIONS $<$<BOOL:${ZZIPLIB_FOUND}>:USE_ZZIP>
  PUBLIC_INCLUDE_DIRECTORIES ${ZZIPLIB_INCLUDE_DIRS}
  PUBLIC_LINK_LIBRARIES ACE
                        ${ZZIPLIB_LIBRARIES}
)
ace_target_cxx_sources(ACEXML
  SOURCE_FILES Attributes.cpp
               AttributesImpl.cpp
               Attributes_Def_Builder.cpp
               CharStream.cpp
               ContentHandler.cpp
               DTDHandler.cpp
               DTD_Manager.cpp
               DefaultHandler.cpp
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
  HEADER_FILES ACEXML_Export.h
               Attributes.h
               AttributesImpl.h
               Attributes_Def_Builder.h
               CharStream.h
               ContentHandler.h
               DTDHandler.h
               DTD_Manager.h
               DefaultHandler.h
               Element_Def_Builder.h
               Encoding.h
               EntityResolver.h
               ErrorHandler.h
               Exception.h
               FileCharStream.h
               HttpCharStream.h
               InputSource.h
               Locator.h
               LocatorImpl.h
               Mem_Map_Stream.h
               NamespaceSupport.h
               SAXExceptions.h
               StrCharStream.h
               StreamFactory.h
               Transcode.h
               URL_Addr.h
               Validator.h
               XMLFilter.h
               XMLFilterImpl.h
               XMLReader.h
               XML_Types.h
               XML_Util.h
               ZipCharStream.h
  INLINE_FILES AttributesImpl.inl
               Exception.inl
               LocatorImpl.inl
               SAXExceptions.inl
               URL_Addr.inl
               XMLFilterImpl.inl
)

if(ACE_CODECS)
  ace_target_cxx_sources(ACEXML
    SOURCE_FILES XML_Codecs.cpp
    HEADER_FILES XML_Codecs.h
  )
endif()
