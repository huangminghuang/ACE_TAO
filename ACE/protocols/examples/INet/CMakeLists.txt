project(ACE_INET_Example CXX)
cmake_minimum_required(VERSION 2.8.12)

if (NOT TARGET ACE_INet)
  find_package(ACE_INet REQUIRED OPTIONAL_COMPONENTS SSL CONFIG)
endif()

add_executable(HTTP_Simple_exec HTTP_Simple_exec.cpp)

if (ACE_INet_SSL_FOUND)
  target_link_libraries(HTTP_Simple_exec ACE_INet_SSL)
  target_compile_definitions(HTTP_Simple_exec PRIVATE ACE_HAS_SSL=1)
  set_target_properties(HTTP_Simple_exec PROPERTIES OUTPUT_NAME https_simple_wget)
else()
  target_link_libraries(HTTP_Simple_exec ACE_INet)
  set_target_properties(HTTP_Simple_exec PROPERTIES OUTPUT_NAME http_simple_wget)
endif()

add_executable(ftp_simple_wget FTP_Simple_exec.cpp)
target_link_libraries(ftp_simple_wget ACE_INet)
