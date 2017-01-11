
project(Svc_Cfg_IPC_Client CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Svc_Cfg_IPC_Client_Loc_dgram
  OUTPUT_NAME local_dgram_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Loc_dgram
  SOURCE_FILES local_dgram_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Loc_fifo
  OUTPUT_NAME local_fifo_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Loc_fifo
  SOURCE_FILES local_fifo_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Loc_pipe
  OUTPUT_NAME local_pipe_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Loc_pipe
  SOURCE_FILES local_pipe_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Loc_spipe
  OUTPUT_NAME local_spipe_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Loc_spipe
  SOURCE_FILES local_spipe_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Loc_stream
  OUTPUT_NAME local_stream_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Loc_stream
  SOURCE_FILES local_stream_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Rem_dgram
  OUTPUT_NAME remote_dgram_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Rem_dgram
  SOURCE_FILES remote_dgram_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Rem_svc_dir
  OUTPUT_NAME remote_service_directory_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Rem_svc_dir
  SOURCE_FILES remote_service_directory_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Rem_stream
  OUTPUT_NAME remote_stream_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Rem_stream
  SOURCE_FILES remote_stream_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Rem_thr_stream
  OUTPUT_NAME remote_thr_stream_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Rem_thr_stream
  SOURCE_FILES remote_thr_stream_client_test.cpp
)


add_ace_exe(Svc_Cfg_IPC_Client_Bcast
  OUTPUT_NAME remote_broadcast_test
  FOLDER examples/Service_Configurator/IPC-tests/client
  LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Client_Bcast
  SOURCE_FILES broadcast_client_test.cpp
)

