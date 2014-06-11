
set(target glbinding)
message(STATUS "Lib ${target}")

#
# External libraries
#

find_package(OpenGL REQUIRED)

#
# Includes
#

include_directories(
    BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#
# Libraries
#

set(libs
    ${OPENGL_LIBRARIES}
)

#
# Compiler definitions
#

if (OPTION_BUILD_STATIC)
    add_definitions("-DGLBINDING_STATIC")
else()
    add_definitions("-DGLBINDING_EXPORTS")
endif()

if (OPTION_STRINGS_BY_GL)
    add_definitions("-DSTRINGS_BY_GL")
endif()
if (OPTION_GL_BY_STRINGS)
    add_definitions("-DGL_BY_STRINGS")
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
    ${include_path}/GetProcAddress.h
    ${include_path}/Function.h
    ${include_path}/Function.hpp
    
    ${include_path}/AbstractFunction.h
    
    ${include_path}/AbstractValue.h
    ${include_path}/Value.h
    ${include_path}/Value.hpp
    ${include_path}/type_integration.h

    ${include_path}/GLMeta.h
    
    # generated
    ${include_path}/GLextension.h
    ${include_path}/GLenum.h

    ${include_path}/types.h 
    ${include_path}/bitfields.h
    ${include_path}/special_values.h
    ${include_path}/functions.h
)

set(sources
    ${source_path}/glbinding.cpp
    ${source_path}/GetProcAddress.cpp
    ${source_path}/AbstractFunction.cpp
    #${source_path}/declarations.h
    ${source_path}/GLMeta.cpp
    ${source_path}/AbstractValue.cpp
    ${source_path}/Value.cpp
    ${source_path}/type_integration.cpp

    # generated
    ${source_path}/functions.cpp
    ${source_path}/function_objects.cpp
    ${source_path}/function_objects.h
    ${source_path}/function_list.cpp
    # gl by strings (sources generated)
    ${source_path}/GLMeta_EnumsByString.cpp
    ${source_path}/GLMeta_EnumsByString.h
    ${source_path}/GLMeta_ExtensionsByString.cpp
    ${source_path}/GLMeta_ExtensionsByString.h
    ${source_path}/GLMeta_ExtensionsByFunctionString.cpp
    ${source_path}/GLMeta_ExtensionsByFunctionString.h
    # strings by gl (sources generated)
    ${source_path}/GLMeta_FunctionStringsByExtension.cpp
    ${source_path}/GLMeta_FunctionStringsByExtension.h
    ${source_path}/GLMeta_StringsByEnum.cpp
    ${source_path}/GLMeta_StringsByEnum.h
    ${source_path}/GLMeta_StringsByExtension.cpp
    ${source_path}/GLMeta_StringsByExtension.h
    # version (source generated)
    ${source_path}/GLMeta_ReqVersionsByExtension.cpp
    ${source_path}/GLMeta_ReqVersionsByExtension.h
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

add_library(${target} ${api_includes} ${sources})

target_link_libraries(${target} ${libs} ${EXTRA_LIBS})

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
