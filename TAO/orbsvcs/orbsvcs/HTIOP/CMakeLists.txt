
if (NOT TARGET ACE_HTBP)
  find_package(ACE_HTBP)
endif()

add_tao_idl_command(HTIOP_IDLS
  IDL_FLAGS -Wb,export_macro=HTIOP_Export -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h -SS
        -o orbsvcs
  IDL_FILES ../HTIOP.idl
)

install(FILES ${HTIOP_IDLS} ${HTIOP_IDLS_OUTPUT_FILES}
        DESTINATION include/orbsvcs)

add_tao_idl_command(HTIOP_ENDPOINTS_IDLS
  IDL_FLAGS -Wb,export_macro=HTIOP_Export -Wb,export_include=orbsvcs/HTIOP/HTIOP_Export.h -SS
        -Sci -Gp -Gd -Sa -Sorb
        -o orbsvcs/HTIOP
  IDL_FILES htiop_endpoints.pidl
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

