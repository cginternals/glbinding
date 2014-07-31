#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl30
{

#include <glbinding/gl/types.inl>

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl30


#include <glbinding/FunctionObjects.h>

namespace gl30
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

inline void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::FunctionObjects::current().glAttachShader(program, shader);
}

inline void glBegin(GLenum mode)
{
    return glbinding::FunctionObjects::current().glBegin(mode);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::FunctionObjects::current().glBeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().glBeginQuery(target, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().glBeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glBindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glBindBuffer(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glBindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glBindBufferRange(target, index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glBindFragDataLocation(program, color, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().glBindFramebuffer(target, framebuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glBindRenderbuffer(target, renderbuffer);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().glBindTexture(target, texture);
}

inline void glBindVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().glBindVertexArray(array);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::FunctionObjects::current().glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glBlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return glbinding::FunctionObjects::current().glBlendEquation(mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().glBlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::FunctionObjects::current().glBlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::FunctionObjects::current().glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().glBufferData(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::FunctionObjects::current().glBufferSubData(target, offset, size, data);
}

inline void glCallList(GLuint list)
{
    return glbinding::FunctionObjects::current().glCallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::FunctionObjects::current().glCallLists(n, type, lists);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl30::GLenum>(glbinding::FunctionObjects::current().glCheckFramebufferStatus(target));
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::FunctionObjects::current().glClampColor(target, clamp);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::FunctionObjects::current().glClear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glClearAccum(red, green, blue, alpha);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::FunctionObjects::current().glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::FunctionObjects::current().glClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glClearBufferuiv(buffer, drawbuffer, value);
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

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::FunctionObjects::current().glColorMaski(index, r, g, b, a);
}

inline void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glColorPointer(size, type, stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().glCompileShader(shader);
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

inline GLuint glCreateProgram()
{
    return glbinding::FunctionObjects::current().glCreateProgram();
}

inline GLuint glCreateShader(GLenum type)
{
    return glbinding::FunctionObjects::current().glCreateShader(type);
}

inline void glCullFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().glCullFace(mode);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().glDeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().glDeleteFramebuffers(n, framebuffers);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::FunctionObjects::current().glDeleteLists(list, range);
}

inline void glDeleteProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().glDeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().glDeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().glDeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().glDeleteShader(shader);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().glDeleteTextures(n, textures);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::FunctionObjects::current().glDeleteVertexArrays(n, arrays);
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

inline void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::FunctionObjects::current().glDetachShader(program, shader);
}

inline void glDisable(GLenum cap)
{
    return glbinding::FunctionObjects::current().glDisable(cap);
}

inline void glDisableClientState(GLenum array)
{
    return glbinding::FunctionObjects::current().glDisableClientState(array);
}

inline void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableVertexAttribArray(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glDisablei(target, index);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawArrays(mode, first, count);
}

inline void glDrawBuffer(GLenum buf)
{
    return glbinding::FunctionObjects::current().glDrawBuffer(buf);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().glDrawBuffers(n, bufs);
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

inline void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glEnablei(target, index);
}

inline void glEnd()
{
    return glbinding::FunctionObjects::current().glEnd();
}

inline void glEndConditionalRender()
{
    return glbinding::FunctionObjects::current().glEndConditionalRender();
}

inline void glEndList()
{
    return glbinding::FunctionObjects::current().glEndList();
}

inline void glEndQuery(GLenum target)
{
    return glbinding::FunctionObjects::current().glEndQuery(target);
}

inline void glEndTransformFeedback()
{
    return glbinding::FunctionObjects::current().glEndTransformFeedback();
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

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().glFlushMappedBufferRange(target, offset, length);
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glFogCoordPointer(type, stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
    return glbinding::FunctionObjects::current().glFogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
    return glbinding::FunctionObjects::current().glFogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
    return glbinding::FunctionObjects::current().glFogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
    return glbinding::FunctionObjects::current().glFogCoordfv(coord);
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

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().glFrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glFrustum(left, right, bottom, top, zNear, zFar);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::FunctionObjects::current().glGenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().glGenFramebuffers(n, framebuffers);
}

inline GLuint glGenLists(GLsizei range)
{
    return glbinding::FunctionObjects::current().glGenLists(range);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().glGenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().glGenRenderbuffers(n, renderbuffers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().glGenTextures(n, textures);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::FunctionObjects::current().glGenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(GLenum target)
{
    return glbinding::FunctionObjects::current().glGenerateMipmap(target);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::FunctionObjects::current().glGetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetAttribLocation(program, name);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetBooleani_v(target, index, data);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetBooleanv(pname, data);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::FunctionObjects::current().glGetBufferSubData(target, offset, size, data);
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
    return static_cast<gl30::GLenum>(glbinding::FunctionObjects::current().glGetError());
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetFloatv(pname, data);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetIntegeri_v(target, index, data);
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

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().glGetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramiv(program, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetRenderbufferParameteriv(target, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::FunctionObjects::current().glGetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(GLenum name)
{
    return glbinding::FunctionObjects::current().glGetString(name);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::FunctionObjects::current().glGetStringi(name, index);
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

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameteriv(target, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetUniformLocation(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribiv(index, pname, params);
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

inline GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glIsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::FunctionObjects::current().glIsEnabled(cap);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glIsEnabledi(target, index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().glIsFramebuffer(framebuffer);
}

inline GLboolean glIsList(GLuint list)
{
    return glbinding::FunctionObjects::current().glIsList(list);
}

inline GLboolean glIsProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().glIsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glIsRenderbuffer(renderbuffer);
}

inline GLboolean glIsShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().glIsShader(shader);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return glbinding::FunctionObjects::current().glIsTexture(texture);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().glIsVertexArray(array);
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

inline void glLinkProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().glLinkProgram(program);
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

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().glMapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::FunctionObjects::current().glMapBufferRange(target, offset, length, access);
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

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawElements(mode, count, type, indices, drawcount);
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

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glPointParameteriv(pname, params);
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

inline void glReadBuffer(GLenum src)
{
    return glbinding::FunctionObjects::current().glReadBuffer(src);
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

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glRenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
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

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glSecondaryColorPointer(size, type, stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::FunctionObjects::current().glSelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
    return glbinding::FunctionObjects::current().glShadeModel(mode);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::FunctionObjects::current().glShaderSource(shader, count, string, length);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilMask(mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilMaskSeparate(face, mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::FunctionObjects::current().glStencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::FunctionObjects::current().glStencilOpSeparate(face, sfail, dpfail, dppass);
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

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glTexParameterIuiv(target, pname, params);
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

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glTranslated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTranslatef(x, y, z);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().glUniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().glUniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().glUniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform1uiv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().glUniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().glUniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().glUniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform2uiv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().glUniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().glUniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().glUniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform3uiv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().glUniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().glUniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().glUniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform4uiv(location, count, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4x3fv(location, count, transpose, value);
}

inline GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::FunctionObjects::current().glUnmapBuffer(target);
}

inline void glUseProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().glUseProgram(program);
}

inline void glValidateProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().glValidateProgram(program);
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

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4usv(index, v);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexPointer(size, type, stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glViewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glWindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glWindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glWindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glWindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glWindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glWindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glWindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glWindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3sv(v);
}


} // namespace gl30
