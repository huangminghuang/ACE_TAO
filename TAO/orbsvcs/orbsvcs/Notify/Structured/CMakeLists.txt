ace_target_cxx_sources(TAO_CosNotification_Serv
  SOURCE_FILES RT_StructuredProxyPushSupplier.cpp
               StructuredEvent.cpp
               StructuredProxyPushConsumer.cpp
               StructuredProxyPushSupplier.cpp
               StructuredPushConsumer.cpp
               StructuredPushSupplier.cpp
  HEADER_FILES RT_StructuredProxyPushSupplier.h
               StructuredEvent.h
               StructuredProxyPushConsumer.h
               StructuredProxyPushSupplier.h
               StructuredPushConsumer.h
               StructuredPushSupplier.h
  SUBGROUP \\Structured
)

ace_target_cxx_sources(TAO_RT_Notification
  SOURCE_FILES RT_StructuredProxyPushSupplier.cpp
  HEADER_FILES RT_StructuredProxyPushSupplier.h
  SUBGROUP \\Structured
)

