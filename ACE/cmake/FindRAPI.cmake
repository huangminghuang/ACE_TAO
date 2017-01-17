
if (WIN32)
  set(RAPI_FOUND 1 CACHE INTERNAL "")
else()
  find_path( RAPI_INCLUDE_DIR
    NAMES rapi_lib.h
    DOC "Specify include-directories that might contain rapi_lib.h here."
  )
  find_library( RAPI_LIBRARY
    NAMES rapi
    DOC "Specify library-locations that might contain the rapi library here."
  )

  include(FindPackageHandleStandardArgs)
  find_package_handle_standard_args(RAPI DEFAULT_MSG RAPI_LIBRARY RAPI_INCLUDE_DIR)
endif()
