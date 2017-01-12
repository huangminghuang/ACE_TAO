

ace_requires("NOT USES_WCHAR")

ace_add_exe(asnmp_example_get
  OUTPUT_NAME get
  FOLDER ASNMP/examples/get
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_get
  SOURCE_FILES get.cpp
)


ace_add_exe(asnmp_example_get_async
  OUTPUT_NAME get_async
  FOLDER ASNMP/examples/get
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_get_async
  SOURCE_FILES get_async.cpp
)

