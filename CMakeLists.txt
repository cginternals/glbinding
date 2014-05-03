cmake_minimum_required(VERSION 2.8.9 FATAL_ERROR)

project(GLBindings C CXX)
set(target glBindingExample)

find_package(OpenGL)
find_package(GLOW)

include_directories(
    ${OPENGL_INCLUDE_DIR}
    ${GLOW_BASE_INCLUDE_DIR}
    ${GLOW_WINDOW_INCLUDE_DIR}
    ${CMAKE_SOURCE_DIR}/source
)

set(libs
    ${OPENGL_LIBRARY}
    ${GLOW_BASE_LIBRARY}
    ${GLOW_WINDOW_LIBRARY}
)

set(SOURCE "${CMAKE_SOURCE_DIR}/source")
set(sources
    ${SOURCE}/main.cpp
)

add_executable(${target} ${sources})

target_link_libraries(${target} ${libs})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(LINUX_COMPILE_DEFS
	LINUX	                  # Linux system
        PIC		          # Position-independent code
	_REENTRANT                # Reentrant code
)
set(DEFAULT_COMPILE_DEFS_DEBUG
    ${LINUX_COMPILE_DEFS}
    _DEBUG	                  # Debug build
)
set(DEFAULT_COMPILE_DEFS_RELEASE
    ${LINUX_COMPILE_DEFS}
    NDEBUG	                  # Release build
)

set(EXCEPTION_FLAG "-fno-exceptions")

set(LINUX_COMPILE_FLAGS "-fvisibility=hidden -pthread -pipe -fPIC -Wreturn-type -Wall -pedantic -Wextra -Wfloat-equal -Wcast-qual -Wcast-align -Wconversion -Werror -Wno-error=float-equal -Wno-error=switch ${EXCEPTION_FLAG}")
set(LINUX_LINKER_FLAGS "-pthread")

set(DEFAULT_COMPILE_FLAGS ${LINUX_COMPILE_FLAGS})

set(DEFAULT_LINKER_FLAGS_RELEASE ${LINUX_LINKER_FLAGS})
set(DEFAULT_LINKER_FLAGS_DEBUG ${LINUX_LINKER_FLAGS})
set(DEFAULT_LINKER_FLAGS ${LINUX_LINKER_FLAGS})

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