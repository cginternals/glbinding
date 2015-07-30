#include <glpbinding/glp/functions.h>

#include <glpbinding/Binding.h>
#include <glpbinding/glp/typeintegrations.h>

#include <glpbinding/Value.h>


namespace glp
{

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glpbinding::Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
    return glpbinding::Binding::ActiveShaderProgramEXT(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return glpbinding::Binding::ActiveTexture(texture);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
    return glpbinding::Binding::AlphaFuncQCOM(func, ref);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glpbinding::Binding::AttachShader(program, shader);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glpbinding::Binding::BeginConditionalRenderNV(id, mode);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glpbinding::Binding::BeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glpbinding::Binding::BeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glpbinding::Binding::BeginQuery(target, id);
}

void glBeginQueryEXT(GLenum target, GLuint id)
{
    return glpbinding::Binding::BeginQueryEXT(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glpbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glpbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glpbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glpbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glpbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glpbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glpbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glpbinding::Binding::BindProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
    return glpbinding::Binding::BindProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glpbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glpbinding::Binding::BindSampler(unit, sampler);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glpbinding::Binding::BindTexture(target, texture);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glpbinding::Binding::BindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glpbinding::Binding::BindVertexArray(array);
}

void glBindVertexArrayOES(GLuint array)
{
    return glpbinding::Binding::BindVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glpbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBlendBarrierKHR()
{
    return glpbinding::Binding::BlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return glpbinding::Binding::BlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glpbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glpbinding::Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glpbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glpbinding::Binding::BlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glpbinding::Binding::BlendEquationSeparateiOES(buf, modeRGB, modeAlpha);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    return glpbinding::Binding::BlendEquationiEXT(buf, mode);
}

void glBlendEquationiOES(GLuint buf, GLenum mode)
{
    return glpbinding::Binding::BlendEquationiOES(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glpbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glpbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glpbinding::Binding::BlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glpbinding::Binding::BlendFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    return glpbinding::Binding::BlendFunciEXT(buf, src, dst);
}

void glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
    return glpbinding::Binding::BlendFunciOES(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glpbinding::Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glpbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return glpbinding::Binding::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return glpbinding::Binding::BlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glpbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferStorageEXT(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
    return glpbinding::Binding::BufferStorageEXT(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glpbinding::Binding::BufferSubData(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return glpbinding::Binding::CheckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return glpbinding::Binding::Clear(mask);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glpbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glpbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glpbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glpbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glpbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return glpbinding::Binding::ClearDepthf(d);
}

void glClearStencil(GLint s)
{
    return glpbinding::Binding::ClearStencil(s);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return glpbinding::Binding::ClientWaitSync(sync, flags, timeout);
}

GLenum glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glpbinding::Binding::ClientWaitSyncAPPLE(sync, flags, timeout);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glpbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glpbinding::Binding::ColorMaskiEXT(index, r, g, b, a);
}

void glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glpbinding::Binding::ColorMaskiOES(index, r, g, b, a);
}

void glCompileShader(GLuint shader)
{
    return glpbinding::Binding::CompileShader(shader);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glpbinding::Binding::CompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glpbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glpbinding::Binding::CopyBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glpbinding::Binding::CopyImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glpbinding::Binding::CopyImageSubDataOES(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glpbinding::Binding::CopyPathNV(resultPath, srcPath);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glpbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::CopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
    return glpbinding::Binding::CopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glpbinding::Binding::CoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glpbinding::Binding::CoverStrokePathNV(path, coverMode);
}

void glCoverageMaskNV(GLboolean mask)
{
    return glpbinding::Binding::CoverageMaskNV(mask);
}

void glCoverageModulationNV(GLenum components)
{
    return glpbinding::Binding::CoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return glpbinding::Binding::CoverageModulationTableNV(n, v);
}

void glCoverageOperationNV(GLenum operation)
{
    return glpbinding::Binding::CoverageOperationNV(operation);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glpbinding::Binding::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
    return glpbinding::Binding::CreateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return glpbinding::Binding::CreateShader(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glpbinding::Binding::CreateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
    return glpbinding::Binding::CreateShaderProgramvEXT(type, count, strings);
}

void glCullFace(GLenum mode)
{
    return glpbinding::Binding::CullFace(mode);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
    return glpbinding::Binding::DebugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glpbinding::Binding::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glpbinding::Binding::DebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glpbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glpbinding::Binding::DeleteFencesNV(n, fences);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glpbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glpbinding::Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glpbinding::Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glpbinding::Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
    return glpbinding::Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glpbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
    return glpbinding::Binding::DeleteProgramPipelinesEXT(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glpbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
    return glpbinding::Binding::DeleteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glpbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glpbinding::Binding::DeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return glpbinding::Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glpbinding::Binding::DeleteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
    return glpbinding::Binding::DeleteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glpbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glpbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glpbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
    return glpbinding::Binding::DeleteVertexArraysOES(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glpbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glpbinding::Binding::DepthMask(flag);
}

void glDepthRangeArrayfvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glpbinding::Binding::DepthRangeArrayfvNV(first, count, v);
}

void glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
    return glpbinding::Binding::DepthRangeIndexedfNV(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glpbinding::Binding::DepthRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glpbinding::Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glpbinding::Binding::Disable(cap);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
    return glpbinding::Binding::DisableDriverControlQCOM(driverControl);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glpbinding::Binding::DisableVertexAttribArray(index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
    return glpbinding::Binding::DisableiEXT(target, index);
}

void glDisableiNV(GLenum target, GLuint index)
{
    return glpbinding::Binding::DisableiNV(target, index);
}

void glDisableiOES(GLenum target, GLuint index)
{
    return glpbinding::Binding::DisableiOES(target, index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glpbinding::Binding::DiscardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glpbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glpbinding::Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glpbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glpbinding::Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glpbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glpbinding::Binding::DrawArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glpbinding::Binding::DrawArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glpbinding::Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glpbinding::Binding::DrawArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glpbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
    return glpbinding::Binding::DrawBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
    return glpbinding::Binding::DrawBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
    return glpbinding::Binding::DrawBuffersNV(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glpbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glpbinding::Binding::DrawElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glpbinding::Binding::DrawElementsBaseVertexOES(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glpbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glpbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glpbinding::Binding::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glpbinding::Binding::DrawElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glpbinding::Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glpbinding::Binding::DrawElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glpbinding::Binding::DrawElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glpbinding::Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glpbinding::Binding::DrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glpbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glpbinding::Binding::DrawRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glpbinding::Binding::DrawRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
    return glpbinding::Binding::EGLImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
    return glpbinding::Binding::EGLImageTargetTexture2DOES(target, image);
}

void glEnable(GLenum cap)
{
    return glpbinding::Binding::Enable(cap);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
    return glpbinding::Binding::EnableDriverControlQCOM(driverControl);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glpbinding::Binding::EnableVertexAttribArray(index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
    return glpbinding::Binding::EnableiEXT(target, index);
}

void glEnableiNV(GLenum target, GLuint index)
{
    return glpbinding::Binding::EnableiNV(target, index);
}

void glEnableiOES(GLenum target, GLuint index)
{
    return glpbinding::Binding::EnableiOES(target, index);
}

void glEndConditionalRenderNV()
{
    return glpbinding::Binding::EndConditionalRenderNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return glpbinding::Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glpbinding::Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
    return glpbinding::Binding::EndQuery(target);
}

void glEndQueryEXT(GLenum target)
{
    return glpbinding::Binding::EndQueryEXT(target);
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
    return glpbinding::Binding::EndTilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
    return glpbinding::Binding::EndTransformFeedback();
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
    return glpbinding::Binding::ExtGetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
    return glpbinding::Binding::ExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
    return glpbinding::Binding::ExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
    return glpbinding::Binding::ExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
    return glpbinding::Binding::ExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
    return glpbinding::Binding::ExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
    return glpbinding::Binding::ExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
    return glpbinding::Binding::ExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
    return glpbinding::Binding::ExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
    return glpbinding::Binding::ExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
    return glpbinding::Binding::ExtIsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
    return glpbinding::Binding::ExtTexObjectStateOverrideiQCOM(target, pname, param);
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glpbinding::Binding::FenceSync(condition, flags);
}

GLsync glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
    return glpbinding::Binding::FenceSyncAPPLE(condition, flags);
}

void glFinish()
{
    return glpbinding::Binding::Finish();
}

void glFinishFenceNV(GLuint fence)
{
    return glpbinding::Binding::FinishFenceNV(fence);
}

void glFlush()
{
    return glpbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glpbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glpbinding::Binding::FlushMappedBufferRangeEXT(target, offset, length);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return glpbinding::Binding::FragmentCoverageColorNV(color);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glpbinding::Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glpbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return glpbinding::Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glpbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glpbinding::Binding::FramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glpbinding::Binding::FramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glpbinding::Binding::FramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glpbinding::Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glpbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return glpbinding::Binding::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glpbinding::Binding::FramebufferTextureOES(target, attachment, texture, level);
}

void glFrontFace(GLenum mode)
{
    return glpbinding::Binding::FrontFace(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glpbinding::Binding::GenBuffers(n, buffers);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glpbinding::Binding::GenFencesNV(n, fences);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glpbinding::Binding::GenFramebuffers(n, framebuffers);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glpbinding::Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glpbinding::Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glpbinding::Binding::GenProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
    return glpbinding::Binding::GenProgramPipelinesEXT(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glpbinding::Binding::GenQueries(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
    return glpbinding::Binding::GenQueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glpbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glpbinding::Binding::GenSamplers(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glpbinding::Binding::GenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glpbinding::Binding::GenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glpbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
    return glpbinding::Binding::GenVertexArraysOES(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glpbinding::Binding::GenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glpbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glpbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glpbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glpbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glpbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glpbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glpbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glpbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glpbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
    return glpbinding::Binding::GetBufferPointervOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return glpbinding::Binding::GetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glpbinding::Binding::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
    return glpbinding::Binding::GetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
    return glpbinding::Binding::GetDriverControlsQCOM(num, size, driverControls);
}

GLenum glGetError()
{
    return glpbinding::Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetFenceivNV(fence, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glpbinding::Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFloati_vNV(GLenum target, GLuint index, GLfloat * data)
{
    return glpbinding::Binding::GetFloati_vNV(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glpbinding::Binding::GetFloatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glpbinding::Binding::GetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

GLenum glGetGraphicsResetStatusEXT()
{
    return glpbinding::Binding::GetGraphicsResetStatusEXT();
}

GLenum glGetGraphicsResetStatusKHR()
{
    return glpbinding::Binding::GetGraphicsResetStatusKHR();
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glpbinding::Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glpbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glpbinding::Binding::GetInteger64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
    return glpbinding::Binding::GetInteger64vAPPLE(pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glpbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
    return glpbinding::Binding::GetIntegeri_vEXT(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glpbinding::Binding::GetIntegerv(pname, data);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glpbinding::Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glpbinding::Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glpbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glpbinding::Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glpbinding::Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glpbinding::Binding::GetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glpbinding::Binding::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glpbinding::Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glpbinding::Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glpbinding::Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glpbinding::Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glpbinding::Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glpbinding::Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glpbinding::Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glpbinding::Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glpbinding::Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glpbinding::Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glpbinding::Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glpbinding::Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glpbinding::Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glpbinding::Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glpbinding::Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glpbinding::Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glpbinding::Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glpbinding::Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glpbinding::Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
    return glpbinding::Binding::GetPointervKHR(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glpbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glpbinding::Binding::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glpbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glpbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glpbinding::Binding::GetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetProgramPipelineivEXT(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glpbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glpbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glpbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return glpbinding::Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glpbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glpbinding::Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetQueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glpbinding::Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetQueryObjectuivEXT(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetQueryivEXT(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetSamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetSamplerParameterIivOES(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetSamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetSamplerParameterIuivOES(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glpbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glpbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glpbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glpbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glpbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glpbinding::Binding::GetStringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glpbinding::Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glpbinding::Binding::GetSyncivAPPLE(sync, pname, bufSize, length, values);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glpbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIivOES(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetTexParameterIivOES(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetTexParameterIuivOES(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glpbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetTexParameteriv(target, pname, params);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glpbinding::Binding::GetTextureHandleNV(texture);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glpbinding::Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glpbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
    return glpbinding::Binding::GetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glpbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glpbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glpbinding::Binding::GetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glpbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glpbinding::Binding::GetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glpbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glpbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glpbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glpbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glpbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glpbinding::Binding::GetnUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glpbinding::Binding::GetnUniformfvKHR(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glpbinding::Binding::GetnUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glpbinding::Binding::GetnUniformivKHR(program, location, bufSize, params);
}

void glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glpbinding::Binding::GetnUniformuivKHR(program, location, bufSize, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glpbinding::Binding::Hint(target, mode);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glpbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glpbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glpbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glpbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glpbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
    return glpbinding::Binding::IsEnablediEXT(target, index);
}

GLboolean glIsEnablediNV(GLenum target, GLuint index)
{
    return glpbinding::Binding::IsEnablediNV(target, index);
}

GLboolean glIsEnablediOES(GLenum target, GLuint index)
{
    return glpbinding::Binding::IsEnablediOES(target, index);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glpbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glpbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glpbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsPathNV(GLuint path)
{
    return glpbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glpbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glpbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return glpbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glpbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
    return glpbinding::Binding::IsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glpbinding::Binding::IsQuery(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
    return glpbinding::Binding::IsQueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glpbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glpbinding::Binding::IsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return glpbinding::Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glpbinding::Binding::IsSync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
    return glpbinding::Binding::IsSyncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glpbinding::Binding::IsTexture(texture);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glpbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glpbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glpbinding::Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
    return glpbinding::Binding::IsVertexArrayOES(array);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glpbinding::Binding::LabelObjectEXT(type, object, length, label);
}

void glLineWidth(GLfloat width)
{
    return glpbinding::Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glpbinding::Binding::LinkProgram(program);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glpbinding::Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glpbinding::Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glpbinding::Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glpbinding::Binding::MakeTextureHandleResidentNV(handle);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
    return glpbinding::Binding::MapBufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glpbinding::Binding::MapBufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return glpbinding::Binding::MapBufferRangeEXT(target, offset, length, access);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glpbinding::Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glpbinding::Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glpbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMinSampleShadingOES(GLfloat value)
{
    return glpbinding::Binding::MinSampleShadingOES(value);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glpbinding::Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectEXT(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glpbinding::Binding::MultiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}

void glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return glpbinding::Binding::MultiDrawElementsBaseVertexEXT(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsBaseVertexOES(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return glpbinding::Binding::MultiDrawElementsBaseVertexOES(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glpbinding::Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glpbinding::Binding::MultiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glpbinding::Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glpbinding::Binding::ObjectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
    return glpbinding::Binding::ObjectPtrLabelKHR(ptr, length, label);
}

void glPatchParameteriEXT(GLenum pname, GLint value)
{
    return glpbinding::Binding::PatchParameteriEXT(pname, value);
}

void glPatchParameteriOES(GLenum pname, GLint value)
{
    return glpbinding::Binding::PatchParameteriOES(pname, value);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glpbinding::Binding::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glpbinding::Binding::PathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return glpbinding::Binding::PathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glpbinding::Binding::PathDashArrayNV(path, dashCount, dashArray);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glpbinding::Binding::PathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return glpbinding::Binding::PathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glpbinding::Binding::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glpbinding::Binding::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glpbinding::Binding::PathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glpbinding::Binding::PathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glpbinding::Binding::PathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glpbinding::Binding::PathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glpbinding::Binding::PathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glpbinding::Binding::PathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glpbinding::Binding::PathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glpbinding::Binding::PathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glpbinding::Binding::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glpbinding::Binding::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPauseTransformFeedback()
{
    return glpbinding::Binding::PauseTransformFeedback();
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glpbinding::Binding::PixelStorei(pname, param);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glpbinding::Binding::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPolygonModeNV(GLenum face, GLenum mode)
{
    return glpbinding::Binding::PolygonModeNV(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glpbinding::Binding::PolygonOffset(factor, units);
}

void glPopDebugGroupKHR()
{
    return glpbinding::Binding::PopDebugGroupKHR();
}

void glPopGroupMarkerEXT()
{
    return glpbinding::Binding::PopGroupMarkerEXT();
}

void glPrimitiveBoundingBoxEXT(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return glpbinding::Binding::PrimitiveBoundingBoxEXT(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glPrimitiveBoundingBoxOES(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return glpbinding::Binding::PrimitiveBoundingBoxOES(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glpbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
    return glpbinding::Binding::ProgramBinaryOES(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glpbinding::Binding::ProgramParameteri(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glpbinding::Binding::ProgramParameteriEXT(program, pname, value);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glpbinding::Binding::ProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glpbinding::Binding::ProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glpbinding::Binding::ProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glpbinding::Binding::ProgramUniform1i(program, location, v0);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glpbinding::Binding::ProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glpbinding::Binding::ProgramUniform1ui(program, location, v0);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glpbinding::Binding::ProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glpbinding::Binding::ProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glpbinding::Binding::ProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glpbinding::Binding::ProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glpbinding::Binding::ProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glpbinding::Binding::ProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glpbinding::Binding::ProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glpbinding::Binding::ProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glpbinding::Binding::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glpbinding::Binding::ProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glpbinding::Binding::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glpbinding::Binding::ProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glpbinding::Binding::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glpbinding::Binding::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glpbinding::Binding::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glpbinding::Binding::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glpbinding::Binding::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::ProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glpbinding::Binding::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glpbinding::Binding::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::ProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glpbinding::Binding::ProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glpbinding::Binding::ProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glpbinding::Binding::PushDebugGroupKHR(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glpbinding::Binding::PushGroupMarkerEXT(length, marker);
}

void glQueryCounterEXT(GLuint id, GLenum target)
{
    return glpbinding::Binding::QueryCounterEXT(id, target);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return glpbinding::Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return glpbinding::Binding::ReadBuffer(src);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
    return glpbinding::Binding::ReadBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
    return glpbinding::Binding::ReadBufferNV(mode);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glpbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glpbinding::Binding::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsKHR(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glpbinding::Binding::ReadnPixelsKHR(x, y, width, height, format, type, bufSize, data);
}

void glReleaseShaderCompiler()
{
    return glpbinding::Binding::ReleaseShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::RenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glResolveDepthValuesNV()
{
    return glpbinding::Binding::ResolveDepthValuesNV();
}

void glResolveMultisampleFramebufferAPPLE()
{
    return glpbinding::Binding::ResolveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
    return glpbinding::Binding::ResumeTransformFeedback();
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glpbinding::Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glpbinding::Binding::SampleMaski(maskNumber, mask);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
    return glpbinding::Binding::SamplerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint * param)
{
    return glpbinding::Binding::SamplerParameterIivOES(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glpbinding::Binding::SamplerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glpbinding::Binding::SamplerParameterIuivOES(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glpbinding::Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glpbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glpbinding::Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glpbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::Scissor(x, y, width, height);
}

void glScissorArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return glpbinding::Binding::ScissorArrayvNV(first, count, v);
}

void glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::ScissorIndexedNV(index, left, bottom, width, height);
}

void glScissorIndexedvNV(GLuint index, const GLint * v)
{
    return glpbinding::Binding::ScissorIndexedvNV(index, v);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glpbinding::Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glpbinding::Binding::SetFenceNV(fence, condition);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glpbinding::Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glpbinding::Binding::ShaderSource(shader, count, string, length);
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
    return glpbinding::Binding::StartTilingQCOM(x, y, width, height, preserveMask);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glpbinding::Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glpbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glpbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glpbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glpbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glpbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glpbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glpbinding::Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glpbinding::Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glpbinding::Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return glpbinding::Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return glpbinding::Binding::TestFenceNV(fence);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glpbinding::Binding::TexBufferEXT(target, internalformat, buffer);
}

void glTexBufferOES(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glpbinding::Binding::TexBufferOES(target, internalformat, buffer);
}

void glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glpbinding::Binding::TexBufferRangeEXT(target, internalformat, buffer, offset, size);
}

void glTexBufferRangeOES(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glpbinding::Binding::TexBufferRangeOES(target, internalformat, buffer, offset, size);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
    return glpbinding::Binding::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glpbinding::Binding::TexParameterIivEXT(target, pname, params);
}

void glTexParameterIivOES(GLenum target, GLenum pname, const GLint * params)
{
    return glpbinding::Binding::TexParameterIivOES(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glpbinding::Binding::TexParameterIuivEXT(target, pname, params);
}

void glTexParameterIuivOES(GLenum target, GLenum pname, const GLuint * params)
{
    return glpbinding::Binding::TexParameterIuivOES(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glpbinding::Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glpbinding::Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glpbinding::Binding::TexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glpbinding::Binding::TexParameteriv(target, pname, params);
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glpbinding::Binding::TexStorage1DEXT(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::TexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::TexStorage2DEXT(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glpbinding::Binding::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glpbinding::Binding::TexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glpbinding::Binding::TexStorage3DEXT(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisampleOES(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glpbinding::Binding::TexStorage3DMultisampleOES(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glpbinding::Binding::TexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glpbinding::Binding::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glpbinding::Binding::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glpbinding::Binding::TextureViewEXT(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTextureViewOES(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glpbinding::Binding::TextureViewOES(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glpbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glpbinding::Binding::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glpbinding::Binding::Uniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::Uniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glpbinding::Binding::Uniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::Uniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glpbinding::Binding::Uniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::Uniform1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glpbinding::Binding::Uniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::Uniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glpbinding::Binding::Uniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::Uniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glpbinding::Binding::Uniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::Uniform2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glpbinding::Binding::Uniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::Uniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glpbinding::Binding::Uniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::Uniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glpbinding::Binding::Uniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::Uniform3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glpbinding::Binding::Uniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glpbinding::Binding::Uniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glpbinding::Binding::Uniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glpbinding::Binding::Uniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glpbinding::Binding::Uniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glpbinding::Binding::Uniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glpbinding::Binding::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glpbinding::Binding::UniformHandleui64NV(location, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glpbinding::Binding::UniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix2x3fvNV(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix2x4fvNV(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix3x2fvNV(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix3x4fvNV(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix4x2fvNV(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix4x3fv(location, count, transpose, value);
}

void glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glpbinding::Binding::UniformMatrix4x3fvNV(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glpbinding::Binding::UnmapBuffer(target);
}

GLboolean glUnmapBufferOES(GLenum target)
{
    return glpbinding::Binding::UnmapBufferOES(target);
}

void glUseProgram(GLuint program)
{
    return glpbinding::Binding::UseProgram(program);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glpbinding::Binding::UseProgramStages(pipeline, stages, program);
}

void glUseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program)
{
    return glpbinding::Binding::UseProgramStagesEXT(pipeline, stages, program);
}

void glValidateProgram(GLuint program)
{
    return glpbinding::Binding::ValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glpbinding::Binding::ValidateProgramPipeline(pipeline);
}

void glValidateProgramPipelineEXT(GLuint pipeline)
{
    return glpbinding::Binding::ValidateProgramPipelineEXT(pipeline);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glpbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glpbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glpbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glpbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glpbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glpbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glpbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glpbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glpbinding::Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glpbinding::Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    return glpbinding::Binding::VertexAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
    return glpbinding::Binding::VertexAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
    return glpbinding::Binding::VertexAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glpbinding::Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glpbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glpbinding::Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glpbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glpbinding::Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glpbinding::Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glpbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glpbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glpbinding::Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glpbinding::Binding::Viewport(x, y, width, height);
}

void glViewportArrayvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glpbinding::Binding::ViewportArrayvNV(first, count, v);
}

void glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glpbinding::Binding::ViewportIndexedfNV(index, x, y, w, h);
}

void glViewportIndexedfvNV(GLuint index, const GLfloat * v)
{
    return glpbinding::Binding::ViewportIndexedfvNV(index, v);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glpbinding::Binding::WaitSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glpbinding::Binding::WaitSyncAPPLE(sync, flags, timeout);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glpbinding::Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}


} // namespace glp
