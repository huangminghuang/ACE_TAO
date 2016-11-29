find_package(BZip2)

if (BZIP2_FOUND)
  set(sources
    Bzip2Compressor.cpp
    Bzip2Compressor_Factory.cpp
  )

  set(headers
    Bzip2Compressor.h
    Bzip2Compressor_Factory.h
    Bzip2Compressor_export.h
  )

  add_tao_component(
    NAME Bzip2Compressor
    SOURCES ${sources}
    PUBLIC_HEADER "${headers}"
    INCLUDE_DIRECTORIES ${BZIP2_INCLUDE_DIR}
    PUBLIC_LINK_LIBRARIES TAO_Compression ${BZIP2_LIBRARIES}
  )
else()
  message("Skipping ${CMAKE_CURRENT_SOURCE_DIR} because BZip2 not found" )
endif()