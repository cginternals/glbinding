
# EGL_FOUND
# EGL_INCLUDE_DIR
# EGL_LIBRARY

# EGL_BINARY (win32 only)


find_path(EGL_INCLUDE_DIR EGL/egl.h
    $ENV{EGLDIR}/include
    $ENV{EGL_HOME}/include
    $ENV{PROGRAMFILES}/EGL/include
    /usr/include
    /usr/local/include
    /sw/include
    /opt/local/include
    DOC "The directory where EGL/egl.h resides")

if (X64)
    set(EGL_BUILD_DIR Release/x64)
else()
    set(EGL_BUILD_DIR Release/Win32)
endif()


find_library(EGL_LIBRARY
    NAMES EGL egl
    PATHS
    $ENV{EGLDIR}/lib
    $ENV{EGL_HOME}/lib
    $ENV{EGLDIR}/lib/${EGL_BUILD_DIR}
    $ENV{EGL_HOME}/lib/${EGL_BUILD_DIR}
    /usr/lib64
    /usr/local/lib64
    /sw/lib64
    /opt/local/lib64
    /usr/lib
    /usr/local/lib
    /sw/lib
    /opt/local/lib
    DOC "The EGL library")

if(WIN32)

    find_file(EGL_BINARY
        NAMES egl.dll
        PATHS
        $ENV{EGLDIR}/bin
        $ENV{EGL_HOME}/bin
        $ENV{EGLDIR}/bin/${EGL_BUILD_DIR}
        $ENV{EGL_HOME}/bin/${EGL_BUILD_DIR}
        DOC "The EGL binary")

endif()
    
find_package_handle_standard_args(EGL REQUIRED_VARS EGL_INCLUDE_DIR EGL_LIBRARY)
mark_as_advanced(EGL_INCLUDE_DIR EGL_LIBRARY)
