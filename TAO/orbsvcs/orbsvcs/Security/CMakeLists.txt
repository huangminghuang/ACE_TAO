add_orbsvcs_idls(Security
  IDL_FILES ../CSI.idl
       ../CSIIOP.idl
       ../GSSUP.idl
       ../Security.idl
       ../SecurityLevel1.idl
       ../SecurityLevel2.idl
       ../SecurityLevel3.idl
)

file(GLOB sources *.cpp)

add_orbsvcs_lib(TAO_Security
  DEFINE_SYMBOL TAO_SECURITY_BUILD_DLL
  SOURCES ${sources} ${Security_IDLS_OUTPUT_FILES}
  PUBLIC_HEADER security_export.h
  PUBLIC_LINK_LIBRARIES TAO_AnyTypeCode TAO_Messaging TAO_PortableServer TAO_PI TAO_Svc_Utils

)

