
project(QOS_Change_Sender_TSpec CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
if(TARGET ACE_QoS)
  add_executable(QOS_Change_Sender_TSpec_receiver
    Fill_ACE_QoS.cpp
    QoS_Signal_Handler.cpp
    QoS_Util.cpp
    receiver.cpp
    Receiver_QoS_Event_Handler.cpp
  )
  set_target_properties(QOS_Change_Sender_TSpec_receiver PROPERTIES
    OUTPUT_NAME receiver
    LINK_LIBRARIES ACE_QoS
  )
endif()

##############################
if(TARGET ACE_QoS)
  add_executable(QOS_Change_Sender_TSpec_sender
    Fill_ACE_QoS.cpp
    QoS_Signal_Handler.cpp
    QoS_Util.cpp
    sender.cpp
    Sender_QoS_Event_Handler.cpp
  )
  set_target_properties(QOS_Change_Sender_TSpec_sender PROPERTIES
    OUTPUT_NAME sender
    LINK_LIBRARIES ACE_QoS
  )
endif()
#####################################
