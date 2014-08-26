
set(target glbinding-test)

#
# External libraries
#

find_package(OpenGL REQUIRED)
find_package(GLFW QUIET)

if (NOT GLFW_FOUND)
	message(STATUS "Test ${target} (disabled because GLFW couldn't be found)")
	return()
endif()

message(STATUS "Test ${target}")

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
)

#
# Libraries
#

set(libs
    ${OPENGL_LIBRARIES}
    ${GLFW_LIBRARY}
    ${GMOCK_LIBRARIES}
    ${GTEST_LIBRARIES}
    glbinding
)

#
# Sources
#

set(sources
    main.cpp
    MultiContext_test.cpp
    MultiThreading_test.cpp
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
    LINK_FLAGS          "${DEFAULT_LINKER_FLAGS}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}")
