
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return Binding::GenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return Binding::GenFramebuffers(n, framebuffers);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return Binding::GenTextures(n, textures);
}

void glGenerateMipmap(GLenum target)
{
    return Binding::GenerateMipmap(target);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return Binding::GetAttribLocation(program, name);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetBufferParameteriv(target, pname, params);
}

GLenum glGetError()
{
    return Binding::GetError();
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return Binding::GetFloatv(pname, data);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return Binding::GetGraphicsResetStatus();
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return Binding::GetIntegerv(pname, data);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return Binding::GetProgramiv(program, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetRenderbufferParameteriv(target, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return Binding::GetString(name);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameteriv(target, pname, params);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return Binding::GetUniformLocation(program, name);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribiv(index, pname, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return Binding::GetnUniformiv(program, location, bufSize, params);
}




} // namespace glsc
