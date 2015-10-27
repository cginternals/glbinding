
set(target glbinding)
message(STATUS "Lib ${target}")


# External libraries

find_package(OpenGL REQUIRED)


# Includes

include_directories(
    BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Libraries

set(libs
    ${OPENGL_LIBRARIES}
)


# Compiler definitions

if (OPTION_BUILD_STATIC)
    add_definitions("-D${META_PROJECT_NAME_UPPER}_STATIC")
else()
    add_definitions("-DGLBINDING_EXPORTS")
endif()

if (OPTION_EXTENSIVE_META)
    add_definitions("-DEXTENSIVE_META")
endif()

# Sources

set(include_path "${CMAKE_CURRENT_SOURCE_DIR}/include/${target}")
set(source_path "${CMAKE_CURRENT_SOURCE_DIR}/source")

set(api_includes
    ${include_path}/glbinding_api.h
    ${include_path}/callbacks.h

    ${include_path}/nogl.h

    ${include_path}/gl/bitfield.h
    ${include_path}/gl/boolean.h
    ${include_path}/gl/enum.h
    ${include_path}/gl/extension.h
    ${include_path}/gl/functions.h
    ${include_path}/gl/types.h
    ${include_path}/gl/values.h

    ${include_path}/AbstractFunction.h
    ${include_path}/AbstractValue.h
    ${include_path}/Function.h
    ${include_path}/Function.hpp
    ${include_path}/Binding.h
    #${include_path}/PointerIterator.h
    #${include_path}/PointerIterator.hpp
    ${include_path}/Meta.h
    ${include_path}/ProcAddress.h
    ${include_path}/ContextHandle.h
    ${include_path}/ContextInfo.h
    ${include_path}/Value.h
    ${include_path}/Value.hpp
    ${include_path}/Version.h
    ${include_path}/SharedBitfield.h
    ${include_path}/SharedBitfield.hpp

    ${include_path}/logging.h
)

# add featured headers

file(GLOB featured_includes ${include_path}/gl*/*.h)
list(APPEND api_includes ${featured_includes})

set(sources
    ${source_path}/callbacks.cpp
    ${source_path}/callbacks_private.h
    
    ${source_path}/AbstractFunction.cpp
    ${source_path}/AbstractValue.cpp
    ${source_path}/Binding.cpp
    ${source_path}/Binding_list.cpp

    ${source_path}/ProcAddress.cpp
    ${source_path}/ContextHandle.cpp
    ${source_path}/ContextInfo.cpp
    ${source_path}/Value.cpp
    ${source_path}/Version.cpp
    ${source_path}/Version_ValidVersions.cpp

    ${source_path}/Meta.cpp
    ${source_path}/Meta_Maps.h
    ${source_path}/Meta_getStringByBitfield.cpp
    ${source_path}/Meta_BitfieldsByString.cpp
    ${source_path}/Meta_BooleansByString.cpp
    ${source_path}/Meta_EnumsByString.cpp
    ${source_path}/Meta_ExtensionsByFunctionString.cpp
    ${source_path}/Meta_ExtensionsByString.cpp
    ${source_path}/Meta_FunctionStringsByExtension.cpp
    ${source_path}/Meta_ReqVersionsByExtension.cpp
    ${source_path}/Meta_StringsByBitfield.cpp
    ${source_path}/Meta_StringsByBoolean.cpp
    ${source_path}/Meta_StringsByEnum.cpp
    ${source_path}/Meta_StringsByExtension.cpp

    ${source_path}/RingBuffer.h
    ${source_path}/RingBuffer.hpp
    ${source_path}/logging.cpp

    ${source_path}/gl/types.cpp

    ${source_path}/Binding_pch.h
)

if(MSVC OR (WIN32 AND CMAKE_COMPILER_IS_GNUCXX))

    # use splitted function and binding sources on windows compilers (e.g., mingw, msvc)

    file(GLOB splitted_binding_sources ${source_path}/Binding_objects_*.cpp)
    file(GLOB splitted_functions_sources ${source_path}/gl/functions_*.cpp)

    list(APPEND sources 
        ${splitted_binding_sources}
        ${splitted_functions_sources})

else()

    list(APPEND sources 
        "${source_path}/gl/functions.cpp"
        "${source_path}/Binding_objects.cpp"
    )

endif()

if(MSVC)

    # on msvc use private (non-api) per file precompiled headers on those grouped sources

    list(APPEND sources
        ${source_path}/Binding_pch.cpp)

endif()

# add splitted sources


# Group source files
set(header_group "Header Files (API)")
set(source_group "Source Files")
source_group_by_path(${include_path} "\\\\.h$|\\\\.hpp$$" 
    ${header_group} ${api_includes})
source_group_by_path(${source_path} "\\\\.cpp$|\\\\.c$|\\\\.h$|\\\\.hpp$" 
    ${source_group} ${sources})


# Build library

add_library(${target} ${api_includes} ${sources})

target_link_libraries(${target} ${libs} ${EXTRA_LIBS})

target_compile_options(${target} PRIVATE ${DEFAULT_COMPILE_FLAGS})

set_target_properties(${target}
    PROPERTIES
    LINKER_LANGUAGE              CXX
    FOLDER                      "${IDE_FOLDER}"
    COMPILE_DEFINITIONS_DEBUG   "${DEFAULT_COMPILE_DEFS_DEBUG}"
    COMPILE_DEFINITIONS_RELEASE "${DEFAULT_COMPILE_DEFS_RELEASE}"
    LINK_FLAGS_DEBUG            "${DEFAULT_LINKER_FLAGS_DEBUG}"
    LINK_FLAGS_RELEASE          "${DEFAULT_LINKER_FLAGS_RELEASE}"
    DEBUG_POSTFIX               "d${DEBUG_POSTFIX}"
    INCLUDE_PATH                ${include_path})


if(MSVC)

    # on msvc use private (non-api) per file precompiled headers on those grouped sources

    set_source_files_properties(${source_path}/Binding_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"Binding_pch.h")
    # set_source_files_properties(${source_path}/gl/functions_pch.cpp PROPERTIES COMPILE_FLAGS /Yc"functions_pch.h")

    file(GLOB binding_pch_sources ${source_path}/Binding_objects_*.cpp)
    list(APPEND binding_pch_sources ${source_path}/Binding_list.cpp)

    file(GLOB functions_pch_sources ${source_path}/gl/functions_*.cpp)

    set_source_files_properties(${binding_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"Binding_pch.h")
    set_source_files_properties(${functions_pch_sources} PROPERTIES COMPILE_FLAGS /Yu"../Binding_pch.h")

endif()


# Deployment


# Library

if(NOT OPTION_BUILD_STATIC)
    install(TARGETS ${target} COMPONENT runtime
        RUNTIME DESTINATION ${INSTALL_BIN}
        LIBRARY DESTINATION ${INSTALL_SHARED})
else()
    install(TARGETS ${target} COMPONENT dev
        ARCHIVE DESTINATION ${INSTALL_LIB})
endif()

if(WIN32 AND NOT OPTION_BUILD_STATIC) # on windows, provide self contained zip files (examples and dev, both contain the run-time)

    if(OPTION_BUILD_EXAMPLES)
        install(TARGETS ${target} COMPONENT examples
            RUNTIME DESTINATION ${INSTALL_BIN}
            LIBRARY DESTINATION ${INSTALL_BIN})
    endif()

    if(OPTION_BUILD_TOOLS)
        install(TARGETS ${target} COMPONENT tools
            RUNTIME DESTINATION ${INSTALL_BIN}
            LIBRARY DESTINATION ${INSTALL_BIN})
    endif()

    install(TARGETS ${target} COMPONENT dev
        RUNTIME DESTINATION ${INSTALL_BIN}
        LIBRARY DESTINATION ${INSTALL_SHARED}
        ARCHIVE DESTINATION ${INSTALL_LIB})

endif()

# Header files
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/${target} DESTINATION ${INSTALL_INCLUDE} COMPONENT dev)
