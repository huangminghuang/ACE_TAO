file(GLOB sources *.cpp)
file(GLOB header *.h *.inl)

add_ace_lib(ACE_RMCast
  OUTPUT_NAME ACE_RMCast
  SOURCES ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES ACE
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../..>
  HEADERS_INSTALL_DESTINATION ace/RNCast
  PACKAGE ACE_RMCast
)
export_ace_package(ACE_RMCast)