set( RAPI_FOUND 0 )

find_path( RAPI_INCLUDE_DIR
  NAMES
    rapi_lib.h
  DOC
  "Specify include-directories that might contain rapi_lib.h here."
)
find_library( RAPI_LIBRARY
  NAMES
    rapi
  DOC "Specify library-locations that might contain the rapi library here."
)


if ( RAPI_LIBRARY AND RAPI_INCLUDE_DIR)
  set( RAPI_FOUND 1 )
endif (RAPI_LIBRARY AND RAPI_INCLUDE_DIR)

mark_as_advanced( RAPI_FOUND RAPI_LIBRARY RAPI_INCLUDE_DIR )