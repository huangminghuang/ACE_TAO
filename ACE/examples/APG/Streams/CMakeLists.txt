
project(streams CXX)
cmake_minimum_required(VERSION 3.3)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()


ace_requires(ACE_HAS_THREADS)

ace_add_exe(Answerer
  OUTPUT_NAME Answerer
  FOLDER examples/APG/Streams
  LINK_LIBRARIES ACE
)
ace_target_cxx_sources(Answerer
  SOURCE_FILES Answerer.cpp
               CommandTask.cpp
               CommandTasks.cpp
               CommandStream.cpp
               RecordingDevice_Text.cpp
               RecordingDeviceFactory.cpp
               CommandModule.cpp
  HEADER_FILES RecordingDevice_Text.h
               RecordingDeviceFactory.h
               CommandTask.h
               CommandStream.h
               CommandTasks.h
               CommandModule.h
)

