#include <glesbinding/gles/functions.h>

#include <glesbinding/Binding.h>

#include <glesbinding/Value.h>


namespace gles
{

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return gles2binding::Binding::iveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
    return gles2binding::Binding::iveShaderProgramEXT(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return gles2binding::Binding::iveTexture(texture);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
    return gles2binding::Binding::haFuncQCOM(func, ref);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return gles2binding::Binding::achShader(program, shader);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return gles2binding::Binding::inConditionalRenderNV(id, mode);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return gles2binding::Binding::inPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return gles2binding::Binding::inPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return gles2binding::Binding::inQuery(target, id);
}

void glBeginQueryEXT(GLenum target, GLuint id)
{
    return gles2binding::Binding::inQueryEXT(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return gles2binding::Binding::inTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return gles2binding::Binding::dAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return gles2binding::Binding::dBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return gles2binding::Binding::dBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gles2binding::Binding::dBufferRange(target, index, buffer, offset, size);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return gles2binding::Binding::dFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return gles2binding::Binding::dImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return gles2binding::Binding::dProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
    return gles2binding::Binding::dProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return gles2binding::Binding::dRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return gles2binding::Binding::dSampler(unit, sampler);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return gles2binding::Binding::dTexture(target, texture);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return gles2binding::Binding::dTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return gles2binding::Binding::dVertexArray(array);
}

void glBindVertexArrayOES(GLuint array)
{
    return gles2binding::Binding::dVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gles2binding::Binding::dVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBlendBarrierKHR()
{
    return gles2binding::Binding::ndBarrierKHR();
}

void glBlendBarrierNV()
{
    return gles2binding::Binding::ndBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gles2binding::Binding::ndColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return gles2binding::Binding::ndEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return gles2binding::Binding::ndEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gles2binding::Binding::ndEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gles2binding::Binding::ndEquationSeparateiOES(buf, modeRGB, modeAlpha);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    return gles2binding::Binding::ndEquationiEXT(buf, mode);
}

void glBlendEquationiOES(GLuint buf, GLenum mode)
{
    return gles2binding::Binding::ndEquationiOES(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return gles2binding::Binding::ndFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gles2binding::Binding::ndFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gles2binding::Binding::ndFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gles2binding::Binding::ndFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    return gles2binding::Binding::ndFunciEXT(buf, src, dst);
}

void glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
    return gles2binding::Binding::ndFunciOES(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return gles2binding::Binding::ndParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gles2binding::Binding::tFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLES2bitfield mask, GLenum filter)
{
    return gles2binding::Binding::tFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLES2bitfield mask, GLenum filter)
{
    return gles2binding::Binding::tFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return gles2binding::Binding::ferData(target, size, data, usage);
}

void glBufferStorageEXT(GLenum target, GLsizeiptr size, const void * data, GLES2bitfield flags)
{
    return gles2binding::Binding::ferStorageEXT(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gles2binding::Binding::ferSubData(target, offset, size, data);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return gles2binding::Binding::ckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return gles2binding::Binding::ar(mask);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return gles2binding::Binding::arBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return gles2binding::Binding::arBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return gles2binding::Binding::arBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return gles2binding::Binding::arBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gles2binding::Binding::arColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return gles2binding::Binding::arDepthf(d);
}

void glClearStencil(GLint s)
{
    return gles2binding::Binding::arStencil(s);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return gles2binding::Binding::entWaitSync(sync, flags, timeout);
}

GLenum glClientWaitSyncAPPLE(GLsync sync, GLES2bitfield flags, GLuint64 timeout)
{
    return gles2binding::Binding::entWaitSyncAPPLE(sync, flags, timeout);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gles2binding::Binding::orMask(red, green, blue, alpha);
}

void glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gles2binding::Binding::orMaskiEXT(index, r, g, b, a);
}

void glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gles2binding::Binding::orMaskiOES(index, r, g, b, a);
}

void glCompileShader(GLuint shader)
{
    return gles2binding::Binding::pileShader(shader);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gles2binding::Binding::pressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gles2binding::Binding::yBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gles2binding::Binding::yBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return gles2binding::Binding::yImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return gles2binding::Binding::yImageSubDataOES(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return gles2binding::Binding::yPathNV(resultPath, srcPath);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gles2binding::Binding::yTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::yTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::yTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::yTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
    return gles2binding::Binding::yTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::erFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return gles2binding::Binding::erFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::erStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return gles2binding::Binding::erStrokePathNV(path, coverMode);
}

void glCoverageMaskNV(GLboolean mask)
{
    return gles2binding::Binding::erageMaskNV(mask);
}

void glCoverageModulationNV(GLenum components)
{
    return gles2binding::Binding::erageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return gles2binding::Binding::erageModulationTableNV(n, v);
}

void glCoverageOperationNV(GLenum operation)
{
    return gles2binding::Binding::erageOperationNV(operation);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return gles2binding::Binding::atePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
    return gles2binding::Binding::ateProgram();
}

GLuint glCreateShader(GLenum type)
{
    return gles2binding::Binding::ateShader(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return gles2binding::Binding::ateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
    return gles2binding::Binding::ateShaderProgramvEXT(type, count, strings);
}

void glCullFace(GLenum mode)
{
    return gles2binding::Binding::lFace(mode);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
    return gles2binding::Binding::ugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gles2binding::Binding::ugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return gles2binding::Binding::ugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return gles2binding::Binding::eteBuffers(n, buffers);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return gles2binding::Binding::eteFencesNV(n, fences);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return gles2binding::Binding::eteFramebuffers(n, framebuffers);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return gles2binding::Binding::etePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gles2binding::Binding::etePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return gles2binding::Binding::etePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
    return gles2binding::Binding::eteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return gles2binding::Binding::eteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
    return gles2binding::Binding::eteProgramPipelinesEXT(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return gles2binding::Binding::eteQueries(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
    return gles2binding::Binding::eteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return gles2binding::Binding::eteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return gles2binding::Binding::eteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return gles2binding::Binding::eteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return gles2binding::Binding::eteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
    return gles2binding::Binding::eteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return gles2binding::Binding::eteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return gles2binding::Binding::eteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return gles2binding::Binding::eteVertexArrays(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
    return gles2binding::Binding::eteVertexArraysOES(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return gles2binding::Binding::thFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return gles2binding::Binding::thMask(flag);
}

void glDepthRangeArrayfvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return gles2binding::Binding::thRangeArrayfvNV(first, count, v);
}

void glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
    return gles2binding::Binding::thRangeIndexedfNV(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return gles2binding::Binding::thRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return gles2binding::Binding::achShader(program, shader);
}

void glDisable(GLenum cap)
{
    return gles2binding::Binding::able(cap);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
    return gles2binding::Binding::ableDriverControlQCOM(driverControl);
}

void glDisableVertexAttribArray(GLuint index)
{
    return gles2binding::Binding::ableVertexAttribArray(index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
    return gles2binding::Binding::ableiEXT(target, index);
}

void glDisableiNV(GLenum target, GLuint index)
{
    return gles2binding::Binding::ableiNV(target, index);
}

void glDisableiOES(GLenum target, GLuint index)
{
    return gles2binding::Binding::ableiOES(target, index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return gles2binding::Binding::cardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return gles2binding::Binding::patchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return gles2binding::Binding::patchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return gles2binding::Binding::wArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return gles2binding::Binding::wArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return gles2binding::Binding::wArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return gles2binding::Binding::wArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return gles2binding::Binding::wArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return gles2binding::Binding::wArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return gles2binding::Binding::wArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return gles2binding::Binding::wBuffers(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
    return gles2binding::Binding::wBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
    return gles2binding::Binding::wBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
    return gles2binding::Binding::wBuffersNV(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return gles2binding::Binding::wElements(mode, count, type, indices);
}

void glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gles2binding::Binding::wElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gles2binding::Binding::wElementsBaseVertexOES(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return gles2binding::Binding::wElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return gles2binding::Binding::wElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gles2binding::Binding::wElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return gles2binding::Binding::wElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return gles2binding::Binding::wElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return gles2binding::Binding::wElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return gles2binding::Binding::wElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gles2binding::Binding::wElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gles2binding::Binding::wElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gles2binding::Binding::wRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gles2binding::Binding::wRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gles2binding::Binding::wRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
    return gles2binding::Binding::ImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
    return gles2binding::Binding::ImageTargetTexture2DOES(target, image);
}

void glEnable(GLenum cap)
{
    return gles2binding::Binding::ble(cap);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
    return gles2binding::Binding::bleDriverControlQCOM(driverControl);
}

void glEnableVertexAttribArray(GLuint index)
{
    return gles2binding::Binding::bleVertexAttribArray(index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
    return gles2binding::Binding::bleiEXT(target, index);
}

void glEnableiNV(GLenum target, GLuint index)
{
    return gles2binding::Binding::bleiNV(target, index);
}

void glEnableiOES(GLenum target, GLuint index)
{
    return gles2binding::Binding::bleiOES(target, index);
}

void glEndConditionalRenderNV()
{
    return gles2binding::Binding::ConditionalRenderNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return gles2binding::Binding::PerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return gles2binding::Binding::PerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
    return gles2binding::Binding::Query(target);
}

void glEndQueryEXT(GLenum target)
{
    return gles2binding::Binding::QueryEXT(target);
}

void glEndTilingQCOM(GLES2bitfield preserveMask)
{
    return gles2binding::Binding::TilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
    return gles2binding::Binding::TransformFeedback();
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
    return gles2binding::Binding::GetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
    return gles2binding::Binding::GetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
    return gles2binding::Binding::GetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
    return gles2binding::Binding::GetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
    return gles2binding::Binding::GetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
    return gles2binding::Binding::GetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
    return gles2binding::Binding::GetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
    return gles2binding::Binding::GetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
    return gles2binding::Binding::GetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
    return gles2binding::Binding::GetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
    return gles2binding::Binding::IsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
    return gles2binding::Binding::TexObjectStateOverrideiQCOM(target, pname, param);
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return gles2binding::Binding::ceSync(condition, flags);
}

GLsync glFenceSyncAPPLE(GLenum condition, GLES2bitfield flags)
{
    return gles2binding::Binding::ceSyncAPPLE(condition, flags);
}

void glFinish()
{
    return gles2binding::Binding::ish();
}

void glFinishFenceNV(GLuint fence)
{
    return gles2binding::Binding::ishFenceNV(fence);
}

void glFlush()
{
    return gles2binding::Binding::sh();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return gles2binding::Binding::shMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return gles2binding::Binding::shMappedBufferRangeEXT(target, offset, length);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return gles2binding::Binding::gmentCoverageColorNV(color);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return gles2binding::Binding::mebufferParameteri(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gles2binding::Binding::mebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return gles2binding::Binding::mebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gles2binding::Binding::mebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return gles2binding::Binding::mebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return gles2binding::Binding::mebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gles2binding::Binding::mebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gles2binding::Binding::mebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gles2binding::Binding::mebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return gles2binding::Binding::mebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gles2binding::Binding::mebufferTextureOES(target, attachment, texture, level);
}

void glFrontFace(GLenum mode)
{
    return gles2binding::Binding::ntFace(mode);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return gles2binding::Binding::Buffers(n, buffers);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return gles2binding::Binding::FencesNV(n, fences);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return gles2binding::Binding::Framebuffers(n, framebuffers);
}

GLuint glGenPathsNV(GLsizei range)
{
    return gles2binding::Binding::PathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gles2binding::Binding::PerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return gles2binding::Binding::ProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
    return gles2binding::Binding::ProgramPipelinesEXT(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return gles2binding::Binding::Queries(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
    return gles2binding::Binding::QueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return gles2binding::Binding::Renderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return gles2binding::Binding::Samplers(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return gles2binding::Binding::Textures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return gles2binding::Binding::TransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return gles2binding::Binding::VertexArrays(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
    return gles2binding::Binding::VertexArraysOES(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return gles2binding::Binding::erateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gles2binding::Binding::ActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return gles2binding::Binding::ActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return gles2binding::Binding::ActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return gles2binding::Binding::ActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return gles2binding::Binding::ActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return gles2binding::Binding::AttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return gles2binding::Binding::AttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return gles2binding::Binding::Booleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return gles2binding::Binding::Booleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return gles2binding::Binding::BufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::BufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return gles2binding::Binding::BufferPointerv(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
    return gles2binding::Binding::BufferPointervOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return gles2binding::Binding::CoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return gles2binding::Binding::DebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
    return gles2binding::Binding::DriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
    return gles2binding::Binding::DriverControlsQCOM(num, size, driverControls);
}

GLenum glGetError()
{
    return gles2binding::Binding::Error();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return gles2binding::Binding::FenceivNV(fence, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return gles2binding::Binding::FirstPerfQueryIdINTEL(queryId);
}

void glGetFloati_vNV(GLenum target, GLuint index, GLfloat * data)
{
    return gles2binding::Binding::Floati_vNV(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return gles2binding::Binding::Floatv(pname, data);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return gles2binding::Binding::FragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gles2binding::Binding::FramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::FramebufferParameteriv(target, pname, params);
}

GLenum glGetGraphicsResetStatusEXT()
{
    return gles2binding::Binding::GraphicsResetStatusEXT();
}

GLenum glGetGraphicsResetStatusKHR()
{
    return gles2binding::Binding::GraphicsResetStatusKHR();
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return gles2binding::Binding::ImageHandleNV(texture, level, layered, layer, format);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return gles2binding::Binding::Integer64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return gles2binding::Binding::Integer64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
    return gles2binding::Binding::Integer64vAPPLE(pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return gles2binding::Binding::Integeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
    return gles2binding::Binding::Integeri_vEXT(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return gles2binding::Binding::Integerv(pname, data);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return gles2binding::Binding::InternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return gles2binding::Binding::Internalformativ(target, internalformat, pname, bufSize, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return gles2binding::Binding::Multisamplefv(pname, index, val);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return gles2binding::Binding::NextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gles2binding::Binding::ObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gles2binding::Binding::ObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gles2binding::Binding::ObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return gles2binding::Binding::PathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return gles2binding::Binding::PathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return gles2binding::Binding::PathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return gles2binding::Binding::PathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return gles2binding::Binding::PathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return gles2binding::Binding::PathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return gles2binding::Binding::PathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return gles2binding::Binding::PathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return gles2binding::Binding::PathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return gles2binding::Binding::PerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return gles2binding::Binding::PerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return gles2binding::Binding::PerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return gles2binding::Binding::PerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return gles2binding::Binding::PerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return gles2binding::Binding::PerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return gles2binding::Binding::PerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return gles2binding::Binding::PerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return gles2binding::Binding::PerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return gles2binding::Binding::PerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
    return gles2binding::Binding::PointervKHR(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return gles2binding::Binding::ProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return gles2binding::Binding::ProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gles2binding::Binding::ProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return gles2binding::Binding::ProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gles2binding::Binding::ProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gles2binding::Binding::ProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return gles2binding::Binding::ProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
    return gles2binding::Binding::ProgramPipelineivEXT(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gles2binding::Binding::ProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gles2binding::Binding::ProgramResourceLocation(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return gles2binding::Binding::ProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return gles2binding::Binding::ProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return gles2binding::Binding::ProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return gles2binding::Binding::Programiv(program, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return gles2binding::Binding::QueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
    return gles2binding::Binding::QueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return gles2binding::Binding::QueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::QueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::QueryObjectuivEXT(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::Queryiv(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::QueryivEXT(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::RenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
    return gles2binding::Binding::SamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint * params)
{
    return gles2binding::Binding::SamplerParameterIivOES(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::SamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::SamplerParameterIuivOES(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return gles2binding::Binding::SamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return gles2binding::Binding::SamplerParameteriv(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gles2binding::Binding::ShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return gles2binding::Binding::ShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return gles2binding::Binding::ShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return gles2binding::Binding::Shaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return gles2binding::Binding::String(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return gles2binding::Binding::Stringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gles2binding::Binding::Synciv(sync, pname, bufSize, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gles2binding::Binding::SyncivAPPLE(sync, pname, bufSize, length, values);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gles2binding::Binding::TexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gles2binding::Binding::TexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::TexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIivOES(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::TexParameterIivOES(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::TexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::TexParameterIuivOES(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gles2binding::Binding::TexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gles2binding::Binding::TexParameteriv(target, pname, params);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return gles2binding::Binding::TextureHandleNV(texture);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return gles2binding::Binding::TextureSamplerHandleNV(texture, sampler);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gles2binding::Binding::TransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
    return gles2binding::Binding::TranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return gles2binding::Binding::UniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return gles2binding::Binding::UniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return gles2binding::Binding::UniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return gles2binding::Binding::Uniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return gles2binding::Binding::Uniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return gles2binding::Binding::Uniformuiv(program, location, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return gles2binding::Binding::VertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return gles2binding::Binding::VertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return gles2binding::Binding::VertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return gles2binding::Binding::VertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return gles2binding::Binding::VertexAttribiv(index, pname, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return gles2binding::Binding::nUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return gles2binding::Binding::nUniformfvKHR(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return gles2binding::Binding::nUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return gles2binding::Binding::nUniformivKHR(program, location, bufSize, params);
}

void glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return gles2binding::Binding::nUniformuivKHR(program, location, bufSize, params);
}

void glHint(GLenum target, GLenum mode)
{
    return gles2binding::Binding::t(target, mode);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gles2binding::Binding::ertEventMarkerEXT(length, marker);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return gles2binding::Binding::erpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return gles2binding::Binding::alidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::alidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return gles2binding::Binding::uffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return gles2binding::Binding::nabled(cap);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
    return gles2binding::Binding::nablediEXT(target, index);
}

GLboolean glIsEnablediNV(GLenum target, GLuint index)
{
    return gles2binding::Binding::nablediNV(target, index);
}

GLboolean glIsEnablediOES(GLenum target, GLuint index)
{
    return gles2binding::Binding::nablediOES(target, index);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return gles2binding::Binding::enceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return gles2binding::Binding::ramebuffer(framebuffer);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return gles2binding::Binding::mageHandleResidentNV(handle);
}

GLboolean glIsPathNV(GLuint path)
{
    return gles2binding::Binding::athNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return gles2binding::Binding::ointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return gles2binding::Binding::ointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return gles2binding::Binding::rogram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return gles2binding::Binding::rogramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
    return gles2binding::Binding::rogramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return gles2binding::Binding::uery(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
    return gles2binding::Binding::ueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return gles2binding::Binding::enderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return gles2binding::Binding::ampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return gles2binding::Binding::hader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return gles2binding::Binding::ync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
    return gles2binding::Binding::yncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return gles2binding::Binding::exture(texture);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return gles2binding::Binding::extureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return gles2binding::Binding::ransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return gles2binding::Binding::ertexArray(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
    return gles2binding::Binding::ertexArrayOES(array);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return gles2binding::Binding::elObjectEXT(type, object, length, label);
}

void glLineWidth(GLfloat width)
{
    return gles2binding::Binding::eWidth(width);
}

void glLinkProgram(GLuint program)
{
    return gles2binding::Binding::kProgram(program);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return gles2binding::Binding::eImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return gles2binding::Binding::eImageHandleResidentNV(handle, access);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return gles2binding::Binding::eTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return gles2binding::Binding::eTextureHandleResidentNV(handle);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
    return gles2binding::Binding::BufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gles2binding::Binding::BufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLES2bitfield access)
{
    return gles2binding::Binding::BufferRangeEXT(target, offset, length, access);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gles2binding::Binding::rixMultTranspose3x3fNV(matrixMode, m);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return gles2binding::Binding::oryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return gles2binding::Binding::oryBarrierByRegion(barriers);
}

void glMinSampleShadingOES(GLfloat value)
{
    return gles2binding::Binding::SampleShadingOES(value);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gles2binding::Binding::tiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectEXT(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gles2binding::Binding::tiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}

void glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return gles2binding::Binding::tiDrawElementsBaseVertexEXT(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsBaseVertexOES(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex)
{
    return gles2binding::Binding::tiDrawElementsBaseVertexOES(mode, count, type, indices, primcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return gles2binding::Binding::tiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gles2binding::Binding::tiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return gles2binding::Binding::edFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return gles2binding::Binding::ectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
    return gles2binding::Binding::ectPtrLabelKHR(ptr, length, label);
}

void glPatchParameteriEXT(GLenum pname, GLint value)
{
    return gles2binding::Binding::chParameteriEXT(pname, value);
}

void glPatchParameteriOES(GLenum pname, GLint value)
{
    return gles2binding::Binding::chParameteriOES(pname, value);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gles2binding::Binding::hCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gles2binding::Binding::hCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return gles2binding::Binding::hCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return gles2binding::Binding::hDashArrayNV(path, dashCount, dashArray);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gles2binding::Binding::hGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return gles2binding::Binding::hGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gles2binding::Binding::hGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gles2binding::Binding::hGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gles2binding::Binding::hMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return gles2binding::Binding::hParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return gles2binding::Binding::hParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return gles2binding::Binding::hParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return gles2binding::Binding::hParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return gles2binding::Binding::hStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return gles2binding::Binding::hStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return gles2binding::Binding::hStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gles2binding::Binding::hSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gles2binding::Binding::hSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPauseTransformFeedback()
{
    return gles2binding::Binding::seTransformFeedback();
}

void glPixelStorei(GLenum pname, GLint param)
{
    return gles2binding::Binding::elStorei(pname, param);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return gles2binding::Binding::ntAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPolygonModeNV(GLenum face, GLenum mode)
{
    return gles2binding::Binding::ygonModeNV(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return gles2binding::Binding::ygonOffset(factor, units);
}

void glPopDebugGroupKHR()
{
    return gles2binding::Binding::DebugGroupKHR();
}

void glPopGroupMarkerEXT()
{
    return gles2binding::Binding::GroupMarkerEXT();
}

void glPrimitiveBoundingBoxEXT(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return gles2binding::Binding::mitiveBoundingBoxEXT(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glPrimitiveBoundingBoxOES(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
    return gles2binding::Binding::mitiveBoundingBoxOES(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return gles2binding::Binding::gramBinary(program, binaryFormat, binary, length);
}

void glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
    return gles2binding::Binding::gramBinaryOES(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return gles2binding::Binding::gramParameteri(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return gles2binding::Binding::gramParameteriEXT(program, pname, value);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return gles2binding::Binding::gramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return gles2binding::Binding::gramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return gles2binding::Binding::gramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return gles2binding::Binding::gramUniform1i(program, location, v0);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return gles2binding::Binding::gramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return gles2binding::Binding::gramUniform1ui(program, location, v0);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return gles2binding::Binding::gramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gles2binding::Binding::gramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gles2binding::Binding::gramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gles2binding::Binding::gramUniform2i(program, location, v0, v1);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gles2binding::Binding::gramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gles2binding::Binding::gramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gles2binding::Binding::gramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gles2binding::Binding::gramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gles2binding::Binding::gramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gles2binding::Binding::gramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gles2binding::Binding::gramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gles2binding::Binding::gramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gles2binding::Binding::gramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gles2binding::Binding::gramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gles2binding::Binding::gramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::gramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gles2binding::Binding::gramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gles2binding::Binding::gramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::gramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gles2binding::Binding::gramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gles2binding::Binding::gramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::gramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return gles2binding::Binding::gramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return gles2binding::Binding::gramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::gramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return gles2binding::Binding::hDebugGroupKHR(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gles2binding::Binding::hGroupMarkerEXT(length, marker);
}

void glQueryCounterEXT(GLuint id, GLenum target)
{
    return gles2binding::Binding::ryCounterEXT(id, target);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return gles2binding::Binding::terSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return gles2binding::Binding::dBuffer(src);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
    return gles2binding::Binding::dBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
    return gles2binding::Binding::dBufferNV(mode);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return gles2binding::Binding::dPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return gles2binding::Binding::dnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsKHR(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return gles2binding::Binding::dnPixelsKHR(x, y, width, height, format, type, bufSize, data);
}

void glReleaseShaderCompiler()
{
    return gles2binding::Binding::easeShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::derbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glResolveDepthValuesNV()
{
    return gles2binding::Binding::olveDepthValuesNV();
}

void glResolveMultisampleFramebufferAPPLE()
{
    return gles2binding::Binding::olveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
    return gles2binding::Binding::umeTransformFeedback();
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return gles2binding::Binding::pleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLES2bitfield mask)
{
    return gles2binding::Binding::pleMaski(maskNumber, mask);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
    return gles2binding::Binding::plerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint * param)
{
    return gles2binding::Binding::plerParameterIivOES(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
    return gles2binding::Binding::plerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint * param)
{
    return gles2binding::Binding::plerParameterIuivOES(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return gles2binding::Binding::plerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return gles2binding::Binding::plerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return gles2binding::Binding::plerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gles2binding::Binding::plerParameteriv(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::ssor(x, y, width, height);
}

void glScissorArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return gles2binding::Binding::ssorArrayvNV(first, count, v);
}

void glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::ssorIndexedNV(index, left, bottom, width, height);
}

void glScissorIndexedvNV(GLuint index, const GLint * v)
{
    return gles2binding::Binding::ssorIndexedvNV(index, v);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return gles2binding::Binding::ectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return gles2binding::Binding::FenceNV(fence, condition);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return gles2binding::Binding::derBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return gles2binding::Binding::derSource(shader, count, string, length);
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLES2bitfield preserveMask)
{
    return gles2binding::Binding::rtTilingQCOM(x, y, width, height, preserveMask);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::ncilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return gles2binding::Binding::ncilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return gles2binding::Binding::ncilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return gles2binding::Binding::ncilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return gles2binding::Binding::ncilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return gles2binding::Binding::ncilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return gles2binding::Binding::ncilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return gles2binding::Binding::ncilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::ncilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return gles2binding::Binding::ncilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::ncilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return gles2binding::Binding::ncilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::ncilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return gles2binding::Binding::ncilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return gles2binding::Binding::pixelPrecisionBiasNV(xbits, ybits);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return gles2binding::Binding::tFenceNV(fence);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gles2binding::Binding::BufferEXT(target, internalformat, buffer);
}

void glTexBufferOES(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gles2binding::Binding::BufferOES(target, internalformat, buffer);
}

void glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gles2binding::Binding::BufferRangeEXT(target, internalformat, buffer, offset, size);
}

void glTexBufferRangeOES(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gles2binding::Binding::BufferRangeOES(target, internalformat, buffer, offset, size);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::Image2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::Image3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::Image3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
    return gles2binding::Binding::PageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gles2binding::Binding::ParameterIivEXT(target, pname, params);
}

void glTexParameterIivOES(GLenum target, GLenum pname, const GLint * params)
{
    return gles2binding::Binding::ParameterIivOES(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return gles2binding::Binding::ParameterIuivEXT(target, pname, params);
}

void glTexParameterIuivOES(GLenum target, GLenum pname, const GLuint * params)
{
    return gles2binding::Binding::ParameterIuivOES(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return gles2binding::Binding::Parameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gles2binding::Binding::Parameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return gles2binding::Binding::Parameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gles2binding::Binding::Parameteriv(target, pname, params);
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gles2binding::Binding::Storage1DEXT(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::Storage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::Storage2DEXT(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gles2binding::Binding::Storage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gles2binding::Binding::Storage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gles2binding::Binding::Storage3DEXT(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisampleOES(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gles2binding::Binding::Storage3DMultisampleOES(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::SubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::SubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gles2binding::Binding::SubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gles2binding::Binding::tureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::tureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gles2binding::Binding::tureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return gles2binding::Binding::tureViewEXT(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTextureViewOES(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return gles2binding::Binding::tureViewOES(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gles2binding::Binding::nsformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return gles2binding::Binding::nsformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return gles2binding::Binding::form1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::form1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return gles2binding::Binding::form1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::form1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return gles2binding::Binding::form1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::form1uiv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return gles2binding::Binding::form2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::form2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return gles2binding::Binding::form2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::form2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return gles2binding::Binding::form2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::form2uiv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gles2binding::Binding::form3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::form3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return gles2binding::Binding::form3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::form3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gles2binding::Binding::form3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::form3uiv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gles2binding::Binding::form4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return gles2binding::Binding::form4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gles2binding::Binding::form4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return gles2binding::Binding::form4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gles2binding::Binding::form4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gles2binding::Binding::form4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return gles2binding::Binding::formBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return gles2binding::Binding::formHandleui64NV(location, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return gles2binding::Binding::formHandleui64vNV(location, count, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix2x3fvNV(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix2x4fvNV(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix3x2fvNV(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix3x4fvNV(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix4x2fvNV(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix4x3fv(location, count, transpose, value);
}

void glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gles2binding::Binding::formMatrix4x3fvNV(location, count, transpose, value);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return gles2binding::Binding::apBuffer(target);
}

GLboolean glUnmapBufferOES(GLenum target)
{
    return gles2binding::Binding::apBufferOES(target);
}

void glUseProgram(GLuint program)
{
    return gles2binding::Binding::Program(program);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return gles2binding::Binding::ProgramStages(pipeline, stages, program);
}

void glUseProgramStagesEXT(GLuint pipeline, GLES2bitfield stages, GLuint program)
{
    return gles2binding::Binding::ProgramStagesEXT(pipeline, stages, program);
}

void glValidateProgram(GLuint program)
{
    return gles2binding::Binding::idateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return gles2binding::Binding::idateProgramPipeline(pipeline);
}

void glValidateProgramPipelineEXT(GLuint pipeline)
{
    return gles2binding::Binding::idateProgramPipelineEXT(pipeline);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return gles2binding::Binding::texAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return gles2binding::Binding::texAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return gles2binding::Binding::texAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return gles2binding::Binding::texAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gles2binding::Binding::texAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return gles2binding::Binding::texAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gles2binding::Binding::texAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return gles2binding::Binding::texAttrib4fv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return gles2binding::Binding::texAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return gles2binding::Binding::texAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    return gles2binding::Binding::texAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
    return gles2binding::Binding::texAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
    return gles2binding::Binding::texAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gles2binding::Binding::texAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gles2binding::Binding::texAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return gles2binding::Binding::texAttribI4iv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gles2binding::Binding::texAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return gles2binding::Binding::texAttribI4uiv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gles2binding::Binding::texAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gles2binding::Binding::texAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gles2binding::Binding::texAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return gles2binding::Binding::texBindingDivisor(bindingindex, divisor);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gles2binding::Binding::wport(x, y, width, height);
}

void glViewportArrayvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return gles2binding::Binding::wportArrayvNV(first, count, v);
}

void glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return gles2binding::Binding::wportIndexedfNV(index, x, y, w, h);
}

void glViewportIndexedfvNV(GLuint index, const GLfloat * v)
{
    return gles2binding::Binding::wportIndexedfvNV(index, v);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return gles2binding::Binding::tSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLES2bitfield flags, GLuint64 timeout)
{
    return gles2binding::Binding::tSyncAPPLE(sync, flags, timeout);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return gles2binding::Binding::ghtPathsNV(resultPath, numPaths, paths, weights);
}


} // namespace gles
