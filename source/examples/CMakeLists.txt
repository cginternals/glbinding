
# Check if examples are enabled
if(NOT OPTION_BUILD_EXAMPLES)
    return()
endif()


# 
# Configuration for all sub-projects
# 

# External packages
find_package(cpplocate)

if (NOT cpplocate_FOUND)
    message("Examples skipped: cpplocate not found")
    return()
endif()


# 
# Module information file
# 

generate_module_info(${META_PROJECT_NAME}
    VALUES
    name        "${META_PROJECT_NAME}"
    version     "${META_VERSION}"
    description "${META_PROJECT_DESCRIPTION}"
    author      "${META_AUTHOR_ORGANIZATION}"

    BUILD_VALUES
    dataPath    "${PROJECT_SOURCE_DIR}/data"

    INSTALL_VALUES
    dataPath    "\${ModulePath}/data"
)

export_module_info(${META_PROJECT_NAME}
    TARGET ${META_PROJECT_NAME}
    FOLDER "ModuleInfo"
)

install_module_info(${META_PROJECT_NAME}
    DESTINATION ${INSTALL_ROOT}
    COMPONENT examples_data
)


# 
# Sub-projects
# 

# Examples
add_subdirectory("callbacks")
add_subdirectory("comparison")
add_subdirectory("cubescape")
add_subdirectory("cubescape-log")
add_subdirectory("cubescape-qt")
