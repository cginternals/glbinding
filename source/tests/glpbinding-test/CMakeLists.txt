
set(target glpbinding-test)

#
# External libraries
#

find_package(OpenGL REQUIRED)
find_package(GLFW QUIET)

if (NOT GLFW_FOUND)
	message("Test ${target} skipped: GLFW not found")
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
    ${CMAKE_SOURCE_DIR}/source/khrapi/include
    ${CMAKE_SOURCE_DIR}/source/glpbinding/include
    ${CMAKE_SOURCE_DIR}/source/glpbinding/source
)

#
# Libraries
#

set(libs
    ${OPENGL_LIBRARIES}
    ${GLFW_LIBRARY}
    ${GMOCK_LIBRARIES}
    ${GTEST_LIBRARIES}
    khrapi
    glpbinding
)

#
# Sources
#	
set(glpbinding_source_path ${CMAKE_SOURCE_DIR}/source/glpbinding/source)

set(sources
    main.cpp
    AllVersions_test.cpp
)

#
# Build executable
#

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
    LINK_FLAGS                  "${DEFAULT_LINKER_FLAGS}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}")
