
project(streams CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

##############################
add_executable(Answerer
  Answerer.cpp
  CommandModule.cpp
  CommandStream.cpp
  CommandTask.cpp
  CommandTasks.cpp
  RecordingDeviceFactory.cpp
  RecordingDevice_Text.cpp
)
set_target_properties(Answerer PROPERTIES
  OUTPUT_NAME Answerer
  LINK_LIBRARIES ACE
)
#####################################
