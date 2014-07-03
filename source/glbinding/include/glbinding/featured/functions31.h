#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/FunctionObjects.h>


namespace gl31
{

using namespace gl;

inline void glAccum(GLenum op, GLfloat value)
{
   	return FunctionObjects::Accum(op, value);
}

inline void glActiveTexture(GLenum texture)
{
   	return FunctionObjects::ActiveTexture(texture);
}

inline void glAlphaFunc(GLenum func, GLfloat ref)
{
   	return FunctionObjects::AlphaFunc(func, ref);
}

inline void glAlphaFuncx(GLenum func, GLfixed ref)
{
   	return FunctionObjects::AlphaFuncx(func, ref);
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

inline void glBegin(GLenum mode)
{
   	return FunctionObjects::Begin(mode);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(target, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(target, index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(target, framebuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(target, renderbuffer);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(target, texture);
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

inline void glBlendEquation(GLenum mode)
{
   	return FunctionObjects::BlendEquation(mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
   	return FunctionObjects::BufferData(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(target, offset, size, data);
}

inline void glCallList(GLuint list)
{
   	return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
   	return FunctionObjects::CallLists(n, type, lists);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
   	return FunctionObjects::CheckFramebufferStatus(target);
}

inline void glClampColor(GLenum target, GLenum clamp)
{
   	return FunctionObjects::ClampColor(target, clamp);
}

inline void glClear(GLbitfield mask)
{
   	return FunctionObjects::Clear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
   	return FunctionObjects::ClearBufferuiv(buffer, drawbuffer, value);
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

inline void glClientActiveTexture(GLenum texture)
{
   	return FunctionObjects::ClientActiveTexture(texture);
}

inline void glClipPlane(GLenum plane, const GLdouble * equation)
{
   	return FunctionObjects::ClipPlane(plane, equation);
}

inline void glClipPlanef(GLenum p, const GLfloat * eqn)
{
   	return FunctionObjects::ClipPlanef(p, eqn);
}

inline void glClipPlanex(GLenum plane, const GLfixed * equation)
{
   	return FunctionObjects::ClipPlanex(plane, equation);
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

inline void glColorMaterial(GLenum face, GLenum mode)
{
   	return FunctionObjects::ColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::ColorPointer(size, type, stride, pointer);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   	return FunctionObjects::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
   	return FunctionObjects::CopyPixels(x, y, width, height, type);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(GLenum type)
{
   	return FunctionObjects::CreateShader(type);
}

inline void glCullFace(GLenum mode)
{
   	return FunctionObjects::CullFace(mode);
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

inline void glDepthFunc(GLenum func)
{
   	return FunctionObjects::DepthFunc(func);
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

inline void glDisable(GLenum cap)
{
   	return FunctionObjects::Disable(cap);
}

inline void glDisableClientState(GLenum array)
{
   	return FunctionObjects::DisableClientState(array);
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(target, index);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(mode, first, count);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
   	return FunctionObjects::DrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawBuffer(GLenum mode)
{
   	return FunctionObjects::DrawBuffer(mode);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, bufs);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(mode, count, type, indices);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
   	return FunctionObjects::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::DrawPixels(width, height, format, type, pixels);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(mode, start, end, count, type, indices);
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

inline void glEnable(GLenum cap)
{
   	return FunctionObjects::Enable(cap);
}

inline void glEnableClientState(GLenum array)
{
   	return FunctionObjects::EnableClientState(array);
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(target, index);
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

inline void glEndQuery(GLenum target)
{
   	return FunctionObjects::EndQuery(target);
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

inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
   	return FunctionObjects::EvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
   	return FunctionObjects::EvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
   	return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
   	return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
   	return FunctionObjects::FeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(target, offset, length);
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::FogCoordPointer(type, stride, pointer);
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

inline void glFogf(GLenum pname, GLfloat param)
{
   	return FunctionObjects::Fogf(pname, param);
}

inline void glFogfv(GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Fogfv(pname, params);
}

inline void glFogi(GLenum pname, GLint param)
{
   	return FunctionObjects::Fogi(pname, param);
}

inline void glFogiv(GLenum pname, const GLint * params)
{
   	return FunctionObjects::Fogiv(pname, params);
}

inline void glFogx(GLenum pname, GLfixed param)
{
   	return FunctionObjects::Fogx(pname, param);
}

inline void glFogxv(GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Fogxv(pname, param);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(GLenum mode)
{
   	return FunctionObjects::FrontFace(mode);
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

inline void glGenerateMipmap(GLenum target)
{
   	return FunctionObjects::GenerateMipmap(target);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
   	return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
   	return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(target, index, data);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(pname, data);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(target, offset, size, data);
}

inline void glGetClipPlane(GLenum plane, GLdouble * equation)
{
   	return FunctionObjects::GetClipPlane(plane, equation);
}

inline void glGetClipPlanef(GLenum plane, GLfloat * equation)
{
   	return FunctionObjects::GetClipPlanef(plane, equation);
}

inline void glGetClipPlanex(GLenum plane, GLfixed * equation)
{
   	return FunctionObjects::GetClipPlanex(plane, equation);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(target, level, img);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(pname, data);
}

inline GLenum glGetError()
{
   	return FunctionObjects::GetError();
}

inline void glGetFixedv(GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetFixedv(pname, params);
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(pname, data);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(pname, data);
}

inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetLightfv(light, pname, params);
}

inline void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetLightiv(light, pname, params);
}

inline void glGetLightxv(GLenum light, GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetLightxv(light, pname, params);
}

inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
   	return FunctionObjects::GetMapdv(target, query, v);
}

inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
   	return FunctionObjects::GetMapfv(target, query, v);
}

inline void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
   	return FunctionObjects::GetMapiv(target, query, v);
}

inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetMaterialiv(face, pname, params);
}

inline void glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetMaterialxv(face, pname, params);
}

inline void glGetPixelMapfv(GLenum map, GLfloat * values)
{
   	return FunctionObjects::GetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(GLenum map, GLuint * values)
{
   	return FunctionObjects::GetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(GLenum map, GLushort * values)
{
   	return FunctionObjects::GetPixelMapusv(map, values);
}

inline void glGetPointerv(GLenum pname, void ** params)
{
   	return FunctionObjects::GetPointerv(pname, params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
   	return FunctionObjects::GetPolygonStipple(mask);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(target, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(GLenum name)
{
   	return FunctionObjects::GetString(name);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(name, index);
}

inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexEnviv(target, pname, params);
}

inline void glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexEnvxv(target, pname, params);
}

inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(target, pname, params);
}

inline void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexParameterxv(target, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
   	return FunctionObjects::GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
   	return FunctionObjects::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
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

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, pname, params);
}

inline void glHint(GLenum target, GLenum mode)
{
   	return FunctionObjects::Hint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
   	return FunctionObjects::IndexMask(mask);
}

inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::IndexPointer(type, stride, pointer);
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

inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::InterleavedArrays(format, stride, pointer);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
   	return FunctionObjects::IsEnabled(cap);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(target, index);
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

inline void glLightModelf(GLenum pname, GLfloat param)
{
   	return FunctionObjects::LightModelf(pname, param);
}

inline void glLightModelfv(GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::LightModelfv(pname, params);
}

inline void glLightModeli(GLenum pname, GLint param)
{
   	return FunctionObjects::LightModeli(pname, param);
}

inline void glLightModeliv(GLenum pname, const GLint * params)
{
   	return FunctionObjects::LightModeliv(pname, params);
}

inline void glLightModelx(GLenum pname, GLfixed param)
{
   	return FunctionObjects::LightModelx(pname, param);
}

inline void glLightModelxv(GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::LightModelxv(pname, param);
}

inline void glLightf(GLenum light, GLenum pname, GLfloat param)
{
   	return FunctionObjects::Lightf(light, pname, param);
}

inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Lightfv(light, pname, params);
}

inline void glLighti(GLenum light, GLenum pname, GLint param)
{
   	return FunctionObjects::Lighti(light, pname, param);
}

inline void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
   	return FunctionObjects::Lightiv(light, pname, params);
}

inline void glLightx(GLenum light, GLenum pname, GLfixed param)
{
   	return FunctionObjects::Lightx(light, pname, param);
}

inline void glLightxv(GLenum light, GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::Lightxv(light, pname, params);
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

inline void glLogicOp(GLenum opcode)
{
   	return FunctionObjects::LogicOp(opcode);
}

inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
   	return FunctionObjects::Map1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
   	return FunctionObjects::Map1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
   	return FunctionObjects::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
   	return FunctionObjects::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
   	return FunctionObjects::MapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
   	return FunctionObjects::MapBufferRange(target, offset, length, access);
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

inline void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
   	return FunctionObjects::Materialf(face, pname, param);
}

inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::Materialfv(face, pname, params);
}

inline void glMateriali(GLenum face, GLenum pname, GLint param)
{
   	return FunctionObjects::Materiali(face, pname, param);
}

inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
   	return FunctionObjects::Materialiv(face, pname, params);
}

inline void glMaterialx(GLenum face, GLenum pname, GLfixed param)
{
   	return FunctionObjects::Materialx(face, pname, param);
}

inline void glMaterialxv(GLenum face, GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Materialxv(face, pname, param);
}

inline void glMatrixMode(GLenum mode)
{
   	return FunctionObjects::MatrixMode(mode);
}

inline void glMemoryBarrierByRegion(GLbitfield barriers)
{
   	return FunctionObjects::MemoryBarrierByRegion(barriers);
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

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
   	return FunctionObjects::MultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
   	return FunctionObjects::MultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
   	return FunctionObjects::MultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
   	return FunctionObjects::MultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
   	return FunctionObjects::MultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
   	return FunctionObjects::MultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
   	return FunctionObjects::MultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
   	return FunctionObjects::MultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
   	return FunctionObjects::MultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
   	return FunctionObjects::MultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
   	return FunctionObjects::MultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
   	return FunctionObjects::MultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
   	return FunctionObjects::MultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
   	return FunctionObjects::MultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
   	return FunctionObjects::MultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
   	return FunctionObjects::MultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
   	return FunctionObjects::MultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
   	return FunctionObjects::MultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
   	return FunctionObjects::MultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
   	return FunctionObjects::MultiTexCoord4sv(target, v);
}

inline void glMultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
   	return FunctionObjects::MultiTexCoord4x(texture, s, t, r, q);
}

inline void glNewList(GLuint list, GLenum mode)
{
   	return FunctionObjects::NewList(list, mode);
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

inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::NormalPointer(type, stride, pointer);
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

inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
   	return FunctionObjects::PixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
   	return FunctionObjects::PixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
   	return FunctionObjects::PixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(pname, param);
}

inline void glPixelTransferf(GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelTransferf(pname, param);
}

inline void glPixelTransferi(GLenum pname, GLint param)
{
   	return FunctionObjects::PixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
   	return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(pname, params);
}

inline void glPointParameterx(GLenum pname, GLfixed param)
{
   	return FunctionObjects::PointParameterx(pname, param);
}

inline void glPointParameterxv(GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::PointParameterxv(pname, params);
}

inline void glPointSize(GLfloat size)
{
   	return FunctionObjects::PointSize(size);
}

inline void glPointSizex(GLfixed size)
{
   	return FunctionObjects::PointSizex(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
   	return FunctionObjects::PolygonMode(face, mode);
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

inline void glPrimitiveRestartIndex(GLuint index)
{
   	return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
   	return FunctionObjects::PrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(GLbitfield mask)
{
   	return FunctionObjects::PushAttrib(mask);
}

inline void glPushClientAttrib(GLbitfield mask)
{
   	return FunctionObjects::PushClientAttrib(mask);
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

inline void glReadBuffer(GLenum mode)
{
   	return FunctionObjects::ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, format, type, pixels);
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

inline GLint glRenderMode(GLenum mode)
{
   	return FunctionObjects::RenderMode(mode);
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
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

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::SecondaryColorPointer(size, type, stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
   	return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
   	return FunctionObjects::ShadeModel(mode);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(face, mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
   	return FunctionObjects::StencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
   	return FunctionObjects::TexBuffer(target, internalformat, buffer);
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

inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::TexCoordPointer(size, type, stride, pointer);
}

inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexEnvf(target, pname, param);
}

inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexEnvfv(target, pname, params);
}

inline void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
   	return FunctionObjects::TexEnvi(target, pname, param);
}

inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexEnviv(target, pname, params);
}

inline void glTexEnvx(GLenum target, GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexEnvx(target, pname, param);
}

inline void glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexEnvxv(target, pname, params);
}

inline void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
   	return FunctionObjects::TexGend(coord, pname, param);
}

inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
   	return FunctionObjects::TexGendv(coord, pname, params);
}

inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexGenf(coord, pname, param);
}

inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexGenfv(coord, pname, params);
}

inline void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
   	return FunctionObjects::TexGeni(coord, pname, param);
}

inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexGeniv(coord, pname, params);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(target, pname, params);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(target, pname, params);
}

inline void glTexParameterx(GLenum target, GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexParameterx(target, pname, param);
}

inline void glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexParameterxv(target, pname, params);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, bufferMode);
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

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
   	return FunctionObjects::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
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

inline GLboolean glUnmapBuffer(GLenum target)
{
   	return FunctionObjects::UnmapBuffer(target);
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

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexPointer(size, type, stride, pointer);
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


} // namespace gl31
