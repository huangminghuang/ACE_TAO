
project(Svc_Cfg_IPC_Server CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT TARGET ACE)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_lib(Svc_Cfg_IPC_Server_Lib
  OUTPUT_NAME IPC_Tests_Server
  FOLDER ACE/examples/Service_Configurator/IPC-tests/server
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Svc_Cfg_IPC_Server_Lib
  SOURCE_FILES Handle_Broadcast.cpp
               Handle_L_CODgram.cpp
               Handle_L_Dgram.cpp
               Handle_L_FIFO.cpp
               Handle_L_Pipe.cpp
               Handle_L_SPIPE.cpp
               Handle_L_Stream.cpp
               Handle_R_Stream.cpp
               Handle_Thr_Stream.cpp
               Handle_Timeout.cpp
  HEADER_FILES Handle_Broadcast.h
               Handle_L_CODgram.h
               Handle_L_Dgram.h
               Handle_L_FIFO.h
               Handle_L_Pipe.h
               Handle_L_SPIPE.h
               Handle_L_Stream.h
               Handle_R_Stream.h
               Handle_Thr_Stream.h
               Handle_Timeout.h
  INLINE_FILES Handle_Broadcast.inl
               Handle_L_CODgram.inl
               Handle_L_Dgram.inl
               Handle_L_FIFO.inl
               Handle_L_Pipe.inl
               Handle_L_SPIPE.inl
               Handle_L_Stream.inl
               Handle_R_Stream.inl
               Handle_Timeout.inl
)


ace_add_exe(Svc_Cfg_IPC_Server_Test
  OUTPUT_NAME server_test
  FOLDER ACE/examples/Service_Configurator/IPC-tests/server
  LINK_LIBRARIES ACE
                 Svc_Cfg_IPC_Server_Lib
)
ace_target_cxx_sources(Svc_Cfg_IPC_Server_Test
  SOURCE_FILES server_test.cpp
)

