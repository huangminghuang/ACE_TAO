project(ace_protocol_tests CXX)
include(../../cmake/common.cmake)

enable_testing()
add_subdirectory(HTBP)
add_subdirectory(INet/MT_Get)
add_subdirectory(RMCast)