add_tao_component(
  NAME Utils
  PUBLIC_LINK_LIBRARIES TAO_PortableServer
  SOURCES Encodable.cpp
          Implicit_Deactivator.cpp
          ORB_Destroyer.cpp
          ORB_Manager.cpp
          PolicyList_Destroyer.cpp
  PUBLIC_HEADER Encodable.h
                Implicit_Deactivator.h
                ORB_Destroyer.h
                ORB_Manager.h
                PolicyList_Destroyer.h
                PolicyList_Destroyer.inl
                RIR_Narrow.h
                Server_Main.h
                utils_export.h
                RIR_Narrow.cpp
                Server_Main.cpp
)

