#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/functions.h>
#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl21
{

#include <glbinding/gl/types.inl>
#include <glbinding/gl/boolean.inl>
#include <glbinding/gl/values.inl>

} // namespace gl21


namespace gl21
{

inline void glAccum(GLenum op, GLfloat value)
{
    return gl::glAccum(op, value);
}

inline void glActiveTexture(GLenum texture)
{
    return gl::glActiveTexture(texture);
}

inline void glAlphaFunc(GLenum func, GLfloat ref)
{
    return gl::glAlphaFunc(func, ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return gl::glAreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
    return gl::glArrayElement(i);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return gl::glAttachShader(program, shader);
}

inline void glBegin(GLenum mode)
{
    return gl::glBegin(mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return gl::glBeginQuery(target, id);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return gl::glBindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return gl::glBindBuffer(target, buffer);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return gl::glBindTexture(target, texture);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return gl::glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glBlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return gl::glBlendEquation(mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return gl::glBlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glBufferData(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glBufferSubData(target, offset, size, data);
}

inline void glCallList(GLuint list)
{
    return gl::glCallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return gl::glCallLists(n, type, lists);
}

inline void glClear(ClearBufferMask mask)
{
    return gl::glClear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glClearAccum(red, green, blue, alpha);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return gl::glClearDepth(depth);
}

inline void glClearIndex(GLfloat c)
{
    return gl::glClearIndex(c);
}

inline void glClearStencil(GLint s)
{
    return gl::glClearStencil(s);
}

inline void glClientActiveTexture(GLenum texture)
{
    return gl::glClientActiveTexture(texture);
}

inline void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return gl::glClipPlane(plane, equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glColor3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
    return gl::glColor3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glColor3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
    return gl::glColor3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glColor3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
    return gl::glColor3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
    return gl::glColor3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
    return gl::glColor3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return gl::glColor3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
    return gl::glColor3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glColor3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
    return gl::glColor3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return gl::glColor3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
    return gl::glColor3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return gl::glColor3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
    return gl::glColor3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return gl::glColor4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
    return gl::glColor4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return gl::glColor4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
    return gl::glColor4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glColor4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
    return gl::glColor4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return gl::glColor4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
    return gl::glColor4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return gl::glColor4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
    return gl::glColor4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return gl::glColor4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
    return gl::glColor4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return gl::glColor4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
    return gl::glColor4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return gl::glColor4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
    return gl::glColor4usv(v);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gl::glColorMask(red, green, blue, alpha);
}

inline void glColorMaterial(GLenum face, GLenum mode)
{
    return gl::glColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glColorPointer(size, type, stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
    return gl::glCompileShader(shader);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return gl::glCopyPixels(x, y, width, height, type);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
    return gl::glCreateProgram();
}

inline GLuint glCreateShader(GLenum type)
{
    return gl::glCreateShader(type);
}

inline void glCullFace(GLenum mode)
{
    return gl::glCullFace(mode);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return gl::glDeleteBuffers(n, buffers);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
    return gl::glDeleteLists(list, range);
}

inline void glDeleteProgram(GLuint program)
{
    return gl::glDeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteQueries(n, ids);
}

inline void glDeleteShader(GLuint shader)
{
    return gl::glDeleteShader(shader);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return gl::glDeleteTextures(n, textures);
}

inline void glDepthFunc(GLenum func)
{
    return gl::glDepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
    return gl::glDepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
    return gl::glDepthRange(near_, far_);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
    return gl::glDetachShader(program, shader);
}

inline void glDisable(GLenum cap)
{
    return gl::glDisable(cap);
}

inline void glDisableClientState(GLenum array)
{
    return gl::glDisableClientState(array);
}

inline void glDisableVertexAttribArray(GLuint index)
{
    return gl::glDisableVertexAttribArray(index);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawArrays(mode, first, count);
}

inline void glDrawBuffer(GLenum buf)
{
    return gl::glDrawBuffer(buf);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffers(n, bufs);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawElements(mode, count, type, indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glDrawPixels(width, height, format, type, pixels);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawRangeElements(mode, start, end, count, type, indices);
}

inline void glEdgeFlag(GLboolean flag)
{
    return gl::glEdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return gl::glEdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
    return gl::glEdgeFlagv(flag);
}

inline void glEnable(GLenum cap)
{
    return gl::glEnable(cap);
}

inline void glEnableClientState(GLenum array)
{
    return gl::glEnableClientState(array);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return gl::glEnableVertexAttribArray(index);
}

inline void glEnd()
{
    return gl::glEnd();
}

inline void glEndList()
{
    return gl::glEndList();
}

inline void glEndQuery(GLenum target)
{
    return gl::glEndQuery(target);
}

inline void glEvalCoord1d(GLdouble u)
{
    return gl::glEvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
    return gl::glEvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
    return gl::glEvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
    return gl::glEvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return gl::glEvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
    return gl::glEvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return gl::glEvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
    return gl::glEvalCoord2fv(u);
}

inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return gl::glEvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return gl::glEvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
    return gl::glEvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
    return gl::glEvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return gl::glFeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
    return gl::glFinish();
}

inline void glFlush()
{
    return gl::glFlush();
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glFogCoordPointer(type, stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
    return gl::glFogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
    return gl::glFogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
    return gl::glFogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
    return gl::glFogCoordfv(coord);
}

inline void glFogf(GLenum pname, GLfloat param)
{
    return gl::glFogf(pname, param);
}

inline void glFogfv(GLenum pname, const GLfloat * params)
{
    return gl::glFogfv(pname, params);
}

inline void glFogi(GLenum pname, GLint param)
{
    return gl::glFogi(pname, param);
}

inline void glFogiv(GLenum pname, const GLint * params)
{
    return gl::glFogiv(pname, params);
}

inline void glFrontFace(GLenum mode)
{
    return gl::glFrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glFrustum(left, right, bottom, top, zNear, zFar);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return gl::glGenBuffers(n, buffers);
}

inline GLuint glGenLists(GLsizei range)
{
    return gl::glGenLists(range);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return gl::glGenQueries(n, ids);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return gl::glGenTextures(n, textures);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return gl::glGetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return gl::glGetAttribLocation(program, name);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return gl::glGetBooleanv(pname, data);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return gl::glGetBufferSubData(target, offset, size, data);
}

inline void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return gl::glGetClipPlane(plane, equation);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return gl::glGetCompressedTexImage(target, level, img);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
    return gl::glGetDoublev(pname, data);
}

inline GLenum glGetError()
{
    return gl::glGetError();
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return gl::glGetFloatv(pname, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return gl::glGetIntegerv(pname, data);
}

inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return gl::glGetLightfv(light, pname, params);
}

inline void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return gl::glGetLightiv(light, pname, params);
}

inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return gl::glGetMapdv(target, query, v);
}

inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return gl::glGetMapfv(target, query, v);
}

inline void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return gl::glGetMapiv(target, query, v);
}

inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return gl::glGetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return gl::glGetMaterialiv(face, pname, params);
}

inline void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return gl::glGetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return gl::glGetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return gl::glGetPixelMapusv(map, values);
}

inline void glGetPointerv(GLenum pname, void ** params)
{
    return gl::glGetPointerv(pname, params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
    return gl::glGetPolygonStipple(mask);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return gl::glGetProgramiv(program, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetQueryiv(target, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return gl::glGetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return gl::glGetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(GLenum name)
{
    return gl::glGetString(name);
}

inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexEnviv(target, pname, params);
}

inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return gl::glGetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return gl::glGetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return gl::glGetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameteriv(target, pname, params);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return gl::glGetUniformLocation(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return gl::glGetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return gl::glGetUniformiv(program, location, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribiv(index, pname, params);
}

inline void glHint(GLenum target, GLenum mode)
{
    return gl::glHint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
    return gl::glIndexMask(mask);
}

inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glIndexPointer(type, stride, pointer);
}

inline void glIndexd(GLdouble c)
{
    return gl::glIndexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
    return gl::glIndexdv(c);
}

inline void glIndexf(GLfloat c)
{
    return gl::glIndexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
    return gl::glIndexfv(c);
}

inline void glIndexi(GLint c)
{
    return gl::glIndexi(c);
}

inline void glIndexiv(const GLint * c)
{
    return gl::glIndexiv(c);
}

inline void glIndexs(GLshort c)
{
    return gl::glIndexs(c);
}

inline void glIndexsv(const GLshort * c)
{
    return gl::glIndexsv(c);
}

inline void glIndexub(GLubyte c)
{
    return gl::glIndexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
    return gl::glIndexubv(c);
}

inline void glInitNames()
{
    return gl::glInitNames();
}

inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return gl::glInterleavedArrays(format, stride, pointer);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
    return gl::glIsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return gl::glIsEnabled(cap);
}

inline GLboolean glIsList(GLuint list)
{
    return gl::glIsList(list);
}

inline GLboolean glIsProgram(GLuint program)
{
    return gl::glIsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
    return gl::glIsQuery(id);
}

inline GLboolean glIsShader(GLuint shader)
{
    return gl::glIsShader(shader);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return gl::glIsTexture(texture);
}

inline void glLightModelf(GLenum pname, GLfloat param)
{
    return gl::glLightModelf(pname, param);
}

inline void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return gl::glLightModelfv(pname, params);
}

inline void glLightModeli(GLenum pname, GLint param)
{
    return gl::glLightModeli(pname, param);
}

inline void glLightModeliv(GLenum pname, const GLint * params)
{
    return gl::glLightModeliv(pname, params);
}

inline void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return gl::glLightf(light, pname, param);
}

inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return gl::glLightfv(light, pname, params);
}

inline void glLighti(GLenum light, GLenum pname, GLint param)
{
    return gl::glLighti(light, pname, param);
}

inline void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return gl::glLightiv(light, pname, params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
    return gl::glLineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
    return gl::glLineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
    return gl::glLinkProgram(program);
}

inline void glListBase(GLuint base)
{
    return gl::glListBase(base);
}

inline void glLoadIdentity()
{
    return gl::glLoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
    return gl::glLoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
    return gl::glLoadMatrixf(m);
}

inline void glLoadName(GLuint name)
{
    return gl::glLoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
    return gl::glLoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
    return gl::glLoadTransposeMatrixf(m);
}

inline void glLogicOp(GLenum opcode)
{
    return gl::glLogicOp(opcode);
}

inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return gl::glMap1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return gl::glMap1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return gl::glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return gl::glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return gl::glMapBuffer(target, access);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return gl::glMapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return gl::glMapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return gl::glMapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return gl::glMapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return gl::glMaterialf(face, pname, param);
}

inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return gl::glMaterialfv(face, pname, params);
}

inline void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return gl::glMateriali(face, pname, param);
}

inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return gl::glMaterialiv(face, pname, params);
}

inline void glMatrixMode(GLenum mode)
{
    return gl::glMatrixMode(mode);
}

inline void glMultMatrixd(const GLdouble * m)
{
    return gl::glMultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
    return gl::glMultMatrixf(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
    return gl::glMultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
    return gl::glMultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return gl::glMultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return gl::glMultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return gl::glMultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return gl::glMultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
    return gl::glMultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return gl::glMultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return gl::glMultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return gl::glMultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return gl::glMultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return gl::glMultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glMultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glMultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return gl::glMultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return gl::glMultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glMultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glMultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return gl::glMultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glMultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord4sv(target, v);
}

inline void glNewList(GLuint list, GLenum mode)
{
    return gl::glNewList(list, mode);
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return gl::glNormal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
    return gl::glNormal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return gl::glNormal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
    return gl::glNormal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return gl::glNormal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
    return gl::glNormal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return gl::glNormal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
    return gl::glNormal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return gl::glNormal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
    return gl::glNormal3sv(v);
}

inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glNormalPointer(type, stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glOrtho(left, right, bottom, top, zNear, zFar);
}

inline void glPassThrough(GLfloat token)
{
    return gl::glPassThrough(token);
}

inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return gl::glPixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return gl::glPixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return gl::glPixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return gl::glPixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return gl::glPixelStorei(pname, param);
}

inline void glPixelTransferf(GLenum pname, GLfloat param)
{
    return gl::glPixelTransferf(pname, param);
}

inline void glPixelTransferi(GLenum pname, GLint param)
{
    return gl::glPixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return gl::glPixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return gl::glPointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return gl::glPointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return gl::glPointParameteriv(pname, params);
}

inline void glPointSize(GLfloat size)
{
    return gl::glPointSize(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
    return gl::glPolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return gl::glPolygonOffset(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
    return gl::glPolygonStipple(mask);
}

inline void glPopAttrib()
{
    return gl::glPopAttrib();
}

inline void glPopClientAttrib()
{
    return gl::glPopClientAttrib();
}

inline void glPopMatrix()
{
    return gl::glPopMatrix();
}

inline void glPopName()
{
    return gl::glPopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return gl::glPrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(AttribMask mask)
{
    return gl::glPushAttrib(mask);
}

inline void glPushClientAttrib(ClientAttribMask mask)
{
    return gl::glPushClientAttrib(mask);
}

inline void glPushMatrix()
{
    return gl::glPushMatrix();
}

inline void glPushName(GLuint name)
{
    return gl::glPushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
    return gl::glRasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
    return gl::glRasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
    return gl::glRasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
    return gl::glRasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
    return gl::glRasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
    return gl::glRasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
    return gl::glRasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
    return gl::glRasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glRasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
    return gl::glRasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glRasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
    return gl::glRasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return gl::glRasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
    return gl::glRasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glRasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
    return gl::glRasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glRasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
    return gl::glRasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glRasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
    return gl::glRasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glRasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
    return gl::glRasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glRasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
    return gl::glRasterPos4sv(v);
}

inline void glReadBuffer(GLenum src)
{
    return gl::glReadBuffer(src);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return gl::glReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return gl::glRectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return gl::glRectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return gl::glRectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return gl::glRectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return gl::glRecti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
    return gl::glRectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return gl::glRects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return gl::glRectsv(v1, v2);
}

inline GLint glRenderMode(GLenum mode)
{
    return gl::glRenderMode(mode);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glRotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glRotatef(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return gl::glSampleCoverage(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glScaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glScalef(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glScissor(x, y, width, height);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glSecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
    return gl::glSecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glSecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
    return gl::glSecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glSecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
    return gl::glSecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return gl::glSecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
    return gl::glSecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return gl::glSecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
    return gl::glSecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glSecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
    return gl::glSecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return gl::glSecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
    return gl::glSecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return gl::glSecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
    return gl::glSecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glSecondaryColorPointer(size, type, stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return gl::glSelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
    return gl::glShadeModel(mode);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return gl::glShaderSource(shader, count, string, length);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return gl::glStencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return gl::glStencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return gl::glStencilMask(mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return gl::glStencilMaskSeparate(face, mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return gl::glStencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return gl::glStencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glTexCoord1d(GLdouble s)
{
    return gl::glTexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
    return gl::glTexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
    return gl::glTexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
    return gl::glTexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
    return gl::glTexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
    return gl::glTexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
    return gl::glTexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
    return gl::glTexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
    return gl::glTexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
    return gl::glTexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
    return gl::glTexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
    return gl::glTexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
    return gl::glTexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
    return gl::glTexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
    return gl::glTexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
    return gl::glTexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glTexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
    return gl::glTexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glTexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
    return gl::glTexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return gl::glTexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
    return gl::glTexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return gl::glTexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
    return gl::glTexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glTexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
    return gl::glTexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glTexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
    return gl::glTexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return gl::glTexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
    return gl::glTexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glTexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
    return gl::glTexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glTexCoordPointer(size, type, stride, pointer);
}

inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTexEnvf(target, pname, param);
}

inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTexEnvfv(target, pname, params);
}

inline void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return gl::glTexEnvi(target, pname, param);
}

inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexEnviv(target, pname, params);
}

inline void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return gl::glTexGend(coord, pname, param);
}

inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return gl::glTexGendv(coord, pname, params);
}

inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return gl::glTexGenf(coord, pname, param);
}

inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return gl::glTexGenfv(coord, pname, params);
}

inline void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return gl::glTexGeni(coord, pname, param);
}

inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return gl::glTexGeniv(coord, pname, params);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return gl::glTexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameteriv(target, pname, params);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glTranslated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTranslatef(x, y, z);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return gl::glUniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return gl::glUniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform1iv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glUniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return gl::glUniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform2iv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glUniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glUniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform3iv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glUniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glUniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform4iv(location, count, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x3fv(location, count, transpose, value);
}

inline GLboolean glUnmapBuffer(GLenum target)
{
    return gl::glUnmapBuffer(target);
}

inline void glUseProgram(GLuint program)
{
    return gl::glUseProgram(program);
}

inline void glValidateProgram(GLuint program)
{
    return gl::glValidateProgram(program);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
    return gl::glVertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
    return gl::glVertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
    return gl::glVertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
    return gl::glVertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
    return gl::glVertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
    return gl::glVertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
    return gl::glVertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
    return gl::glVertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
    return gl::glVertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
    return gl::glVertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
    return gl::glVertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
    return gl::glVertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glVertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
    return gl::glVertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
    return gl::glVertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
    return gl::glVertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
    return gl::glVertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
    return gl::glVertex4sv(v);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4usv(index, v);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexPointer(size, type, stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glViewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
    return gl::glWindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
    return gl::glWindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
    return gl::glWindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
    return gl::glWindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
    return gl::glWindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
    return gl::glWindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
    return gl::glWindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
    return gl::glWindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
    return gl::glWindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
    return gl::glWindowPos3sv(v);
}


} // namespace gl21
