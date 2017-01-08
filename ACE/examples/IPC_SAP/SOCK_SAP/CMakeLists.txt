
project(sock_sap CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(sock_sap_C_inclient
  OUTPUT_NAME C-inclient
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_C_inclient
  SOURCE_FILES C-inclient.cpp
)


add_ace_exe(sock_sap_C_inserver
  OUTPUT_NAME C-inserver
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_C_inserver
  SOURCE_FILES C-inserver.cpp
)


add_ace_exe(sock_sap_Cpp_inclient
  OUTPUT_NAME CPP-inclient
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_inclient
  SOURCE_FILES CPP-inclient.cpp
  HEADER_FILES CPP-inclient.h
)


add_ace_exe(sock_sap_Cpp_inserver
  OUTPUT_NAME CPP-inserver
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_inserver
  SOURCE_FILES CPP-inserver.cpp
)


add_ace_exe(sock_sap_Cpp_memclient
  OUTPUT_NAME CPP-memclient
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_memclient
  SOURCE_FILES CPP-memclient.cpp
)


add_ace_exe(sock_sap_Cpp_memserver
  OUTPUT_NAME CPP-memserver
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_memserver
  SOURCE_FILES CPP-memserver.cpp
)


add_ace_exe(sock_sap_Fd_unclient
  OUTPUT_NAME FD-unclient
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Fd_unclient
  SOURCE_FILES FD-unclient.cpp
)


add_ace_exe(sock_sap_Cpp_unclient
  OUTPUT_NAME CPP-unclient
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_unclient
  SOURCE_FILES CPP-unclient.cpp
)


add_ace_exe(sock_sap_Cpp_unserver
  OUTPUT_NAME CPP-unserver
  FOLDER examples/IPC_SAP/SOCK_SAP
  LINK_LIBRARIES ACE
)
target_cxx_sources(sock_sap_Cpp_unserver
  SOURCE_FILES CPP-unserver.cpp
)

