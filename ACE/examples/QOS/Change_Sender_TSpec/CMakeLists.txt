
project(QOS_Change_Sender_TSpec CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


requires(RAPI_FOUND)

add_ace_exe(QOS_Change_Sender_TSpec_Receiver
  OUTPUT_NAME receiver
  FOLDER examples/QOS/Change_Sender_TSpec
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
target_cxx_sources(QOS_Change_Sender_TSpec_Receiver
  SOURCE_FILES Fill_ACE_QoS.cpp
               Receiver_QoS_Event_Handler.cpp
               QoS_Util.cpp
               QoS_Signal_Handler.cpp
               receiver.cpp
  HEADER_FILES Fill_ACE_QoS.h
               Receiver_QoS_Event_Handler.h
               QoS_Signal_Handler.h
               QoS_Util.h
)


add_ace_exe(QOS_Change_Sender_TSpec_Sender
  OUTPUT_NAME sender
  FOLDER examples/QOS/Change_Sender_TSpec
  INCLUDE_DIRECTORIES ${RAPI_INCLUDE_DIR}
  LINK_LIBRARIES ACE_QoS
                 ACE
                 ${RAPI_LIBRARIES}
)
target_cxx_sources(QOS_Change_Sender_TSpec_Sender
  SOURCE_FILES sender.cpp
               QoS_Util.cpp
               QoS_Signal_Handler.cpp
               Fill_ACE_QoS.cpp
               Sender_QoS_Event_Handler.cpp
  HEADER_FILES Fill_ACE_QoS.h
               QoS_Signal_Handler.h
               QoS_Util.h
               Sender_QoS_Event_Handler.h
)

