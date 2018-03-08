
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glUniform1f(GLint location, GLfloat v0)
{
    return Binding::Uniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return Binding::Uniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return Binding::Uniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return Binding::Uniform1iv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return Binding::Uniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return Binding::Uniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return Binding::Uniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return Binding::Uniform2iv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return Binding::Uniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return Binding::Uniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return Binding::Uniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return Binding::Uniform3iv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return Binding::Uniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return Binding::Uniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return Binding::Uniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return Binding::Uniform4iv(location, count, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return Binding::UniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return Binding::UniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return Binding::UniformMatrix4fv(location, count, transpose, value);
}

void glUseProgram(GLuint program)
{
    return Binding::UseProgram(program);
}




} // namespace glsc
