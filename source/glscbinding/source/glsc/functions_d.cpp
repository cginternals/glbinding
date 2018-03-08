
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glDepthFunc(GLenum func)
{
    return Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return Binding::DepthMask(flag);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return Binding::DepthRangef(n, f);
}

void glDisable(GLenum cap)
{
    return Binding::Disable(cap);
}

void glDisableVertexAttribArray(GLuint index)
{
    return Binding::DisableVertexAttribArray(index);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return Binding::DrawArrays(mode, first, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return Binding::DrawRangeElements(mode, start, end, count, type, indices);
}




} // namespace glsc
