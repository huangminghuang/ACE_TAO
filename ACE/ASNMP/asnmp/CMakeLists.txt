

ace_add_lib(asnmp_lib
  OUTPUT_NAME asnmp
  FOLDER ACE/ASNMP/asnmp
  DEFINE_SYMBOL ASNMP_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES ..
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(asnmp_lib
  SOURCE_FILES address.cpp
               asn1.cpp
               counter.cpp
               ctr64.cpp
               gauge.cpp
               integer.cpp
               octet.cpp
               oid.cpp
               pdu.cpp
               sagent.cpp
               snmp.cpp
               target.cpp
               timetick.cpp
               transaction.cpp
               vb.cpp
               wpdu.cpp
  HEADER_FILES address.h
               asn1.h
               counter.h
               ctr64.h
               gauge.h
               integer.h
               octet.h
               oid.h
               pdu.h
               sagent.h
               snmp.h
               target.h
               timetick.h
               transaction.h
               vb.h
               wpdu.h
)

