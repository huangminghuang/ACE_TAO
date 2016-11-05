
add_library(Gateway SHARED
    Concrete_Connection_Handlers.cpp
    Config_Files.cpp
    File_Parser.cpp
    Gateway.cpp
    Event_Channel.cpp
    Event_Forwarding_Discriminator.cpp
    Options.cpp
    Connection_Handler.cpp
    Connection_Handler_Acceptor.cpp
    Connection_Handler_Connector.cpp
)

target_link_libraries(Gateway ACE)

add_executable(gatewayd gatewayd.cpp)
target_link_libraries(gatewayd Gateway)
configure_file(svc.conf svc.conf COPYONLY)
