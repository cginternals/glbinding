
#include <glbinding/gl/functions44core.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl44core
{

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl44core


#include <glbinding/Binding.h>


namespace gl44core
{

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::currentBinding().glActiveShaderProgram(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return glbinding::currentBinding().glActiveTexture(texture);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::currentBinding().glAttachShader(program, shader);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::currentBinding().glBeginConditionalRender(id, mode);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBeginQuery(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::currentBinding().glBeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::currentBinding().glBeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::currentBinding().glBindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::currentBinding().glBindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::currentBinding().glBindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glBindBufferRange(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::currentBinding().glBindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::currentBinding().glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::currentBinding().glBindFragDataLocation(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::currentBinding().glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::currentBinding().glBindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::currentBinding().glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::currentBinding().glBindImageTextures(first, count, textures);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glBindProgramPipeline(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glBindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::currentBinding().glBindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::currentBinding().glBindSamplers(first, count, samplers);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindTexture(target, texture);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::currentBinding().glBindTextures(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glbinding::currentBinding().glBindVertexArray(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::currentBinding().glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::currentBinding().glBindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glBlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::currentBinding().glBlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::currentBinding().glBlendEquationi(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::currentBinding().glBlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::currentBinding().glBlendFunci(buf, src, dst);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::currentBinding().glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::currentBinding().glBufferData(target, size, data, usage);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::currentBinding().glBufferStorage(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::currentBinding().glBufferSubData(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl44core::GLenum>(glbinding::currentBinding().glCheckFramebufferStatus(target));
}

void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::currentBinding().glClampColor(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::currentBinding().glClear(mask);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::currentBinding().glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::currentBinding().glClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::currentBinding().glClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::currentBinding().glClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::currentBinding().glClearDepth(depth);
}

void glClearDepthf(GLfloat d)
{
    return glbinding::currentBinding().glClearDepthf(d);
}

void glClearStencil(GLint s)
{
    return glbinding::currentBinding().glClearStencil(s);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl44core::GLenum>(glbinding::currentBinding().glClientWaitSync(sync, flags, timeout));
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::currentBinding().glColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::currentBinding().glColorMaski(index, r, g, b, a);
}

void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::currentBinding().glColorP3ui(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::currentBinding().glColorP3uiv(type, color);
}

void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::currentBinding().glColorP4ui(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::currentBinding().glColorP4uiv(type, color);
}

void glCompileShader(GLuint shader)
{
    return glbinding::currentBinding().glCompileShader(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::currentBinding().glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::currentBinding().glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint glCreateProgram()
{
    return glbinding::currentBinding().glCreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return glbinding::currentBinding().glCreateShader(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::currentBinding().glCreateShaderProgramv(type, count, strings);
}

void glCullFace(GLenum mode)
{
    return glbinding::currentBinding().glCullFace(mode);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::currentBinding().glDebugMessageCallback(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::currentBinding().glDebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::currentBinding().glDebugMessageInsert(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::currentBinding().glDeleteBuffers(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::currentBinding().glDeleteFramebuffers(n, framebuffers);
}

void glDeleteProgram(GLuint program)
{
    return glbinding::currentBinding().glDeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::currentBinding().glDeleteProgramPipelines(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteQueries(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::currentBinding().glDeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glbinding::currentBinding().glDeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return glbinding::currentBinding().glDeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glbinding::currentBinding().glDeleteSync(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::currentBinding().glDeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::currentBinding().glDeleteVertexArrays(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glbinding::currentBinding().glDepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glbinding::currentBinding().glDepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::currentBinding().glDepthRange(near_, far_);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glDepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::currentBinding().glDepthRangeIndexed(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::currentBinding().glDepthRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::currentBinding().glDetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glbinding::currentBinding().glDisable(cap);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::currentBinding().glDisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glDisablei(target, index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::currentBinding().glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::currentBinding().glDispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::currentBinding().glDrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawBuffer(GLenum buf)
{
    return glbinding::currentBinding().glDrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::currentBinding().glDrawBuffers(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::currentBinding().glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::currentBinding().glDrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::currentBinding().glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::currentBinding().glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::currentBinding().glDrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::currentBinding().glDrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glEnable(GLenum cap)
{
    return glbinding::currentBinding().glEnable(cap);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::currentBinding().glEnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glEnablei(target, index);
}

void glEndConditionalRender()
{
    return glbinding::currentBinding().glEndConditionalRender();
}

void glEndQuery(GLenum target)
{
    return glbinding::currentBinding().glEndQuery(target);
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glEndQueryIndexed(target, index);
}

void glEndTransformFeedback()
{
    return glbinding::currentBinding().glEndTransformFeedback();
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::currentBinding().glFenceSync(condition, flags);
}

void glFinish()
{
    return glbinding::currentBinding().glFinish();
}

void glFlush()
{
    return glbinding::currentBinding().glFlush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::currentBinding().glFlushMappedBufferRange(target, offset, length);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFramebufferParameteri(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::currentBinding().glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::currentBinding().glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::currentBinding().glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode)
{
    return glbinding::currentBinding().glFrontFace(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::currentBinding().glGenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::currentBinding().glGenFramebuffers(n, framebuffers);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::currentBinding().glGenProgramPipelines(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenQueries(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::currentBinding().glGenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::currentBinding().glGenSamplers(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::currentBinding().glGenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::currentBinding().glGenVertexArrays(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glbinding::currentBinding().glGenerateMipmap(target);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::currentBinding().glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::currentBinding().glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::currentBinding().glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::currentBinding().glGetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::currentBinding().glGetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetBufferPointerv(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::currentBinding().glGetBufferSubData(target, offset, size, data);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::currentBinding().glGetCompressedTexImage(target, level, img);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::currentBinding().glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublei_v(target, index, data);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl44core::GLenum>(glbinding::currentBinding().glGetError());
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloati_v(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloatv(pname, data);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetFragDataIndex(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferParameteriv(target, pname, params);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::currentBinding().glGetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::currentBinding().glGetInteger64v(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::currentBinding().glGetIntegeri_v(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::currentBinding().glGetIntegerv(pname, data);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::currentBinding().glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::currentBinding().glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::currentBinding().glGetMultisamplefv(pname, index, val);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::currentBinding().glGetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::currentBinding().glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::currentBinding().glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramPipelineiv(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::currentBinding().glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::currentBinding().glGetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramiv(program, pname, params);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryIndexediv(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::currentBinding().glGetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::currentBinding().glGetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetQueryObjectuiv(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryiv(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetSamplerParameteriv(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::currentBinding().glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::currentBinding().glGetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::currentBinding().glGetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::currentBinding().glGetStringi(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::currentBinding().glGetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::currentBinding().glGetSubroutineUniformLocation(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::currentBinding().glGetSynciv(sync, pname, bufSize, length, values);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glGetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameteriv(target, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::currentBinding().glGetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::currentBinding().glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetUniformLocation(program, name);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::currentBinding().glGetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::currentBinding().glGetUniformdv(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::currentBinding().glGetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::currentBinding().glGetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::currentBinding().glGetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::currentBinding().glGetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribiv(index, pname, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glbinding::currentBinding().glHint(target, mode);
}

void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::currentBinding().glInvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::currentBinding().glInvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::currentBinding().glInvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::currentBinding().glInvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::currentBinding().glIsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::currentBinding().glIsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glIsEnabledi(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::currentBinding().glIsFramebuffer(framebuffer);
}

GLboolean glIsProgram(GLuint program)
{
    return glbinding::currentBinding().glIsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glIsProgramPipeline(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glbinding::currentBinding().glIsQuery(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::currentBinding().glIsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::currentBinding().glIsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return glbinding::currentBinding().glIsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glbinding::currentBinding().glIsSync(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::currentBinding().glIsTexture(texture);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::currentBinding().glIsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::currentBinding().glIsVertexArray(array);
}

void glLineWidth(GLfloat width)
{
    return glbinding::currentBinding().glLineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glbinding::currentBinding().glLinkProgram(program);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::currentBinding().glLogicOp(opcode);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::currentBinding().glMapBuffer(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::currentBinding().glMapBufferRange(target, offset, length, access);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::currentBinding().glMemoryBarrier(barriers);
}

void glMinSampleShading(GLfloat value)
{
    return glbinding::currentBinding().glMinSampleShading(value);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::currentBinding().glMultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::currentBinding().glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glMultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glMultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glMultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glMultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glMultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glMultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glMultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glMultiTexCoordP4uiv(texture, type, coords);
}

void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glNormalP3ui(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glNormalP3uiv(type, coords);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::currentBinding().glObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::currentBinding().glObjectPtrLabel(ptr, length, label);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::currentBinding().glPatchParameterfv(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::currentBinding().glPatchParameteri(pname, value);
}

void glPauseTransformFeedback()
{
    return glbinding::currentBinding().glPauseTransformFeedback();
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelStorei(pname, param);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::currentBinding().glPointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glPolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::currentBinding().glPolygonOffset(factor, units);
}

void glPopDebugGroup()
{
    return glbinding::currentBinding().glPopDebugGroup();
}

void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::currentBinding().glPrimitiveRestartIndex(index);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::currentBinding().glProgramBinary(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::currentBinding().glProgramParameteri(program, pname, value);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::currentBinding().glProgramUniform1d(program, location, v0);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glProgramUniform1f(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::currentBinding().glProgramUniform1i(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::currentBinding().glProgramUniform1ui(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::currentBinding().glProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::currentBinding().glProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::currentBinding().glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform4uiv(program, location, count, value);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProvokingVertex(GLenum mode)
{
    return glbinding::currentBinding().glProvokingVertex(mode);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::currentBinding().glPushDebugGroup(source, id, length, message);
}

void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::currentBinding().glQueryCounter(id, target);
}

void glReadBuffer(GLenum src)
{
    return glbinding::currentBinding().glReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glReadPixels(x, y, width, height, format, type, pixels);
}

void glReleaseShaderCompiler()
{
    return glbinding::currentBinding().glReleaseShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glResumeTransformFeedback()
{
    return glbinding::currentBinding().glResumeTransformFeedback();
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::currentBinding().glSampleMaski(maskNumber, mask);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::currentBinding().glSamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::currentBinding().glSamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glSamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::currentBinding().glSamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glSamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::currentBinding().glSamplerParameteriv(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glScissor(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::currentBinding().glScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glScissorIndexedv(index, v);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::currentBinding().glSecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::currentBinding().glSecondaryColorP3uiv(type, color);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::currentBinding().glShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::currentBinding().glShaderSource(shader, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::currentBinding().glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::currentBinding().glStencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::currentBinding().glStencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::currentBinding().glStencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::currentBinding().glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glTexBuffer(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glTexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glTexCoordP1ui(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glTexCoordP1uiv(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glTexCoordP2ui(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glTexCoordP2uiv(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glTexCoordP3ui(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glTexCoordP3uiv(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::currentBinding().glTexCoordP4ui(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::currentBinding().glTexCoordP4uiv(type, coords);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameterIiv(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::currentBinding().glTexParameterIuiv(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameteriv(target, pname, params);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::currentBinding().glTexStorage1D(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glTexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::currentBinding().glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::currentBinding().glUniform1d(location, x);
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glUniform1dv(location, count, value);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glUniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glbinding::currentBinding().glUniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::currentBinding().glUniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform1uiv(location, count, value);
}

void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glUniform2d(location, x, y);
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glUniform2dv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glUniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glUniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glUniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform2uiv(location, count, value);
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glUniform3d(location, x, y, z);
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glUniform3dv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glUniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glUniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glUniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform3uiv(location, count, value);
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glUniform4d(location, x, y, z, w);
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glUniform4dv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glUniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glUniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glUniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::currentBinding().glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix2dv(location, count, transpose, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix2x3dv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix2x4dv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix3dv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix3x2dv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix3x4dv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix4dv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix4x2dv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glUniformMatrix4x3dv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4x3fv(location, count, transpose, value);
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::currentBinding().glUniformSubroutinesuiv(shadertype, count, indices);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::currentBinding().glUnmapBuffer(target);
}

void glUseProgram(GLuint program)
{
    return glbinding::currentBinding().glUseProgram(program);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::currentBinding().glUseProgramStages(pipeline, stages, program);
}

void glValidateProgram(GLuint program)
{
    return glbinding::currentBinding().glValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glValidateProgramPipeline(pipeline);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttrib1d(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib1dv(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::currentBinding().glVertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib1fv(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::currentBinding().glVertexAttrib1s(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib1sv(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttrib2d(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib2dv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib2fv(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertexAttrib2s(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib2sv(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib3dv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib3fv(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib3sv(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nbv(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4Niv(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nsv(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::currentBinding().glVertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nubv(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4Nusv(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4bv(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib4dv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib4fv(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4iv(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4sv(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4ubv(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4uiv(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4usv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::currentBinding().glVertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glbinding::currentBinding().glVertexAttribDivisor(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::currentBinding().glVertexAttribI1i(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI1iv(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::currentBinding().glVertexAttribI1ui(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI1uiv(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::currentBinding().glVertexAttribI2i(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI2iv(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::currentBinding().glVertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI2uiv(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI3iv(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::currentBinding().glVertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI3uiv(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4bv(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI4iv(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribI4sv(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4ubv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glVertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI4uiv(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttribI4usv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttribL1d(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL1dv(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttribL2d(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL2dv(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL3dv(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL4dv(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::currentBinding().glVertexAttribP1ui(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::currentBinding().glVertexAttribP1uiv(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::currentBinding().glVertexAttribP2ui(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::currentBinding().glVertexAttribP2uiv(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::currentBinding().glVertexAttribP3ui(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::currentBinding().glVertexAttribP3uiv(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::currentBinding().glVertexAttribP4ui(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::currentBinding().glVertexAttribP4uiv(index, type, normalized, value);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::currentBinding().glVertexBindingDivisor(bindingindex, divisor);
}

void glVertexP2ui(GLenum type, GLuint value)
{
    return glbinding::currentBinding().glVertexP2ui(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return glbinding::currentBinding().glVertexP2uiv(type, value);
}

void glVertexP3ui(GLenum type, GLuint value)
{
    return glbinding::currentBinding().glVertexP3ui(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return glbinding::currentBinding().glVertexP3uiv(type, value);
}

void glVertexP4ui(GLenum type, GLuint value)
{
    return glbinding::currentBinding().glVertexP4ui(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return glbinding::currentBinding().glVertexP4uiv(type, value);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glViewport(x, y, width, height);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::currentBinding().glViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glViewportIndexedfv(index, v);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::currentBinding().glWaitSync(sync, flags, timeout);
}


} // namespace gl44core
