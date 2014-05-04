
set(target glbindingexample)
message(STATUS "App ${target}")

#
# External libraries
#

find_package(OpenGL)
find_package(GLOW)

#
# Includes
#

include_directories(
    ${OPENGL_INCLUDE_DIR}
    ${GLOW_BASE_INCLUDE_DIR}
    ${GLOW_WINDOW_INCLUDE_DIR}
    ${CMAKE_SOURCE_DIR}/source
)

include_directories(
    BEFORE
    ${CMAKE_SOURCE_DIR}/source/glbinding/include
)

#
# Libraries
#

set(libs
    ${OPENGL_LIBRARY}
    ${GLOW_BASE_LIBRARY}
    ${GLOW_WINDOW_LIBRARY}
    glbinding
)

#
# Sources
#

set(sources
    main.cpp
)

#
# Build executable
#

add_executable(${target} ${sources})

target_link_libraries(${target} ${libs})

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
    RUNTIME DESTINATION ${INSTALL_BIN}
#   LIBRARY DESTINATION ${INSTALL_SHARED}
#   ARCHIVE DESTINATION ${INSTALL_LIB}
)
