
        
add_ace_lib(ACE_Compression
   SOURCES Compressor.cpp
   PUBLIC_HEADER Compressor.h ACE_Compression_export.h Compressor.inl
   PUBLIC_LINK_LIBRARIES ACE
   PACKAGE ACE
)
   
add_subdirectory(rle)