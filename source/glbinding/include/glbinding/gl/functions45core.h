#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl45core
{

#include <glbinding/gl/types.inl>
#include <glbinding/gl/boolean.inl>
#include <glbinding/gl/values.inl>

} // namespace gl45core

#include <glbinding/Binding.h>


namespace gl45core
{

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::Binding::ActiveShaderProgram(pipeline, program);
}

inline void glActiveTexture(GLenum texture)
{
    return glbinding::Binding::ActiveTexture(texture);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::Binding::BeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQuery(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::Binding::BeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBuffer(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::Binding::BindBuffersBase(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::Binding::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebuffer(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindImageTextures(first, count, textures);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::BindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::Binding::BindSampler(unit, sampler);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::Binding::BindSamplers(first, count, samplers);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTexture(target, texture);
}

inline void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return glbinding::Binding::BindTextureUnit(unit, texture);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindTextures(first, count, textures);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::Binding::BindTransformFeedback(target, id);
}

inline void glBindVertexArray(GLuint array)
{
    return glbinding::Binding::BindVertexArray(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::BindVertexBuffers(first, count, buffers, offsets, strides);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return glbinding::Binding::BlendEquation(mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationi(buf, mode);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::Binding::BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFunci(buf, src, dst);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferData(target, size, data, usage);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::Binding::BufferStorage(target, size, data, flags);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::BufferSubData(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl45core::GLenum>(glbinding::Binding::CheckFramebufferStatus(target));
}

inline GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
    return static_cast<gl45core::GLenum>(glbinding::Binding::CheckNamedFramebufferStatus(framebuffer, target));
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColor(target, clamp);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::Binding::Clear(mask);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferData(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return glbinding::Binding::ClearDepth(depth);
}

inline void glClearDepthf(GLfloat d)
{
    return glbinding::Binding::ClearDepthf(d);
}

inline void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferData(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizei size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

inline void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearNamedFramebufferfi(framebuffer, buffer, depth, stencil);
}

inline void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

inline void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

inline void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

inline void glClearStencil(GLint s)
{
    return glbinding::Binding::ClearStencil(s);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexImage(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl45core::GLenum>(glbinding::Binding::ClientWaitSync(sync, flags, timeout));
}

inline void glClipControl(GLenum origin, GLenum depth)
{
    return glbinding::Binding::ClipControl(origin, depth);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP4uiv(type, color);
}

inline void glCompileShader(GLuint shader)
{
    return glbinding::Binding::CompileShader(shader);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::Binding::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizei size)
{
    return glbinding::Binding::CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCreateBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::CreateBuffers(n, buffers);
}

inline void glCreateFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::CreateFramebuffers(n, framebuffers);
}

inline GLuint glCreateProgram()
{
    return glbinding::Binding::CreateProgram();
}

inline void glCreateProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::CreateProgramPipelines(n, pipelines);
}

inline void glCreateQueries(GLenum target, GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateQueries(target, n, ids);
}

inline void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::CreateRenderbuffers(n, renderbuffers);
}

inline void glCreateSamplers(GLsizei n, GLuint * samplers)
{
    return glbinding::Binding::CreateSamplers(n, samplers);
}

inline GLuint glCreateShader(GLenum type)
{
    return glbinding::Binding::CreateShader(type);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::Binding::CreateShaderProgramv(type, count, strings);
}

inline void glCreateTextures(GLenum target, GLsizei n, GLuint * textures)
{
    return glbinding::Binding::CreateTextures(target, n, textures);
}

inline void glCreateTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateTransformFeedbacks(n, ids);
}

inline void glCreateVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::CreateVertexArrays(n, arrays);
}

inline void glCullFace(GLenum mode)
{
    return glbinding::Binding::CullFace(mode);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::Binding::DebugMessageCallback(callback, userParam);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::Binding::DeleteBuffers(n, buffers);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteProgram(GLuint program)
{
    return glbinding::Binding::DeleteProgram(program);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glbinding::Binding::DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
    return glbinding::Binding::DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
    return glbinding::Binding::DeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::Binding::DeleteTextures(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::Binding::DeleteVertexArrays(n, arrays);
}

inline void glDepthFunc(GLenum func)
{
    return glbinding::Binding::DepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
    return glbinding::Binding::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::Binding::DepthRange(near_, far_);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::Binding::DepthRangeIndexed(index, n, f);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::Binding::DepthRangef(n, f);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::DetachShader(program, shader);
}

inline void glDisable(GLenum cap)
{
    return glbinding::Binding::Disable(cap);
}

inline void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::DisableVertexArrayAttrib(vaobj, index);
}

inline void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::DisableVertexAttribArray(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Disablei(target, index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::Binding::DispatchComputeIndirect(indirect);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawArrays(mode, first, count);
}

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::Binding::DrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::Binding::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawBuffer(GLenum buf)
{
    return glbinding::Binding::DrawBuffer(buf);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::DrawBuffers(n, bufs);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawElements(mode, count, type, indices);
}

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::Binding::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::Binding::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::Binding::DrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::Binding::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::Binding::DrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::Binding::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEnable(GLenum cap)
{
    return glbinding::Binding::Enable(cap);
}

inline void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::EnableVertexArrayAttrib(vaobj, index);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::EnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Enablei(target, index);
}

inline void glEndConditionalRender()
{
    return glbinding::Binding::EndConditionalRender();
}

inline void glEndQuery(GLenum target)
{
    return glbinding::Binding::EndQuery(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::Binding::EndQueryIndexed(target, index);
}

inline void glEndTransformFeedback()
{
    return glbinding::Binding::EndTransformFeedback();
}

inline GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::Binding::FenceSync(condition, flags);
}

inline void glFinish()
{
    return glbinding::Binding::Finish();
}

inline void glFlush()
{
    return glbinding::Binding::Flush();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

inline void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizei length)
{
    return glbinding::Binding::FlushMappedNamedBufferRange(buffer, offset, length);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::FramebufferParameteri(target, pname, param);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::Binding::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(GLenum mode)
{
    return glbinding::Binding::FrontFace(mode);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffers(n, framebuffers);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::GenProgramPipelines(n, pipelines);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::Binding::GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTextures(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenTransformFeedbacks(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(GLenum target)
{
    return glbinding::Binding::GenerateMipmap(target);
}

inline void glGenerateTextureMipmap(GLuint texture)
{
    return glbinding::Binding::GenerateTextureMipmap(texture);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::Binding::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetAttribLocation(program, name);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleani_v(target, index, data);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::Binding::GetBooleanv(pname, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameteriv(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointerv(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetBufferSubData(target, offset, size, data);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImage(target, level, img);
}

inline void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureImage(texture, level, bufSize, pixels);
}

inline void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::Binding::GetDoublei_v(target, index, data);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::Binding::GetDoublev(pname, data);
}

inline GLenum glGetError()
{
    return static_cast<gl45core::GLenum>(glbinding::Binding::GetError());
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::Binding::GetFloati_v(target, index, data);
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::Binding::GetFloatv(pname, data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

inline GLenum glGetGraphicsResetStatus()
{
    return static_cast<gl45core::GLenum>(glbinding::Binding::GetGraphicsResetStatus());
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::Binding::GetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::Binding::GetInteger64v(pname, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::Binding::GetIntegerv(pname, data);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::Binding::GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefv(pname, index, val);
}

inline void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetNamedBufferParameteri64v(buffer, pname, params);
}

inline void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameteriv(buffer, pname, params);
}

inline void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointerv(buffer, pname, params);
}

inline void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizei size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubData(buffer, offset, size, data);
}

inline void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

inline void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

inline void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocationIndex(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramiv(program, pname, params);
}

inline void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectiv(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetShaderiv(shader, pname, params);
}

inline const GLubyte * glGetString(GLenum name)
{
    return glbinding::Binding::GetString(name);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::Binding::GetStringi(name, index);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::Binding::GetSynciv(sync, pname, bufSize, length, values);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameteriv(target, pname, params);
}

inline void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureImage(texture, level, format, type, bufSize, pixels);
}

inline void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfv(texture, level, pname, params);
}

inline void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameteriv(texture, level, pname, params);
}

inline void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIiv(texture, pname, params);
}

inline void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuiv(texture, pname, params);
}

inline void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfv(texture, pname, params);
}

inline void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameteriv(texture, pname, params);
}

inline void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return glbinding::Binding::GetTransformFeedbacki64_v(xfb, pname, index, param);
}

inline void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbacki_v(xfb, pname, index, param);
}

inline void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbackiv(xfb, pname, param);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetUniformLocation(program, name);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::Binding::GetUniformdv(program, location, params);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfv(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformiv(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuiv(program, location, params);
}

inline void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return glbinding::Binding::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

inline void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIndexediv(vaobj, index, pname, param);
}

inline void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayiv(vaobj, pname, param);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribiv(index, pname, params);
}

inline void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTable(target, format, type, bufSize, table);
}

inline void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnCompressedTexImage(target, lod, bufSize, pixels);
}

inline void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilter(target, format, type, bufSize, image);
}

inline void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogram(target, reset, format, type, bufSize, values);
}

inline void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdv(target, query, bufSize, v);
}

inline void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfv(target, query, bufSize, v);
}

inline void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapiv(target, query, bufSize, v);
}

inline void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmax(target, reset, format, type, bufSize, values);
}

inline void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfv(map, bufSize, values);
}

inline void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuiv(map, bufSize, values);
}

inline void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusv(map, bufSize, values);
}

inline void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStipple(bufSize, pattern);
}

inline void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnTexImage(target, level, format, type, bufSize, pixels);
}

inline void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdv(program, location, bufSize, params);
}

inline void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

inline void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

inline void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuiv(program, location, bufSize, params);
}

inline void glHint(GLenum target, GLenum mode)
{
    return glbinding::Binding::Hint(target, mode);
}

inline void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::Binding::InvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::InvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

inline void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

inline void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::Binding::InvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::Binding::IsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::Binding::IsEnabled(cap);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledi(target, index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebuffer(framebuffer);
}

inline GLboolean glIsProgram(GLuint program)
{
    return glbinding::Binding::IsProgram(program);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::IsProgramPipeline(pipeline);
}

inline GLboolean glIsQuery(GLuint id)
{
    return glbinding::Binding::IsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::Binding::IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
    return glbinding::Binding::IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
    return glbinding::Binding::IsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return glbinding::Binding::IsTexture(texture);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::Binding::IsTransformFeedback(id);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::Binding::IsVertexArray(array);
}

inline void glLineWidth(GLfloat width)
{
    return glbinding::Binding::LineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
    return glbinding::Binding::LinkProgram(program);
}

inline void glLogicOp(GLenum opcode)
{
    return glbinding::Binding::LogicOp(opcode);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapBufferRange(target, offset, length, access);
}

inline void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBuffer(buffer, access);
}

inline void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizei length, BufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRange(buffer, offset, length, access);
}

inline void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrier(barriers);
}

inline void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierByRegion(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
    return glbinding::Binding::MinSampleShading(value);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::Binding::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP4uiv(texture, type, coords);
}

inline void glNamedBufferData(GLuint buffer, GLsizei size, const void * data, GLenum usage)
{
    return glbinding::Binding::NamedBufferData(buffer, size, data, usage);
}

inline void glNamedBufferStorage(GLuint buffer, GLsizei size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::Binding::NamedBufferStorage(buffer, size, data, flags);
}

inline void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizei size, const void * data)
{
    return glbinding::Binding::NamedBufferSubData(buffer, offset, size, data);
}

inline void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf)
{
    return glbinding::Binding::NamedFramebufferDrawBuffer(framebuffer, buf);
}

inline void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::NamedFramebufferDrawBuffers(framebuffer, n, bufs);
}

inline void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::Binding::NamedFramebufferParameteri(framebuffer, pname, param);
}

inline void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src)
{
    return glbinding::Binding::NamedFramebufferReadBuffer(framebuffer, src);
}

inline void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::NamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTexture(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::NamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

inline void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::NormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::NormalP3uiv(type, coords);
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::ObjectLabel(identifier, name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::ObjectPtrLabel(ptr, length, label);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::Binding::PatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::Binding::PatchParameteri(pname, value);
}

inline void glPauseTransformFeedback()
{
    return glbinding::Binding::PauseTransformFeedback();
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelStorei(pname, param);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameteriv(pname, params);
}

inline void glPointSize(GLfloat size)
{
    return glbinding::Binding::PointSize(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::Binding::PolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PolygonOffset(factor, units);
}

inline void glPopDebugGroup()
{
    return glbinding::Binding::PopDebugGroup();
}

inline void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndex(index);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteri(program, pname, value);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::Binding::ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::Binding::ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::Binding::ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::Binding::ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::Binding::ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::Binding::ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::Binding::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProvokingVertex(GLenum mode)
{
    return glbinding::Binding::ProvokingVertex(mode);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::Binding::PushDebugGroup(source, id, length, message);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::Binding::QueryCounter(id, target);
}

inline void glReadBuffer(GLenum src)
{
    return glbinding::Binding::ReadBuffer(src);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

inline void glReleaseShaderCompiler()
{
    return glbinding::Binding::ReleaseShaderCompiler();
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glResumeTransformFeedback()
{
    return glbinding::Binding::ResumeTransformFeedback();
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverage(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::Binding::SampleMaski(maskNumber, mask);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::Binding::SamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::Binding::SamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::Binding::SamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Scissor(x, y, width, height);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::Binding::ScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::Binding::ScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::Binding::ScissorIndexedv(index, v);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::SecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::SecondaryColorP3uiv(type, color);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::Binding::ShaderSource(shader, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::Binding::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFunc(func, ref, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return glbinding::Binding::StencilMask(mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::Binding::StencilMaskSeparate(face, mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::Binding::StencilOp(fail, zfail, zpass);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBuffer(target, internalformat, buffer);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TexBufferRange(target, internalformat, buffer, offset, size);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP4uiv(type, coords);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuiv(target, pname, params);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameteriv(target, pname, params);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureBarrier()
{
    return glbinding::Binding::TextureBarrier();
}

inline void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBuffer(texture, internalformat, buffer);
}

inline void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizei size)
{
    return glbinding::Binding::TextureBufferRange(texture, internalformat, buffer, offset, size);
}

inline void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIiv(texture, pname, params);
}

inline void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuiv(texture, pname, params);
}

inline void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterf(texture, pname, param);
}

inline void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TextureParameterfv(texture, pname, param);
}

inline void glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteri(texture, pname, param);
}

inline void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param)
{
    return glbinding::Binding::TextureParameteriv(texture, pname, param);
}

inline void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1D(texture, levels, internalformat, width);
}

inline void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2D(texture, levels, internalformat, width, height);
}

inline void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3D(texture, levels, internalformat, width, height, depth);
}

inline void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::Binding::TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
    return glbinding::Binding::TransformFeedbackBufferBase(xfb, index, buffer);
}

inline void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizei size)
{
    return glbinding::Binding::TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::Binding::Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform1dv(location, count, value);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::Binding::Uniform1f(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform1fv(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return glbinding::Binding::Uniform1i(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform1iv(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::Binding::Uniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform1uiv(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::Binding::Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform2dv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::Uniform2f(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform2fv(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::Uniform2i(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform2iv(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::Uniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform2uiv(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform3dv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform3fv(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform3iv(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform3uiv(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform4dv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform4fv(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform4iv(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform4uiv(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::Binding::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::Binding::UniformSubroutinesuiv(shadertype, count, indices);
}

inline GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::Binding::UnmapBuffer(target);
}

inline GLboolean glUnmapNamedBuffer(GLuint buffer)
{
    return glbinding::Binding::UnmapNamedBuffer(buffer);
}

inline void glUseProgram(GLuint program)
{
    return glbinding::Binding::UseProgram(program);
}

inline void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::Binding::UseProgramStages(pipeline, stages, program);
}

inline void glValidateProgram(GLuint program)
{
    return glbinding::Binding::ValidateProgram(program);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::ValidateProgramPipeline(pipeline);
}

inline void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

inline void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
    return glbinding::Binding::VertexArrayElementBuffer(vaobj, buffer);
}

inline void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::Binding::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::Binding::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::Binding::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4usv(index, v);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glbinding::Binding::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::Binding::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::Binding::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::Binding::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::Binding::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::Binding::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::Binding::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttribI4usv(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL1dv(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL2dv(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL3dv(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL4dv(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP4uiv(type, value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Viewport(x, y, width, height);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::ViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::Binding::ViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::ViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::Binding::WaitSync(sync, flags, timeout);
}


} // namespace gl45core
