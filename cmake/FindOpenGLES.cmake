
# OPENGLES_FOUND
# OPENGLES_INCLUDE_DIR
# OPENGLES_LIBRARY

# OPENGLES_BINARY (win32 only)


find_path(OPENGLES_INCLUDE_DIR GLES3/gl31.h
    $ENV{OPENGLESDIR}/include
    $ENV{OPENGLES_HOME}/include
    $ENV{PROGRAMFILES}/OPENGLES/include
    /usr/include
    /usr/local/include
    /sw/include
    /opt/local/include
    DOC "The directory where GLES3/gl31.h resides")

if (X64)
    set(OPENGLES_BUILD_DIR Release/x64)
else()
    set(OPENGLES_BUILD_DIR Release/Win32)
endif()


find_library(OPENGLES_LIBRARY
    NAMES GLESv2
    PATHS
    $ENV{OPENGLESDIR}/lib
    $ENV{OPENGLES_HOME}/lib
    $ENV{OPENGLESDIR}/lib/${OPENGLES_BUILD_DIR}
    $ENV{OPENGLES_HOME}/lib/${OPENGLES_BUILD_DIR}
    /usr/lib64
    /usr/local/lib64
    /sw/lib64
    /opt/local/lib64
    /usr/lib
    /usr/local/lib
    /sw/lib
    /opt/local/lib
    DOC "The OpenGL ES 2 library")

if(WIN32)

    find_file(OPENGLES_BINARY
        NAMES GLESv2.dll
        PATHS
        $ENV{OPENGLESDIR}/bin
        $ENV{OPENGLES_HOME}/bin
        $ENV{OPENGLESDIR}/bin/${OPENGLES_BUILD_DIR}
        $ENV{OPENGLES_HOME}/bin/${OPENGLES_BUILD_DIR}
        DOC "The OpenGL ES 2 binary")

endif()
    
find_package_handle_standard_args(OPENGLES REQUIRED_VARS OPENGLES_INCLUDE_DIR OPENGLES_LIBRARY)
mark_as_advanced(OPENGLES_INCLUDE_DIR OPENGLES_LIBRARY)
