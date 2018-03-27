
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
Function<void, GLint, GLint> Binding::Uniform1i("glUniform1i");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
Function<void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
Function<void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
Function<void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
Function<void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
Function<void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
Function<void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
Function<void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
Function<void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
Function<void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
Function<void, GLuint> Binding::UseProgram("glUseProgram");



} // namespace glscbinding
