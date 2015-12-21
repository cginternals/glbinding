
# Check if examples are enabled
if(NOT OPTION_BUILD_EXAMPLES)
    return()
endif()

# Examples
add_subdirectory("callbacks")
add_subdirectory("comparison")
add_subdirectory("cubescape")
add_subdirectory("cubescape-log")
add_subdirectory("cubescape-qt")
