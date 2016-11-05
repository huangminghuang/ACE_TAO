
add_ace_exe(SAXPrint
  SOURCES main.cpp SAXPrint_Handler.cpp
  LINK_LIBRARIES ACEXML)
  
file(GLOB xml_files *.xml)
file(COPY ${xml_files} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})