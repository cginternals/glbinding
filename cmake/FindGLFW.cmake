
# GLFW_FOUND
# GLFW_INCLUDE_DIR
# GLFW_LIBRARY

find_path(GLFW_INCLUDE_DIR GLFW/glfw3.h
    $ENV{GLFWDIR}/include
    $ENV{GLFW_HOME}/include
    $ENV{PROGRAMFILES}/GLFW/include
    ${OPENGL_INCLUDE_DIR}
    /usr/include
    /usr/local/include
    /usr/include/GL
    /sw/include
    /opt/local/include
    /opt/graphics/OpenGL/include
    /opt/graphics/OpenGL/contrib/libglfw
    DOC "The directory where GL/glfw.h resides"
)

find_library(GLFW_LIBRARY
    NAMES glfw3 glfw
    PATHS
    ${GLFW_LIBRARY_DIR}  # provided by glfw config
    $ENV{GLFWDIR}/lib
    $ENV{GLFWDIR}/lib/x64
    $ENV{GLFWDIR}/lib/cocoa
    $ENV{GLFWDIR}/lib-msvc120
    $ENV{GLFW_HOME}/lib
    $ENV{GLFW_HOME}/lib/x64
    $ENV{GLFW_HOME}/lib/cocoa
    $ENV{GLFW_HOME}/lib-msvc120
    $ENV{PROGRAMFILES}/GLFW/lib
    $ENV{PROGRAMFILES}/GLFW/lib/x64
    $ENV{PROGRAMFILES}/GLFW/lib-msvc120
    /usr/lib64
    /usr/local/lib64
    /sw/lib64
    /opt/local/lib64
    /usr/lib
    /usr/local/lib
    /sw/lib
    /opt/local/lib
    DOC "The GLFW library"
)
    
if(APPLE)
    set(GLFW_cocoa_LIBRARY "-framework Cocoa" CACHE STRING "Cocoa framework for OSX")
    set(GLFW_iokit_LIBRARY "-framework IOKit" CACHE STRING "IOKit framework for OSX")
endif()

# GLFW is required to link statically for now (no deploy specified)

find_package_handle_standard_args(GLFW REQUIRED_VARS GLFW_INCLUDE_DIR GLFW_LIBRARY)
mark_as_advanced(GLFW_INCLUDE_DIR GLFW_LIBRARY)
