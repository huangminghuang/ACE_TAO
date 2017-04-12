if (NOT TARGET TAO_IDL_FE)
  return()
endif()

if (BISON_FOUND AND FLEX_FOUND AND SED_EXECUTABLE AND NOT ACE_USES_WCHAR AND NOT XCODE_VERSION)

  ## for some unknown reason, generate bison/flex files under Xcode causses the TAO_IDL_BE to be
  ## always rebuilt.

  file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/fe)

  add_custom_command(
    OUTPUT  ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.tab.cpp ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.tab.hpp
    DEPENDS fe/idl.ypp
    COMMAND ${BISON_EXECUTABLE} -d -p tao_yy -b fe/idl ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.ypp
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )

  add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.yy.cpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.ll
    COMMAND ${FLEX_EXECUTABLE} -t -P tao_yy ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.ll | ${SED_EXECUTABLE} -f ${CMAKE_CURRENT_SOURCE_DIR}/idl.yy.sed > fe/idl.yy.cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )

  add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/fe/fe_lookup.cpp
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/fe/keywords.dat
    COMMAND $<TARGET_FILE:ace_gperf>  -M -J -c -C -D -E -T -f 0 -a -o -t -p -K keyword_ -L C++ -Z TAO_IDL_CPP_Keyword_Table -N lookup -k1,2,$  ${CMAKE_CURRENT_SOURCE_DIR}/fe/keywords.dat | ${SED_EXECUTABLE} -f ${CMAKE_CURRENT_SOURCE_DIR}/fe_lookup.sed > fe/fe_lookup.cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
  )

  set(generated_fe_files
    ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.tab.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.tab.hpp
    ${CMAKE_CURRENT_BINARY_DIR}/fe/idl.yy.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/fe/fe_lookup.cpp
  )
else()
  set(generated_fe_files
    ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.tab.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.tab.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/fe/idl.yy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/fe/fe_lookup.cpp
  )
endif()

target_sources(TAO_IDL_FE
  PRIVATE ${generated_fe_files}
)

source_group("Generated Files" FILES ${generated_fe_files})

ace_target_cxx_sources(TAO_IDL_FE
  SOURCE_FILES fe_global.cpp
               fe_utils.cpp
               fe_obv_header.cpp
               fe_private.cpp
               fe_home_header.cpp
               fe_interface_header.cpp
               fe_extern.cpp
               fe_declarator.cpp
               fe_init.cpp
               fe_component_header.cpp
  SUBGROUP \\fe
)

