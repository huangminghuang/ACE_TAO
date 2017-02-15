
project(QOS CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()
add_subdirectory(Change_Receiver_FlowSpec)
add_subdirectory(Change_Sender_TSpec)
add_subdirectory(Diffserv)
add_subdirectory(Simple)
