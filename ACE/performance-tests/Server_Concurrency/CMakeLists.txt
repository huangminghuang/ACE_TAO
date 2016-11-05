
if (UNIX)

add_subdirectory(Leader_Follower)
add_subdirectory(Queue_Based_Workers)

# add_test(NAME Server_Concurrency_Test
#          COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_test.sh)

endif(UNIX)