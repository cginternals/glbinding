
find_program(PYTHON "python")

set(update_target update)
set(generate_target generate)

if(NOT PYTHON)
    message("Command ${update_target} skipped: python not found")
    message("Command ${generate_target} skipped: python not found")

	return ()
endif()


message(STATUS "Command ${update_target}")
message(STATUS "Command ${generate_target}")

add_custom_target(${update_target}-gl)
add_custom_target(${update_target}-egl)
add_custom_target(${update_target}-gles)
add_custom_target(${update_target}-glsc)
add_custom_target(${update_target}-all)
add_custom_target(${generate_target}-gl)
add_custom_target(${generate_target}-gles)
add_custom_target(${generate_target}-glsc)
add_custom_target(${generate_target}-egl)
add_custom_target(${generate_target}-all)

add_custom_command(
    TARGET              ${update_target}-gl
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/update.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/gl.json
    COMMENT             "Updating gl from URL."
)

add_custom_command(
    TARGET              ${update_target}-egl
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/update.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/egl.json
    COMMENT             "Updating egl from URL."
)

add_custom_command(
    TARGET              ${update_target}-gles
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/update.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/gles.json
    COMMENT             "Updating gles from URL."
)

add_custom_command(
    TARGET              ${update_target}-glsc
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/update.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/glsc.json
    COMMENT             "Updating glsc from URL."
)

add_custom_command(
    TARGET              ${generate_target}-gl
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/generate.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/gl.json -d ../glbinding -r gl.revision
    COMMENT             "Generating OpenGL binding code."
)

add_custom_command(
    TARGET              ${generate_target}-gles
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/generate.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/gles.json -d ../glesbinding -r gl.revision
    COMMENT             "Generating OpenGL ES binding code."
)

add_custom_command(
    TARGET              ${generate_target}-glsc
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/generate.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/glsc.json -d ../glscbinding -r gl.revision
    COMMENT             "Generating OpenGL SC binding code."
)

add_custom_command(
    TARGET              ${generate_target}-egl
    PRE_BUILD
    WORKING_DIRECTORY   ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND             ${PYTHON} scripts/generate.py -p ${CMAKE_CURRENT_SOURCE_DIR}/profiles/egl.json -d ../eglbinding -r gl.revision
    COMMENT             "Generating EGL binding code."
)

# Dependencies

add_dependencies(${update_target}-all
     ${update_target}-gl
     ${update_target}-gles
     ${update_target}-glsc
     ${update_target}-egl
)

add_dependencies(${generate_target}-all
     ${generate_target}-gl
     ${generate_target}-gles
     ${generate_target}-glsc
     ${generate_target}-egl
)

# Declare target

set_target_properties(${update_target}-gl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${update_target}-egl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${update_target}-gles PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${update_target}-glsc PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${update_target}-all PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

set_target_properties(${generate_target}-gl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${generate_target}-gles PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${generate_target}-glsc PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${generate_target}-egl PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
set_target_properties(${generate_target}-all PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)

