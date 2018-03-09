
find_program(PYTHON "python")

set(update_target update)
set(generate_target generate)

if(PYTHON)

    message(STATUS "Command update")
    message(STATUS "Command generate")
    
    add_custom_target(${update_target}-gl)
    add_custom_target(${update_target}-egl)
    add_custom_target(${update_target}-glx)
    add_custom_target(${update_target}-wgl)
    add_custom_target(${update_target}-all)
    add_custom_target(${generate_target}-gl)
    add_custom_target(${generate_target}-gles)
    add_custom_target(${generate_target}-glsc)
    add_custom_target(${generate_target}-glx)
    add_custom_target(${generate_target}-wgl)
    add_custom_target(${generate_target}-egl)
    add_custom_target(${generate_target}-all)

    add_custom_command(
        TARGET              ${update_target}-gl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -f gl.xml
        COMMENT             "Updating gl.xml from public SVN."
    )
    
    add_custom_command(
        TARGET              ${update_target}-egl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -f egl.xml
        COMMENT             "Updating egl.xml from public SVN."
    )
    
    add_custom_command(
        TARGET              ${update_target}-glx
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -f glx.xml
        COMMENT             "Updating glx.xml from public SVN."
    )
    
    add_custom_command(
        TARGET              ${update_target}-wgl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/update.py -f wgl.xml
        COMMENT             "Updating wgl.xml from public SVN."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-gl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a gl -s gl.xml -p patch.xml -d ../glbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-gles
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a gles -s gl.xml -p patch.xml -d ../glesbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-glsc
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a glsc -s gl.xml -p patch.xml -d ../glscbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-glx
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a glx -s glx.xml -p patch.xml -d ../glxbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-wgl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a wgl -s wgl.xml -p patch.xml -d ../wglbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    add_custom_command(
        TARGET              ${generate_target}-egl
        PRE_BUILD
        WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND             ${PYTHON} scripts/generate.py -a egl -s egl.xml -p patch.xml -d ../eglbinding -r gl.revision
        COMMENT             "Generating OpenGL binding code."
    )
    
    # Dependencies
    
    add_dependencies(${update_target}-all
         ${update_target}-gl
         ${update_target}-glx
         ${update_target}-wgl
         ${update_target}-egl
    )
    
    add_dependencies(${generate_target}-all
         ${generate_target}-gl
         ${generate_target}-gles
         ${generate_target}-glsc
         ${generate_target}-glx
         ${generate_target}-wgl
         ${generate_target}-egl
    )

    # Declare target
    
    set_target_properties(${update_target}-gl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${update_target}-egl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${update_target}-glx PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${update_target}-wgl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${update_target}-all PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    
    set_target_properties(${generate_target}-gl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-gles PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-glsc PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-glx PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-wgl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-egl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
    set_target_properties(${generate_target}-all PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

else()
    message("Command update skipped: python not found")
    message("Command generate skipped: python not found")
endif()
