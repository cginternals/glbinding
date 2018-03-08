
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return Binding::GenBuffers(n, buffers);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return Binding::GenFencesNV(n, fences);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return Binding::GenFramebuffers(n, framebuffers);
}

GLuint glGenPathsNV(GLsizei range)
{
    return Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return Binding::GenProgramPipelines(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return Binding::GenQueries(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
    return Binding::GenQueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return Binding::GenSamplers(count, samplers);
}

void glGenSemaphoresEXT(GLsizei n, GLuint * semaphores)
{
    return Binding::GenSemaphoresEXT(n, semaphores);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return Binding::GenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return Binding::GenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
    return Binding::GenVertexArraysOES(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return Binding::GenerateMipmap(target);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
    return Binding::GetBufferPointervOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return Binding::GetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
    return Binding::GetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
    return Binding::GetDriverControlsQCOM(num, size, driverControls);
}

GLenum glGetError()
{
    return Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return Binding::GetFenceivNV(fence, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFloati_vNV(GLenum target, GLuint index, GLfloat * data)
{
    return Binding::GetFloati_vNV(target, index, data);
}

void glGetFloati_vOES(GLenum target, GLuint index, GLfloat * data)
{
    return Binding::GetFloati_vOES(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return Binding::GetFloatv(pname, data);
}

GLint glGetFragDataIndexEXT(GLuint program, const GLchar * name)
{
    return Binding::GetFragDataIndexEXT(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return Binding::GetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferParameteriv(target, pname, params);
}

GLsizei glGetFramebufferPixelLocalStorageSizeEXT(GLuint target)
{
    return Binding::GetFramebufferPixelLocalStorageSizeEXT(target);
}

GLenum glGetGraphicsResetStatus()
{
    return Binding::GetGraphicsResetStatus();
}

GLenum glGetGraphicsResetStatusEXT()
{
    return Binding::GetGraphicsResetStatusEXT();
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return Binding::GetInteger64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
    return Binding::GetInteger64vAPPLE(pname, params);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
    return Binding::GetIntegeri_vEXT(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return Binding::GetIntegerv(pname, data);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint * params)
{
    return Binding::GetMemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return Binding::GetMultisamplefv(pname, index, val);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten)
{
    return Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return Binding::GetPointerv(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return Binding::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return Binding::GetProgramPipelineiv(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return Binding::GetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return Binding::GetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndexEXT(GLuint program, GLenum programInterface, const GLchar * name)
{
    return Binding::GetProgramResourceLocationIndexEXT(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return Binding::GetProgramiv(program, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetQueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
    return Binding::GetQueryObjectuivEXT(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetQueryivEXT(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameterIivOES(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
    return Binding::GetSamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint * params)
{
    return Binding::GetSamplerParameterIuivOES(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64 * params)
{
    return Binding::GetSemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return Binding::GetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return Binding::GetStringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return Binding::GetSyncivAPPLE(sync, pname, bufSize, length, values);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIivOES(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameterIivOES(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTexParameterIuivOES(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameteriv(target, pname, params);
}

GLuint64 glGetTextureHandleIMG(GLuint texture)
{
    return Binding::GetTextureHandleIMG(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return Binding::GetTextureHandleNV(texture);
}

GLuint64 glGetTextureSamplerHandleIMG(GLuint texture, GLuint sampler)
{
    return Binding::GetTextureSamplerHandleIMG(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
    return Binding::GetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return Binding::GetUniformLocation(program, name);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return Binding::GetUniformfv(program, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return Binding::GetUniformi64vNV(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return Binding::GetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return Binding::GetUniformuiv(program, location, params);
}

void glGetUnsignedBytei_vEXT(GLenum target, GLuint index, GLubyte * data)
{
    return Binding::GetUnsignedBytei_vEXT(target, index, data);
}

void glGetUnsignedBytevEXT(GLenum pname, GLubyte * data)
{
    return Binding::GetUnsignedBytevEXT(pname, data);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribiv(index, pname, params);
}

GLVULKANPROCNV glGetVkProcAddrNV(const GLchar * name)
{
    return Binding::GetVkProcAddrNV(name);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return Binding::GetnUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return Binding::GetnUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return Binding::GetnUniformuiv(program, location, bufSize, params);
}




} // namespace gles
