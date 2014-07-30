#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl40core
{

#include <glbinding/gl/types.inl>

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl40core


#include <glbinding/FunctionObjects.h>

namespace gl40core
{

inline void glActiveTexture(GLenum texture)
{
    return glbinding::FunctionObjects::current().ActiveTexture(texture);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::FunctionObjects::current().AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::FunctionObjects::current().BeginConditionalRender(id, mode);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BeginQuery(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::FunctionObjects::current().BeginQueryIndexed(target, index, id);
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

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::FunctionObjects::current().BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().BindFramebuffer(target, framebuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().BindRenderbuffer(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::FunctionObjects::current().BindSampler(unit, sampler);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().BindTexture(target, texture);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BindTransformFeedback(target, id);
}

inline void glBindVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().BindVertexArray(array);
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

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquationi(buf, mode);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::FunctionObjects::current().BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().BlendFunci(buf, src, dst);
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

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl40core::GLenum>(glbinding::FunctionObjects::current().CheckFramebufferStatus(target));
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::FunctionObjects::current().ClampColor(target, clamp);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::FunctionObjects::current().Clear(mask);
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

inline void glClearStencil(GLint s)
{
    return glbinding::FunctionObjects::current().ClearStencil(s);
}

inline GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl40core::GLenum>(glbinding::FunctionObjects::current().ClientWaitSync(sync, flags, timeout));
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::FunctionObjects::current().ColorMask(red, green, blue, alpha);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::FunctionObjects::current().ColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().ColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().ColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().ColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().ColorP4uiv(type, color);
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

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
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

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glbinding::FunctionObjects::current().DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
    return glbinding::FunctionObjects::current().DeleteSync(sync);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().DeleteTextures(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteTransformFeedbacks(n, ids);
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

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::FunctionObjects::current().DrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().DrawArraysInstanced(mode, first, count, instancecount);
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

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::FunctionObjects::current().DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::FunctionObjects::current().DrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::FunctionObjects::current().DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().DrawRangeElements(mode, start, end, count, type, indices);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::FunctionObjects::current().DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedbackStream(mode, id, stream);
}

inline void glEnable(GLenum cap)
{
    return glbinding::FunctionObjects::current().Enable(cap);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::FunctionObjects::current().EnableVertexAttribArray(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().Enablei(target, index);
}

inline void glEndConditionalRender()
{
    return glbinding::FunctionObjects::current().EndConditionalRender();
}

inline void glEndQuery(GLenum target)
{
    return glbinding::FunctionObjects::current().EndQuery(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().EndQueryIndexed(target, index);
}

inline void glEndTransformFeedback()
{
    return glbinding::FunctionObjects::current().EndTransformFeedback();
}

inline GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().FenceSync(condition, flags);
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

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTexture(target, attachment, texture, level);
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

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::FunctionObjects::current().GenBuffers(n, buffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().GenFramebuffers(n, framebuffers);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenQueries(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().GenRenderbuffers(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::FunctionObjects::current().GenSamplers(count, samplers);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().GenTextures(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenTransformFeedbacks(n, ids);
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

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::FunctionObjects::current().GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::FunctionObjects::current().GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
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

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().GetBufferParameteri64v(target, pname, params);
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
    return static_cast<gl40core::GLenum>(glbinding::FunctionObjects::current().GetError());
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetFloatv(pname, data);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetFragDataLocation(program, name);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::FunctionObjects::current().GetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::FunctionObjects::current().GetInteger64v(pname, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::FunctionObjects::current().GetIntegeri_v(target, index, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::FunctionObjects::current().GetIntegerv(pname, data);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::FunctionObjects::current().GetMultisamplefv(pname, index, val);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().GetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramiv(program, pname, params);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectui64v(id, pname, params);
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

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetSamplerParameteriv(sampler, pname, params);
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

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::FunctionObjects::current().GetSynciv(sync, pname, bufSize, length, values);
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

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::FunctionObjects::current().GetUniformBlockIndex(program, uniformBlockName);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::FunctionObjects::current().GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetUniformLocation(program, name);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetUniformdv(program, location, params);
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

inline GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::FunctionObjects::current().IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
    return glbinding::FunctionObjects::current().IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
    return glbinding::FunctionObjects::current().IsSync(sync);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return glbinding::FunctionObjects::current().IsTexture(texture);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::FunctionObjects::current().IsTransformFeedback(id);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::FunctionObjects::current().IsVertexArray(array);
}

inline void glLineWidth(GLfloat width)
{
    return glbinding::FunctionObjects::current().LineWidth(width);
}

inline void glLinkProgram(GLuint program)
{
    return glbinding::FunctionObjects::current().LinkProgram(program);
}

inline void glLogicOp(GLenum opcode)
{
    return glbinding::FunctionObjects::current().LogicOp(opcode);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().MapBuffer(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::FunctionObjects::current().MapBufferRange(target, offset, length, access);
}

inline void glMinSampleShading(GLfloat value)
{
    return glbinding::FunctionObjects::current().MinSampleShading(value);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::FunctionObjects::current().MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoordP4uiv(texture, type, coords);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().NormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().NormalP3uiv(type, coords);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::FunctionObjects::current().PatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().PatchParameteri(pname, value);
}

inline void glPauseTransformFeedback()
{
    return glbinding::FunctionObjects::current().PauseTransformFeedback();
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PixelStorei(pname, param);
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

inline void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::FunctionObjects::current().PrimitiveRestartIndex(index);
}

inline void glProvokingVertex(GLenum mode)
{
    return glbinding::FunctionObjects::current().ProvokingVertex(mode);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::FunctionObjects::current().QueryCounter(id, target);
}

inline void glReadBuffer(GLenum mode)
{
    return glbinding::FunctionObjects::current().ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glResumeTransformFeedback()
{
    return glbinding::FunctionObjects::current().ResumeTransformFeedback();
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleCoverage(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::FunctionObjects::current().SampleMaski(maskNumber, mask);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().SamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::FunctionObjects::current().SamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().SamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::FunctionObjects::current().SamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().SamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().SamplerParameteriv(sampler, pname, param);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().Scissor(x, y, width, height);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().SecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().SecondaryColorP3uiv(type, color);
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

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().TexBuffer(target, internalformat, buffer);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().TexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().TexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().TexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().TexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().TexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().TexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().TexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().TexCoordP4uiv(type, coords);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
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

inline void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::FunctionObjects::current().Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform1dv(location, count, value);
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

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform2dv(location, count, value);
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

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform3dv(location, count, value);
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

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform4dv(location, count, value);
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

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::FunctionObjects::current().UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::FunctionObjects::current().UniformSubroutinesuiv(shadertype, count, indices);
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

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().VertexAttribDivisor(index, divisor);
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

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().VertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().VertexP4uiv(type, value);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().Viewport(x, y, width, height);
}

inline void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::FunctionObjects::current().WaitSync(sync, flags, timeout);
}


} // namespace gl40core
