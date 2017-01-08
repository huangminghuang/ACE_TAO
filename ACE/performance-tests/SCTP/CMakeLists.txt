

add_ace_exe(SCTP_Sock_stream_clt
  OUTPUT_NAME SOCK_STREAM_clt
  FOLDER performance-tests/SCTP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SCTP_Sock_stream_clt
  SOURCE_FILES SOCK_STREAM_clt.cpp
               Options_Manager.cpp
               hist.cpp
  HEADER_FILES Options_Manager.h
               hist.h
)


add_ace_exe(SCTP_Sock_stream_srv
  OUTPUT_NAME SOCK_STREAM_srv
  FOLDER performance-tests/SCTP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SCTP_Sock_stream_srv
  SOURCE_FILES Options_Manager.cpp
               SOCK_STREAM_srv.cpp
  HEADER_FILES Options_Manager.h
)


add_ace_exe(SCTP_Sock_seqpack_clt
  OUTPUT_NAME SOCK_SEQPACK_clt
  FOLDER performance-tests/SCTP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SCTP_Sock_seqpack_clt
  SOURCE_FILES SOCK_SEQPACK_clt.cpp
               Options_Manager.cpp
               hist.cpp
  HEADER_FILES Options_Manager.h
               hist.h
)


add_ace_exe(SCTP_Sock_seqpack_srv
  OUTPUT_NAME SOCK_SEQPACK_srv
  FOLDER performance-tests/SCTP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SCTP_Sock_seqpack_srv
  SOURCE_FILES SOCK_SEQPACK_srv.cpp
               Options_Manager.cpp
  HEADER_FILES Options_Manager.h
)


add_ace_exe(SCTP_Sock_seqpack_association_test
  OUTPUT_NAME SOCK_SEQPACK_Association_Test
  FOLDER performance-tests/SCTP
  LINK_LIBRARIES ACE
)
target_cxx_sources(SCTP_Sock_seqpack_association_test
  SOURCE_FILES SOCK_SEQPACK_Association_Test.cpp
)

