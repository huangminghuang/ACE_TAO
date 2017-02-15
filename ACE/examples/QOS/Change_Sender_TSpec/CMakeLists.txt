
project(QOS_Change_Sender_TSpec CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_add_exe(QOS_Change_Sender_TSpec_Receiver
  OUTPUT_NAME receiver
  FOLDER ACE/examples/QOS/Change_Sender_TSpec
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
ace_target_cxx_sources(QOS_Change_Sender_TSpec_Receiver
  SOURCE_FILES Fill_ACE_QoS.cpp
               QoS_Signal_Handler.cpp
               QoS_Util.cpp
               Receiver_QoS_Event_Handler.cpp
               receiver.cpp
  HEADER_FILES Fill_ACE_QoS.h
               QoS_Signal_Handler.h
               QoS_Util.h
               Receiver_QoS_Event_Handler.h
)


ace_add_exe(QOS_Change_Sender_TSpec_Sender
  OUTPUT_NAME sender
  FOLDER ACE/examples/QOS/Change_Sender_TSpec
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
ace_target_cxx_sources(QOS_Change_Sender_TSpec_Sender
  SOURCE_FILES Fill_ACE_QoS.cpp
               QoS_Signal_Handler.cpp
               QoS_Util.cpp
               Sender_QoS_Event_Handler.cpp
               sender.cpp
  HEADER_FILES Fill_ACE_QoS.h
               QoS_Signal_Handler.h
               QoS_Util.h
               Sender_QoS_Event_Handler.h
)

