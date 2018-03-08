
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glBindBuffer(GLenum target, GLuint buffer)
{
    return Binding::BindBuffer(target, buffer);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return Binding::BindFramebuffer(target, framebuffer);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return Binding::BindTexture(target, texture);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return Binding::BufferData(target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return Binding::BufferSubData(target, offset, size, data);
}




} // namespace glsc
