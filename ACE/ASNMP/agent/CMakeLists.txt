add_ace_exe(asnmp_agent
            OUTPUT_NAME agent
            SOURCES agent_impl.cpp
                    main.cpp
                    snmp_agent.cpp
            LINK_LIBRARIES asnmp)