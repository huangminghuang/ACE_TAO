

add_ace_lib(ACE_Monitor_Control
  OUTPUT_NAME ACE_Monitor_Control
  PACKAGE ACE
  FOLDER ace/Monitor_Control
  DEFINE_SYMBOL MONITOR_CONTROL_BUILD_DLL
  PUBLIC_LINK_LIBRARIES ACE_ETCL_Parser
                        $<$<PLATFORM_ID:Windows>:pdh>
                        ACE
)
target_cxx_sources(ACE_Monitor_Control
  SOURCE_FILES Auto_Update_Starter.cpp
               BSD_Network_Interface_Monitor.cpp
               Bytes_Received_Monitor.cpp
               Bytes_Sent_Monitor.cpp
               CPU_Load_Monitor.cpp
               Constraint_Interpreter.cpp
               Constraint_Visitor.cpp
               FreeBSD_Network_Interface_Monitor.cpp
               Linux_Network_Interface_Monitor.cpp
               Memory_Usage_Monitor.cpp
               Monitor_Group.cpp
               Monitor_Query.cpp
               Null_Network_Interface_Monitor.cpp
               Num_Threads_Monitor.cpp
               Packets_Received_Monitor.cpp
               Packets_Sent_Monitor.cpp
               Solaris_Network_Interface_Monitor.cpp
               Windows_Monitor.cpp
               Windows_Multi_Instance_Monitor.cpp
  HEADER_FILES Auto_Update_Starter.h
               BSD_Network_Interface_Monitor.h
               Bytes_Received_Monitor.h
               Bytes_Sent_Monitor.h
               CPU_Load_Monitor.h
               Constraint_Interpreter.h
               Constraint_Visitor.h
               FreeBSD_Network_Interface_Monitor.h
               Linux_Network_Interface_Monitor.h
               Memory_Usage_Monitor.h
               Monitor_Control.h
               Monitor_Control_export.h
               Monitor_Control_utils.h
               Monitor_Group.h
               Monitor_Query.h
               Null_Network_Interface_Monitor.h
               Num_Threads_Monitor.h
               Packets_Received_Monitor.h
               Packets_Sent_Monitor.h
               Solaris_Network_Interface_Monitor.h
               Windows_Monitor.h
               Windows_Multi_Instance_Monitor.h
)

