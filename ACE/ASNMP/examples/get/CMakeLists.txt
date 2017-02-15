

ace_requires("NOT ACE_USES_WCHAR")

ace_add_exe(asnmp_example_get
  OUTPUT_NAME get
  FOLDER ACE/ASNMP/examples/get
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_get
  SOURCE_FILES get.cpp
)


ace_add_exe(asnmp_example_get_async
  OUTPUT_NAME get_async
  FOLDER ACE/ASNMP/examples/get
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_example_get_async
  SOURCE_FILES get_async.cpp
)

