
# Check if tools are enabled
if(NOT OPTION_BUILD_TOOLS)
    return()
endif()

# Tools
add_subdirectory("contexts")
add_subdirectory("functions")
add_subdirectory("meta")
add_subdirectory("queries")
