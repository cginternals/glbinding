#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl13
{

#include <glbinding/gl/types.inl>

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl13


#include <glbinding/FunctionObjects.h>

namespace gl13
{

inline void glAccum(GLenum op, GLfloat value)
{
    return glbinding::FunctionObjects::current().glAccum(op, value);
}

inline void glActiveTexture(GLenum texture)
{
    return glbinding::FunctionObjects::current().glActiveTexture(texture);
}

inline void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::FunctionObjects::current().glAlphaFunc(func, ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().glAreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
    return glbinding::FunctionObjects::current().glArrayElement(i);
}

inline void glBegin(GLenum mode)
{
    return glbinding::FunctionObjects::current().glBegin(mode);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().glBindTexture(target, texture);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::FunctionObjects::current().glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::FunctionObjects::current().glBlendFunc(sfactor, dfactor);
}

inline void glCallList(GLuint list)
{
    return glbinding::FunctionObjects::current().glCallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::FunctionObjects::current().glCallLists(n, type, lists);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::FunctionObjects::current().glClear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glClearAccum(red, green, blue, alpha);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return glbinding::FunctionObjects::current().glClearDepth(depth);
}

inline void glClearIndex(GLfloat c)
{
    return glbinding::FunctionObjects::current().glClearIndex(c);
}

inline void glClearStencil(GLint s)
{
    return glbinding::FunctionObjects::current().glClearStencil(s);
}

inline void glClientActiveTexture(GLenum texture)
{
    return glbinding::FunctionObjects::current().glClientActiveTexture(texture);
}

inline void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::FunctionObjects::current().glClipPlane(plane, equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().glColor3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glColor3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().glColor3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glColor3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().glColor3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().glColor3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glColor3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().glColor3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glColor3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().glColor3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glColor3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().glColor3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().glColor3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().glColor3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().glColor3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::FunctionObjects::current().glColor4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glColor4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::FunctionObjects::current().glColor4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glColor4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glColor4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::FunctionObjects::current().glColor4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glColor4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::FunctionObjects::current().glColor4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glColor4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::FunctionObjects::current().glColor4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glColor4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::FunctionObjects::current().glColor4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().glColor4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::FunctionObjects::current().glColor4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().glColor4usv(v);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::FunctionObjects::current().glColorMask(red, green, blue, alpha);
}

inline void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glColorPointer(size, type, stride, pointer);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::FunctionObjects::current().glCopyPixels(x, y, width, height, type);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCullFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().glCullFace(mode);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::FunctionObjects::current().glDeleteLists(list, range);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().glDeleteTextures(n, textures);
}

inline void glDepthFunc(GLenum func)
{
    return glbinding::FunctionObjects::current().glDepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
    return glbinding::FunctionObjects::current().glDepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::FunctionObjects::current().glDepthRange(near_, far_);
}

inline void glDisable(GLenum cap)
{
    return glbinding::FunctionObjects::current().glDisable(cap);
}

inline void glDisableClientState(GLenum array)
{
    return glbinding::FunctionObjects::current().glDisableClientState(array);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawArrays(mode, first, count);
}

inline void glDrawBuffer(GLenum mode)
{
    return glbinding::FunctionObjects::current().glDrawBuffer(mode);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().glDrawElements(mode, count, type, indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glDrawPixels(width, height, format, type, pixels);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().glDrawRangeElements(mode, start, end, count, type, indices);
}

inline void glEdgeFlag(GLboolean flag)
{
    return glbinding::FunctionObjects::current().glEdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glEdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::FunctionObjects::current().glEdgeFlagv(flag);
}

inline void glEnable(GLenum cap)
{
    return glbinding::FunctionObjects::current().glEnable(cap);
}

inline void glEnableClientState(GLenum array)
{
    return glbinding::FunctionObjects::current().glEnableClientState(array);
}

inline void glEnd()
{
    return glbinding::FunctionObjects::current().glEnd();
}

inline void glEndList()
{
    return glbinding::FunctionObjects::current().glEndList();
}

inline void glEvalCoord1d(GLdouble u)
{
    return glbinding::FunctionObjects::current().glEvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
    return glbinding::FunctionObjects::current().glEvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
    return glbinding::FunctionObjects::current().glEvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
    return glbinding::FunctionObjects::current().glEvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return glbinding::FunctionObjects::current().glEvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
    return glbinding::FunctionObjects::current().glEvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return glbinding::FunctionObjects::current().glEvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
    return glbinding::FunctionObjects::current().glEvalCoord2fv(u);
}

inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return glbinding::FunctionObjects::current().glEvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return glbinding::FunctionObjects::current().glEvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
    return glbinding::FunctionObjects::current().glEvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
    return glbinding::FunctionObjects::current().glEvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return glbinding::FunctionObjects::current().glFeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
    return glbinding::FunctionObjects::current().glFinish();
}

inline void glFlush()
{
    return glbinding::FunctionObjects::current().glFlush();
}

inline void glFogf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glFogf(pname, param);
}

inline void glFogfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glFogfv(pname, params);
}

inline void glFogi(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glFogi(pname, param);
}

inline void glFogiv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glFogiv(pname, params);
}

inline void glFrontFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().glFrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glFrustum(left, right, bottom, top, zNear, zFar);
}

inline GLuint glGenLists(GLsizei range)
{
    return glbinding::FunctionObjects::current().glGenLists(range);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().glGenTextures(n, textures);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetBooleanv(pname, data);
}

inline void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::FunctionObjects::current().glGetClipPlane(plane, equation);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::FunctionObjects::current().glGetCompressedTexImage(target, level, img);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::FunctionObjects::current().glGetDoublev(pname, data);
}

inline GLenum glGetError()
{
    return static_cast<gl13::GLenum>(glbinding::FunctionObjects::current().glGetError());
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetFloatv(pname, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetIntegerv(pname, data);
}

inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetLightfv(light, pname, params);
}

inline void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetLightiv(light, pname, params);
}

inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::FunctionObjects::current().glGetMapdv(target, query, v);
}

inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::FunctionObjects::current().glGetMapfv(target, query, v);
}

inline void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::FunctionObjects::current().glGetMapiv(target, query, v);
}

inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMaterialiv(face, pname, params);
}

inline void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::FunctionObjects::current().glGetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::FunctionObjects::current().glGetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::FunctionObjects::current().glGetPixelMapusv(map, values);
}

inline void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetPointerv(pname, params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::FunctionObjects::current().glGetPolygonStipple(mask);
}

inline const GLubyte * glGetString(GLenum name)
{
    return glbinding::FunctionObjects::current().glGetString(name);
}

inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexEnviv(target, pname, params);
}

inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().glGetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameteriv(target, pname, params);
}

inline void glHint(GLenum target, GLenum mode)
{
    return glbinding::FunctionObjects::current().glHint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
    return glbinding::FunctionObjects::current().glIndexMask(mask);
}

inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glIndexPointer(type, stride, pointer);
}

inline void glIndexd(GLdouble c)
{
    return glbinding::FunctionObjects::current().glIndexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
    return glbinding::FunctionObjects::current().glIndexdv(c);
}

inline void glIndexf(GLfloat c)
{
    return glbinding::FunctionObjects::current().glIndexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
    return glbinding::FunctionObjects::current().glIndexfv(c);
}

inline void glIndexi(GLint c)
{
    return glbinding::FunctionObjects::current().glIndexi(c);
}

inline void glIndexiv(const GLint * c)
{
    return glbinding::FunctionObjects::current().glIndexiv(c);
}

inline void glIndexs(GLshort c)
{
    return glbinding::FunctionObjects::current().glIndexs(c);
}

inline void glIndexsv(const GLshort * c)
{
    return glbinding::FunctionObjects::current().glIndexsv(c);
}

inline void glIndexub(GLubyte c)
{
    return glbinding::FunctionObjects::current().glIndexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
    return glbinding::FunctionObjects::current().glIndexubv(c);
}

inline void glInitNames()
{
    return glbinding::FunctionObjects::current().glInitNames();
}

inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glInterleavedArrays(format, stride, pointer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::FunctionObjects::current().glIsEnabled(cap);
}

inline GLboolean glIsList(GLuint list)
{
    return glbinding::FunctionObjects::current().glIsList(list);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return glbinding::FunctionObjects::current().glIsTexture(texture);
}

inline void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glLightModelf(pname, param);
}

inline void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glLightModelfv(pname, params);
}

inline void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glLightModeli(pname, param);
}

inline void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glLightModeliv(pname, params);
}

inline void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glLightf(light, pname, param);
}

inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glLightfv(light, pname, params);
}

inline void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glLighti(light, pname, param);
}

inline void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glLightiv(light, pname, params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::FunctionObjects::current().glLineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
    return glbinding::FunctionObjects::current().glLineWidth(width);
}

inline void glListBase(GLuint base)
{
    return glbinding::FunctionObjects::current().glListBase(base);
}

inline void glLoadIdentity()
{
    return glbinding::FunctionObjects::current().glLoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glLoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glLoadMatrixf(m);
}

inline void glLoadName(GLuint name)
{
    return glbinding::FunctionObjects::current().glLoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glLoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glLoadTransposeMatrixf(m);
}

inline void glLogicOp(GLenum opcode)
{
    return glbinding::FunctionObjects::current().glLogicOp(opcode);
}

inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().glMap1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glMap1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::FunctionObjects::current().glMapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::FunctionObjects::current().glMapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::FunctionObjects::current().glMapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().glMapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glMaterialf(face, pname, param);
}

inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glMaterialfv(face, pname, params);
}

inline void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glMateriali(face, pname, param);
}

inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMaterialiv(face, pname, params);
}

inline void glMatrixMode(GLenum mode)
{
    return glbinding::FunctionObjects::current().glMatrixMode(mode);
}

inline void glMultMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMultMatrixf(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMultTransposeMatrixf(m);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4sv(target, v);
}

inline void glNewList(GLuint list, GLenum mode)
{
    return glbinding::FunctionObjects::current().glNewList(list, mode);
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::FunctionObjects::current().glNormal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glNormal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::FunctionObjects::current().glNormal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glNormal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::FunctionObjects::current().glNormal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glNormal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::FunctionObjects::current().glNormal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glNormal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::FunctionObjects::current().glNormal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glNormal3sv(v);
}

inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glNormalPointer(type, stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glOrtho(left, right, bottom, top, zNear, zFar);
}

inline void glPassThrough(GLfloat token)
{
    return glbinding::FunctionObjects::current().glPassThrough(token);
}

inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::FunctionObjects::current().glPixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::FunctionObjects::current().glPixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::FunctionObjects::current().glPixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPixelStorei(pname, param);
}

inline void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPixelTransferf(pname, param);
}

inline void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::FunctionObjects::current().glPixelZoom(xfactor, yfactor);
}

inline void glPointSize(GLfloat size)
{
    return glbinding::FunctionObjects::current().glPointSize(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glPolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::FunctionObjects::current().glPolygonOffset(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::FunctionObjects::current().glPolygonStipple(mask);
}

inline void glPopAttrib()
{
    return glbinding::FunctionObjects::current().glPopAttrib();
}

inline void glPopClientAttrib()
{
    return glbinding::FunctionObjects::current().glPopClientAttrib();
}

inline void glPopMatrix()
{
    return glbinding::FunctionObjects::current().glPopMatrix();
}

inline void glPopName()
{
    return glbinding::FunctionObjects::current().glPopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::FunctionObjects::current().glPrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(AttribMask mask)
{
    return glbinding::FunctionObjects::current().glPushAttrib(mask);
}

inline void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().glPushClientAttrib(mask);
}

inline void glPushMatrix()
{
    return glbinding::FunctionObjects::current().glPushMatrix();
}

inline void glPushName(GLuint name)
{
    return glbinding::FunctionObjects::current().glPushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glRasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glRasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glRasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glRasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glRasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glRasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glRasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glRasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glRasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glRasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glRasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glRasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glRasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glRasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glRasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glRasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glRasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glRasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glRasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glRasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glRasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glRasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glRasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glRasterPos4sv(v);
}

inline void glReadBuffer(GLenum mode)
{
    return glbinding::FunctionObjects::current().glReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().glReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return glbinding::FunctionObjects::current().glRectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return glbinding::FunctionObjects::current().glRectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return glbinding::FunctionObjects::current().glRectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return glbinding::FunctionObjects::current().glRectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return glbinding::FunctionObjects::current().glRecti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
    return glbinding::FunctionObjects::current().glRectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return glbinding::FunctionObjects::current().glRects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return glbinding::FunctionObjects::current().glRectsv(v1, v2);
}

inline GLint glRenderMode(GLenum mode)
{
    return glbinding::FunctionObjects::current().glRenderMode(mode);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glRotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glRotatef(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().glSampleCoverage(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glScaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glScalef(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glScissor(x, y, width, height);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::FunctionObjects::current().glSelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
    return glbinding::FunctionObjects::current().glShadeModel(mode);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilFunc(func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilMask(mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::FunctionObjects::current().glStencilOp(fail, zfail, zpass);
}

inline void glTexCoord1d(GLdouble s)
{
    return glbinding::FunctionObjects::current().glTexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glTexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
    return glbinding::FunctionObjects::current().glTexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
    return glbinding::FunctionObjects::current().glTexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glTexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
    return glbinding::FunctionObjects::current().glTexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glTexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().glTexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().glTexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().glTexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().glTexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().glTexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glTexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().glTexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().glTexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glTexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().glTexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glTexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().glTexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().glTexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().glTexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().glTexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glTexCoordPointer(size, type, stride, pointer);
}

inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glTexEnvf(target, pname, param);
}

inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glTexEnvfv(target, pname, params);
}

inline void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glTexEnvi(target, pname, param);
}

inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTexEnviv(target, pname, params);
}

inline void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::FunctionObjects::current().glTexGend(coord, pname, param);
}

inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glTexGendv(coord, pname, params);
}

inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glTexGenf(coord, pname, param);
}

inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glTexGenfv(coord, pname, params);
}

inline void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glTexGeni(coord, pname, param);
}

inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTexGeniv(coord, pname, params);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glTexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glTexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glTexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTexParameteriv(target, pname, params);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glTranslated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTranslatef(x, y, z);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glVertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glVertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glVertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glVertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glVertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glVertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glVertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glVertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glVertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertex4sv(v);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexPointer(size, type, stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glViewport(x, y, width, height);
}


} // namespace gl13
