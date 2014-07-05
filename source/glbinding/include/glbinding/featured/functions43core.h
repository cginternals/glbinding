#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl43core.h>

#include <glbinding/FunctionObjects.h>


namespace gl43core
{

using namespace gl;


inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
   	return FunctionObjects::ActiveShaderProgram(pipeline, program);
}

inline void glActiveTexture(gl43core::GLenum texture)
{
   	return FunctionObjects::ActiveTexture(static_cast<gl::GLenum>(texture));
}

inline void glAlphaFuncx(gl43core::GLenum func, GLfixed ref)
{
   	return FunctionObjects::AlphaFuncx(static_cast<gl::GLenum>(func), ref);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, gl43core::GLenum mode)
{
   	return FunctionObjects::BeginConditionalRender(id, static_cast<gl::GLenum>(mode));
}

inline void glBeginQuery(gl43core::GLenum target, GLuint id)
{
   	return FunctionObjects::BeginQuery(static_cast<gl::GLenum>(target), id);
}

inline void glBeginQueryIndexed(gl43core::GLenum target, GLuint index, GLuint id)
{
   	return FunctionObjects::BeginQueryIndexed(static_cast<gl::GLenum>(target), index, id);
}

inline void glBeginTransformFeedback(gl43core::GLenum primitiveMode)
{
   	return FunctionObjects::BeginTransformFeedback(static_cast<gl::GLenum>(primitiveMode));
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(gl43core::GLenum target, GLuint buffer)
{
   	return FunctionObjects::BindBuffer(static_cast<gl::GLenum>(target), buffer);
}

inline void glBindBufferBase(gl43core::GLenum target, GLuint index, GLuint buffer)
{
   	return FunctionObjects::BindBufferBase(static_cast<gl::GLenum>(target), index, buffer);
}

inline void glBindBufferRange(gl43core::GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::BindBufferRange(static_cast<gl::GLenum>(target), index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
   	return FunctionObjects::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(gl43core::GLenum target, GLuint framebuffer)
{
   	return FunctionObjects::BindFramebuffer(static_cast<gl::GLenum>(target), framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, gl43core::GLenum access, gl43core::GLenum format)
{
   	return FunctionObjects::BindImageTexture(unit, texture, level, layered, layer, static_cast<gl::GLenum>(access), static_cast<gl::GLenum>(format));
}

inline void glBindProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::BindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(gl43core::GLenum target, GLuint renderbuffer)
{
   	return FunctionObjects::BindRenderbuffer(static_cast<gl::GLenum>(target), renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
   	return FunctionObjects::BindSampler(unit, sampler);
}

inline void glBindTexture(gl43core::GLenum target, GLuint texture)
{
   	return FunctionObjects::BindTexture(static_cast<gl::GLenum>(target), texture);
}

inline void glBindTransformFeedback(gl43core::GLenum target, GLuint id)
{
   	return FunctionObjects::BindTransformFeedback(static_cast<gl::GLenum>(target), id);
}

inline void glBindVertexArray(GLuint array)
{
   	return FunctionObjects::BindVertexArray(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
   	return FunctionObjects::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
   	return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(gl43core::GLenum mode)
{
   	return FunctionObjects::BlendEquation(static_cast<gl::GLenum>(mode));
}

inline void glBlendEquationSeparate(gl43core::GLenum modeRGB, gl43core::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparate(static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendEquationSeparatei(GLuint buf, gl43core::GLenum modeRGB, gl43core::GLenum modeAlpha)
{
   	return FunctionObjects::BlendEquationSeparatei(buf, static_cast<gl::GLenum>(modeRGB), static_cast<gl::GLenum>(modeAlpha));
}

inline void glBlendEquationi(GLuint buf, gl43core::GLenum mode)
{
   	return FunctionObjects::BlendEquationi(buf, static_cast<gl::GLenum>(mode));
}

inline void glBlendFunc(gl43core::GLenum sfactor, gl43core::GLenum dfactor)
{
   	return FunctionObjects::BlendFunc(static_cast<gl::GLenum>(sfactor), static_cast<gl::GLenum>(dfactor));
}

inline void glBlendFuncSeparate(gl43core::GLenum sfactorRGB, gl43core::GLenum dfactorRGB, gl43core::GLenum sfactorAlpha, gl43core::GLenum dfactorAlpha)
{
   	return FunctionObjects::BlendFuncSeparate(static_cast<gl::GLenum>(sfactorRGB), static_cast<gl::GLenum>(dfactorRGB), static_cast<gl::GLenum>(sfactorAlpha), static_cast<gl::GLenum>(dfactorAlpha));
}

inline void glBlendFuncSeparatei(GLuint buf, gl43core::GLenum srcRGB, gl43core::GLenum dstRGB, gl43core::GLenum srcAlpha, gl43core::GLenum dstAlpha)
{
   	return FunctionObjects::BlendFuncSeparatei(buf, static_cast<gl::GLenum>(srcRGB), static_cast<gl::GLenum>(dstRGB), static_cast<gl::GLenum>(srcAlpha), static_cast<gl::GLenum>(dstAlpha));
}

inline void glBlendFunci(GLuint buf, gl43core::GLenum src, gl43core::GLenum dst)
{
   	return FunctionObjects::BlendFunci(buf, static_cast<gl::GLenum>(src), static_cast<gl::GLenum>(dst));
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, gl43core::GLbitfield mask, gl43core::GLenum filter)
{
   	return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, static_cast<gl::GLbitfield>(mask), static_cast<gl::GLenum>(filter));
}

inline void glBufferData(gl43core::GLenum target, GLsizeiptr size, const void * data, gl43core::GLenum usage)
{
   	return FunctionObjects::BufferData(static_cast<gl::GLenum>(target), size, data, static_cast<gl::GLenum>(usage));
}

inline void glBufferSubData(gl43core::GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
   	return FunctionObjects::BufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline GLenum glCheckFramebufferStatus(gl43core::GLenum target)
{
   	return static_cast<gl43core::GLenum>(FunctionObjects::CheckFramebufferStatus(static_cast<gl::GLenum>(target)));
}

inline void glClampColor(gl43core::GLenum target, gl43core::GLenum clamp)
{
   	return FunctionObjects::ClampColor(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(clamp));
}

inline void glClear(gl43core::GLbitfield mask)
{
   	return FunctionObjects::Clear(static_cast<gl::GLbitfield>(mask));
}

inline void glClearBufferData(gl43core::GLenum target, gl43core::GLenum internalformat, gl43core::GLenum format, gl43core::GLenum type, const void * data)
{
   	return FunctionObjects::ClearBufferData(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), data);
}

inline void glClearBufferSubData(gl43core::GLenum target, gl43core::GLenum internalformat, GLintptr offset, GLsizeiptr size, gl43core::GLenum format, gl43core::GLenum type, const void * data)
{
   	return FunctionObjects::ClearBufferSubData(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), offset, size, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), data);
}

inline void glClearBufferfi(gl43core::GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   	return FunctionObjects::ClearBufferfi(static_cast<gl::GLenum>(buffer), drawbuffer, depth, stencil);
}

inline void glClearBufferfv(gl43core::GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
   	return FunctionObjects::ClearBufferfv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferiv(gl43core::GLenum buffer, GLint drawbuffer, const GLint * value)
{
   	return FunctionObjects::ClearBufferiv(static_cast<gl::GLenum>(buffer), drawbuffer, value);
}

inline void glClearBufferuiv(gl43core::GLenum buffer, GLint drawbuffer, const GLuint * value)
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

inline void glClearDepthf(GLfloat d)
{
   	return FunctionObjects::ClearDepthf(d);
}

inline void glClearDepthx(GLfixed depth)
{
   	return FunctionObjects::ClearDepthx(depth);
}

inline void glClearStencil(GLint s)
{
   	return FunctionObjects::ClearStencil(s);
}

inline GLenum glClientWaitSync(GLsync sync, gl43core::GLbitfield flags, GLuint64 timeout)
{
   	return static_cast<gl43core::GLenum>(FunctionObjects::ClientWaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout));
}

inline void glClipPlanef(gl43core::GLenum p, const GLfloat * eqn)
{
   	return FunctionObjects::ClipPlanef(static_cast<gl::GLenum>(p), eqn);
}

inline void glClipPlanex(gl43core::GLenum plane, const GLfixed * equation)
{
   	return FunctionObjects::ClipPlanex(static_cast<gl::GLenum>(plane), equation);
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

inline void glColorP3ui(gl43core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP3uiv(gl43core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4ui(gl43core::GLenum type, GLuint color)
{
   	return FunctionObjects::ColorP4ui(static_cast<gl::GLenum>(type), color);
}

inline void glColorP4uiv(gl43core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::ColorP4uiv(static_cast<gl::GLenum>(type), color);
}

inline void glCompileShader(GLuint shader)
{
   	return FunctionObjects::CompileShader(shader);
}

inline void glCompressedTexImage1D(gl43core::GLenum target, GLint level, gl43core::GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, border, imageSize, data);
}

inline void glCompressedTexImage2D(gl43core::GLenum target, GLint level, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(gl43core::GLenum target, GLint level, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexImage3D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(gl43core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl43core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage2D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl43core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCompressedTexSubImage3D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl43core::GLenum format, GLsizei imageSize, const void * data)
{
   	return FunctionObjects::CompressedTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), imageSize, data);
}

inline void glCopyBufferSubData(gl43core::GLenum readTarget, gl43core::GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   	return FunctionObjects::CopyBufferSubData(static_cast<gl::GLenum>(readTarget), static_cast<gl::GLenum>(writeTarget), readOffset, writeOffset, size);
}

inline void glCopyImageSubData(GLuint srcName, gl43core::GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, gl43core::GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
   	return FunctionObjects::CopyImageSubData(srcName, static_cast<gl::GLenum>(srcTarget), srcLevel, srcX, srcY, srcZ, dstName, static_cast<gl::GLenum>(dstTarget), dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyTexImage1D(gl43core::GLenum target, GLint level, gl43core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
   	return FunctionObjects::CopyTexImage1D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, border);
}

inline void glCopyTexImage2D(gl43core::GLenum target, GLint level, gl43core::GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
   	return FunctionObjects::CopyTexImage2D(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(internalformat), x, y, width, height, border);
}

inline void glCopyTexSubImage1D(gl43core::GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   	return FunctionObjects::CopyTexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::CopyTexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline GLuint glCreateProgram()
{
   	return FunctionObjects::CreateProgram();
}

inline GLuint glCreateShader(gl43core::GLenum type)
{
   	return FunctionObjects::CreateShader(static_cast<gl::GLenum>(type));
}

inline GLuint glCreateShaderProgramv(gl43core::GLenum type, GLsizei count, const GLchar *const* strings)
{
   	return FunctionObjects::CreateShaderProgramv(static_cast<gl::GLenum>(type), count, strings);
}

inline void glCullFace(gl43core::GLenum mode)
{
   	return FunctionObjects::CullFace(static_cast<gl::GLenum>(mode));
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
   	return FunctionObjects::DebugMessageCallback(callback, userParam);
}

inline void glDebugMessageControl(gl43core::GLenum source, gl43core::GLenum type, gl43core::GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
   	return FunctionObjects::DebugMessageControl(static_cast<gl::GLenum>(source), static_cast<gl::GLenum>(type), static_cast<gl::GLenum>(severity), count, ids, enabled);
}

inline void glDebugMessageInsert(gl43core::GLenum source, gl43core::GLenum type, GLuint id, gl43core::GLenum severity, GLsizei length, const GLchar * buf)
{
   	return FunctionObjects::DebugMessageInsert(static_cast<gl::GLenum>(source), static_cast<gl::GLenum>(type), id, static_cast<gl::GLenum>(severity), length, buf);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
   	return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
   	return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteProgram(GLuint program)
{
   	return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
   	return FunctionObjects::DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
   	return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
   	return FunctionObjects::DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
   	return FunctionObjects::DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
   	return FunctionObjects::DeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
   	return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
   	return FunctionObjects::DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
   	return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(gl43core::GLenum func)
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

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
   	return FunctionObjects::DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
   	return FunctionObjects::DepthRangeIndexed(index, n, f);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
   	return FunctionObjects::DepthRangef(n, f);
}

inline void glDepthRangex(GLfixed n, GLfixed f)
{
   	return FunctionObjects::DepthRangex(n, f);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
   	return FunctionObjects::DetachShader(program, shader);
}

inline void glDisable(gl43core::GLenum cap)
{
   	return FunctionObjects::Disable(static_cast<gl::GLenum>(cap));
}

inline void glDisableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisablei(gl43core::GLenum target, GLuint index)
{
   	return FunctionObjects::Disablei(static_cast<gl::GLenum>(target), index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
   	return FunctionObjects::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
   	return FunctionObjects::DispatchComputeIndirect(indirect);
}

inline void glDrawArrays(gl43core::GLenum mode, GLint first, GLsizei count)
{
   	return FunctionObjects::DrawArrays(static_cast<gl::GLenum>(mode), first, count);
}

inline void glDrawArraysIndirect(gl43core::GLenum mode, const void * indirect)
{
   	return FunctionObjects::DrawArraysIndirect(static_cast<gl::GLenum>(mode), indirect);
}

inline void glDrawArraysInstanced(gl43core::GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
   	return FunctionObjects::DrawArraysInstanced(static_cast<gl::GLenum>(mode), first, count, instancecount);
}

inline void glDrawArraysInstancedBaseInstance(gl43core::GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawArraysInstancedBaseInstance(static_cast<gl::GLenum>(mode), first, count, instancecount, baseinstance);
}

inline void glDrawBuffer(gl43core::GLenum mode)
{
   	return FunctionObjects::DrawBuffer(static_cast<gl::GLenum>(mode));
}

inline void glDrawBuffers(GLsizei n, const gl43core::GLenum * bufs)
{
   	return FunctionObjects::DrawBuffers(n, reinterpret_cast<const gl::GLenum *>(bufs));
}

inline void glDrawElements(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawElementsBaseVertex(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glDrawElementsIndirect(gl43core::GLenum mode, gl43core::GLenum type, const void * indirect)
{
   	return FunctionObjects::DrawElementsIndirect(static_cast<gl::GLenum>(mode), static_cast<gl::GLenum>(type), indirect);
}

inline void glDrawElementsInstanced(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices, GLsizei instancecount)
{
   	return FunctionObjects::DrawElementsInstanced(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount);
}

inline void glDrawElementsInstancedBaseInstance(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseInstance(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(gl43core::GLenum mode, GLsizei count, gl43core::GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
   	return FunctionObjects::DrawElementsInstancedBaseVertexBaseInstance(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, instancecount, basevertex, baseinstance);
}

inline void glDrawRangeElements(gl43core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl43core::GLenum type, const void * indices)
{
   	return FunctionObjects::DrawRangeElements(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices);
}

inline void glDrawRangeElementsBaseVertex(gl43core::GLenum mode, GLuint start, GLuint end, GLsizei count, gl43core::GLenum type, const void * indices, GLint basevertex)
{
   	return FunctionObjects::DrawRangeElementsBaseVertex(static_cast<gl::GLenum>(mode), start, end, count, static_cast<gl::GLenum>(type), indices, basevertex);
}

inline void glDrawTransformFeedback(gl43core::GLenum mode, GLuint id)
{
   	return FunctionObjects::DrawTransformFeedback(static_cast<gl::GLenum>(mode), id);
}

inline void glDrawTransformFeedbackInstanced(gl43core::GLenum mode, GLuint id, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackInstanced(static_cast<gl::GLenum>(mode), id, instancecount);
}

inline void glDrawTransformFeedbackStream(gl43core::GLenum mode, GLuint id, GLuint stream)
{
   	return FunctionObjects::DrawTransformFeedbackStream(static_cast<gl::GLenum>(mode), id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(gl43core::GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
   	return FunctionObjects::DrawTransformFeedbackStreamInstanced(static_cast<gl::GLenum>(mode), id, stream, instancecount);
}

inline void glEnable(gl43core::GLenum cap)
{
   	return FunctionObjects::Enable(static_cast<gl::GLenum>(cap));
}

inline void glEnableVertexAttribArray(GLuint index)
{
   	return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnablei(gl43core::GLenum target, GLuint index)
{
   	return FunctionObjects::Enablei(static_cast<gl::GLenum>(target), index);
}

inline void glEndConditionalRender()
{
   	return FunctionObjects::EndConditionalRender();
}

inline void glEndQuery(gl43core::GLenum target)
{
   	return FunctionObjects::EndQuery(static_cast<gl::GLenum>(target));
}

inline void glEndQueryIndexed(gl43core::GLenum target, GLuint index)
{
   	return FunctionObjects::EndQueryIndexed(static_cast<gl::GLenum>(target), index);
}

inline void glEndTransformFeedback()
{
   	return FunctionObjects::EndTransformFeedback();
}

inline GLsync glFenceSync(gl43core::GLenum condition, gl43core::GLbitfield flags)
{
   	return FunctionObjects::FenceSync(static_cast<gl::GLenum>(condition), static_cast<gl::GLbitfield>(flags));
}

inline void glFinish()
{
   	return FunctionObjects::Finish();
}

inline void glFlush()
{
   	return FunctionObjects::Flush();
}

inline void glFlushMappedBufferRange(gl43core::GLenum target, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::FlushMappedBufferRange(static_cast<gl::GLenum>(target), offset, length);
}

inline void glFogx(gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Fogx(static_cast<gl::GLenum>(pname), param);
}

inline void glFogxv(gl43core::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Fogxv(static_cast<gl::GLenum>(pname), param);
}

inline void glFramebufferParameteri(gl43core::GLenum target, gl43core::GLenum pname, GLint param)
{
   	return FunctionObjects::FramebufferParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glFramebufferRenderbuffer(gl43core::GLenum target, gl43core::GLenum attachment, gl43core::GLenum renderbuffertarget, GLuint renderbuffer)
{
   	return FunctionObjects::FramebufferRenderbuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(renderbuffertarget), renderbuffer);
}

inline void glFramebufferTexture(gl43core::GLenum target, gl43core::GLenum attachment, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level);
}

inline void glFramebufferTexture1D(gl43core::GLenum target, gl43core::GLenum attachment, gl43core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture1D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture2D(gl43core::GLenum target, gl43core::GLenum attachment, gl43core::GLenum textarget, GLuint texture, GLint level)
{
   	return FunctionObjects::FramebufferTexture2D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level);
}

inline void glFramebufferTexture3D(gl43core::GLenum target, gl43core::GLenum attachment, gl43core::GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
   	return FunctionObjects::FramebufferTexture3D(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(textarget), texture, level, zoffset);
}

inline void glFramebufferTextureLayer(gl43core::GLenum target, gl43core::GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   	return FunctionObjects::FramebufferTextureLayer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), texture, level, layer);
}

inline void glFrontFace(gl43core::GLenum mode)
{
   	return FunctionObjects::FrontFace(static_cast<gl::GLenum>(mode));
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

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
   	return FunctionObjects::GenProgramPipelines(n, pipelines);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
   	return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
   	return FunctionObjects::GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
   	return FunctionObjects::GenTextures(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
   	return FunctionObjects::GenTransformFeedbacks(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
   	return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(gl43core::GLenum target)
{
   	return FunctionObjects::GenerateMipmap(static_cast<gl::GLenum>(target));
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveAtomicCounterBufferiv(program, bufferIndex, static_cast<gl::GLenum>(pname), params);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl43core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveSubroutineName(GLuint program, gl43core::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineName(program, static_cast<gl::GLenum>(shadertype), index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, gl43core::GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetActiveSubroutineUniformName(program, static_cast<gl::GLenum>(shadertype), index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, gl43core::GLenum shadertype, GLuint index, gl43core::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetActiveSubroutineUniformiv(program, static_cast<gl::GLenum>(shadertype), index, static_cast<gl::GLenum>(pname), values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, gl43core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
   	return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, static_cast<gl::GLenum>(pname), params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
   	return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, static_cast<gl::GLenum>(pname), params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
   	return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(gl43core::GLenum target, GLuint index, GLboolean * data)
{
   	return FunctionObjects::GetBooleani_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetBooleanv(gl43core::GLenum pname, GLboolean * data)
{
   	return FunctionObjects::GetBooleanv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetBufferParameteri64v(gl43core::GLenum target, gl43core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetBufferParameteri64v(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferParameteriv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetBufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferPointerv(gl43core::GLenum target, gl43core::GLenum pname, void ** params)
{
   	return FunctionObjects::GetBufferPointerv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetBufferSubData(gl43core::GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
   	return FunctionObjects::GetBufferSubData(static_cast<gl::GLenum>(target), offset, size, data);
}

inline void glGetClipPlanef(gl43core::GLenum plane, GLfloat * equation)
{
   	return FunctionObjects::GetClipPlanef(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetClipPlanex(gl43core::GLenum plane, GLfixed * equation)
{
   	return FunctionObjects::GetClipPlanex(static_cast<gl::GLenum>(plane), equation);
}

inline void glGetCompressedTexImage(gl43core::GLenum target, GLint level, void * img)
{
   	return FunctionObjects::GetCompressedTexImage(static_cast<gl::GLenum>(target), level, img);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, gl43core::GLenum * sources, gl43core::GLenum * types, GLuint * ids, gl43core::GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
   	return FunctionObjects::GetDebugMessageLog(count, bufSize, reinterpret_cast<gl::GLenum *>(sources), reinterpret_cast<gl::GLenum *>(types), ids, reinterpret_cast<gl::GLenum *>(severities), lengths, messageLog);
}

inline void glGetDoublei_v(gl43core::GLenum target, GLuint index, GLdouble * data)
{
   	return FunctionObjects::GetDoublei_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetDoublev(gl43core::GLenum pname, GLdouble * data)
{
   	return FunctionObjects::GetDoublev(static_cast<gl::GLenum>(pname), data);
}

inline GLenum glGetError()
{
   	return static_cast<gl43core::GLenum>(FunctionObjects::GetError());
}

inline void glGetFixedv(gl43core::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetFixedv(static_cast<gl::GLenum>(pname), params);
}

inline void glGetFloati_v(gl43core::GLenum target, GLuint index, GLfloat * data)
{
   	return FunctionObjects::GetFloati_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetFloatv(gl43core::GLenum pname, GLfloat * data)
{
   	return FunctionObjects::GetFloatv(static_cast<gl::GLenum>(pname), data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
   	return FunctionObjects::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(gl43core::GLenum target, gl43core::GLenum attachment, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferAttachmentParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(attachment), static_cast<gl::GLenum>(pname), params);
}

inline void glGetFramebufferParameteriv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetFramebufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetInteger64i_v(gl43core::GLenum target, GLuint index, GLint64 * data)
{
   	return FunctionObjects::GetInteger64i_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetInteger64v(gl43core::GLenum pname, GLint64 * data)
{
   	return FunctionObjects::GetInteger64v(static_cast<gl::GLenum>(pname), data);
}

inline void glGetIntegeri_v(gl43core::GLenum target, GLuint index, GLint * data)
{
   	return FunctionObjects::GetIntegeri_v(static_cast<gl::GLenum>(target), index, data);
}

inline void glGetIntegerv(gl43core::GLenum pname, GLint * data)
{
   	return FunctionObjects::GetIntegerv(static_cast<gl::GLenum>(pname), data);
}

inline void glGetInternalformati64v(gl43core::GLenum target, gl43core::GLenum internalformat, gl43core::GLenum pname, GLsizei bufSize, GLint64 * params)
{
   	return FunctionObjects::GetInternalformati64v(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(pname), bufSize, params);
}

inline void glGetInternalformativ(gl43core::GLenum target, gl43core::GLenum internalformat, gl43core::GLenum pname, GLsizei bufSize, GLint * params)
{
   	return FunctionObjects::GetInternalformativ(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), static_cast<gl::GLenum>(pname), bufSize, params);
}

inline void glGetLightxv(gl43core::GLenum light, gl43core::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetLightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMaterialxv(gl43core::GLenum face, gl43core::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetMaterialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), params);
}

inline void glGetMultisamplefv(gl43core::GLenum pname, GLuint index, GLfloat * val)
{
   	return FunctionObjects::GetMultisamplefv(static_cast<gl::GLenum>(pname), index, val);
}

inline void glGetObjectLabel(gl43core::GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
   	return FunctionObjects::GetObjectLabel(static_cast<gl::GLenum>(identifier), name, bufSize, length, label);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
   	return FunctionObjects::GetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, gl43core::GLenum * binaryFormat, void * binary)
{
   	return FunctionObjects::GetProgramBinary(program, bufSize, length, reinterpret_cast<gl::GLenum *>(binaryFormat), binary);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramInterfaceiv(GLuint program, gl43core::GLenum programInterface, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramInterfaceiv(program, static_cast<gl::GLenum>(programInterface), static_cast<gl::GLenum>(pname), params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramPipelineiv(pipeline, static_cast<gl::GLenum>(pname), params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, gl43core::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceIndex(program, static_cast<gl::GLenum>(programInterface), name);
}

inline GLint glGetProgramResourceLocation(GLuint program, gl43core::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceLocation(program, static_cast<gl::GLenum>(programInterface), name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, gl43core::GLenum programInterface, const GLchar * name)
{
   	return FunctionObjects::GetProgramResourceLocationIndex(program, static_cast<gl::GLenum>(programInterface), name);
}

inline void glGetProgramResourceName(GLuint program, gl43core::GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
   	return FunctionObjects::GetProgramResourceName(program, static_cast<gl::GLenum>(programInterface), index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, gl43core::GLenum programInterface, GLuint index, GLsizei propCount, const gl43core::GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
   	return FunctionObjects::GetProgramResourceiv(program, static_cast<gl::GLenum>(programInterface), index, propCount, reinterpret_cast<const gl::GLenum *>(props), bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, gl43core::GLenum shadertype, gl43core::GLenum pname, GLint * values)
{
   	return FunctionObjects::GetProgramStageiv(program, static_cast<gl::GLenum>(shadertype), static_cast<gl::GLenum>(pname), values);
}

inline void glGetProgramiv(GLuint program, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetProgramiv(program, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryIndexediv(gl43core::GLenum target, GLuint index, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryIndexediv(static_cast<gl::GLenum>(target), index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjecti64v(GLuint id, gl43core::GLenum pname, GLint64 * params)
{
   	return FunctionObjects::GetQueryObjecti64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectiv(GLuint id, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryObjectiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectui64v(GLuint id, gl43core::GLenum pname, GLuint64 * params)
{
   	return FunctionObjects::GetQueryObjectui64v(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryObjectuiv(GLuint id, gl43core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetQueryObjectuiv(id, static_cast<gl::GLenum>(pname), params);
}

inline void glGetQueryiv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetQueryiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetRenderbufferParameteriv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetRenderbufferParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, gl43core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetSamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameterfv(GLuint sampler, gl43core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetSamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetSamplerParameteriv(GLuint sampler, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetSamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
   	return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderPrecisionFormat(gl43core::GLenum shadertype, gl43core::GLenum precisiontype, GLint * range, GLint * precision)
{
   	return FunctionObjects::GetShaderPrecisionFormat(static_cast<gl::GLenum>(shadertype), static_cast<gl::GLenum>(precisiontype), range, precision);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
   	return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetShaderiv(shader, static_cast<gl::GLenum>(pname), params);
}

inline const GLubyte * glGetString(gl43core::GLenum name)
{
   	return FunctionObjects::GetString(static_cast<gl::GLenum>(name));
}

inline const GLubyte * glGetStringi(gl43core::GLenum name, GLuint index)
{
   	return FunctionObjects::GetStringi(static_cast<gl::GLenum>(name), index);
}

inline GLuint glGetSubroutineIndex(GLuint program, gl43core::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineIndex(program, static_cast<gl::GLenum>(shadertype), name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, gl43core::GLenum shadertype, const GLchar * name)
{
   	return FunctionObjects::GetSubroutineUniformLocation(program, static_cast<gl::GLenum>(shadertype), name);
}

inline void glGetSynciv(GLsync sync, gl43core::GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
   	return FunctionObjects::GetSynciv(sync, static_cast<gl::GLenum>(pname), bufSize, length, values);
}

inline void glGetTexEnvxv(gl43core::GLenum target, gl43core::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexImage(gl43core::GLenum target, GLint level, gl43core::GLenum format, gl43core::GLenum type, void * pixels)
{
   	return FunctionObjects::GetTexImage(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glGetTexLevelParameterfv(gl43core::GLenum target, GLint level, gl43core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexLevelParameterfv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexLevelParameteriv(gl43core::GLenum target, GLint level, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexLevelParameteriv(static_cast<gl::GLenum>(target), level, static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIiv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterIuiv(gl43core::GLenum target, gl43core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetTexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterfv(gl43core::GLenum target, gl43core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetTexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameteriv(gl43core::GLenum target, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetTexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTexParameterxv(gl43core::GLenum target, gl43core::GLenum pname, GLfixed * params)
{
   	return FunctionObjects::GetTexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, gl43core::GLenum * type, GLchar * name)
{
   	return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, reinterpret_cast<gl::GLenum *>(type), name);
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

inline void glGetUniformSubroutineuiv(gl43core::GLenum shadertype, GLint location, GLuint * params)
{
   	return FunctionObjects::GetUniformSubroutineuiv(static_cast<gl::GLenum>(shadertype), location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
   	return FunctionObjects::GetUniformdv(program, location, params);
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

inline void glGetVertexAttribIiv(GLuint index, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribIiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribIuiv(GLuint index, gl43core::GLenum pname, GLuint * params)
{
   	return FunctionObjects::GetVertexAttribIuiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribLdv(GLuint index, gl43core::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribLdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribPointerv(GLuint index, gl43core::GLenum pname, void ** pointer)
{
   	return FunctionObjects::GetVertexAttribPointerv(index, static_cast<gl::GLenum>(pname), pointer);
}

inline void glGetVertexAttribdv(GLuint index, gl43core::GLenum pname, GLdouble * params)
{
   	return FunctionObjects::GetVertexAttribdv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribfv(GLuint index, gl43core::GLenum pname, GLfloat * params)
{
   	return FunctionObjects::GetVertexAttribfv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glGetVertexAttribiv(GLuint index, gl43core::GLenum pname, GLint * params)
{
   	return FunctionObjects::GetVertexAttribiv(index, static_cast<gl::GLenum>(pname), params);
}

inline void glHint(gl43core::GLenum target, gl43core::GLenum mode)
{
   	return FunctionObjects::Hint(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(mode));
}

inline void glInvalidateBufferData(GLuint buffer)
{
   	return FunctionObjects::InvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
   	return FunctionObjects::InvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(gl43core::GLenum target, GLsizei numAttachments, const gl43core::GLenum * attachments)
{
   	return FunctionObjects::InvalidateFramebuffer(static_cast<gl::GLenum>(target), numAttachments, reinterpret_cast<const gl::GLenum *>(attachments));
}

inline void glInvalidateSubFramebuffer(gl43core::GLenum target, GLsizei numAttachments, const gl43core::GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::InvalidateSubFramebuffer(static_cast<gl::GLenum>(target), numAttachments, reinterpret_cast<const gl::GLenum *>(attachments), x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
   	return FunctionObjects::InvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
   	return FunctionObjects::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
   	return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(gl43core::GLenum cap)
{
   	return FunctionObjects::IsEnabled(static_cast<gl::GLenum>(cap));
}

inline GLboolean glIsEnabledi(gl43core::GLenum target, GLuint index)
{
   	return FunctionObjects::IsEnabledi(static_cast<gl::GLenum>(target), index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
   	return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsProgram(GLuint program)
{
   	return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::IsProgramPipeline(pipeline);
}

inline GLboolean glIsQuery(GLuint id)
{
   	return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   	return FunctionObjects::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
   	return FunctionObjects::IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
   	return FunctionObjects::IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
   	return FunctionObjects::IsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
   	return FunctionObjects::IsTexture(texture);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
   	return FunctionObjects::IsTransformFeedback(id);
}

inline GLboolean glIsVertexArray(GLuint array)
{
   	return FunctionObjects::IsVertexArray(array);
}

inline void glLightModelx(gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::LightModelx(static_cast<gl::GLenum>(pname), param);
}

inline void glLightModelxv(gl43core::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::LightModelxv(static_cast<gl::GLenum>(pname), param);
}

inline void glLightx(gl43core::GLenum light, gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Lightx(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), param);
}

inline void glLightxv(gl43core::GLenum light, gl43core::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::Lightxv(static_cast<gl::GLenum>(light), static_cast<gl::GLenum>(pname), params);
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

inline void glLoadMatrixx(const GLfixed * m)
{
   	return FunctionObjects::LoadMatrixx(m);
}

inline void glLogicOp(gl43core::GLenum opcode)
{
   	return FunctionObjects::LogicOp(static_cast<gl::GLenum>(opcode));
}

inline void * glMapBuffer(gl43core::GLenum target, gl43core::GLenum access)
{
   	return FunctionObjects::MapBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(access));
}

inline void * glMapBufferRange(gl43core::GLenum target, GLintptr offset, GLsizeiptr length, gl43core::GLbitfield access)
{
   	return FunctionObjects::MapBufferRange(static_cast<gl::GLenum>(target), offset, length, static_cast<gl::GLbitfield>(access));
}

inline void glMaterialx(gl43core::GLenum face, gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::Materialx(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMaterialxv(gl43core::GLenum face, gl43core::GLenum pname, const GLfixed * param)
{
   	return FunctionObjects::Materialxv(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(pname), param);
}

inline void glMemoryBarrier(gl43core::GLbitfield barriers)
{
   	return FunctionObjects::MemoryBarrier(static_cast<gl::GLbitfield>(barriers));
}

inline void glMemoryBarrierByRegion(gl43core::GLbitfield barriers)
{
   	return FunctionObjects::MemoryBarrierByRegion(static_cast<gl::GLbitfield>(barriers));
}

inline void glMinSampleShading(GLfloat value)
{
   	return FunctionObjects::MinSampleShading(value);
}

inline void glMultMatrixx(const GLfixed * m)
{
   	return FunctionObjects::MultMatrixx(m);
}

inline void glMultiDrawArrays(gl43core::GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawArrays(static_cast<gl::GLenum>(mode), first, count, drawcount);
}

inline void glMultiDrawArraysIndirect(gl43core::GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
   	return FunctionObjects::MultiDrawArraysIndirect(static_cast<gl::GLenum>(mode), indirect, drawcount, stride);
}

inline void glMultiDrawElements(gl43core::GLenum mode, const GLsizei * count, gl43core::GLenum type, const void *const* indices, GLsizei drawcount)
{
   	return FunctionObjects::MultiDrawElements(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(gl43core::GLenum mode, const GLsizei * count, gl43core::GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
   	return FunctionObjects::MultiDrawElementsBaseVertex(static_cast<gl::GLenum>(mode), count, static_cast<gl::GLenum>(type), indices, drawcount, basevertex);
}

inline void glMultiDrawElementsIndirect(gl43core::GLenum mode, gl43core::GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
   	return FunctionObjects::MultiDrawElementsIndirect(static_cast<gl::GLenum>(mode), static_cast<gl::GLenum>(type), indirect, drawcount, stride);
}

inline void glMultiTexCoord4x(gl43core::GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
   	return FunctionObjects::MultiTexCoord4x(static_cast<gl::GLenum>(texture), s, t, r, q);
}

inline void glMultiTexCoordP1ui(gl43core::GLenum texture, gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP1ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP1uiv(gl43core::GLenum texture, gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP1uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2ui(gl43core::GLenum texture, gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP2ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP2uiv(gl43core::GLenum texture, gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP2uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3ui(gl43core::GLenum texture, gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP3ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP3uiv(gl43core::GLenum texture, gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP3uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4ui(gl43core::GLenum texture, gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::MultiTexCoordP4ui(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glMultiTexCoordP4uiv(gl43core::GLenum texture, gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::MultiTexCoordP4uiv(static_cast<gl::GLenum>(texture), static_cast<gl::GLenum>(type), coords);
}

inline void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
   	return FunctionObjects::Normal3x(nx, ny, nz);
}

inline void glNormalP3ui(gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::NormalP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glNormalP3uiv(gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::NormalP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glObjectLabel(gl43core::GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
   	return FunctionObjects::ObjectLabel(static_cast<gl::GLenum>(identifier), name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
   	return FunctionObjects::ObjectPtrLabel(ptr, length, label);
}

inline void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
   	return FunctionObjects::Orthof(l, r, b, t, n, f);
}

inline void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
   	return FunctionObjects::Orthox(l, r, b, t, n, f);
}

inline void glPatchParameterfv(gl43core::GLenum pname, const GLfloat * values)
{
   	return FunctionObjects::PatchParameterfv(static_cast<gl::GLenum>(pname), values);
}

inline void glPatchParameteri(gl43core::GLenum pname, GLint value)
{
   	return FunctionObjects::PatchParameteri(static_cast<gl::GLenum>(pname), value);
}

inline void glPauseTransformFeedback()
{
   	return FunctionObjects::PauseTransformFeedback();
}

inline void glPixelStoref(gl43core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PixelStoref(static_cast<gl::GLenum>(pname), param);
}

inline void glPixelStorei(gl43core::GLenum pname, GLint param)
{
   	return FunctionObjects::PixelStorei(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterf(gl43core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::PointParameterf(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterfv(gl43core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::PointParameterfv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameteri(gl43core::GLenum pname, GLint param)
{
   	return FunctionObjects::PointParameteri(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameteriv(gl43core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::PointParameteriv(static_cast<gl::GLenum>(pname), params);
}

inline void glPointParameterx(gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::PointParameterx(static_cast<gl::GLenum>(pname), param);
}

inline void glPointParameterxv(gl43core::GLenum pname, const GLfixed * params)
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

inline void glPolygonMode(gl43core::GLenum face, gl43core::GLenum mode)
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

inline void glPopDebugGroup()
{
   	return FunctionObjects::PopDebugGroup();
}

inline void glPrimitiveRestartIndex(GLuint index)
{
   	return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glProgramBinary(GLuint program, gl43core::GLenum binaryFormat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ProgramBinary(program, static_cast<gl::GLenum>(binaryFormat), binary, length);
}

inline void glProgramParameteri(GLuint program, gl43core::GLenum pname, GLint value)
{
   	return FunctionObjects::ProgramParameteri(program, static_cast<gl::GLenum>(pname), value);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
   	return FunctionObjects::ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
   	return FunctionObjects::ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
   	return FunctionObjects::ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
   	return FunctionObjects::ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
   	return FunctionObjects::ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
   	return FunctionObjects::ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
   	return FunctionObjects::ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
   	return FunctionObjects::ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
   	return FunctionObjects::ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
   	return FunctionObjects::ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
   	return FunctionObjects::ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
   	return FunctionObjects::ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
   	return FunctionObjects::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
   	return FunctionObjects::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
   	return FunctionObjects::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
   	return FunctionObjects::ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
   	return FunctionObjects::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
   	return FunctionObjects::ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProvokingVertex(gl43core::GLenum mode)
{
   	return FunctionObjects::ProvokingVertex(static_cast<gl::GLenum>(mode));
}

inline void glPushDebugGroup(gl43core::GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
   	return FunctionObjects::PushDebugGroup(static_cast<gl::GLenum>(source), id, length, message);
}

inline void glQueryCounter(GLuint id, gl43core::GLenum target)
{
   	return FunctionObjects::QueryCounter(id, static_cast<gl::GLenum>(target));
}

inline void glReadBuffer(gl43core::GLenum mode)
{
   	return FunctionObjects::ReadBuffer(static_cast<gl::GLenum>(mode));
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, gl43core::GLenum format, gl43core::GLenum type, void * pixels)
{
   	return FunctionObjects::ReadPixels(x, y, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glReleaseShaderCompiler()
{
   	return FunctionObjects::ReleaseShaderCompiler();
}

inline void glRenderbufferStorage(gl43core::GLenum target, gl43core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorage(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glRenderbufferStorageMultisample(gl43core::GLenum target, GLsizei samples, gl43core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::RenderbufferStorageMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glResumeTransformFeedback()
{
   	return FunctionObjects::ResumeTransformFeedback();
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

inline void glSampleMaski(GLuint maskNumber, gl43core::GLbitfield mask)
{
   	return FunctionObjects::SampleMaski(maskNumber, static_cast<gl::GLbitfield>(mask));
}

inline void glSamplerParameterIiv(GLuint sampler, gl43core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameterIiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterIuiv(GLuint sampler, gl43core::GLenum pname, const GLuint * param)
{
   	return FunctionObjects::SamplerParameterIuiv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterf(GLuint sampler, gl43core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::SamplerParameterf(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameterfv(GLuint sampler, gl43core::GLenum pname, const GLfloat * param)
{
   	return FunctionObjects::SamplerParameterfv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteri(GLuint sampler, gl43core::GLenum pname, GLint param)
{
   	return FunctionObjects::SamplerParameteri(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glSamplerParameteriv(GLuint sampler, gl43core::GLenum pname, const GLint * param)
{
   	return FunctionObjects::SamplerParameteriv(sampler, static_cast<gl::GLenum>(pname), param);
}

inline void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Scalex(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Scissor(x, y, width, height);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
   	return FunctionObjects::ScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
   	return FunctionObjects::ScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
   	return FunctionObjects::ScissorIndexedv(index, v);
}

inline void glSecondaryColorP3ui(gl43core::GLenum type, GLuint color)
{
   	return FunctionObjects::SecondaryColorP3ui(static_cast<gl::GLenum>(type), color);
}

inline void glSecondaryColorP3uiv(gl43core::GLenum type, const GLuint * color)
{
   	return FunctionObjects::SecondaryColorP3uiv(static_cast<gl::GLenum>(type), color);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, gl43core::GLenum binaryformat, const void * binary, GLsizei length)
{
   	return FunctionObjects::ShaderBinary(count, shaders, static_cast<gl::GLenum>(binaryformat), binary, length);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
   	return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
   	return FunctionObjects::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glStencilFunc(gl43core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFunc(static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilFuncSeparate(gl43core::GLenum face, gl43core::GLenum func, GLint ref, GLuint mask)
{
   	return FunctionObjects::StencilFuncSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(func), ref, mask);
}

inline void glStencilMask(GLuint mask)
{
   	return FunctionObjects::StencilMask(mask);
}

inline void glStencilMaskSeparate(gl43core::GLenum face, GLuint mask)
{
   	return FunctionObjects::StencilMaskSeparate(static_cast<gl::GLenum>(face), mask);
}

inline void glStencilOp(gl43core::GLenum fail, gl43core::GLenum zfail, gl43core::GLenum zpass)
{
   	return FunctionObjects::StencilOp(static_cast<gl::GLenum>(fail), static_cast<gl::GLenum>(zfail), static_cast<gl::GLenum>(zpass));
}

inline void glStencilOpSeparate(gl43core::GLenum face, gl43core::GLenum sfail, gl43core::GLenum dpfail, gl43core::GLenum dppass)
{
   	return FunctionObjects::StencilOpSeparate(static_cast<gl::GLenum>(face), static_cast<gl::GLenum>(sfail), static_cast<gl::GLenum>(dpfail), static_cast<gl::GLenum>(dppass));
}

inline void glTexBuffer(gl43core::GLenum target, gl43core::GLenum internalformat, GLuint buffer)
{
   	return FunctionObjects::TexBuffer(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), buffer);
}

inline void glTexBufferRange(gl43core::GLenum target, gl43core::GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   	return FunctionObjects::TexBufferRange(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(internalformat), buffer, offset, size);
}

inline void glTexCoordP1ui(gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP1ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP1uiv(gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP1uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2ui(gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP2ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP2uiv(gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP2uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3ui(gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP3ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP3uiv(gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP3uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4ui(gl43core::GLenum type, GLuint coords)
{
   	return FunctionObjects::TexCoordP4ui(static_cast<gl::GLenum>(type), coords);
}

inline void glTexCoordP4uiv(gl43core::GLenum type, const GLuint * coords)
{
   	return FunctionObjects::TexCoordP4uiv(static_cast<gl::GLenum>(type), coords);
}

inline void glTexEnvx(gl43core::GLenum target, gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexEnvx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexEnvxv(gl43core::GLenum target, gl43core::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexEnvxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexImage1D(gl43core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage1D(static_cast<gl::GLenum>(target), level, internalformat, width, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2D(gl43core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage2D(static_cast<gl::GLenum>(target), level, internalformat, width, height, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage2DMultisample(gl43core::GLenum target, GLsizei samples, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage2DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, fixedsamplelocations);
}

inline void glTexImage3D(gl43core::GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexImage3D(static_cast<gl::GLenum>(target), level, internalformat, width, height, depth, border, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexImage3DMultisample(gl43core::GLenum target, GLsizei samples, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexImage3DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(gl43core::GLenum target, gl43core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameterIiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterIuiv(gl43core::GLenum target, gl43core::GLenum pname, const GLuint * params)
{
   	return FunctionObjects::TexParameterIuiv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterf(gl43core::GLenum target, gl43core::GLenum pname, GLfloat param)
{
   	return FunctionObjects::TexParameterf(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterfv(gl43core::GLenum target, gl43core::GLenum pname, const GLfloat * params)
{
   	return FunctionObjects::TexParameterfv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameteri(gl43core::GLenum target, gl43core::GLenum pname, GLint param)
{
   	return FunctionObjects::TexParameteri(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameteriv(gl43core::GLenum target, gl43core::GLenum pname, const GLint * params)
{
   	return FunctionObjects::TexParameteriv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexParameterx(gl43core::GLenum target, gl43core::GLenum pname, GLfixed param)
{
   	return FunctionObjects::TexParameterx(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), param);
}

inline void glTexParameterxv(gl43core::GLenum target, gl43core::GLenum pname, const GLfixed * params)
{
   	return FunctionObjects::TexParameterxv(static_cast<gl::GLenum>(target), static_cast<gl::GLenum>(pname), params);
}

inline void glTexStorage1D(gl43core::GLenum target, GLsizei levels, gl43core::GLenum internalformat, GLsizei width)
{
   	return FunctionObjects::TexStorage1D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width);
}

inline void glTexStorage2D(gl43core::GLenum target, GLsizei levels, gl43core::GLenum internalformat, GLsizei width, GLsizei height)
{
   	return FunctionObjects::TexStorage2D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width, height);
}

inline void glTexStorage2DMultisample(gl43core::GLenum target, GLsizei samples, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexStorage2DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, fixedsamplelocations);
}

inline void glTexStorage3D(gl43core::GLenum target, GLsizei levels, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
   	return FunctionObjects::TexStorage3D(static_cast<gl::GLenum>(target), levels, static_cast<gl::GLenum>(internalformat), width, height, depth);
}

inline void glTexStorage3DMultisample(gl43core::GLenum target, GLsizei samples, gl43core::GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   	return FunctionObjects::TexStorage3DMultisample(static_cast<gl::GLenum>(target), samples, static_cast<gl::GLenum>(internalformat), width, height, depth, fixedsamplelocations);
}

inline void glTexSubImage1D(gl43core::GLenum target, GLint level, GLint xoffset, GLsizei width, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage1D(static_cast<gl::GLenum>(target), level, xoffset, width, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage2D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage2D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, width, height, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTexSubImage3D(gl43core::GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, gl43core::GLenum format, gl43core::GLenum type, const void * pixels)
{
   	return FunctionObjects::TexSubImage3D(static_cast<gl::GLenum>(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast<gl::GLenum>(format), static_cast<gl::GLenum>(type), pixels);
}

inline void glTextureView(GLuint texture, gl43core::GLenum target, GLuint origtexture, gl43core::GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
   	return FunctionObjects::TextureView(texture, static_cast<gl::GLenum>(target), origtexture, static_cast<gl::GLenum>(internalformat), minlevel, numlevels, minlayer, numlayers);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, gl43core::GLenum bufferMode)
{
   	return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, static_cast<gl::GLenum>(bufferMode));
}

inline void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
   	return FunctionObjects::Translatex(x, y, z);
}

inline void glUniform1d(GLint location, GLdouble x)
{
   	return FunctionObjects::Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform1dv(location, count, value);
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

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
   	return FunctionObjects::Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform2dv(location, count, value);
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

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform3dv(location, count, value);
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

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
   	return FunctionObjects::Uniform4dv(location, count, value);
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

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
   	return FunctionObjects::UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
   	return FunctionObjects::UniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(gl43core::GLenum shadertype, GLsizei count, const GLuint * indices)
{
   	return FunctionObjects::UniformSubroutinesuiv(static_cast<gl::GLenum>(shadertype), count, indices);
}

inline GLboolean glUnmapBuffer(gl43core::GLenum target)
{
   	return FunctionObjects::UnmapBuffer(static_cast<gl::GLenum>(target));
}

inline void glUseProgram(GLuint program)
{
   	return FunctionObjects::UseProgram(program);
}

inline void glUseProgramStages(GLuint pipeline, gl43core::GLbitfield stages, GLuint program)
{
   	return FunctionObjects::UseProgramStages(pipeline, static_cast<gl::GLbitfield>(stages), program);
}

inline void glValidateProgram(GLuint program)
{
   	return FunctionObjects::ValidateProgram(program);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
   	return FunctionObjects::ValidateProgramPipeline(pipeline);
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

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
   	return FunctionObjects::VertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
   	return FunctionObjects::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, gl43core::GLenum type, GLboolean normalized, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribFormat(attribindex, size, static_cast<gl::GLenum>(type), normalized, relativeoffset);
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

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, gl43core::GLenum type, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribIFormat(attribindex, size, static_cast<gl::GLenum>(type), relativeoffset);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, gl43core::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribIPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
   	return FunctionObjects::VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL1dv(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
   	return FunctionObjects::VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL2dv(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
   	return FunctionObjects::VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL3dv(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   	return FunctionObjects::VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
   	return FunctionObjects::VertexAttribL4dv(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, gl43core::GLenum type, GLuint relativeoffset)
{
   	return FunctionObjects::VertexAttribLFormat(attribindex, size, static_cast<gl::GLenum>(type), relativeoffset);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, gl43core::GLenum type, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribLPointer(index, size, static_cast<gl::GLenum>(type), stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, gl43core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP1ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, gl43core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP1uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, gl43core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP2ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, gl43core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP2uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, gl43core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP3ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, gl43core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP3uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, gl43core::GLenum type, GLboolean normalized, GLuint value)
{
   	return FunctionObjects::VertexAttribP4ui(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, gl43core::GLenum type, GLboolean normalized, const GLuint * value)
{
   	return FunctionObjects::VertexAttribP4uiv(index, static_cast<gl::GLenum>(type), normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, gl43core::GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
   	return FunctionObjects::VertexAttribPointer(index, size, static_cast<gl::GLenum>(type), normalized, stride, pointer);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
   	return FunctionObjects::VertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexP2ui(gl43core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP2ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP2uiv(gl43core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP2uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3ui(gl43core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP3ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP3uiv(gl43core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP3uiv(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4ui(gl43core::GLenum type, GLuint value)
{
   	return FunctionObjects::VertexP4ui(static_cast<gl::GLenum>(type), value);
}

inline void glVertexP4uiv(gl43core::GLenum type, const GLuint * value)
{
   	return FunctionObjects::VertexP4uiv(static_cast<gl::GLenum>(type), value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
   	return FunctionObjects::Viewport(x, y, width, height);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
   	return FunctionObjects::ViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
   	return FunctionObjects::ViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
   	return FunctionObjects::ViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, gl43core::GLbitfield flags, GLuint64 timeout)
{
   	return FunctionObjects::WaitSync(sync, static_cast<gl::GLbitfield>(flags), timeout);
}


} // namespace gl43core
