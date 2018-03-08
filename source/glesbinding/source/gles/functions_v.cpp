
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glValidateProgram(GLuint program)
{
    return Binding::ValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return Binding::ValidateProgramPipeline(pipeline);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return Binding::VertexAttrib4fv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
    return Binding::VertexAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::Viewport(x, y, width, height);
}

void glViewportArrayvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return Binding::ViewportArrayvNV(first, count, v);
}

void glViewportArrayvOES(GLuint first, GLsizei count, const GLfloat * v)
{
    return Binding::ViewportArrayvOES(first, count, v);
}

void glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return Binding::ViewportIndexedfNV(index, x, y, w, h);
}

void glViewportIndexedfOES(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return Binding::ViewportIndexedfOES(index, x, y, w, h);
}

void glViewportIndexedfvNV(GLuint index, const GLfloat * v)
{
    return Binding::ViewportIndexedfvNV(index, v);
}

void glViewportIndexedfvOES(GLuint index, const GLfloat * v)
{
    return Binding::ViewportIndexedfvOES(index, v);
}

void glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff)
{
    return Binding::ViewportPositionWScaleNV(index, xcoeff, ycoeff);
}

void glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew)
{
    return Binding::ViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);
}




} // namespace gles
