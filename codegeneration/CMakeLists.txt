
function(add_xml_update api)

    add_custom_target(update-${api})
    add_custom_command(
        TARGET            update-${api}
        PRE_BUILD
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND           ${PYTHON} scripts/update.py -f ${api}.xml -r ${api}.revision
        COMMENT           "Updating ${api}.xml from public SVN."
    )
    set_target_properties(update-${api} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    add_dependencies(update update-${api})

endfunction()

function(add_library_generation api prefix library xml)
    
    add_custom_target(generate-${library})
    add_custom_command(
        TARGET            generate-${library}
        PRE_BUILD
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND           ${PYTHON} scripts/generate.py -a ${api} -p ${prefix} -l ${library} -s ${xml}.xml -r ${xml}.revision -x ${xml}patch.xml
        COMMENT           "Generating ${library}binding code."
    )
    set_target_properties(generate-${library} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    add_dependencies(generate generate-${library})
    
endfunction()

find_program(PYTHON "python")

if (PYTHON)

    add_custom_target(update)
    add_custom_target(generate)

    if (OPTION_BUILD_EGL)
        add_xml_update("egl")
    endif ()
    
    if (OPTION_BUILD_GL OR OPTION_BUILD_GLES)
        add_xml_update("gl")
    endif ()
    
    #add_xml_update("wgl")
    #add_xml_update("glx")
    
    if (OPTION_BUILD_EGL)
        add_library_generation("egl" "egl" "egl" "egl")
    endif ()
    
    if (OPTION_BUILD_GL)
        add_library_generation("gl" "gl" "gl" "gl")
    endif() 
    
    if (OPTION_BUILD_GLES)
        add_library_generation("gles2" "gl" "gles" "gl")
    endif ()
    
    #add_library_generation("wgl" "wgl" "wgl" "wgl" "wgl")
    #add_library_generation("glx" "glx" "glx" "glx" "glx")

else()
    message("update target skipped: python not found")
    message("generate target skipped: python not found")
endif()
