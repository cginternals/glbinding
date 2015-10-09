
set(target glesbinding-test)
message(STATUS "Test ${target}")

#
# External libraries
#

find_package(EGL REQUIRED)

#
# Includes
#

include_directories(
    ${EGL_INCLUDE_DIR}
)

include_directories(
    BEFORE
    ${CMAKE_SOURCE_DIR}/source/khrapi/include
    ${CMAKE_SOURCE_DIR}/source/glesbinding/include
    ${CMAKE_SOURCE_DIR}/source/glesbinding/source
)

#
# Libraries
#

set(libs
    ${EGL_LIBRARY}
    ${GMOCK_LIBRARIES}
    ${GTEST_LIBRARIES}
    khrapi
    glesbinding
)

#
# Sources
#	

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
