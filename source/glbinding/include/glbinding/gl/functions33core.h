#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/functions.h>
#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl33core
{

#include <glbinding/gl/types.inl>
#include <glbinding/gl/boolean.inl>
#include <glbinding/gl/values.inl>

} // namespace gl33core


namespace gl33core
{

inline void glActiveTexture(GLenum texture)
{
    return gl::glActiveTexture(texture);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return gl::glAttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return gl::glBeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return gl::glBeginQuery(target, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedback(primitiveMode);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return gl::glBindAttribLocation(program, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return gl::glBindBuffer(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBase(target, index, buffer);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRange(target, index, buffer, offset, size);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return gl::glBindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return gl::glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return gl::glBindFramebuffer(target, framebuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return gl::glBindRenderbuffer(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return gl::glBindSampler(unit, sampler);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return gl::glBindTexture(target, texture);
}

inline void glBindVertexArray(GLuint array)
{
    return gl::glBindVertexArray(array);
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

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glBufferData(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glBufferSubData(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return gl::glCheckFramebufferStatus(target);
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return gl::glClampColor(target, clamp);
}

inline void glClear(ClearBufferMask mask)
{
    return gl::glClear(mask);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return gl::glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return gl::glClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return gl::glClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return gl::glClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return gl::glClearDepth(depth);
}

inline void glClearStencil(GLint s)
{
    return gl::glClearStencil(s);
}

inline GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return gl::glClientWaitSync(sync, flags, timeout);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gl::glColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gl::glColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return gl::glColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return gl::glColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP4uiv(type, color);
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

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
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

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return gl::glDeleteFramebuffers(n, framebuffers);
}

inline void glDeleteProgram(GLuint program)
{
    return gl::glDeleteProgram(program);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteQueries(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return gl::glDeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return gl::glDeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
    return gl::glDeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
    return gl::glDeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return gl::glDeleteTextures(n, textures);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return gl::glDeleteVertexArrays(n, arrays);
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

inline void glDisableVertexAttribArray(GLuint index)
{
    return gl::glDisableVertexAttribArray(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return gl::glDisablei(target, index);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawArrays(mode, first, count);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return gl::glDrawArraysInstanced(mode, first, count, instancecount);
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

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gl::glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return gl::glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return gl::glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawRangeElements(mode, start, end, count, type, indices);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gl::glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glEnable(GLenum cap)
{
    return gl::glEnable(cap);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return gl::glEnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return gl::glEnablei(target, index);
}

inline void glEndConditionalRender()
{
    return gl::glEndConditionalRender();
}

inline void glEndQuery(GLenum target)
{
    return gl::glEndQuery(target);
}

inline void glEndTransformFeedback()
{
    return gl::glEndTransformFeedback();
}

inline GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return gl::glFenceSync(condition, flags);
}

inline void glFinish()
{
    return gl::glFinish();
}

inline void glFlush()
{
    return gl::glFlush();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedBufferRange(target, offset, length);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFrontFace(GLenum mode)
{
    return gl::glFrontFace(mode);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return gl::glGenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return gl::glGenFramebuffers(n, framebuffers);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return gl::glGenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return gl::glGenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return gl::glGenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return gl::glGenTextures(n, textures);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return gl::glGenVertexArrays(n, arrays);
}

inline void glGenerateMipmap(GLenum target)
{
    return gl::glGenerateMipmap(target);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return gl::glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return gl::glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return gl::glGetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return gl::glGetAttribLocation(program, name);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return gl::glGetBooleani_v(target, index, data);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return gl::glGetBooleanv(pname, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return gl::glGetBufferParameteri64v(target, pname, params);
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

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return gl::glGetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return gl::glGetInteger64v(pname, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return gl::glGetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return gl::glGetIntegerv(pname, data);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return gl::glGetMultisamplefv(pname, index, val);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return gl::glGetProgramiv(program, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return gl::glGetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return gl::glGetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetQueryiv(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetRenderbufferParameteriv(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return gl::glGetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return gl::glGetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameteriv(sampler, pname, params);
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

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return gl::glGetStringi(name, index);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gl::glGetSynciv(sync, pname, bufSize, length, values);
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

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameteriv(target, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return gl::glGetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return gl::glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
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

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return gl::glGetUniformuiv(program, location, params);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return gl::glGetVertexAttribIuiv(index, pname, params);
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

inline GLboolean glIsBuffer(GLuint buffer)
{
    return gl::glIsBuffer(buffer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return gl::glIsEnabled(cap);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return gl::glIsEnabledi(target, index);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return gl::glIsFramebuffer(framebuffer);
}

inline GLboolean glIsProgram(GLuint program)
{
    return gl::glIsProgram(program);
}

inline GLboolean glIsQuery(GLuint id)
{
    return gl::glIsQuery(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return gl::glIsRenderbuffer(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
    return gl::glIsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
    return gl::glIsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
    return gl::glIsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return gl::glIsTexture(texture);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return gl::glIsVertexArray(array);
}

inline void glLineWidth(GLfloat width)
{
    return gl::glLineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
    return gl::glLinkProgram(program);
}

inline void glLogicOp(GLenum opcode)
{
    return gl::glLogicOp(opcode);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return gl::glMapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapBufferRange(target, offset, length, access);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return gl::glMultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return gl::glMultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return gl::glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP4uiv(texture, type, coords);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return gl::glNormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glNormalP3uiv(type, coords);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return gl::glPixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return gl::glPixelStorei(pname, param);
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

inline void glPrimitiveRestartIndex(GLuint index)
{
    return gl::glPrimitiveRestartIndex(index);
}

inline void glProvokingVertex(GLenum mode)
{
    return gl::glProvokingVertex(mode);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return gl::glQueryCounter(id, target);
}

inline void glReadBuffer(GLenum src)
{
    return gl::glReadBuffer(src);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return gl::glReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return gl::glSampleCoverage(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return gl::glSampleMaski(maskNumber, mask);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return gl::glSamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return gl::glSamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return gl::glSamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return gl::glSamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameteriv(sampler, pname, param);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glScissor(x, y, width, height);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return gl::glSecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glSecondaryColorP3uiv(type, color);
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

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBuffer(target, internalformat, buffer);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP4uiv(type, coords);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameterIiv(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTexParameterIuiv(target, pname, params);
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

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryings(program, count, varyings, bufferMode);
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

inline void glUniform1ui(GLint location, GLuint v0)
{
    return gl::glUniform1ui(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform1uiv(location, count, value);
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

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return gl::glUniform2ui(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform2uiv(location, count, value);
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

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glUniform3ui(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform3uiv(location, count, value);
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

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glUniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform4uiv(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return gl::glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
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

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return gl::glVertexAttribDivisor(index, divisor);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return gl::glVertexAttribI1i(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return gl::glVertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI1uiv(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return gl::glVertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return gl::glVertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI2uiv(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return gl::glVertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return gl::glVertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI3uiv(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttribI4bv(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI4iv(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttribI4sv(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glVertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttribI4usv(index, v);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return gl::glVertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return gl::glVertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return gl::glVertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP4uiv(type, value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glViewport(x, y, width, height);
}

inline void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return gl::glWaitSync(sync, flags, timeout);
}


} // namespace gl33core
