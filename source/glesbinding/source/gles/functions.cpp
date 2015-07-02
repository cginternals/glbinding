#include <glesbinding/gles/functions.h>

#include <glesbinding/Binding.h>

#include <glesbinding/Value.h>


namespace gles
{

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glesbinding::Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
    return glesbinding::Binding::ActiveShaderProgramEXT(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return glesbinding::Binding::ActiveTexture(texture);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
    return glesbinding::Binding::AlphaFuncQCOM(func, ref);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glesbinding::Binding::AttachShader(program, shader);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glesbinding::Binding::BeginConditionalRenderNV(id, mode);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glesbinding::Binding::BeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::BeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glesbinding::Binding::BeginQuery(target, id);
}

void glBeginQueryEXT(GLenum target, GLuint id)
{
    return glesbinding::Binding::BeginQueryEXT(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glesbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glesbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glesbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glesbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glesbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glesbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glesbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::BindProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::BindProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glesbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glesbinding::Binding::BindSampler(unit, sampler);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glesbinding::Binding::BindTexture(target, texture);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glesbinding::Binding::BindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glesbinding::Binding::BindVertexArray(array);
}

void glBindVertexArrayOES(GLuint array)
{
    return glesbinding::Binding::BindVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glesbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBlendBarrierKHR()
{
    return glesbinding::Binding::BlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return glesbinding::Binding::BlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glesbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glesbinding::Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparateiOES(buf, modeRGB, modeAlpha);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    return glesbinding::Binding::BlendEquationiEXT(buf, mode);
}

void glBlendEquationiOES(GLuint buf, GLenum mode)
{
    return glesbinding::Binding::BlendEquationiOES(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glesbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glesbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glesbinding::Binding::BlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glesbinding::Binding::BlendFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    return glesbinding::Binding::BlendFunciEXT(buf, src, dst);
}

void glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
    return glesbinding::Binding::BlendFunciOES(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glesbinding::Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glesbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferStorageEXT(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
    return glesbinding::Binding::BufferStorageEXT(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glesbinding::Binding::BufferSubData(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return glesbinding::Binding::CheckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return glesbinding::Binding::Clear(mask);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glesbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glesbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glesbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glesbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glesbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return glesbinding::Binding::ClearDepthf(d);
}

void glClearStencil(GLint s)
{
    return glesbinding::Binding::ClearStencil(s);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return glesbinding::Binding::ClientWaitSync(sync, flags, timeout);
}

GLenum glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glesbinding::Binding::ClientWaitSyncAPPLE(sync, flags, timeout);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glesbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glesbinding::Binding::ColorMaskiEXT(index, r, g, b, a);
}

void glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glesbinding::Binding::ColorMaskiOES(index, r, g, b, a);
}

void glCompileShader(GLuint shader)
{
    return glesbinding::Binding::CompileShader(shader);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glesbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glesbinding::Binding::CopyBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glesbinding::Binding::CopyImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glesbinding::Binding::CopyImageSubDataOES(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glesbinding::Binding::CopyPathNV(resultPath, srcPath);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glesbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
    return glesbinding::Binding::CopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glesbinding::Binding::CoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glesbinding::Binding::CoverStrokePathNV(path, coverMode);
}

void glCoverageMaskNV(GLboolean mask)
{
    return glesbinding::Binding::CoverageMaskNV(mask);
}

void glCoverageModulationNV(GLenum components)
{
    return glesbinding::Binding::CoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return glesbinding::Binding::CoverageModulationTableNV(n, v);
}

void glCoverageOperationNV(GLenum operation)
{
    return glesbinding::Binding::CoverageOperationNV(operation);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glesbinding::Binding::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
    return glesbinding::Binding::CreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return glesbinding::Binding::CreateShader(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glesbinding::Binding::CreateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
    return glesbinding::Binding::CreateShaderProgramvEXT(type, count, strings);
}

void glCullFace(GLenum mode)
{
    return glesbinding::Binding::CullFace(mode);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
    return glesbinding::Binding::DebugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glesbinding::Binding::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glesbinding::Binding::DebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glesbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glesbinding::Binding::DeleteFencesNV(n, fences);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glesbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glesbinding::Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glesbinding::Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
    return glesbinding::Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glesbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
    return glesbinding::Binding::DeleteProgramPipelinesEXT(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glesbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glesbinding::Binding::DeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return glesbinding::Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glesbinding::Binding::DeleteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
    return glesbinding::Binding::DeleteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glesbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glesbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
    return glesbinding::Binding::DeleteVertexArraysOES(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glesbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glesbinding::Binding::DepthMask(flag);
}

void glDepthRangeArrayfvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::DepthRangeArrayfvNV(first, count, v);
}

void glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
    return glesbinding::Binding::DepthRangeIndexedfNV(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glesbinding::Binding::DepthRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glesbinding::Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glesbinding::Binding::Disable(cap);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
    return glesbinding::Binding::DisableDriverControlQCOM(driverControl);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glesbinding::Binding::DisableVertexAttribArray(index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiEXT(target, index);
}

void glDisableiNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiNV(target, index);
}

void glDisableiOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiOES(target, index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glesbinding::Binding::DiscardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glesbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glesbinding::Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glesbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glesbinding::Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glesbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glesbinding::Binding::DrawArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
    return glesbinding::Binding::DrawBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffersNV(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glesbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsBaseVertexOES(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glesbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glesbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glesbinding::Binding::DrawElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glesbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
    return glesbinding::Binding::EGLImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
    return glesbinding::Binding::EGLImageTargetTexture2DOES(target, image);
}

void glEnable(GLenum cap)
{
    return glesbinding::Binding::Enable(cap);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
    return glesbinding::Binding::EnableDriverControlQCOM(driverControl);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glesbinding::Binding::EnableVertexAttribArray(index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiEXT(target, index);
}

void glEnableiNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiNV(target, index);
}

void glEnableiOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiOES(target, index);
}

void glEndConditionalRenderNV()
{
    return glesbinding::Binding::EndConditionalRenderNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return glesbinding::Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
    return glesbinding::Binding::EndQuery(target);
}

void glEndQueryEXT(GLenum target)
{
    return glesbinding::Binding::EndQueryEXT(target);
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
    return glesbinding::Binding::EndTilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
    return glesbinding::Binding::EndTransformFeedback();
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
    return glesbinding::Binding::ExtGetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
    return glesbinding::Binding::ExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
    return glesbinding::Binding::ExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
    return glesbinding::Binding::ExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
    return glesbinding::Binding::ExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
    return glesbinding::Binding::ExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
    return glesbinding::Binding::ExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
    return glesbinding::Binding::ExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
    return glesbinding::Binding::ExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
    return glesbinding::Binding::ExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
    return glesbinding::Binding::ExtIsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
    return glesbinding::Binding::ExtTexObjectStateOverrideiQCOM(target, pname, param);
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glesbinding::Binding::FenceSync(condition, flags);
}

GLsync glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
    return glesbinding::Binding::FenceSyncAPPLE(condition, flags);
}

void glFinish()
{
    return glesbinding::Binding::Finish();
}

void glFinishFenceNV(GLuint fence)
{
    return glesbinding::Binding::FinishFenceNV(fence);
}

void glFlush()
{
    return glesbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glesbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glesbinding::Binding::FlushMappedBufferRangeEXT(target, offset, length);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return glesbinding::Binding::FragmentCoverageColorNV(color);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glesbinding::Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glesbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glesbinding::Binding::FramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glesbinding::Binding::FramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glesbinding::Binding::FramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glesbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return glesbinding::Binding::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTextureOES(target, attachment, texture, level);
}

void glFrontFace(GLenum mode)
{
    return glesbinding::Binding::FrontFace(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glesbinding::Binding::GenBuffers(n, buffers);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glesbinding::Binding::GenFencesNV(n, fences);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glesbinding::Binding::GenFramebuffers(n, framebuffers);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glesbinding::Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glesbinding::Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glesbinding::Binding::GenProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
    return glesbinding::Binding::GenProgramPipelinesEXT(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenQueries(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenQueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glesbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glesbinding::Binding::GenSamplers(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glesbinding::Binding::GenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glesbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
    return glesbinding::Binding::GenVertexArraysOES(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glesbinding::Binding::GenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glesbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glesbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glesbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glesbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glesbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
    return glesbinding::Binding::GetBufferPointervOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return glesbinding::Binding::GetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glesbinding::Binding::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
    return glesbinding::Binding::GetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
    return glesbinding::Binding::GetDriverControlsQCOM(num, size, driverControls);
}

GLenum glGetError()
{
    return glesbinding::Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFenceivNV(fence, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glesbinding::Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFloati_vNV(GLenum target, GLuint index, GLfloat * data)
{
    return glesbinding::Binding::GetFloati_vNV(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glesbinding::Binding::GetFloatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

GLenum glGetGraphicsResetStatusEXT()
{
    return glesbinding::Binding::GetGraphicsResetStatusEXT();
}

GLenum glGetGraphicsResetStatusKHR()
{
    return glesbinding::Binding::GetGraphicsResetStatusKHR();
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glesbinding::Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glesbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glesbinding::Binding::GetInteger64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetInteger64vAPPLE(pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glesbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
    return glesbinding::Binding::GetIntegeri_vEXT(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glesbinding::Binding::GetIntegerv(pname, data);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glesbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glesbinding::Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glesbinding::Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glesbinding::Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glesbinding::Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glesbinding::Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glesbinding::Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glesbinding::Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glesbinding::Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glesbinding::Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glesbinding::Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glesbinding::Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glesbinding::Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glesbinding::Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glesbinding::Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glesbinding::Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glesbinding::Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glesbinding::Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glesbinding::Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glesbinding::Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glesbinding::Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
    return glesbinding::Binding::GetPointervKHR(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glesbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glesbinding::Binding::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramPipelineivEXT(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return glesbinding::Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glesbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glesbinding::Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetQueryObjectuivEXT(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryivEXT(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameterIivOES(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetSamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetSamplerParameterIuivOES(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glesbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glesbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glesbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glesbinding::Binding::GetStringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glesbinding::Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glesbinding::Binding::GetSyncivAPPLE(sync, pname, bufSize, length, values);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIivOES(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameterIivOES(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetTexParameterIuivOES(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameteriv(target, pname, params);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glesbinding::Binding::GetTextureHandleNV(texture);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glesbinding::Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
    return glesbinding::Binding::GetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glesbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glesbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glesbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glesbinding::Binding::GetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glesbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glesbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glesbinding::Binding::GetnUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glesbinding::Binding::GetnUniformfvKHR(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetnUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetnUniformivKHR(program, location, bufSize, params);
}

void glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glesbinding::Binding::GetnUniformuivKHR(program, location, bufSize, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glesbinding::Binding::Hint(target, mode);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glesbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glesbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glesbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glesbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glesbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediEXT(target, index);
}

GLboolean glIsEnablediNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediNV(target, index);
}

GLboolean glIsEnablediOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediOES(target, index);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glesbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glesbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsPathNV(GLuint path)
{
    return glesbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return glesbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::IsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glesbinding::Binding::IsQuery(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
    return glesbinding::Binding::IsQueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glesbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glesbinding::Binding::IsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return glesbinding::Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glesbinding::Binding::IsSync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
    return glesbinding::Binding::IsSyncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glesbinding::Binding::IsTexture(texture);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glesbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glesbinding::Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
    return glesbinding::Binding::IsVertexArrayOES(array);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::LabelObjectEXT(type, object, length, label);
}

void glLineWidth(GLfloat width)
{
    return glesbinding::Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glesbinding::Binding::LinkProgram(program);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glesbinding::Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeTextureHandleResidentNV(handle);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
    return glesbinding::Binding::MapBufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glesbinding::Binding::MapBufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return glesbinding::Binding::MapBufferRangeEXT(target, offset, length, access);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glesbinding::Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glesbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMinSampleShadingOES(GLfloat value)
{
    return glesbinding::Binding::MinSampleShadingOES(value);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glesbinding::Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectEXT(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}

void glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return glesbinding::Binding::MultiDrawElementsBaseVertexEXT(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsBaseVertexOES(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return glesbinding::Binding::MultiDrawElementsBaseVertexOES(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glesbinding::Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectPtrLabelKHR(ptr, length, label);
}

void glPatchParameteriEXT(GLenum pname, GLint value)
{
    return glesbinding::Binding::PatchParameteriEXT(pname, value);
}

void glPatchParameteriOES(GLenum pname, GLint value)
{
    return glesbinding::Binding::PatchParameteriOES(pname, value);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glesbinding::Binding::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glesbinding::Binding::PathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return glesbinding::Binding::PathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glesbinding::Binding::PathDashArrayNV(path, dashCount, dashArray);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glesbinding::Binding::PathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return glesbinding::Binding::PathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glesbinding::Binding::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glesbinding::Binding::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glesbinding::Binding::PathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glesbinding::Binding::PathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glesbinding::Binding::PathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glesbinding::Binding::PathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glesbinding::Binding::PathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glesbinding::Binding::PathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glesbinding::Binding::PathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glesbinding::Binding::PathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glesbinding::Binding::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glesbinding::Binding::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPauseTransformFeedback()
{
    return glesbinding::Binding::PauseTransformFeedback();
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glesbinding::Binding::PixelStorei(pname, param);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glesbinding::Binding::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPolygonModeNV(GLenum face, GLenum mode)
{
    return glesbinding::Binding::PolygonModeNV(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glesbinding::Binding::PolygonOffset(factor, units);
}

void glPopDebugGroupKHR()
{
    return glesbinding::Binding::PopDebugGroupKHR();
}

void glPopGroupMarkerEXT()
{
    return glesbinding::Binding::PopGroupMarkerEXT();
}

void glPrimitiveBoundingBoxEXT(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return glesbinding::Binding::PrimitiveBoundingBoxEXT(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glPrimitiveBoundingBoxOES(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return glesbinding::Binding::PrimitiveBoundingBoxOES(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glesbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
    return glesbinding::Binding::ProgramBinaryOES(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glesbinding::Binding::ProgramParameteri(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glesbinding::Binding::ProgramParameteriEXT(program, pname, value);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glesbinding::Binding::ProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glesbinding::Binding::ProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glesbinding::Binding::ProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glesbinding::Binding::ProgramUniform1i(program, location, v0);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glesbinding::Binding::ProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glesbinding::Binding::ProgramUniform1ui(program, location, v0);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glesbinding::Binding::ProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glesbinding::Binding::ProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glesbinding::Binding::ProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glesbinding::Binding::ProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glesbinding::Binding::ProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glesbinding::Binding::ProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glesbinding::Binding::ProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glesbinding::Binding::ProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glesbinding::Binding::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glesbinding::Binding::ProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glesbinding::Binding::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glesbinding::Binding::ProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glesbinding::Binding::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glesbinding::Binding::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glesbinding::Binding::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glesbinding::Binding::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glesbinding::Binding::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::ProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glesbinding::Binding::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glesbinding::Binding::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::ProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glesbinding::Binding::ProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glesbinding::Binding::ProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glesbinding::Binding::PushDebugGroupKHR(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glesbinding::Binding::PushGroupMarkerEXT(length, marker);
}

void glQueryCounterEXT(GLuint id, GLenum target)
{
    return glesbinding::Binding::QueryCounterEXT(id, target);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return glesbinding::Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return glesbinding::Binding::ReadBuffer(src);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
    return glesbinding::Binding::ReadBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
    return glesbinding::Binding::ReadBufferNV(mode);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glesbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glesbinding::Binding::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsKHR(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glesbinding::Binding::ReadnPixelsKHR(x, y, width, height, format, type, bufSize, data);
}

void glReleaseShaderCompiler()
{
    return glesbinding::Binding::ReleaseShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glResolveDepthValuesNV()
{
    return glesbinding::Binding::ResolveDepthValuesNV();
}

void glResolveMultisampleFramebufferAPPLE()
{
    return glesbinding::Binding::ResolveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
    return glesbinding::Binding::ResumeTransformFeedback();
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glesbinding::Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glesbinding::Binding::SampleMaski(maskNumber, mask);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameterIivOES(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glesbinding::Binding::SamplerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glesbinding::Binding::SamplerParameterIuivOES(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glesbinding::Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glesbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glesbinding::Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::Scissor(x, y, width, height);
}

void glScissorArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return glesbinding::Binding::ScissorArrayvNV(first, count, v);
}

void glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::ScissorIndexedNV(index, left, bottom, width, height);
}

void glScissorIndexedvNV(GLuint index, const GLint * v)
{
    return glesbinding::Binding::ScissorIndexedvNV(index, v);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glesbinding::Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glesbinding::Binding::SetFenceNV(fence, condition);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glesbinding::Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glesbinding::Binding::ShaderSource(shader, count, string, length);
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
    return glesbinding::Binding::StartTilingQCOM(x, y, width, height, preserveMask);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glesbinding::Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glesbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glesbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glesbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glesbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glesbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glesbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glesbinding::Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glesbinding::Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glesbinding::Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return glesbinding::Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return glesbinding::Binding::TestFenceNV(fence);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glesbinding::Binding::TexBufferEXT(target, internalformat, buffer);
}

void glTexBufferOES(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glesbinding::Binding::TexBufferOES(target, internalformat, buffer);
}

void glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glesbinding::Binding::TexBufferRangeEXT(target, internalformat, buffer, offset, size);
}

void glTexBufferRangeOES(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glesbinding::Binding::TexBufferRangeOES(target, internalformat, buffer, offset, size);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
    return glesbinding::Binding::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glesbinding::Binding::TexParameterIivEXT(target, pname, params);
}

void glTexParameterIivOES(GLenum target, GLenum pname, const GLint * params)
{
    return glesbinding::Binding::TexParameterIivOES(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glesbinding::Binding::TexParameterIuivEXT(target, pname, params);
}

void glTexParameterIuivOES(GLenum target, GLenum pname, const GLuint * params)
{
    return glesbinding::Binding::TexParameterIuivOES(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glesbinding::Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glesbinding::Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glesbinding::Binding::TexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glesbinding::Binding::TexParameteriv(target, pname, params);
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glesbinding::Binding::TexStorage1DEXT(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::TexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::TexStorage2DEXT(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glesbinding::Binding::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glesbinding::Binding::TexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glesbinding::Binding::TexStorage3DEXT(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisampleOES(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glesbinding::Binding::TexStorage3DMultisampleOES(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glesbinding::Binding::TexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glesbinding::Binding::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glesbinding::Binding::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glesbinding::Binding::TextureViewEXT(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTextureViewOES(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glesbinding::Binding::TextureViewOES(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glesbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glesbinding::Binding::Uniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::Uniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glesbinding::Binding::Uniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::Uniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glesbinding::Binding::Uniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::Uniform1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glesbinding::Binding::Uniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::Uniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glesbinding::Binding::Uniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::Uniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glesbinding::Binding::Uniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::Uniform2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glesbinding::Binding::Uniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::Uniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glesbinding::Binding::Uniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::Uniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glesbinding::Binding::Uniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::Uniform3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glesbinding::Binding::Uniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glesbinding::Binding::Uniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glesbinding::Binding::Uniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glesbinding::Binding::Uniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glesbinding::Binding::Uniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glesbinding::Binding::Uniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glesbinding::Binding::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glesbinding::Binding::UniformHandleui64NV(location, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glesbinding::Binding::UniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix2x3fvNV(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix2x4fvNV(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix3x2fvNV(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix3x4fvNV(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix4x2fvNV(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix4x3fv(location, count, transpose, value);
}

void glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glesbinding::Binding::UniformMatrix4x3fvNV(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glesbinding::Binding::UnmapBuffer(target);
}

GLboolean glUnmapBufferOES(GLenum target)
{
    return glesbinding::Binding::UnmapBufferOES(target);
}

void glUseProgram(GLuint program)
{
    return glesbinding::Binding::UseProgram(program);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glesbinding::Binding::UseProgramStages(pipeline, stages, program);
}

void glUseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program)
{
    return glesbinding::Binding::UseProgramStagesEXT(pipeline, stages, program);
}

void glValidateProgram(GLuint program)
{
    return glesbinding::Binding::ValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::ValidateProgramPipeline(pipeline);
}

void glValidateProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::ValidateProgramPipelineEXT(pipeline);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glesbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glesbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glesbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glesbinding::Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glesbinding::Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glesbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glesbinding::Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glesbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glesbinding::Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glesbinding::Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glesbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glesbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glesbinding::Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::Viewport(x, y, width, height);
}

void glViewportArrayvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::ViewportArrayvNV(first, count, v);
}

void glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glesbinding::Binding::ViewportIndexedfNV(index, x, y, w, h);
}

void glViewportIndexedfvNV(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::ViewportIndexedfvNV(index, v);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glesbinding::Binding::WaitSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glesbinding::Binding::WaitSyncAPPLE(sync, flags, timeout);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glesbinding::Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}


} // namespace gles
