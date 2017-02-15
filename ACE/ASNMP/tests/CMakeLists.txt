

ace_add_exe(asnmp_tests_Oid_Test
  OUTPUT_NAME Oid_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Oid_Test
  SOURCE_FILES Oid_Test.cpp
)


ace_add_exe(asnmp_tests_Counter_Test
  OUTPUT_NAME Counter_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Counter_Test
  SOURCE_FILES Counter_Test.cpp
)


ace_add_exe(asnmp_tests_Counter64_Test
  OUTPUT_NAME Counter64_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Counter64_Test
  SOURCE_FILES Counter64_Test.cpp
)


ace_add_exe(asnmp_tests_Integer_Test
  OUTPUT_NAME Integer_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Integer_Test
  SOURCE_FILES Integer_Test.cpp
)


ace_add_exe(asnmp_tests_Octet_Test
  OUTPUT_NAME Octet_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Octet_Test
  SOURCE_FILES Octet_Test.cpp
)


ace_add_exe(asnmp_tests_Gauge_Test
  OUTPUT_NAME Gauge_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Gauge_Test
  SOURCE_FILES Gauge_Test.cpp
)


ace_add_exe(asnmp_tests_Address_Test
  OUTPUT_NAME Address_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Address_Test
  SOURCE_FILES Address_Test.cpp
)


ace_add_exe(asnmp_tests_Target_Test
  OUTPUT_NAME Target_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Target_Test
  SOURCE_FILES Target_Test.cpp
)


ace_add_exe(asnmp_tests_Varbind_Test
  OUTPUT_NAME Varbind_Test
  FOLDER ACE/ASNMP/tests
  INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  LINK_LIBRARIES asnmp_lib
                 ACE
)
ace_target_cxx_sources(asnmp_tests_Varbind_Test
  SOURCE_FILES Varbind_Test.cpp
)

