
project(Bounded_Packet_Relay CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


add_ace_exe(Bounded_Packet_Relay
  OUTPUT_NAME bpr_thread
  COMPILE_DEFINITIONS ACE_HAS_DEFERRED_TIMER_COMMANDS
  FOLDER examples/Bounded_Packet_Relay
  LINK_LIBRARIES ACE
)
target_cxx_sources(Bounded_Packet_Relay
  SOURCE_FILES bpr_thread.cpp
               BPR_Drivers.cpp
               Thread_Bounded_Packet_Relay.cpp
  HEADER_FILES BPR_Drivers_T.h
               BPR_Drivers.h
               Thread_Bounded_Packet_Relay.h
  TEMPLATE_FILES BPR_Drivers_T.cpp
)

