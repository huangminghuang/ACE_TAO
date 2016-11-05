file(GLOB sources *.cpp)
file(GLOB header *.h *.inl)

add_ace_lib(ACE_TMCast
  OUTPUT_NAME ACE_TMCast
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES ACE
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
  HEADERS_INSTALL_DESTINATION ace/TMCast
  PACKAGE ACE_TMCast
)
export_ace_package(ACE_TMCast)