

ace_add_exe(SCTP_Sock_stream_clt
  OUTPUT_NAME SOCK_STREAM_clt
  FOLDER ACE/performance-tests/SCTP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SCTP_Sock_stream_clt
  SOURCE_FILES Options_Manager.cpp
               SOCK_STREAM_clt.cpp
               hist.cpp
  HEADER_FILES Options_Manager.h
               hist.h
)


ace_add_exe(SCTP_Sock_stream_srv
  OUTPUT_NAME SOCK_STREAM_srv
  FOLDER ACE/performance-tests/SCTP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SCTP_Sock_stream_srv
  SOURCE_FILES Options_Manager.cpp
               SOCK_STREAM_srv.cpp
  HEADER_FILES Options_Manager.h
)


ace_add_exe(SCTP_Sock_seqpack_clt
  OUTPUT_NAME SOCK_SEQPACK_clt
  FOLDER ACE/performance-tests/SCTP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SCTP_Sock_seqpack_clt
  SOURCE_FILES Options_Manager.cpp
               SOCK_SEQPACK_clt.cpp
               hist.cpp
  HEADER_FILES Options_Manager.h
               hist.h
)


ace_add_exe(SCTP_Sock_seqpack_srv
  OUTPUT_NAME SOCK_SEQPACK_srv
  FOLDER ACE/performance-tests/SCTP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SCTP_Sock_seqpack_srv
  SOURCE_FILES Options_Manager.cpp
               SOCK_SEQPACK_srv.cpp
  HEADER_FILES Options_Manager.h
)


ace_add_exe(SCTP_Sock_seqpack_association_test
  OUTPUT_NAME SOCK_SEQPACK_Association_Test
  FOLDER ACE/performance-tests/SCTP
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(SCTP_Sock_seqpack_association_test
  SOURCE_FILES SOCK_SEQPACK_Association_Test.cpp
)

