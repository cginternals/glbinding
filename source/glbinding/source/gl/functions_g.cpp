
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return glbinding::Binding::GenAsyncMarkersSGIX(range);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffers(n, buffers);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffersARB(n, buffers);
}

void glGenerateMipmap(GLenum target)
{
    return glbinding::Binding::GenerateMipmap(target);
}

void glGenerateMipmapEXT(GLenum target)
{
    return glbinding::Binding::GenerateMipmapEXT(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return glbinding::Binding::GenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmap(GLuint texture)
{
    return glbinding::Binding::GenerateTextureMipmap(texture);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return glbinding::Binding::GenerateTextureMipmapEXT(texture, target);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return glbinding::Binding::GenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glbinding::Binding::GenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
    return glbinding::Binding::GenFragmentShadersATI(range);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffers(n, framebuffers);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffersEXT(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
    return glbinding::Binding::GenLists(range);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return glbinding::Binding::GenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenOcclusionQueriesNV(n, ids);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glbinding::Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::GenProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::GenProgramPipelinesEXT(n, pipelines);
}

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return glbinding::Binding::GenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return glbinding::Binding::GenProgramsNV(n, programs);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueries(n, ids);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueriesARB(n, ids);
}

void glGenQueryResourceTagNV(GLsizei n, GLint * tagIds)
{
    return glbinding::Binding::GenQueryResourceTagNV(n, tagIds);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffersEXT(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::Binding::GenSamplers(count, samplers);
}

void glGenSemaphoresEXT(GLsizei n, GLuint * semaphores)
{
    return glbinding::Binding::GenSemaphoresEXT(n, semaphores);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return glbinding::Binding::GenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTextures(n, textures);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTexturesEXT(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenTransformFeedbacks(n, ids);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenTransformFeedbacksNV(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArraysAPPLE(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
    return glbinding::Binding::GenVertexShadersEXT(range);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::Binding::GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineName(program, shadertype, index, bufSize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::Binding::GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::Binding::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return glbinding::Binding::GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetAttribLocation(program, name);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::Binding::GetAttribLocationARB(programObj, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleanIndexedvEXT(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointervARB(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetBufferSubData(target, offset, size, data);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return glbinding::Binding::GetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::Binding::GetClipPlane(plane, equation);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return glbinding::Binding::GetClipPlanefOES(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return glbinding::Binding::GetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::Binding::GetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return glbinding::Binding::GetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::Binding::GetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetCombinerStageParameterfvNV(stage, pname, params);
}

GLuint glGetCommandHeaderNV(GLenum tokenID, GLuint size)
{
    return glbinding::Binding::GetCommandHeaderNV(tokenID, size);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return glbinding::Binding::GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImage(target, level, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureImage(texture, level, bufSize, pixels);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return glbinding::Binding::GetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::Binding::GetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::Binding::GetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetConvolutionParameterxvOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetCoverageModulationTableNV(bufSize, v);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufSize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return glbinding::Binding::GetDebugMessageLogAMD(count, bufSize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::Binding::GetDetailTexFuncSGIS(target, points);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::Binding::GetDoublei_v(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetDoublei_vEXT(pname, index, params);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::Binding::GetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::Binding::GetDoublev(pname, data);
}

GLenum glGetError()
{
    return glbinding::Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glbinding::Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetFixedvOES(pname, params);
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::Binding::GetFloati_v(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetFloati_vEXT(pname, index, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::Binding::GetFloatIndexedvEXT(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::Binding::GetFloatv(pname, data);
}

void glGetFogFuncSGIS(GLfloat * points)
{
    return glbinding::Binding::GetFogFuncSGIS(points);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataIndex(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocation(program, name);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferParameterfvAMD(GLenum target, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat * values)
{
    return glbinding::Binding::GetFramebufferParameterfvAMD(target, pname, numsamples, pixelindex, size, values);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetFramebufferParameterivMESA(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameterivMESA(target, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return glbinding::Binding::GetGraphicsResetStatus();
}

GLenum glGetGraphicsResetStatusARB()
{
    return glbinding::Binding::GetGraphicsResetStatusARB();
}

GLenum glGetGraphicsResetStatusKHR()
{
    return glbinding::Binding::GetGraphicsResetStatusKHR();
}

GLhandleARB glGetHandleARB(GLenum pname)
{
    return glbinding::Binding::GetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::Binding::GetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return glbinding::Binding::GetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
    return glbinding::Binding::GetInstrumentsSGIX();
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::Binding::GetInteger64v(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return glbinding::Binding::GetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return glbinding::Binding::GetIntegerui64vNV(value, result);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::Binding::GetIntegerv(pname, data);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params)
{
    return glbinding::Binding::GetInternalformati64v(target, internalformat, pname, count, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params)
{
    return glbinding::Binding::GetInternalformativ(target, internalformat, pname, count, params);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params)
{
    return glbinding::Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, count, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetInvariantIntegervEXT(id, value, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetLightiv(light, pname, params);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetLightxOES(light, pname, params);
}

void glGetLightxvOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetLightxvOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return glbinding::Binding::GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::Binding::GetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::Binding::GetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::Binding::GetMapiv(target, query, v);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMapParameterivNV(target, pname, params);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return glbinding::Binding::GetMapxvOES(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMaterialiv(face, pname, params);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::Binding::GetMaterialxOES(face, pname, param);
}

void glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetMaterialxvOES(face, pname, params);
}

void glGetMemoryObjectDetachedResourcesuivNV(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params)
{
    return glbinding::Binding::GetMemoryObjectDetachedResourcesuivNV(memory, pname, first, count, params);
}

void glGetMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::Binding::GetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefvNV(pname, index, val);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetNamedBufferParameteri64v(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameteriv(buffer, pname, params);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointerv(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubData(buffer, offset, size, data);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameterfvAMD(GLuint framebuffer, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat * values)
{
    return glbinding::Binding::GetNamedFramebufferParameterfvAMD(framebuffer, pname, numsamples, pixelindex, size, values);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return glbinding::Binding::GetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return glbinding::Binding::GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedStringivARB(namelen, name, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTable(target, format, type, bufSize, table);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnCompressedTexImage(target, lod, bufSize, pixels);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return glbinding::Binding::GetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilter(target, format, type, bufSize, image);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glbinding::Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogram(target, reset, format, type, bufSize, values);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdv(target, query, bufSize, v);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfv(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapiv(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmax(target, reset, format, type, bufSize, values);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfv(map, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuiv(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusv(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStipple(bufSize, pattern);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnTexImage(target, level, format, type, bufSize, pixels);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return glbinding::Binding::GetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdv(program, location, bufSize, params);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfvKHR(program, location, bufSize, params);
}

void glGetnUniformi64vARB(GLuint program, GLint location, GLsizei bufSize, GLint64 * params)
{
    return glbinding::Binding::GetnUniformi64vARB(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformivKHR(program, location, bufSize, params);
}

void glGetnUniformui64vARB(GLuint program, GLint location, GLsizei bufSize, GLuint64 * params)
{
    return glbinding::Binding::GetnUniformui64vARB(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuiv(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuivARB(program, location, bufSize, params);
}

void glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuivKHR(program, location, bufSize, params);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetObjectParameterivARB(obj, pname, params);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glbinding::Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glbinding::Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glbinding::Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glbinding::Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathMetricMask metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glbinding::Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathMetricMask metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glbinding::Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glbinding::Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glbinding::Binding::GetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glbinding::Binding::GetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glbinding::Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glbinding::Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glbinding::Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glbinding::Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glbinding::Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glbinding::Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glbinding::Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten)
{
    return glbinding::Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glbinding::Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glbinding::Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::Binding::GetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::Binding::GetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::Binding::GetPixelMapusv(map, values);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return glbinding::Binding::GetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return glbinding::Binding::GetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return glbinding::Binding::GetPointeri_vEXT(pname, index, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return glbinding::Binding::GetPointerIndexedvEXT(target, index, data);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::Binding::GetPointerv(pname, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
    return glbinding::Binding::GetPointervEXT(pname, params);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
    return glbinding::Binding::GetPointervKHR(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::Binding::GetPolygonStipple(mask);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramivNV(id, pname, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::Binding::GetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::Binding::GetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::Binding::GetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::Binding::GetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return glbinding::Binding::GetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return glbinding::Binding::GetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetProgramParameterfvNV(target, index, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramPipelineivEXT(pipeline, pname, params);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params)
{
    return glbinding::Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, count, length, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params)
{
    return glbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return glbinding::Binding::GetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return glbinding::Binding::GetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return glbinding::Binding::GetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectiv(id, buffer, pname, offset);
}

void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryIndexediv(target, index, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryivARB(target, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuivARB(id, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameterivEXT(target, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetSemaphoreParameterivNV(GLuint semaphore, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSemaphoreParameterivNV(semaphore, pname, params);
}

void glGetSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetSemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::Binding::GetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::Binding::GetSeparableFilterEXT(target, format, type, row, column, span);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetShaderiv(shader, pname, params);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return glbinding::Binding::GetShaderSourceARB(obj, maxLength, length, source);
}

void glGetShadingRateImagePaletteNV(GLuint viewport, GLuint entry, GLenum * rate)
{
    return glbinding::Binding::GetShadingRateImagePaletteNV(viewport, entry, rate);
}

void glGetShadingRateSampleLocationivNV(GLenum rate, GLuint samples, GLuint index, GLint * location)
{
    return glbinding::Binding::GetShadingRateSampleLocationivNV(rate, samples, index, location);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::Binding::GetSharpenTexFuncSGIS(target, points);
}

GLushort glGetStageIndexNV(GLenum shadertype)
{
    return glbinding::Binding::GetStageIndexNV(shadertype);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::Binding::GetStringi(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineUniformLocation(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values)
{
    return glbinding::Binding::GetSynciv(sync, pname, count, length, values);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return glbinding::Binding::GetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexEnviv(target, pname, params);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return glbinding::Binding::GetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexGeniv(coord, pname, params);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexGenxvOES(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameteriv(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::Binding::GetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return glbinding::Binding::GetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glbinding::Binding::GetTextureHandleNV(texture);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureImage(texture, level, format, type, bufSize, pixels);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfv(texture, level, pname, params);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameteriv(texture, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfv(texture, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIiv(texture, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuiv(texture, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameteriv(texture, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return glbinding::Binding::GetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glbinding::Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return glbinding::Binding::GetTransformFeedbacki64_v(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbacki_v(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbackiv(xfb, pname, param);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return glbinding::Binding::GetTransformFeedbackVaryingNV(program, index, location);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return glbinding::Binding::GetUniformBufferSizeEXT(program, location);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::Binding::GetUniformdv(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vARB(GLuint program, GLint location, GLint64 * params)
{
    return glbinding::Binding::GetUniformi64vARB(program, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glbinding::Binding::GetUniformi64vNV(program, location, params);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformiv(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformivARB(programObj, location, params);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetUniformLocation(program, name);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::Binding::GetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return glbinding::Binding::GetUniformOffsetEXT(program, location);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformui64vARB(GLuint program, GLint location, GLuint64 * params)
{
    return glbinding::Binding::GetUniformui64vARB(program, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return glbinding::Binding::GetUniformui64vNV(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuivEXT(program, location, params);
}

void glGetUnsignedBytei_vEXT(GLenum target, GLuint index, GLubyte * data)
{
    return glbinding::Binding::GetUnsignedBytei_vEXT(target, index, data);
}

void glGetUnsignedBytevEXT(GLenum pname, GLubyte * data)
{
    return glbinding::Binding::GetUnsignedBytevEXT(pname, data);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::Binding::GetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::Binding::GetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::Binding::GetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return glbinding::Binding::GetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetVaryingLocationNV(program, name);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return glbinding::Binding::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIndexediv(vaobj, index, pname, param);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayiv(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return glbinding::Binding::GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return glbinding::Binding::GetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribivNV(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return glbinding::Binding::GetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return glbinding::Binding::GetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVideouivNV(video_slot, pname, params);
}

GLVULKANPROCNV glGetVkProcAddrNV(const GLchar * name)
{
    return glbinding::Binding::GetVkProcAddrNV(name);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return glbinding::Binding::GlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return glbinding::Binding::GlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return glbinding::Binding::GlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
    return glbinding::Binding::GlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return glbinding::Binding::GlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return glbinding::Binding::GlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return glbinding::Binding::GlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return glbinding::Binding::GlobalAlphaFactorusSUN(factor);
}


} // namespace gl