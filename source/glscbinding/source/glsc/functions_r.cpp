
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return Binding::RenderbufferStorage(target, internalformat, width, height);
}




} // namespace glsc
