
#include "Binding_pch.h"


using namespace glsc;


namespace glscbinding
{


Function<Binding, void, GLint, GLfloat> Binding::Uniform1f("glUniform1f");
Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform1fv("glUniform1fv");
Function<Binding, void, GLint, GLint> Binding::Uniform1i("glUniform1i");
Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform1iv("glUniform1iv");
Function<Binding, void, GLint, GLfloat, GLfloat> Binding::Uniform2f("glUniform2f");
Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform2fv("glUniform2fv");
Function<Binding, void, GLint, GLint, GLint> Binding::Uniform2i("glUniform2i");
Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform2iv("glUniform2iv");
Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat> Binding::Uniform3f("glUniform3f");
Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform3fv("glUniform3fv");
Function<Binding, void, GLint, GLint, GLint, GLint> Binding::Uniform3i("glUniform3i");
Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform3iv("glUniform3iv");
Function<Binding, void, GLint, GLfloat, GLfloat, GLfloat, GLfloat> Binding::Uniform4f("glUniform4f");
Function<Binding, void, GLint, GLsizei, const GLfloat *> Binding::Uniform4fv("glUniform4fv");
Function<Binding, void, GLint, GLint, GLint, GLint, GLint> Binding::Uniform4i("glUniform4i");
Function<Binding, void, GLint, GLsizei, const GLint *> Binding::Uniform4iv("glUniform4iv");
Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix2fv("glUniformMatrix2fv");
Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix3fv("glUniformMatrix3fv");
Function<Binding, void, GLint, GLsizei, GLboolean, const GLfloat *> Binding::UniformMatrix4fv("glUniformMatrix4fv");
Function<Binding, void, GLuint> Binding::UseProgram("glUseProgram");



} // namespace glscbinding
