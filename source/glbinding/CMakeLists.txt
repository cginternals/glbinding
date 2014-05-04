
set(target glbinding)
message(STATUS "Lib ${target}")

#
# External libraries
#

find_package(OpenGL)

#
# Includes
#

include_directories(
)

include_directories(
    BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#
# Libraries
#

set(libs
    ${OPENGL_LIBRARY}
)

#
# Compiler definitions
#

if (OPTION_BUILD_STATIC)
    add_definitions("-DGLBINDING_STATIC")
else()
    add_definitions("-DGLBINDING_EXPORTS")
endif()

#
# Sources
#

set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include/${target}")
set(source_path "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(api_includes
    ${include_path}/glbinding_api.h
    
    ${include_path}/constants.h
    ${include_path}/glbinding.h
    ${include_path}/Error.h
    ${include_path}/Function.h
    ${include_path}/Function.hpp
    ${include_path}/types.h
    ${include_path}/ProcedureAddressResolution.h
)

set(sources
    ${source_path}/glbinding.cpp
    ${source_path}/Error.cpp
    ${source_path}/ProcedureAddressResolution.cpp
    ${source_path}/FunctionObjects.cpp
    ${source_path}/FunctionObjects.h
)

# Group source files
set(header_group "Header Files (API)")
set(source_group "Source Files")
source_group_by_path(${include_path} "\\\\.h$|\\\\.hpp$" 
    ${header_group} ${api_includes})
source_group_by_path(${source_path} "\\\\.cpp$|\\\\.c$|\\\\.h$|\\\\.hpp$" 
    ${source_group} ${sources})

#
# Build library
#

if(OPTION_BUILD_STATIC)
    add_library(${target} ${api_includes} ${sources})
else()
    add_library(${target} SHARED ${api_includes} ${sources})
endif()

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
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}"
    INCLUDE_PATH	            ${include_path})

#
# Deployment
#

# Library
install(TARGETS ${target}
    RUNTIME DESTINATION ${INSTALL_BIN}
    LIBRARY DESTINATION ${INSTALL_SHARED}
    ARCHIVE DESTINATION ${INSTALL_LIB}
)

# Header files
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/${target} DESTINATION ${INSTALL_INCLUDE})
