
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glNamedBufferStorageExternalEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, MapBufferUsageMask flags)
{
    return Binding::NamedBufferStorageExternalEXT(buffer, offset, size, clientBuffer, flags);
}

void glNamedBufferStorageMemEXT(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return Binding::NamedBufferStorageMemEXT(buffer, size, memory, offset);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}




} // namespace gles
