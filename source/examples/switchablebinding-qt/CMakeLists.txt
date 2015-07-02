
set(target switchablebinding-qt)


# External libraries

find_package(OpenGL REQUIRED)
find_package(OpenGLES REQUIRED)
find_package(EGL REQUIRED)

find_package(Qt5OpenGL  5.4 QUIET)
find_package(Qt5Core    5.4 QUIET)
find_package(Qt5Gui     5.4 QUIET)
find_package(Qt5Widgets 5.4 QUIET)

if (NOT Qt5Core_FOUND)
    message("Example ${target} skipped: Qt5.4 not found")
    return()
endif()

message(STATUS "Example ${target}")


# Includes

include_directories(
    ${OPENGL_INCLUDE_DIRS}
    ${OPENGLES_INCLUDE_DIR}
    ${EGL_INCLUDE_DIR}
)

include_directories(
    BEFORE
    ${CMAKE_SOURCE_DIR}/source/khrapi/include
    ${CMAKE_SOURCE_DIR}/source/eglbinding/include
    ${CMAKE_SOURCE_DIR}/source/glbinding/include
    ${CMAKE_SOURCE_DIR}/source/glesbinding/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)


# Libraries

set(libs
    ${OPENGL_LIBRARIES}
    ${OPENGLES_LIBRARY}
    ${EGL_LIBRARY}
    Qt5::OpenGL
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    khrapi
    eglbinding
    glbinding
    glesbinding
)


# Compiler definitions

if (OPTION_BUILD_STATIC)
    add_definitions("-DGLBINDING_STATIC")
endif()


# Sources

set(sources
    main.cpp
    context.cpp
    context.h
    rendergl.cpp
    rendergl.h
    rendergles.cpp
    rendergles.h
    
    QtOpenGLWindow.cpp
    QtOpenGLWindow.h
)


# Build executable

add_executable(${target} ${sources})

target_link_libraries(${target} ${libs})

target_compile_options(${target} PRIVATE ${DEFAULT_COMPILE_FLAGS})

set_target_properties(${target}
    PROPERTIES
    LINKER_LANGUAGE              CXX
    FOLDER                      "${IDE_FOLDER}"
    COMPILE_DEFINITIONS_DEBUG   "${DEFAULT_COMPILE_DEFS_DEBUG}"
    COMPILE_DEFINITIONS_RELEASE "${DEFAULT_COMPILE_DEFS_RELEASE}"
    LINK_FLAGS_DEBUG            "${DEFAULT_LINKER_FLAGS_DEBUG}"
    LINK_FLAGS_RELEASE          "${DEFAULT_LINKER_FLAGS_RELEASE}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}")


# Deployment

install(TARGETS ${target} COMPONENT examples
    RUNTIME DESTINATION ${INSTALL_EXAMPLES}
#   LIBRARY DESTINATION ${INSTALL_SHARED}
#   ARCHIVE DESTINATION ${INSTALL_LIB}
)
