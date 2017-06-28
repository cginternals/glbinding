
# Check if tools are enabled
if(NOT OPTION_BUILD_TOOLS)
    return()
endif()

# Convenience target to build all tools (and no other projects)
add_custom_target( glbinding_ToolsALL )

# Loop thru All Tools
foreach( tool       glcontexts
                    glfunctions
                    glmeta
                    glqueries 
        )

    add_subdirectory( "${tool}")
    if(TARGET ${tool})
        add_dependencies( glbinding_ToolsALL  ${tool} )
    endif()
endforeach()


                 