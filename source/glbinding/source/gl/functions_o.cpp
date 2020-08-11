
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectLabel(identifier, name, length, label);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectPtrLabel(ptr, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectPtrLabelKHR(ptr, length, label);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectPurgeableAPPLE(objectType, name, option);
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::ObjectUnpurgeableAPPLE(objectType, name, option);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::Ortho(left, right, bottom, top, zNear, zFar);
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::OrthofOES(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) GLBINDING_NOEXCEPT
{
    return glbinding::Binding::OrthoxOES(l, r, b, t, n, f);
}


} // namespace gl