set(sources 
    address.cpp
    asn1.cpp
    counter.cpp
    ctr64.cpp
    gauge.cpp
    integer.cpp
    octet.cpp
    oid.cpp
    pdu.cpp
    snmp.cpp
    target.cpp
    timetick.cpp
    transaction.cpp
    vb.cpp
    wpdu.cpp
    sagent.cpp)

add_ace_lib(asnmp
            DEFINE_SYMBOL ASNMP_BUILD_DLL
            SOURCES ${sources}
            PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
            PUBLIC_LINK_LIBRARIES ACE)