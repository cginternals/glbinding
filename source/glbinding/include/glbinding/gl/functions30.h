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
    return glbinding::FunctionObjects::current().Accum(op, value);
}

inline void glActiveTexture(GLenum texture)
{
    return glbinding::FunctionObjects::current().ActiveTexture(texture);
}

inline void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::FunctionObjects::current().AlphaFunc(func, ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().AreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
    return glbinding::FunctionObjects::current().ArrayElement(i);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::FunctionObjects::current().AttachShader(program, shader);
}

inline void glBegin(GLenum mode)
{
    return glbinding::FunctionObjects::current().Begin(mode);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::FunctionObjects::current().BeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BeginQuery(target, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().BeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::FunctionObjects::current().BindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::FunctionObjects::current().BindBuffer(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().BindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().BindBufferRange(target, index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::FunctionObjects::current().BindFragDataLocation(program, color, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().BindFramebuffer(target, framebuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().BindRenderbuffer(target, renderbuffer);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().BindTexture(target, texture);
}

inline void glBindVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().BindVertexArray(array);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::FunctionObjects::current().Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquation(mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::FunctionObjects::current().BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::FunctionObjects::current().BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().BufferData(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::FunctionObjects::current().BufferSubData(target, offset, size, data);
}

inline void glCallList(GLuint list)
{
    return glbinding::FunctionObjects::current().CallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::FunctionObjects::current().CallLists(n, type, lists);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl30::GLenum>(glbinding::FunctionObjects::current().CheckFramebufferStatus(target));
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::FunctionObjects::current().ClampColor(target, clamp);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::FunctionObjects::current().Clear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().ClearAccum(red, green, blue, alpha);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::FunctionObjects::current().ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::FunctionObjects::current().ClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return glbinding::FunctionObjects::current().ClearDepth(depth);
}

inline void glClearIndex(GLfloat c)
{
    return glbinding::FunctionObjects::current().ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
    return glbinding::FunctionObjects::current().ClearStencil(s);
}

inline void glClientActiveTexture(GLenum texture)
{
    return glbinding::FunctionObjects::current().ClientActiveTexture(texture);
}

inline void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::FunctionObjects::current().ClipPlane(plane, equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::FunctionObjects::current().Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::FunctionObjects::current().Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::FunctionObjects::current().Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::FunctionObjects::current().Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::FunctionObjects::current().Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::FunctionObjects::current().Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::FunctionObjects::current().Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().Color4usv(v);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::FunctionObjects::current().ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::FunctionObjects::current().ColorMaski(index, r, g, b, a);
}

inline void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().ColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().ColorPointer(size, type, stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().CompileShader(shader);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::FunctionObjects::current().CopyPixels(x, y, width, height, type);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
    return glbinding::FunctionObjects::current().CreateProgram();
}

inline GLuint glCreateShader(GLenum type)
{
    return glbinding::FunctionObjects::current().CreateShader(type);
}

inline void glCullFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().CullFace(mode);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::FunctionObjects::current().DeleteLists(list, range);
}

inline void glDeleteProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().DeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().DeleteShader(shader);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().DeleteTextures(n, textures);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::FunctionObjects::current().DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(GLenum func)
{
    return glbinding::FunctionObjects::current().DepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
    return glbinding::FunctionObjects::current().DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::FunctionObjects::current().DepthRange(near_, far_);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::FunctionObjects::current().DetachShader(program, shader);
}

inline void glDisable(GLenum cap)
{
    return glbinding::FunctionObjects::current().Disable(cap);
}

inline void glDisableClientState(GLenum array)
{
    return glbinding::FunctionObjects::current().DisableClientState(array);
}

inline void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::FunctionObjects::current().DisableVertexAttribArray(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().Disablei(target, index);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawArrays(mode, first, count);
}

inline void glDrawBuffer(GLenum mode)
{
    return glbinding::FunctionObjects::current().DrawBuffer(mode);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().DrawBuffers(n, bufs);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().DrawElements(mode, count, type, indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().DrawPixels(width, height, format, type, pixels);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().DrawRangeElements(mode, start, end, count, type, indices);
}

inline void glEdgeFlag(GLboolean flag)
{
    return glbinding::FunctionObjects::current().EdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().EdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::FunctionObjects::current().EdgeFlagv(flag);
}

inline void glEnable(GLenum cap)
{
    return glbinding::FunctionObjects::current().Enable(cap);
}

inline void glEnableClientState(GLenum array)
{
    return glbinding::FunctionObjects::current().EnableClientState(array);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::FunctionObjects::current().EnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().Enablei(target, index);
}

inline void glEnd()
{
    return glbinding::FunctionObjects::current().End();
}

inline void glEndConditionalRender()
{
    return glbinding::FunctionObjects::current().EndConditionalRender();
}

inline void glEndList()
{
    return glbinding::FunctionObjects::current().EndList();
}

inline void glEndQuery(GLenum target)
{
    return glbinding::FunctionObjects::current().EndQuery(target);
}

inline void glEndTransformFeedback()
{
    return glbinding::FunctionObjects::current().EndTransformFeedback();
}

inline void glEvalCoord1d(GLdouble u)
{
    return glbinding::FunctionObjects::current().EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
    return glbinding::FunctionObjects::current().EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
    return glbinding::FunctionObjects::current().EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
    return glbinding::FunctionObjects::current().EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return glbinding::FunctionObjects::current().EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
    return glbinding::FunctionObjects::current().EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return glbinding::FunctionObjects::current().EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
    return glbinding::FunctionObjects::current().EvalCoord2fv(u);
}

inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return glbinding::FunctionObjects::current().EvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return glbinding::FunctionObjects::current().EvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
    return glbinding::FunctionObjects::current().EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
    return glbinding::FunctionObjects::current().EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return glbinding::FunctionObjects::current().FeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
    return glbinding::FunctionObjects::current().Finish();
}

inline void glFlush()
{
    return glbinding::FunctionObjects::current().Flush();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().FlushMappedBufferRange(target, offset, length);
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().FogCoordPointer(type, stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
    return glbinding::FunctionObjects::current().FogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
    return glbinding::FunctionObjects::current().FogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
    return glbinding::FunctionObjects::current().FogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
    return glbinding::FunctionObjects::current().FogCoordfv(coord);
}

inline void glFogf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().Fogf(pname, param);
}

inline void glFogfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().Fogfv(pname, params);
}

inline void glFogi(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().Fogi(pname, param);
}

inline void glFogiv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().Fogiv(pname, params);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().FramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(GLenum mode)
{
    return glbinding::FunctionObjects::current().FrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().Frustum(left, right, bottom, top, zNear, zFar);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::FunctionObjects::current().GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().GenFramebuffers(n, framebuffers);
}

inline GLuint glGenLists(GLsizei range)
{
    return glbinding::FunctionObjects::current().GenLists(range);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().GenRenderbuffers(n, renderbuffers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().GenTextures(n, textures);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::FunctionObjects::current().GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(GLenum target)
{
    return glbinding::FunctionObjects::current().GenerateMipmap(target);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::FunctionObjects::current().GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetAttribLocation(program, name);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetBooleani_v(target, index, data);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetBooleanv(pname, data);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::FunctionObjects::current().GetBufferSubData(target, offset, size, data);
}

inline void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::FunctionObjects::current().GetClipPlane(plane, equation);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::FunctionObjects::current().GetCompressedTexImage(target, level, img);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::FunctionObjects::current().GetDoublev(pname, data);
}

inline GLenum glGetError()
{
    return static_cast<gl30::GLenum>(glbinding::FunctionObjects::current().GetError());
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetFloatv(pname, data);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::FunctionObjects::current().GetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::FunctionObjects::current().GetIntegerv(pname, data);
}

inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetLightfv(light, pname, params);
}

inline void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetLightiv(light, pname, params);
}

inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::FunctionObjects::current().GetMapdv(target, query, v);
}

inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::FunctionObjects::current().GetMapfv(target, query, v);
}

inline void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::FunctionObjects::current().GetMapiv(target, query, v);
}

inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMaterialiv(face, pname, params);
}

inline void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::FunctionObjects::current().GetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::FunctionObjects::current().GetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::FunctionObjects::current().GetPixelMapusv(map, values);
}

inline void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetPointerv(pname, params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::FunctionObjects::current().GetPolygonStipple(mask);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramiv(program, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetRenderbufferParameteriv(target, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::FunctionObjects::current().GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(GLenum name)
{
    return glbinding::FunctionObjects::current().GetString(name);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::FunctionObjects::current().GetStringi(name, index);
}

inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexEnviv(target, pname, params);
}

inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexParameteriv(target, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetUniformLocation(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::FunctionObjects::current().GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().GetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribiv(index, pname, params);
}

inline void glHint(GLenum target, GLenum mode)
{
    return glbinding::FunctionObjects::current().Hint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
    return glbinding::FunctionObjects::current().IndexMask(mask);
}

inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().IndexPointer(type, stride, pointer);
}

inline void glIndexd(GLdouble c)
{
    return glbinding::FunctionObjects::current().Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
    return glbinding::FunctionObjects::current().Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
    return glbinding::FunctionObjects::current().Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
    return glbinding::FunctionObjects::current().Indexfv(c);
}

inline void glIndexi(GLint c)
{
    return glbinding::FunctionObjects::current().Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
    return glbinding::FunctionObjects::current().Indexiv(c);
}

inline void glIndexs(GLshort c)
{
    return glbinding::FunctionObjects::current().Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
    return glbinding::FunctionObjects::current().Indexsv(c);
}

inline void glIndexub(GLubyte c)
{
    return glbinding::FunctionObjects::current().Indexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
    return glbinding::FunctionObjects::current().Indexubv(c);
}

inline void glInitNames()
{
    return glbinding::FunctionObjects::current().InitNames();
}

inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().InterleavedArrays(format, stride, pointer);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::FunctionObjects::current().IsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::FunctionObjects::current().IsEnabled(cap);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().IsEnabledi(target, index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().IsFramebuffer(framebuffer);
}

inline GLboolean glIsList(GLuint list)
{
    return glbinding::FunctionObjects::current().IsList(list);
}

inline GLboolean glIsProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().IsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
    return glbinding::FunctionObjects::current().IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().IsShader(shader);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return glbinding::FunctionObjects::current().IsTexture(texture);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().IsVertexArray(array);
}

inline void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().LightModelf(pname, param);
}

inline void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().LightModelfv(pname, params);
}

inline void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().LightModeli(pname, param);
}

inline void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().LightModeliv(pname, params);
}

inline void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().Lightf(light, pname, param);
}

inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().Lightfv(light, pname, params);
}

inline void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().Lighti(light, pname, param);
}

inline void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().Lightiv(light, pname, params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::FunctionObjects::current().LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
    return glbinding::FunctionObjects::current().LineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().LinkProgram(program);
}

inline void glListBase(GLuint base)
{
    return glbinding::FunctionObjects::current().ListBase(base);
}

inline void glLoadIdentity()
{
    return glbinding::FunctionObjects::current().LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().LoadMatrixf(m);
}

inline void glLoadName(GLuint name)
{
    return glbinding::FunctionObjects::current().LoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().LoadTransposeMatrixf(m);
}

inline void glLogicOp(GLenum opcode)
{
    return glbinding::FunctionObjects::current().LogicOp(opcode);
}

inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().Map1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().Map1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().MapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::FunctionObjects::current().MapBufferRange(target, offset, length, access);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::FunctionObjects::current().MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::FunctionObjects::current().MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::FunctionObjects::current().MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().Materialf(face, pname, param);
}

inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().Materialfv(face, pname, params);
}

inline void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().Materiali(face, pname, param);
}

inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().Materialiv(face, pname, params);
}

inline void glMatrixMode(GLenum mode)
{
    return glbinding::FunctionObjects::current().MatrixMode(mode);
}

inline void glMultMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MultMatrixf(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4sv(target, v);
}

inline void glNewList(GLuint list, GLenum mode)
{
    return glbinding::FunctionObjects::current().NewList(list, mode);
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::FunctionObjects::current().Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::FunctionObjects::current().Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::FunctionObjects::current().Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::FunctionObjects::current().Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::FunctionObjects::current().Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Normal3sv(v);
}

inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().NormalPointer(type, stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glPassThrough(GLfloat token)
{
    return glbinding::FunctionObjects::current().PassThrough(token);
}

inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::FunctionObjects::current().PixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::FunctionObjects::current().PixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::FunctionObjects::current().PixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PixelStorei(pname, param);
}

inline void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PixelTransferf(pname, param);
}

inline void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::FunctionObjects::current().PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().PointParameteriv(pname, params);
}

inline void glPointSize(GLfloat size)
{
    return glbinding::FunctionObjects::current().PointSize(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().PolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::FunctionObjects::current().PolygonOffset(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::FunctionObjects::current().PolygonStipple(mask);
}

inline void glPopAttrib()
{
    return glbinding::FunctionObjects::current().PopAttrib();
}

inline void glPopClientAttrib()
{
    return glbinding::FunctionObjects::current().PopClientAttrib();
}

inline void glPopMatrix()
{
    return glbinding::FunctionObjects::current().PopMatrix();
}

inline void glPopName()
{
    return glbinding::FunctionObjects::current().PopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::FunctionObjects::current().PrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(AttribMask mask)
{
    return glbinding::FunctionObjects::current().PushAttrib(mask);
}

inline void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().PushClientAttrib(mask);
}

inline void glPushMatrix()
{
    return glbinding::FunctionObjects::current().PushMatrix();
}

inline void glPushName(GLuint name)
{
    return glbinding::FunctionObjects::current().PushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().RasterPos4sv(v);
}

inline void glReadBuffer(GLenum mode)
{
    return glbinding::FunctionObjects::current().ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return glbinding::FunctionObjects::current().Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return glbinding::FunctionObjects::current().Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return glbinding::FunctionObjects::current().Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return glbinding::FunctionObjects::current().Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return glbinding::FunctionObjects::current().Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
    return glbinding::FunctionObjects::current().Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return glbinding::FunctionObjects::current().Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return glbinding::FunctionObjects::current().Rectsv(v1, v2);
}

inline GLint glRenderMode(GLenum mode)
{
    return glbinding::FunctionObjects::current().RenderMode(mode);
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Rotatef(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleCoverage(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Scalef(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().Scissor(x, y, width, height);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().SecondaryColorPointer(size, type, stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::FunctionObjects::current().SelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
    return glbinding::FunctionObjects::current().ShadeModel(mode);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::FunctionObjects::current().ShaderSource(shader, count, string, length);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilMask(mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilMaskSeparate(face, mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::FunctionObjects::current().StencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::FunctionObjects::current().StencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glTexCoord1d(GLdouble s)
{
    return glbinding::FunctionObjects::current().TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
    return glbinding::FunctionObjects::current().TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
    return glbinding::FunctionObjects::current().TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
    return glbinding::FunctionObjects::current().TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().TexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().TexCoordPointer(size, type, stride, pointer);
}

inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().TexEnvf(target, pname, param);
}

inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().TexEnvfv(target, pname, params);
}

inline void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().TexEnvi(target, pname, param);
}

inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TexEnviv(target, pname, params);
}

inline void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::FunctionObjects::current().TexGend(coord, pname, param);
}

inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().TexGendv(coord, pname, params);
}

inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().TexGenf(coord, pname, param);
}

inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().TexGenfv(coord, pname, params);
}

inline void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().TexGeni(coord, pname, param);
}

inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TexGeniv(coord, pname, params);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().TexParameterIuiv(target, pname, params);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().TexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().TexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().TexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TexParameteriv(target, pname, params);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Translatef(x, y, z);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().Uniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform1uiv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().Uniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform2uiv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform3uiv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform4uiv(location, count, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x3fv(location, count, transpose, value);
}

inline GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::FunctionObjects::current().UnmapBuffer(target);
}

inline void glUseProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().UseProgram(program);
}

inline void glValidateProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().ValidateProgram(program);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Vertex4sv(v);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4usv(index, v);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::FunctionObjects::current().VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::FunctionObjects::current().VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::FunctionObjects::current().VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::FunctionObjects::current().VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexPointer(size, type, stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().Viewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().WindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().WindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().WindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().WindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().WindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().WindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().WindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().WindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos3sv(v);
}


} // namespace gl30
