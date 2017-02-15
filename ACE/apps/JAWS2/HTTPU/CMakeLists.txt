

ace_requires("NOT ACE_USES_WCHAR")

ace_add_lib(HTTPU
  OUTPUT_NAME HTTPU
  FOLDER ACE/apps/JAWS2/HTTPU
  DEFINE_SYMBOL HTTPU_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/..
  PUBLIC_LINK_LIBRARIES JAWS2
                        ACE
)
ace_target_cxx_sources(HTTPU
  SOURCE_FILES http_base.cpp
               http_headers.cpp
               http_request.cpp
               http_response.cpp
               http_status.cpp
               parse_http_request.cpp
               parse_http_response.cpp
               parse_url.cpp
  HEADER_FILES http_base.h
               http_export.h
               http_headers.h
               http_request.h
               http_response.h
               http_status.h
               parse_http_request.h
               parse_http_response.h
               parse_url.h
  INLINE_FILES http_base.inl
               http_headers.inl
               http_request.inl
               http_response.inl
               http_status.inl
               parse_http_request.inl
               parse_http_response.inl
)

