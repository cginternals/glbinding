
set(target qt-cubescape)
message(STATUS "Example ${target}")

#
# External libraries
#

find_package(Qt5OpenGL  5.1 REQUIRED)
find_package(Qt5Core    5.1 REQUIRED)
find_package(Qt5Gui     5.1 REQUIRED)

#
# Includes
#

include_directories(
    ${OPENGL_INCLUDE_DIR}
    ${GLFW_INCLUDE_DIR}
)

include_directories(
    BEFORE
    ${CMAKE_SOURCE_DIR}/source/glbinding/include
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)

#
# Libraries
#

set(libs
    glbinding
)

#
# Compiler definitions
#

if (OPTION_BUILD_STATIC)
    add_definitions("-DGLBINDING_STATIC")
endif()

#
# Sources
#

set(cubscape_path ../cubescape)

set(sources
    main.cpp

    ${cubscape_path}/cubescape.cpp
    ${cubscape_path}/cubescape.h
    ${cubscape_path}/glutils.cpp
    ${cubscape_path}/glutils.h
    ${cubscape_path}/rawfile.cpp
    ${cubscape_path}/rawfile.h
)

#
# Build executable
#

add_executable(${target} ${sources})

target_link_libraries(${target} ${libs})

target_link_libraries(${target} ${libs})
qt5_use_modules(${target} OpenGL Core Gui)


set_target_properties(${target}
    PROPERTIES
    LINKER_LANGUAGE              CXX
    FOLDER                      "${IDE_FOLDER}"
    COMPILE_DEFINITIONS_DEBUG   "${DEFAULT_COMPILE_DEFS_DEBUG}"
    COMPILE_DEFINITIONS_RELEASE "${DEFAULT_COMPILE_DEFS_RELEASE}"
    COMPILE_FLAGS               "${DEFAULT_COMPILE_FLAGS}"
    LINK_FLAGS_DEBUG            "${DEFAULT_LINKER_FLAGS_DEBUG}"
    LINK_FLAGS_RELEASE          "${DEFAULT_LINKER_FLAGS_RELEASE}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}")

#
# Deployment
#

install(TARGETS ${target}
    RUNTIME DESTINATION ${INSTALL_EXAMPLES}
#   LIBRARY DESTINATION ${INSTALL_SHARED}
#   ARCHIVE DESTINATION ${INSTALL_LIB}
)
