

ace_requires("NOT USES_WCHAR")

ace_add_lib(HTTPU
  OUTPUT_NAME HTTPU
  FOLDER apps/JAWS2/HTTPU
  DEFINE_SYMBOL HTTPU_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES JAWS2
                        ACE
)
ace_target_cxx_sources(HTTPU
  SOURCE_FILES http_status.cpp
               http_base.cpp
               http_headers.cpp
               parse_http_request.cpp
               http_response.cpp
               parse_url.cpp
               parse_http_response.cpp
               http_request.cpp
  HEADER_FILES http_status.h
               http_base.h
               http_headers.h
               parse_http_request.h
               http_response.h
               parse_url.h
               parse_http_response.h
               http_request.h
  INLINE_FILES http_status.inl
               http_base.inl
               http_headers.inl
               parse_http_request.inl
               http_response.inl
               parse_http_response.inl
               http_request.inl
)

