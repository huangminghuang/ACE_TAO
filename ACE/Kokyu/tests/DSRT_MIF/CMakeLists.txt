add_executable(MIF
  MIF.cpp
)

target_link_libraries(MIF Kokyu)
file(COPY svc.conf svc.conf.xml DESTINATION ${CMAKE_CURRENT_BINARY_DIR})