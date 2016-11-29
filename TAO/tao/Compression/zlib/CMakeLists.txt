find_package(ZLIB)

if (ZLIB_FOUND)
  add_tao_component(
    NAME ZlibCompressor
    PUBLIC_LINK_LIBRARIES TAO_Compression ${ZLIB_LIBRARIES}
  )
endif()