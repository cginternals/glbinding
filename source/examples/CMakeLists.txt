
# 
# Examples
# 

# General Features
add_subdirectory("callbacks")
add_subdirectory("comparison")
add_subdirectory("multi-context")

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
add_subdirectory("cubescape-glfw")
add_subdirectory("cubescape-wgl")
add_subdirectory("cubescape-qt")
add_subdirectory("cubescape-sdl")
add_subdirectory("cubescape-gtk3")
add_subdirectory("cubescape-gtk4")
add_subdirectory("cubescape-log")
