
if (NOT TARGET ACE_HTBP)
  find_package(ACE_HTBP)
endif()

add_tao_idl_targets(HTIOP_IDLS
  FLAGS -Wb,export_macro=HTIOP_Export -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h -SS
        -o orbsvcs
  IDLS ../HTIOP.idl
)

install(FILES ${HTIOP_IDLS} ${HTIOP_IDLS_OUTPUT_FILES}
        DESTINATION include/orbsvcs)

add_tao_idl_targets(HTIOP_ENDPOINTS_IDLS
  FLAGS -Wb,export_macro=HTIOP_Export -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h -SS
        -Sci -Gp -Gd -Sa -Sorb
        -o orbsvcs/HTIOP
  IDLS htiop_endpoints.pidl
)

install(FILES ${HTIOP_IDLS} ${HTIOP_IDLS_OUTPUT_FILES}
        DESTINATION include/orbsvcs/HTIOP)

file(GLOB sources *.cpp)
file(GLOB headers *.h *.inl)
add_orbsvcs_lib(TAO_HTIOP
  DEFINE_SYMBOL HTIOP_BUILD_DLL
  SOURCES ${HTIOP_IDLS_OUTPUT_FILES} ${HTIOP_ENDPOINTS_IDLS_OUTPUT_FILES} ${sources}
  PUBLIC_HEADER ${headers}
  PUBLIC_LINK_LIBRARIES ACE_HTBP TAO_Svc_Utils

)

