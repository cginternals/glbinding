
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


using namespace glscbinding;


namespace glsc
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return Binding::SampleCoverage(value, invert);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::Scissor(x, y, width, height);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}




} // namespace glsc
