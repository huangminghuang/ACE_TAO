
project(streams CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(ACE_HAS_THREADS)

ace_add_exe(Answerer
  OUTPUT_NAME Answerer
  FOLDER ACE/examples/APG/Streams
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Answerer
  SOURCE_FILES Answerer.cpp
               CommandModule.cpp
               CommandStream.cpp
               CommandTask.cpp
               CommandTasks.cpp
               RecordingDeviceFactory.cpp
               RecordingDevice_Text.cpp
  HEADER_FILES CommandModule.h
               CommandStream.h
               CommandTask.h
               CommandTasks.h
               RecordingDeviceFactory.h
               RecordingDevice_Text.h
)

