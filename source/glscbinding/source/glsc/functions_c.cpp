
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


GLenum glCheckFramebufferStatus(GLenum target)
{
    return Binding::CheckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return Binding::Clear(mask);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return Binding::ClearDepthf(d);
}

void glClearStencil(GLint s)
{
    return Binding::ClearStencil(s);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return Binding::ColorMask(red, green, blue, alpha);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

GLuint glCreateProgram()
{
    return Binding::CreateProgram();
}

void glCullFace(GLenum mode)
{
    return Binding::CullFace(mode);
}




} // namespace glsc
