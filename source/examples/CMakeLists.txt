
# 
# Examples
# 

#
# Cubescape
#

# Shared Static Libraries
add_subdirectory("cubescape-shared-gl")
add_subdirectory("cubescape-shared-gles")

# OpenGL APIs
add_subdirectory("cubescape-gl")
add_subdirectory("cubescape-gles")

# Integrations
add_subdirectory("cubescape-glfw-gl")
add_subdirectory("cubescape-glfw-gles")
add_subdirectory("cubescape-qt-gl")
add_subdirectory("cubescape-qt-gles")
add_subdirectory("cubescape-sdl-gl")
add_subdirectory("cubescape-sdl-gles")
add_subdirectory("cubescape-gtk3-gl")
add_subdirectory("cubescape-gtk3-gles")
add_subdirectory("cubescape-gtk4-gl")
add_subdirectory("cubescape-gtk4-gles")
add_subdirectory("cubescape-wgl")

# General Features
add_subdirectory("callbacks")
add_subdirectory("comparison")
add_subdirectory("multi-context")
add_subdirectory("cubescape-log")
