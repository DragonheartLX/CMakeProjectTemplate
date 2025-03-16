# Default settings
set(VCPKG_TARGET_ARCHITECTURE x64)
set(VCPKG_CRT_LINKAGE dynamic)
set(VCPKG_LIBRARY_LINKAGE dynamic)

# Override
if(${PORT} MATCHES "glad")
    set(GLAD_PROFILE "core")
    set(VCPKG_LIBRARY_LINKAGE static)
endif( )
