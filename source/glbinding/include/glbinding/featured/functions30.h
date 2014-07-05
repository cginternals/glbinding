#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl30.h>

#include <glbinding/FunctionObjects.h>


namespace gl30
{

using namespace gl;


inline void glAccum(gl30::GLenum op, GLfloat value)
{
   	return FunctionObjects::Accum(static_cast<gl::GLenum>(op), value);
}

inline void glActiveTexture(gl30::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glAlphaFunc(gl30::GLenum func, GLfloat ref)
{
   	return FunctionObjects::AlphaFunc(static_cast<gl::GLenum>(func), ref);
}

inline void glAlphaFuncx(gl30::GLenum func, GLfixed ref)
{
   	return FunctionObjects::AlphaFuncx(static_cast<gl::GLenum>(func), ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
   	return FunctionObjects::AreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
   	return FunctionObjects::ArrayElement(i);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::AttachShader(program, shader);
}

inline void glBegin(gl30::GLenum mode)
{
   	return FunctionObjects::Begin(static_cast<gl::GLenum>(mode));
}

inline void glBeginConditionalRender(GLuint id, gl30::GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, static_cast<gl::GLenum>(mode));
}

inline void glBeginQuery(gl30::GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(static_cast<gl::GLenum>(target), id);
}

inline void glBeginTransformFeedback(gl30::GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(static_cast<gl::GLenum>(primitiveMode));
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(gl30::GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(static_cast<gl::GLenum>(target), buffer);
}

inline void glBindBufferBase(gl30::GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(static_cast<gl::GLenum>(target), index, buffer);
}

inline void glBindBufferRange(gl30::GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(static_cast<gl::GLenum>(target), index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFramebuffer(gl30::GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(static_cast<gl::GLenum>(target), framebuffer);
}

inline void glBindRenderbuffer(gl30::GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(static_cast<gl::GLenum>(target), renderbuffer);
}

inline void glBindTexture(gl30::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(static_cast<gl::GLenum>(target), texture);
}

inline void glBindVertexArray(GLuint array)
{
   	return FunctionObjects::BindVertexArray(array);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
   	return FunctionObjects::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl30::GLenum mode)
{
   	return FunctionObjects::BlendEquation(static_cast<gl::GLenum>(mode));
}

inline void glBlendEquationSeparate(gl30::GLenum modeRGB, gl30::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendFunc(gl30::GLenum sfactor, gl30::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(static_cast<gl::GLenum>(sfactor), static_cast<gl::GLenum>(dfactor));
}

inline void glBlendFuncSeparate(gl30::GLenum sfactorRGB, gl30::GLenum dfactorRGB, gl30::GLenum sfactorAlpha, gl30::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(static_cast<gl::GLenum>(sfactorRGB), static_cast<gl::GLenum>(dfactorRGB), static_cast<gl::GLenum>(sfactorAlpha), static_cast<gl::GLenum>(dfactorAlpha));
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, gl30::GLbitfield mask, gl30::GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::GLbitfield>(mask), static_cast<gl::GLenum>(filter));
}

inline void glBufferData(gl30::GLenum target, GLsizeiptr size, const void * data, gl30::GLenum usage)
{
   	return FunctionObjects::BufferData(static_cast<gl::GLenum>(target), size, data, static_cast<gl::GLenum>(usage));
}

inline void glBufferSubData(gl30::GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glCallList(GLuint list)
{
   	return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, gl30::GLenum type, const void * lists)
{
   	return FunctionObjects::CallLists(n, static_cast<gl::GLenum>(type), lists);
}

inline GLenum glCheckFramebufferStatus(gl30::GLenum target)
{
   	return static_cast<gl30::GLenum>(FunctionObjects::CheckFramebufferStatus(static_cast<gl::GLenum>(target)));
}

inline void glClampColor(gl30::GLenum target, gl30::GLenum clamp)
{
   	return FunctionObjects::ClampColor(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(clamp));
}

inline void glClear(gl30::GLbitfield mask)
{
   	return FunctionObjects::Clear(static_cast<gl::GLbitfield>(mask));
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearBufferfi(gl30::GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(static_cast<gl::GLenum>(buffer), drawbuffer, depth, stencil);
}

inline void glClearBufferfv(gl30::GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferiv(gl30::GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferuiv(gl30::GLenum buffer, GLint drawbuffer, const GLuint * value)
{
   	return FunctionObjects::ClearBufferuiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::ClearColorx(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
   	return FunctionObjects::ClearDepth(depth);
}

inline void glClearDepthx(GLfixed depth)
{
   	return FunctionObjects::ClearDepthx(depth);
}

inline void glClearIndex(GLfloat c)
{
   	return FunctionObjects::ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline void glClientActiveTexture(gl30::GLenum texture)
{
   	return FunctionObjects::ClientActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glClipPlane(gl30::GLenum plane, const GLdouble * equation)
{
   	return FunctionObjects::ClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glClipPlanef(gl30::GLenum p, const GLfloat * eqn)
{
   	return FunctionObjects::ClipPlanef(static_cast<gl::GLenum>(p), eqn);
}

inline void glClipPlanex(gl30::GLenum plane, const GLfixed * equation)
{
   	return FunctionObjects::ClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
   	return FunctionObjects::Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
   	return FunctionObjects::Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
   	return FunctionObjects::Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
   	return FunctionObjects::Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
   	return FunctionObjects::Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
   	return FunctionObjects::Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
   	return FunctionObjects::Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
   	return FunctionObjects::Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
   	return FunctionObjects::Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
   	return FunctionObjects::Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
   	return FunctionObjects::Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
   	return FunctionObjects::Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
   	return FunctionObjects::Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
   	return FunctionObjects::Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
   	return FunctionObjects::Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
   	return FunctionObjects::Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
   	return FunctionObjects::Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
   	return FunctionObjects::Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
   	return FunctionObjects::Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
   	return FunctionObjects::Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
   	return FunctionObjects::Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
   	return FunctionObjects::Color4usv(v);
}

inline void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
   	return FunctionObjects::Color4x(red, green, blue, alpha);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
   	return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
   	return FunctionObjects::ColorMaski(index, r, g, b, a);
}

inline void glColorMaterial(gl30::GLenum face, gl30::GLenum mode)
{
   	return FunctionObjects::ColorMaterial(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glColorPointer(GLint size, gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::ColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(gl30::GLenum target, GLint level, gl30::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl30::GLenum target, GLint level, gl30::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl30::GLenum target, GLint level, gl30::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl30::GLenum target, GLint level, GLint xoffset, GLsizei width, gl30::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage2D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl30::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage3D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl30::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl30::GLenum type)
{
   	return FunctionObjects::CopyPixels(x, y, width, height, static_cast<gl::GLenum>(type));
}

inline void glCopyTexImage1D(gl30::GLenum target, GLint level, gl30::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, border);
}

inline void glCopyTexImage2D(gl30::GLenum target, GLint level, gl30::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl30::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(gl30::GLenum type)
{
   	return FunctionObjects::CreateShader(static_cast<gl::GLenum>(type));
}

inline void glCullFace(gl30::GLenum mode)
{
   	return FunctionObjects::CullFace(static_cast<gl::GLenum>(mode));
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
   	return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
   	return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
   	return FunctionObjects::DeleteLists(list, range);
}

inline void glDeleteProgram(GLuint program)
{
   	return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
   	return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteShader(GLuint shader)
{
   	return FunctionObjects::DeleteShader(shader);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
   	return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(gl30::GLenum func)
{
   	return FunctionObjects::DepthFunc(static_cast<gl::GLenum>(func));
}

inline void glDepthMask(GLboolean flag)
{
   	return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
   	return FunctionObjects::DepthRange(near_, far_);
}

inline void glDepthRangex(GLfixed n, GLfixed f)
{
   	return FunctionObjects::DepthRangex(n, f);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::DetachShader(program, shader);
}

inline void glDisable(gl30::GLenum cap)
{
   	return FunctionObjects::Disable(static_cast<gl::GLenum>(cap));
}

inline void glDisableClientState(gl30::GLenum array)
{
   	return FunctionObjects::DisableClientState(static_cast<gl::GLenum>(array));
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(gl30::GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(static_cast<gl::GLenum>(target), index);
}

inline void glDrawArrays(gl30::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(static_cast<gl::GLenum>(mode), first, count);
}

inline void glDrawBuffer(gl30::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(static_cast<gl::GLenum>(mode));
}

inline void glDrawBuffers(GLsizei n, const gl30::GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, reinterpret_cast<const gl::GLenum *>(bufs));
}

inline void glDrawElements(gl30::GLenum mode, GLsizei count, gl30::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::DrawPixels(width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glDrawRangeElements(gl30::GLenum mode, GLuint start, GLuint end, GLsizei count, gl30::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices);
}

inline void glEdgeFlag(GLboolean flag)
{
   	return FunctionObjects::EdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
   	return FunctionObjects::EdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
   	return FunctionObjects::EdgeFlagv(flag);
}

inline void glEnable(gl30::GLenum cap)
{
   	return FunctionObjects::Enable(static_cast<gl::GLenum>(cap));
}

inline void glEnableClientState(gl30::GLenum array)
{
   	return FunctionObjects::EnableClientState(static_cast<gl::GLenum>(array));
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(gl30::GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(static_cast<gl::GLenum>(target), index);
}

inline void glEnd()
{
   	return FunctionObjects::End();
}

inline void glEndConditionalRender()
{
   	return FunctionObjects::EndConditionalRender();
}

inline void glEndList()
{
   	return FunctionObjects::EndList();
}

inline void glEndQuery(gl30::GLenum target)
{
   	return FunctionObjects::EndQuery(static_cast<gl::GLenum>(target));
}

inline void glEndTransformFeedback()
{
   	return FunctionObjects::EndTransformFeedback();
}

inline void glEvalCoord1d(GLdouble u)
{
   	return FunctionObjects::EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
   	return FunctionObjects::EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
   	return FunctionObjects::EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
   	return FunctionObjects::EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
   	return FunctionObjects::EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
   	return FunctionObjects::EvalCoord2fv(u);
}

inline void glEvalMesh1(gl30::GLenum mode, GLint i1, GLint i2)
{
   	return FunctionObjects::EvalMesh1(static_cast<gl::GLenum>(mode), i1, i2);
}

inline void glEvalMesh2(gl30::GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
   	return FunctionObjects::EvalMesh2(static_cast<gl::GLenum>(mode), i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
   	return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
   	return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, gl30::GLenum type, GLfloat * buffer)
{
   	return FunctionObjects::FeedbackBuffer(size, static_cast<gl::GLenum>(type), buffer);
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(gl30::GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(static_cast<gl::GLenum>(target), offset, length);
}

inline void glFogCoordPointer(gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::FogCoordPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
   	return FunctionObjects::FogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
   	return FunctionObjects::FogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
   	return FunctionObjects::FogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
   	return FunctionObjects::FogCoordfv(coord);
}

inline void glFogf(gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Fogf(static_cast<gl::GLenum>(pname), param);
}

inline void glFogfv(gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Fogfv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogi(gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::Fogi(static_cast<gl::GLenum>(pname), param);
}

inline void glFogiv(gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Fogiv(static_cast<gl::GLenum>(pname), params);
}

inline void glFogx(gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Fogx(static_cast<gl::GLenum>(pname), param);
}

inline void glFogxv(gl30::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Fogxv(static_cast<gl::GLenum>(pname), param);
}

inline void glFramebufferRenderbuffer(gl30::GLenum target, gl30::GLenum attachment, gl30::GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(renderbuffertarget), renderbuffer);
}

inline void glFramebufferTexture1D(gl30::GLenum target, gl30::GLenum attachment, gl30::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture2D(gl30::GLenum target, gl30::GLenum attachment, gl30::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture3D(gl30::GLenum target, gl30::GLenum attachment, gl30::GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level, zoffset);
}

inline void glFramebufferTextureLayer(gl30::GLenum target, gl30::GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level, layer);
}

inline void glFrontFace(gl30::GLenum mode)
{
   	return FunctionObjects::FrontFace(static_cast<gl::GLenum>(mode));
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Frustum(left, right, bottom, top, zNear, zFar);
}

inline void glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Frustumf(l, r, b, t, n, f);
}

inline void glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Frustumx(l, r, b, t, n, f);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
   	return FunctionObjects::GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
   	return FunctionObjects::GenFramebuffers(n, framebuffers);
}

inline GLuint glGenLists(GLsizei range)
{
   	return FunctionObjects::GenLists(range);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
   	return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
   	return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(gl30::GLenum target)
{
   	return FunctionObjects::GenerateMipmap(static_cast<gl::GLenum>(target));
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl30::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl30::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(gl30::GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetBooleanv(gl30::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetBufferParameteriv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferPointerv(gl30::GLenum target, gl30::GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferSubData(gl30::GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glGetClipPlane(gl30::GLenum plane, GLdouble * equation)
{
   	return FunctionObjects::GetClipPlane(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanef(gl30::GLenum plane, GLfloat * equation)
{
   	return FunctionObjects::GetClipPlanef(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanex(gl30::GLenum plane, GLfixed * equation)
{
   	return FunctionObjects::GetClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetCompressedTexImage(gl30::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(static_cast<gl::GLenum>(target), level, img);
}

inline void glGetDoublev(gl30::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(static_cast<gl::GLenum>(pname), data);
}

inline GLenum glGetError()
{
   	return static_cast<gl30::GLenum>(FunctionObjects::GetError());
}

inline void glGetFixedv(gl30::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetFixedv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetFloatv(gl30::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(static_cast<gl::GLenum>(pname), data);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(gl30::GLenum target, gl30::GLenum attachment, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(pname), params);
}

inline void glGetIntegeri_v(gl30::GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetIntegerv(gl30::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetLightfv(gl30::GLenum light, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetLightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightiv(gl30::GLenum light, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetLightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetLightxv(gl30::GLenum light, gl30::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetLightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMapdv(gl30::GLenum target, gl30::GLenum query, GLdouble * v)
{
   	return FunctionObjects::GetMapdv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapfv(gl30::GLenum target, gl30::GLenum query, GLfloat * v)
{
   	return FunctionObjects::GetMapfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMapiv(gl30::GLenum target, gl30::GLenum query, GLint * v)
{
   	return FunctionObjects::GetMapiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(query), v);
}

inline void glGetMaterialfv(gl30::GLenum face, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetMaterialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialiv(gl30::GLenum face, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetMaterialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialxv(gl30::GLenum face, gl30::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetMaterialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetPixelMapfv(gl30::GLenum map, GLfloat * values)
{
   	return FunctionObjects::GetPixelMapfv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapuiv(gl30::GLenum map, GLuint * values)
{
   	return FunctionObjects::GetPixelMapuiv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPixelMapusv(gl30::GLenum map, GLushort * values)
{
   	return FunctionObjects::GetPixelMapusv(static_cast<gl::GLenum>(map), values);
}

inline void glGetPointerv(gl30::GLenum pname, void ** params)
{
   	return FunctionObjects::GetPointerv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
   	return FunctionObjects::GetPolygonStipple(mask);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectiv(GLuint id, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectuiv(GLuint id, gl30::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryiv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetRenderbufferParameteriv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, static_cast<gl::GLenum>(pname), params);
}

inline const GLubyte * glGetString(gl30::GLenum name)
{
   	return FunctionObjects::GetString(static_cast<gl::GLenum>(name));
}

inline const GLubyte * glGetStringi(gl30::GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(static_cast<gl::GLenum>(name), index);
}

inline void glGetTexEnvfv(gl30::GLenum target, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnviv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexEnvxv(gl30::GLenum target, gl30::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGendv(gl30::GLenum coord, gl30::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetTexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGenfv(gl30::GLenum coord, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexGeniv(gl30::GLenum coord, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexImage(gl30::GLenum target, GLint level, gl30::GLenum format, gl30::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glGetTexLevelParameterfv(gl30::GLenum target, GLint level, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexLevelParameteriv(gl30::GLenum target, GLint level, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIiv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIuiv(gl30::GLenum target, gl30::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterfv(gl30::GLenum target, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameteriv(gl30::GLenum target, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterxv(gl30::GLenum target, gl30::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, gl30::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetUniformLocation(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
   	return FunctionObjects::GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
   	return FunctionObjects::GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribIuiv(GLuint index, gl30::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribPointerv(GLuint index, gl30::GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, static_cast<gl::GLenum>(pname), pointer);
}

inline void glGetVertexAttribdv(GLuint index, gl30::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribfv(GLuint index, gl30::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribiv(GLuint index, gl30::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glHint(gl30::GLenum target, gl30::GLenum mode)
{
   	return FunctionObjects::Hint(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(mode));
}

inline void glIndexMask(GLuint mask)
{
   	return FunctionObjects::IndexMask(mask);
}

inline void glIndexPointer(gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::IndexPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glIndexd(GLdouble c)
{
   	return FunctionObjects::Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
   	return FunctionObjects::Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
   	return FunctionObjects::Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
   	return FunctionObjects::Indexfv(c);
}

inline void glIndexi(GLint c)
{
   	return FunctionObjects::Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
   	return FunctionObjects::Indexiv(c);
}

inline void glIndexs(GLshort c)
{
   	return FunctionObjects::Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
   	return FunctionObjects::Indexsv(c);
}

inline void glIndexub(GLubyte c)
{
   	return FunctionObjects::Indexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
   	return FunctionObjects::Indexubv(c);
}

inline void glInitNames()
{
   	return FunctionObjects::InitNames();
}

inline void glInterleavedArrays(gl30::GLenum format, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::InterleavedArrays(static_cast<gl::GLenum>(format), stride, pointer);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(gl30::GLenum cap)
{
   	return FunctionObjects::IsEnabled(static_cast<gl::GLenum>(cap));
}

inline GLboolean glIsEnabledi(gl30::GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(static_cast<gl::GLenum>(target), index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
   	return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsList(GLuint list)
{
   	return FunctionObjects::IsList(list);
}

inline GLboolean glIsProgram(GLuint program)
{
   	return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
   	return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   	return FunctionObjects::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsShader(GLuint shader)
{
   	return FunctionObjects::IsShader(shader);
}

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline GLboolean glIsVertexArray(GLuint array)
{
   	return FunctionObjects::IsVertexArray(array);
}

inline void glLightModelf(gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::LightModelf(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelfv(gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::LightModelfv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModeli(gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::LightModeli(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModeliv(gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::LightModeliv(static_cast<gl::GLenum>(pname), params);
}

inline void glLightModelx(gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::LightModelx(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelxv(gl30::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::LightModelxv(static_cast<gl::GLenum>(pname), param);
}

inline void glLightf(gl30::GLenum light, gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Lightf(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightfv(gl30::GLenum light, gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Lightfv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLighti(gl30::GLenum light, gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::Lighti(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightiv(gl30::GLenum light, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Lightiv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLightx(gl30::GLenum light, gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Lightx(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightxv(gl30::GLenum light, gl30::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::Lightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
   	return FunctionObjects::LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
   	return FunctionObjects::LineWidth(width);
}

inline void glLineWidthx(GLfixed width)
{
   	return FunctionObjects::LineWidthx(width);
}

inline void glLinkProgram(GLuint program)
{
   	return FunctionObjects::LinkProgram(program);
}

inline void glListBase(GLuint base)
{
   	return FunctionObjects::ListBase(base);
}

inline void glLoadIdentity()
{
   	return FunctionObjects::LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadMatrixf(m);
}

inline void glLoadMatrixx(const GLfixed * m)
{
   	return FunctionObjects::LoadMatrixx(m);
}

inline void glLoadName(GLuint name)
{
   	return FunctionObjects::LoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::LoadTransposeMatrixf(m);
}

inline void glLogicOp(gl30::GLenum opcode)
{
   	return FunctionObjects::LogicOp(static_cast<gl::GLenum>(opcode));
}

inline void glMap1d(gl30::GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
   	return FunctionObjects::Map1d(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap1f(gl30::GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
   	return FunctionObjects::Map1f(static_cast<gl::GLenum>(target), u1, u2, stride, order, points);
}

inline void glMap2d(gl30::GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
   	return FunctionObjects::Map2d(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(gl30::GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
   	return FunctionObjects::Map2f(static_cast<gl::GLenum>(target), u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(gl30::GLenum target, gl30::GLenum access)
{
   	return FunctionObjects::MapBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(access));
}

inline void * glMapBufferRange(gl30::GLenum target, GLintptr offset, GLsizeiptr length, gl30::GLbitfield access)
{
   	return FunctionObjects::MapBufferRange(static_cast<gl::GLenum>(target), offset, length, static_cast<gl::GLbitfield>(access));
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
   	return FunctionObjects::MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
   	return FunctionObjects::MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(gl30::GLenum face, gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::Materialf(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialfv(gl30::GLenum face, gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Materialfv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMateriali(gl30::GLenum face, gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::Materiali(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialiv(gl30::GLenum face, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::Materialiv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glMaterialx(gl30::GLenum face, gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Materialx(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialxv(gl30::GLenum face, gl30::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Materialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMatrixMode(gl30::GLenum mode)
{
   	return FunctionObjects::MatrixMode(static_cast<gl::GLenum>(mode));
}

inline void glMultMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultMatrixf(m);
}

inline void glMultMatrixx(const GLfixed * m)
{
   	return FunctionObjects::MultMatrixx(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
   	return FunctionObjects::MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
   	return FunctionObjects::MultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(gl30::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(static_cast<gl::GLenum>(mode), first, count, drawcount);
}

inline void glMultiDrawElements(gl30::GLenum mode, const GLsizei * count, gl30::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount);
}

inline void glMultiTexCoord1d(gl30::GLenum target, GLdouble s)
{
   	return FunctionObjects::MultiTexCoord1d(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1dv(gl30::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord1dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1f(gl30::GLenum target, GLfloat s)
{
   	return FunctionObjects::MultiTexCoord1f(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1fv(gl30::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord1fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1i(gl30::GLenum target, GLint s)
{
   	return FunctionObjects::MultiTexCoord1i(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1iv(gl30::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord1iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord1s(gl30::GLenum target, GLshort s)
{
   	return FunctionObjects::MultiTexCoord1s(static_cast<gl::GLenum>(target), s);
}

inline void glMultiTexCoord1sv(gl30::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord1sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2d(gl30::GLenum target, GLdouble s, GLdouble t)
{
   	return FunctionObjects::MultiTexCoord2d(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2dv(gl30::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord2dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2f(gl30::GLenum target, GLfloat s, GLfloat t)
{
   	return FunctionObjects::MultiTexCoord2f(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2fv(gl30::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord2fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2i(gl30::GLenum target, GLint s, GLint t)
{
   	return FunctionObjects::MultiTexCoord2i(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2iv(gl30::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord2iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord2s(gl30::GLenum target, GLshort s, GLshort t)
{
   	return FunctionObjects::MultiTexCoord2s(static_cast<gl::GLenum>(target), s, t);
}

inline void glMultiTexCoord2sv(gl30::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord2sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3d(gl30::GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::MultiTexCoord3d(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3dv(gl30::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord3dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3f(gl30::GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::MultiTexCoord3f(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3fv(gl30::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord3fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3i(gl30::GLenum target, GLint s, GLint t, GLint r)
{
   	return FunctionObjects::MultiTexCoord3i(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3iv(gl30::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord3iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord3s(gl30::GLenum target, GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::MultiTexCoord3s(static_cast<gl::GLenum>(target), s, t, r);
}

inline void glMultiTexCoord3sv(gl30::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord3sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4d(gl30::GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::MultiTexCoord4d(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4dv(gl30::GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord4dv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4f(gl30::GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::MultiTexCoord4f(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4fv(gl30::GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord4fv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4i(gl30::GLenum target, GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::MultiTexCoord4i(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4iv(gl30::GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord4iv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4s(gl30::GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::MultiTexCoord4s(static_cast<gl::GLenum>(target), s, t, r, q);
}

inline void glMultiTexCoord4sv(gl30::GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord4sv(static_cast<gl::GLenum>(target), v);
}

inline void glMultiTexCoord4x(gl30::GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
   	return FunctionObjects::MultiTexCoord4x(static_cast<gl::GLenum>(texture), s, t, r, q);
}

inline void glNewList(GLuint list, gl30::GLenum mode)
{
   	return FunctionObjects::NewList(list, static_cast<gl::GLenum>(mode));
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
   	return FunctionObjects::Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
   	return FunctionObjects::Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
   	return FunctionObjects::Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
   	return FunctionObjects::Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
   	return FunctionObjects::Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
   	return FunctionObjects::Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
   	return FunctionObjects::Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
   	return FunctionObjects::Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
   	return FunctionObjects::Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
   	return FunctionObjects::Normal3sv(v);
}

inline void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
   	return FunctionObjects::Normal3x(nx, ny, nz);
}

inline void glNormalPointer(gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::NormalPointer(static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
   	return FunctionObjects::Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Orthof(l, r, b, t, n, f);
}

inline void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Orthox(l, r, b, t, n, f);
}

inline void glPassThrough(GLfloat token)
{
   	return FunctionObjects::PassThrough(token);
}

inline void glPixelMapfv(gl30::GLenum map, GLsizei mapsize, const GLfloat * values)
{
   	return FunctionObjects::PixelMapfv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapuiv(gl30::GLenum map, GLsizei mapsize, const GLuint * values)
{
   	return FunctionObjects::PixelMapuiv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelMapusv(gl30::GLenum map, GLsizei mapsize, const GLushort * values)
{
   	return FunctionObjects::PixelMapusv(static_cast<gl::GLenum>(map), mapsize, values);
}

inline void glPixelStoref(gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelStorei(gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferf(gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelTransferf(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelTransferi(gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelTransferi(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
   	return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterfv(gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameteri(gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameteriv(gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameterx(gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::PointParameterx(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterxv(gl30::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::PointParameterxv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPointSizex(GLfixed size)
{
   	return FunctionObjects::PointSizex(size);
}

inline void glPolygonMode(gl30::GLenum face, gl30::GLenum mode)
{
   	return FunctionObjects::PolygonMode(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(mode));
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
   	return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
   	return FunctionObjects::PolygonOffsetx(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
   	return FunctionObjects::PolygonStipple(mask);
}

inline void glPopAttrib()
{
   	return FunctionObjects::PopAttrib();
}

inline void glPopClientAttrib()
{
   	return FunctionObjects::PopClientAttrib();
}

inline void glPopMatrix()
{
   	return FunctionObjects::PopMatrix();
}

inline void glPopName()
{
   	return FunctionObjects::PopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
   	return FunctionObjects::PrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(gl30::GLbitfield mask)
{
   	return FunctionObjects::PushAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushClientAttrib(gl30::GLbitfield mask)
{
   	return FunctionObjects::PushClientAttrib(static_cast<gl::GLbitfield>(mask));
}

inline void glPushMatrix()
{
   	return FunctionObjects::PushMatrix();
}

inline void glPushName(GLuint name)
{
   	return FunctionObjects::PushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
   	return FunctionObjects::RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
   	return FunctionObjects::RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
   	return FunctionObjects::RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
   	return FunctionObjects::RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
   	return FunctionObjects::RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
   	return FunctionObjects::RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
   	return FunctionObjects::RasterPos4sv(v);
}

inline void glReadBuffer(gl30::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(static_cast<gl::GLenum>(mode));
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl30::GLenum format, gl30::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
   	return FunctionObjects::Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
   	return FunctionObjects::Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
   	return FunctionObjects::Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
   	return FunctionObjects::Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
   	return FunctionObjects::Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
   	return FunctionObjects::Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
   	return FunctionObjects::Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
   	return FunctionObjects::Rectsv(v1, v2);
}

inline GLint glRenderMode(gl30::GLenum mode)
{
   	return FunctionObjects::RenderMode(static_cast<gl::GLenum>(mode));
}

inline void glRenderbufferStorage(gl30::GLenum target, gl30::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glRenderbufferStorageMultisample(gl30::GLenum target, GLsizei samples, gl30::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Rotatef(angle, x, y, z);
}

inline void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Rotatex(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
   	return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleCoveragex(GLclampx value, GLboolean invert)
{
   	return FunctionObjects::SampleCoveragex(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Scalef(x, y, z);
}

inline void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Scalex(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
   	return FunctionObjects::SecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
   	return FunctionObjects::SecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
   	return FunctionObjects::SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
   	return FunctionObjects::SecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
   	return FunctionObjects::SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
   	return FunctionObjects::SecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
   	return FunctionObjects::SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
   	return FunctionObjects::SecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
   	return FunctionObjects::SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
   	return FunctionObjects::SecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
   	return FunctionObjects::SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
   	return FunctionObjects::SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
   	return FunctionObjects::SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
   	return FunctionObjects::SecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
   	return FunctionObjects::SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
   	return FunctionObjects::SecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::SecondaryColorPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
   	return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(gl30::GLenum mode)
{
   	return FunctionObjects::ShadeModel(static_cast<gl::GLenum>(mode));
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glStencilFunc(gl30::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilFuncSeparate(gl30::GLenum face, gl30::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(gl30::GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(static_cast<gl::GLenum>(face), mask);
}

inline void glStencilOp(gl30::GLenum fail, gl30::GLenum zfail, gl30::GLenum zpass)
{
   	return FunctionObjects::StencilOp(static_cast<gl::GLenum>(fail), static_cast<gl::GLenum>(zfail), static_cast<gl::GLenum>(zpass));
}

inline void glStencilOpSeparate(gl30::GLenum face, gl30::GLenum sfail, gl30::GLenum dpfail, gl30::GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(sfail), static_cast<gl::GLenum>(dpfail), static_cast<gl::GLenum>(dppass));
}

inline void glTexCoord1d(GLdouble s)
{
   	return FunctionObjects::TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
   	return FunctionObjects::TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
   	return FunctionObjects::TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
   	return FunctionObjects::TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
   	return FunctionObjects::TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
   	return FunctionObjects::TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
   	return FunctionObjects::TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
   	return FunctionObjects::TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
   	return FunctionObjects::TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
   	return FunctionObjects::TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
   	return FunctionObjects::TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
   	return FunctionObjects::TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
   	return FunctionObjects::TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
   	return FunctionObjects::TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
   	return FunctionObjects::TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
   	return FunctionObjects::TexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::TexCoordPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glTexEnvf(gl30::GLenum target, gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexEnvf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvfv(gl30::GLenum target, gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexEnvfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvi(gl30::GLenum target, gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::TexEnvi(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnviv(gl30::GLenum target, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexEnviv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexEnvx(gl30::GLenum target, gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexEnvx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvxv(gl30::GLenum target, gl30::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGend(gl30::GLenum coord, gl30::GLenum pname, GLdouble param)
{
   	return FunctionObjects::TexGend(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGendv(gl30::GLenum coord, gl30::GLenum pname, const GLdouble * params)
{
   	return FunctionObjects::TexGendv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGenf(gl30::GLenum coord, gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexGenf(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGenfv(gl30::GLenum coord, gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexGenfv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexGeni(gl30::GLenum coord, gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::TexGeni(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), param);
}

inline void glTexGeniv(gl30::GLenum coord, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexGeniv(static_cast<gl::GLenum>(coord), static_cast<gl::GLenum>(pname), params);
}

inline void glTexImage1D(gl30::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(static_cast<gl::GLenum>(target), level, internalformat, width, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2D(gl30::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(static_cast<gl::GLenum>(target), level, internalformat, width, height, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage3D(gl30::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(static_cast<gl::GLenum>(target), level, internalformat, width, height, depth, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexParameterIiv(gl30::GLenum target, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterIuiv(gl30::GLenum target, gl30::GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterf(gl30::GLenum target, gl30::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterfv(gl30::GLenum target, gl30::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameteri(gl30::GLenum target, gl30::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameteriv(gl30::GLenum target, gl30::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterx(gl30::GLenum target, gl30::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexParameterx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterxv(gl30::GLenum target, gl30::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexSubImage1D(gl30::GLenum target, GLint level, GLint xoffset, GLsizei width, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage2D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage3D(gl30::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl30::GLenum format, gl30::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, gl30::GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, static_cast<gl::GLenum>(bufferMode));
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Translatef(x, y, z);
}

inline void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Translatex(x, y, z);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
   	return FunctionObjects::Uniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
   	return FunctionObjects::Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
   	return FunctionObjects::Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform1uiv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::Uniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform2uiv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform3uiv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::Uniform4uiv(location, count, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x3fv(location, count, transpose, value);
}

inline GLboolean glUnmapBuffer(gl30::GLenum target)
{
   	return FunctionObjects::UnmapBuffer(static_cast<gl::GLenum>(target));
}

inline void glUseProgram(GLuint program)
{
   	return FunctionObjects::UseProgram(program);
}

inline void glValidateProgram(GLuint program)
{
   	return FunctionObjects::ValidateProgram(program);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
   	return FunctionObjects::Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
   	return FunctionObjects::Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
   	return FunctionObjects::Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
   	return FunctionObjects::Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
   	return FunctionObjects::Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
   	return FunctionObjects::Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
   	return FunctionObjects::Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
   	return FunctionObjects::Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
   	return FunctionObjects::Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
   	return FunctionObjects::Vertex4sv(v);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
   	return FunctionObjects::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
   	return FunctionObjects::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
   	return FunctionObjects::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
   	return FunctionObjects::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
   	return FunctionObjects::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
   	return FunctionObjects::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
   	return FunctionObjects::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttrib4usv(index, v);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
   	return FunctionObjects::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
   	return FunctionObjects::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
   	return FunctionObjects::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
   	return FunctionObjects::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
   	return FunctionObjects::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
   	return FunctionObjects::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
   	return FunctionObjects::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
   	return FunctionObjects::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
   	return FunctionObjects::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
   	return FunctionObjects::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
   	return FunctionObjects::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
   	return FunctionObjects::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
   	return FunctionObjects::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
   	return FunctionObjects::VertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribPointer(GLuint index, GLint size, gl30::GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, static_cast<gl::GLenum>(type), normalized, stride, pointer);
}

inline void glVertexPointer(GLint size, gl30::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexPointer(size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
   	return FunctionObjects::WindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
   	return FunctionObjects::WindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
   	return FunctionObjects::WindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
   	return FunctionObjects::WindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
   	return FunctionObjects::WindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::WindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
   	return FunctionObjects::WindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
   	return FunctionObjects::WindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
   	return FunctionObjects::WindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
   	return FunctionObjects::WindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
   	return FunctionObjects::WindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
   	return FunctionObjects::WindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
   	return FunctionObjects::WindowPos3sv(v);
}


} // namespace gl30
