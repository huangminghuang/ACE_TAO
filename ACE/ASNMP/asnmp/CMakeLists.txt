

ace_add_lib(asnmp_lib
  OUTPUT_NAME asnmp
  FOLDER ASNMP/asnmp
  DEFINE_SYMBOL ASNMP_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ${ACE_ROOT}/ASNMP
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(asnmp_lib
  SOURCE_FILES snmp.cpp
               ctr64.cpp
               wpdu.cpp
               transaction.cpp
               sagent.cpp
               address.cpp
               target.cpp
               timetick.cpp
               counter.cpp
               oid.cpp
               asn1.cpp
               vb.cpp
               pdu.cpp
               integer.cpp
               gauge.cpp
               octet.cpp
  HEADER_FILES address.h
               asn1.h
               counter.h
               ctr64.h
               gauge.h
               integer.h
               octet.h
               oid.h
               pdu.h
               snmp.h
               target.h
               timetick.h
               transaction.h
               vb.h
               wpdu.h
               sagent.h
)

