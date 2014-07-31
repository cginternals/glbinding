
# GLEW_FOUND
# GLEW_INCLUDE_PATH
# GLEW_LIBRARY
# GLEW_BINARY

IF(X64 AND NOT APPLE)

    FIND_PATH(GLEW_INCLUDE_PATH GL/glew.h
        ${PROJECT_SOURCE_DIR}/3rdparty/glew-1.9.0-win64/include
        $ENV{TMR_HOME}/../3rdparty/glew-1.9.0-win64/include
        $ENV{GLEW_DIR}/include
        $ENV{GLEW_HOME}/include
        $ENV{PROGRAMFILES}/GLEW/include
        /usr/include
        /usr/local/include
        /sw/include
        /opt/local/include
        DOC "The directory where GL/glew.h resides")

    FIND_LIBRARY(GLEW_LIBRARY
        NAMES GLEW glew glew32 glew32s
        PATHS
        ${PROJECT_SOURCE_DIR}/3rdparty/glew-1.9.0-win64/lib
        $ENV{TMR_HOME}/../3rdparty/glew-1.9.0-win64/lib
        $ENV{GLEW_DIR}/lib
        $ENV{GLEW_HOME}/lib
        $ENV{GLEW_HOME}/lib/Release/x64
        /usr/lib64
        /usr/local/lib64
        /sw/lib64
        /opt/local/lib64
        DOC "The GLEW library")

ELSE()

    FIND_PATH( GLEW_INCLUDE_PATH GL/glew.h
        ${PROJECT_SOURCE_DIR}/3rdparty/glew-1.7.0/include
        $ENV{TMR_HOME}/../3rdparty/glew-1.7.0/include
        $ENV{GLEW_DIR}/include
        $ENV{GLEW_HOME}/include
        $ENV{PROGRAMFILES}/GLEW/include
        /usr/include
        /usr/local/include
        /sw/include
        /opt/local/include
        DOC "The directory where GL/glew.h resides")

    FIND_LIBRARY(GLEW_LIBRARY
        NAMES GLEW glew glew32 glew32s
        PATHS
        ${PROJECT_SOURCE_DIR}/3rdparty/glew-1.7.0/lib
        $ENV{TMR_HOME}/../3rdparty/glew-1.7.0/lib
        $ENV{GLEW_DIR}/lib
        $ENV{GLEW_HOME}/lib
        /usr/lib
        /usr/local/lib
        /sw/lib
        /opt/local/lib
        DOC "The GLEW library")

ENDIF()

if(MSVC)

    find_file(GLEW_BINARY
        NAMES glew32.dll
        PATHS
        $ENV{GLEWDIR}/bin
        $ENV{GLEW_HOME}/bin
        DOC "The glew binary")

endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GLEW REQUIRED_VARS GLEW_INCLUDE_PATH GLEW_LIBRARY)
mark_as_advanced(GLEW_INCLUDE_PATH GLEW_LIBRARY)
