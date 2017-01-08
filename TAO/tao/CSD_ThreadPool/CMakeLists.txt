

requires(ACE_HAS_THREADS "NOT CORBA_E_COMPACT")

add_ace_lib(TAO_CSD_ThreadPool
  OUTPUT_NAME TAO_CSD_ThreadPool
  PACKAGE TAO
  FOLDER tao/CSD_ThreadPool
  DEFINE_SYMBOL TAO_CSD_TP_BUILD_DLL
  PUBLIC_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${TAO_ROOT}/tao>
  PUBLIC_LINK_LIBRARIES TAO_PI
                        TAO_PortableServer
                        TAO_CSD_Framework
)
target_cxx_sources(TAO_CSD_ThreadPool
  SOURCE_FILES CSD_TP_Cancel_Visitor.cpp
               CSD_TP_Collocated_Asynch_Request.cpp
               CSD_TP_Collocated_Synch_Request.cpp
               CSD_TP_Collocated_Synch_With_Server_Request.cpp
               CSD_TP_Corba_Request.cpp
               CSD_TP_Custom_Asynch_Request.cpp
               CSD_TP_Custom_Request.cpp
               CSD_TP_Custom_Request_Operation.cpp
               CSD_TP_Custom_Synch_Request.cpp
               CSD_TP_Dispatchable_Visitor.cpp
               CSD_TP_Queue.cpp
               CSD_TP_Queue_Visitor.cpp
               CSD_TP_Remote_Request.cpp
               CSD_TP_Request.cpp
               CSD_TP_Servant_State.cpp
               CSD_TP_Servant_State_Map.cpp
               CSD_TP_Strategy.cpp
               CSD_TP_Strategy_Factory.cpp
               CSD_TP_Synch_Helper.cpp
               CSD_TP_Task.cpp
               CSD_ThreadPool.cpp
  HEADER_FILES CSD_TP_Cancel_Visitor.h
               CSD_TP_Collocated_Asynch_Request.h
               CSD_TP_Collocated_Synch_Request.h
               CSD_TP_Collocated_Synch_With_Server_Request.h
               CSD_TP_Corba_Request.h
               CSD_TP_Custom_Asynch_Request.h
               CSD_TP_Custom_Request.h
               CSD_TP_Custom_Request_Operation.h
               CSD_TP_Custom_Synch_Request.h
               CSD_TP_Dispatchable_Visitor.h
               CSD_TP_Queue.h
               CSD_TP_Queue_Visitor.h
               CSD_TP_Remote_Request.h
               CSD_TP_Request.h
               CSD_TP_Servant_State.h
               CSD_TP_Servant_State_Map.h
               CSD_TP_Strategy.h
               CSD_TP_Strategy_Factory.h
               CSD_TP_Synch_Helper.h
               CSD_TP_Task.h
               CSD_ThreadPool.h
  INLINE_FILES CSD_TP_Cancel_Visitor.inl
               CSD_TP_Collocated_Asynch_Request.inl
               CSD_TP_Collocated_Synch_Request.inl
               CSD_TP_Collocated_Synch_With_Server_Request.inl
               CSD_TP_Corba_Request.inl
               CSD_TP_Custom_Asynch_Request.inl
               CSD_TP_Custom_Request.inl
               CSD_TP_Custom_Request_Operation.inl
               CSD_TP_Custom_Synch_Request.inl
               CSD_TP_Dispatchable_Visitor.inl
               CSD_TP_Queue.inl
               CSD_TP_Queue_Visitor.inl
               CSD_TP_Remote_Request.inl
               CSD_TP_Request.inl
               CSD_TP_Servant_State.inl
               CSD_TP_Servant_State_Map.inl
               CSD_TP_Strategy.inl
               CSD_TP_Synch_Helper.inl
               CSD_TP_Task.inl
)

