
# Check if tools are enabled
if(NOT OPTION_BUILD_TOOLS)
    return()
endif()


# Tools
add_subdirectory("glcontexts")
add_subdirectory("glfunctions")
add_subdirectory("glmeta")
add_subdirectory("glqueries")
