
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


using namespace glbinding;


namespace gl
{


void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return Binding::ObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return Binding::ObjectPtrLabel(ptr, length, label);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return Binding::ObjectPurgeableAPPLE(objectType, name, option);
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return Binding::ObjectUnpurgeableAPPLE(objectType, name, option);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return Binding::Ortho(left, right, bottom, top, zNear, zFar);
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return Binding::OrthofOES(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return Binding::OrthoxOES(l, r, b, t, n, f);
}




} // namespace gl
