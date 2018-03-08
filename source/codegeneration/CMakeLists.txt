
find_program(PYTHON "python")

set(update_target update)
set(generate_target generate)

if(PYTHON)

    message(STATUS "Command update")
    message(STATUS "Command generate")
    
    add_custom_target(${update_target})
    add_custom_target(${generate_target}-gl)
    add_custom_target(${generate_target}-glsc)

    add_custom_command(
        TARGET              ${update_target}
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -f gl.xml
        COMMENT             "Updating gl.xml from public SVN."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-gl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a gl -s gl.xml -p patch.xml -d ../glbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-glsc
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a glsc -s gl.xml -p patch.xml -d ../glscbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )

    # Declare target
    
    set_target_properties(${update_target} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-gl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-glsc PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

else()
    message("Command update skipped: python not found")
    message("Command generate skipped: python not found")
endif()
