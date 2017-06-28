
set(cmake_files 
	CheckTemplate.cmake
	CompileOptions.cmake
	ComponentInstall.cmake
	Custom.cmake
	FindGLEW.cmake
	FindGLFW.cmake
	GetGitRevisionDescription.cmake
	RuntimeDependencies.cmake
	GetGitRevisionDescription.cmake.in
	CMakeLists.txt
)

######################################################

set(show_cmd  "dir")
if(NOT WIN32)
	set(show_cmd  "ls")
endif()
    
add_custom_target(glbinding_cmake
   COMMAND  echo "${cmake_files}"
   COMMAND  ${show_cmd} 
   WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
   COMMENT "[dummy target puts files into IDE view...]"
   SOURCES  ${cmake_files}
   VERBATIM
   )