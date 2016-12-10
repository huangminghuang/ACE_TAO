project(Threads CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT ACE_ROOT)
  find_package(ACE REQUIRED CONFIG)
endif()

function(add_threads_exe)
  foreach(_name ${ARGN})
    add_executable(Threads_${_name} ${_name}.cpp)
    target_link_libraries(Threads_${_name} ACE)
  endforeach()
endfunction()


add_threads_exe(
  auto_event
  barrier1
  barrier2
  cancel
  future1
  future2
  manual_event
  process_mutex
  process_semaphore
  reader_writer
  recursive_mutex
  task_five
  task_four
  task_one
  task_three
  task_two
  thread_manager
  thread_pool
  thread_specific
  token
  tss1
  tss2
)