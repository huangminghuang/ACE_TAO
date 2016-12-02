
if (WIN32)
  set(pdh pdh)
endif()

add_ace_component(ACE_Monitor_Control
    DEFINE_SYMBOL ACE_MONITOR_CONTROL_BUILD_DLL
    SOURCES     Auto_Update_Starter.cpp
                BSD_Network_Interface_Monitor.cpp
                Bytes_Received_Monitor.cpp
                Bytes_Sent_Monitor.cpp
                Constraint_Interpreter.cpp
                Constraint_Visitor.cpp
                CPU_Load_Monitor.cpp
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
    PUBLIC_HEADER Monitor_Control.h
                Monitor_Control_export.h
                Monitor_Control_utils.h
    PUBLIC_LINK_LIBRARIES ACE ACE_ETCL_Parser ${pdh}
    PACKAGE ACE
)