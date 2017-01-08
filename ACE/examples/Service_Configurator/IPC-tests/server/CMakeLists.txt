
project(Svc_Cfg_IPC_Server CXX)
cmake_minimum_required(VERSION 3.1)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_lib(Svc_Cfg_IPC_Server_Lib
  OUTPUT_NAME IPC_Tests_Server
  FOLDER examples/Service_Configurator/IPC-tests/server
  DEFINE_SYMBOL ACE_BUILD_SVC_DLL
  PUBLIC_LINK_LIBRARIES ACE
)
target_cxx_sources(Svc_Cfg_IPC_Server_Lib
  SOURCE_FILES Handle_L_FIFO.cpp
               Handle_Timeout.cpp
               Handle_L_Pipe.cpp
               Handle_L_CODgram.cpp
               Handle_Broadcast.cpp
               Handle_L_Dgram.cpp
               Handle_R_Stream.cpp
               Handle_L_Stream.cpp
               Handle_Thr_Stream.cpp
               Handle_L_SPIPE.cpp
  HEADER_FILES Handle_Timeout.h
               Handle_R_Stream.h
               Handle_L_Stream.h
               Handle_L_Pipe.h
               Handle_L_Dgram.h
               Handle_L_FIFO.h
               Handle_L_CODgram.h
               Handle_Broadcast.h
               Handle_L_SPIPE.h
               Handle_Thr_Stream.h
  INLINE_FILES Handle_L_CODgram.inl
               Handle_L_Dgram.inl
               Handle_L_FIFO.inl
               Handle_Timeout.inl
               Handle_L_SPIPE.inl
               Handle_L_Stream.inl
               Handle_L_Pipe.inl
               Handle_Broadcast.inl
               Handle_R_Stream.inl
)


add_ace_exe(Svc_Cfg_IPC_Server_Test
  OUTPUT_NAME server_test
  FOLDER examples/Service_Configurator/IPC-tests/server
  LINK_LIBRARIES ACE
                 Svc_Cfg_IPC_Server_Lib
)
target_cxx_sources(Svc_Cfg_IPC_Server_Test
  SOURCE_FILES server_test.cpp
)

