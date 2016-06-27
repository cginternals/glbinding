
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return Binding::WaitSync(sync, flags, timeout);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::WeightPointerARB(size, type, stride, pointer);
}

void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return Binding::WeightbvARB(size, weights);
}

void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return Binding::WeightdvARB(size, weights);
}

void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return Binding::WeightfvARB(size, weights);
}

void glWeightivARB(GLint size, const GLint * weights)
{
    return Binding::WeightivARB(size, weights);
}

void glWeightsvARB(GLint size, const GLshort * weights)
{
    return Binding::WeightsvARB(size, weights);
}

void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return Binding::WeightubvARB(size, weights);
}

void glWeightuivARB(GLint size, const GLuint * weights)
{
    return Binding::WeightuivARB(size, weights);
}

void glWeightusvARB(GLint size, const GLushort * weights)
{
    return Binding::WeightusvARB(size, weights);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
    return Binding::WindowPos2d(x, y);
}

void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return Binding::WindowPos2dARB(x, y);
}

void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return Binding::WindowPos2dMESA(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
    return Binding::WindowPos2dv(v);
}

void glWindowPos2dvARB(const GLdouble * v)
{
    return Binding::WindowPos2dvARB(v);
}

void glWindowPos2dvMESA(const GLdouble * v)
{
    return Binding::WindowPos2dvMESA(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
    return Binding::WindowPos2f(x, y);
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return Binding::WindowPos2fARB(x, y);
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return Binding::WindowPos2fMESA(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
    return Binding::WindowPos2fv(v);
}

void glWindowPos2fvARB(const GLfloat * v)
{
    return Binding::WindowPos2fvARB(v);
}

void glWindowPos2fvMESA(const GLfloat * v)
{
    return Binding::WindowPos2fvMESA(v);
}

void glWindowPos2i(GLint x, GLint y)
{
    return Binding::WindowPos2i(x, y);
}

void glWindowPos2iARB(GLint x, GLint y)
{
    return Binding::WindowPos2iARB(x, y);
}

void glWindowPos2iMESA(GLint x, GLint y)
{
    return Binding::WindowPos2iMESA(x, y);
}

void glWindowPos2iv(const GLint * v)
{
    return Binding::WindowPos2iv(v);
}

void glWindowPos2ivARB(const GLint * v)
{
    return Binding::WindowPos2ivARB(v);
}

void glWindowPos2ivMESA(const GLint * v)
{
    return Binding::WindowPos2ivMESA(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
    return Binding::WindowPos2s(x, y);
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
    return Binding::WindowPos2sARB(x, y);
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return Binding::WindowPos2sMESA(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
    return Binding::WindowPos2sv(v);
}

void glWindowPos2svARB(const GLshort * v)
{
    return Binding::WindowPos2svARB(v);
}

void glWindowPos2svMESA(const GLshort * v)
{
    return Binding::WindowPos2svMESA(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::WindowPos3d(x, y, z);
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::WindowPos3dARB(x, y, z);
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::WindowPos3dMESA(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
    return Binding::WindowPos3dv(v);
}

void glWindowPos3dvARB(const GLdouble * v)
{
    return Binding::WindowPos3dvARB(v);
}

void glWindowPos3dvMESA(const GLdouble * v)
{
    return Binding::WindowPos3dvMESA(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::WindowPos3f(x, y, z);
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::WindowPos3fARB(x, y, z);
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::WindowPos3fMESA(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
    return Binding::WindowPos3fv(v);
}

void glWindowPos3fvARB(const GLfloat * v)
{
    return Binding::WindowPos3fvARB(v);
}

void glWindowPos3fvMESA(const GLfloat * v)
{
    return Binding::WindowPos3fvMESA(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return Binding::WindowPos3i(x, y, z);
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return Binding::WindowPos3iARB(x, y, z);
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return Binding::WindowPos3iMESA(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
    return Binding::WindowPos3iv(v);
}

void glWindowPos3ivARB(const GLint * v)
{
    return Binding::WindowPos3ivARB(v);
}

void glWindowPos3ivMESA(const GLint * v)
{
    return Binding::WindowPos3ivMESA(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return Binding::WindowPos3s(x, y, z);
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return Binding::WindowPos3sARB(x, y, z);
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return Binding::WindowPos3sMESA(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
    return Binding::WindowPos3sv(v);
}

void glWindowPos3svARB(const GLshort * v)
{
    return Binding::WindowPos3svARB(v);
}

void glWindowPos3svMESA(const GLshort * v)
{
    return Binding::WindowPos3svMESA(v);
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return Binding::WindowPos4dMESA(x, y, z, w);
}

void glWindowPos4dvMESA(const GLdouble * v)
{
    return Binding::WindowPos4dvMESA(v);
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return Binding::WindowPos4fMESA(x, y, z, w);
}

void glWindowPos4fvMESA(const GLfloat * v)
{
    return Binding::WindowPos4fvMESA(v);
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return Binding::WindowPos4iMESA(x, y, z, w);
}

void glWindowPos4ivMESA(const GLint * v)
{
    return Binding::WindowPos4ivMESA(v);
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return Binding::WindowPos4sMESA(x, y, z, w);
}

void glWindowPos4svMESA(const GLshort * v)
{
    return Binding::WindowPos4svMESA(v);
}

void glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint * box)
{
    return Binding::WindowRectanglesEXT(mode, count, box);
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return Binding::WriteMaskEXT(res, in, outX, outY, outZ, outW);
}



} // namespace gl
