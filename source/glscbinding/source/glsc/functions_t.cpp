
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return Binding::TexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return Binding::TexParameteriv(target, pname, params);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::TexStorage2D(target, levels, internalformat, width, height);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}




} // namespace glsc
