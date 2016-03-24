
#include "../Binding_pch.h"


#include <glbinding/gl/functions.h>

using namespace glbinding;


namespace gl
{


GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return Binding::GenAsyncMarkersSGIX(range);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return Binding::GenBuffers(n, buffers);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return Binding::GenBuffersARB(n, buffers);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return Binding::GenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return Binding::GenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
    return Binding::GenFragmentShadersATI(range);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return Binding::GenFramebuffers(n, framebuffers);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return Binding::GenFramebuffersEXT(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
    return Binding::GenLists(range);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return Binding::GenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return Binding::GenOcclusionQueriesNV(n, ids);
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

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return Binding::GenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return Binding::GenProgramsNV(n, programs);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return Binding::GenQueries(n, ids);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return Binding::GenQueriesARB(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return Binding::GenRenderbuffersEXT(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return Binding::GenSamplers(count, samplers);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return Binding::GenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return Binding::GenTextures(n, textures);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return Binding::GenTexturesEXT(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return Binding::GenTransformFeedbacks(n, ids);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return Binding::GenTransformFeedbacksNV(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return Binding::GenVertexArraysAPPLE(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
    return Binding::GenVertexShadersEXT(range);
}

void glGenerateMipmap(GLenum target)
{
    return Binding::GenerateMipmap(target);
}

void glGenerateMipmapEXT(GLenum target)
{
    return Binding::GenerateMipmapEXT(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return Binding::GenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmap(GLuint texture)
{
    return Binding::GenerateTextureMipmap(texture);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return Binding::GenerateTextureMipmapEXT(texture, target);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return Binding::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return Binding::GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return Binding::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return Binding::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return Binding::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return Binding::GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return Binding::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return Binding::GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return Binding::GetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return Binding::GetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return Binding::GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return Binding::GetAttribLocation(program, name);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return Binding::GetAttribLocationARB(programObj, name);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return Binding::GetBooleanIndexedvEXT(target, index, data);
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

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return Binding::GetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return Binding::GetBufferPointervARB(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return Binding::GetBufferSubData(target, offset, size, data);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return Binding::GetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return Binding::GetClipPlane(plane, equation);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return Binding::GetClipPlanefOES(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return Binding::GetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return Binding::GetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return Binding::GetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return Binding::GetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return Binding::GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return Binding::GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return Binding::GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return Binding::GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return Binding::GetCombinerStageParameterfvNV(stage, pname, params);
}

GLuint glGetCommandHeaderNV(GLenum tokenID, GLuint size)
{
    return Binding::GetCommandHeaderNV(tokenID, size);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return Binding::GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return Binding::GetCompressedTexImage(target, level, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return Binding::GetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return Binding::GetCompressedTextureImage(texture, level, bufSize, pixels);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return Binding::GetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return Binding::GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return Binding::GetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return Binding::GetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return Binding::GetConvolutionParameterxvOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return Binding::GetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return Binding::GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return Binding::GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return Binding::GetDetailTexFuncSGIS(target, points);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return Binding::GetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return Binding::GetDoublei_v(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return Binding::GetDoublei_vEXT(pname, index, params);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return Binding::GetDoublev(pname, data);
}

GLenum glGetError()
{
    return Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return Binding::GetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return Binding::GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return Binding::GetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return Binding::GetFixedvOES(pname, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return Binding::GetFloatIndexedvEXT(target, index, data);
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return Binding::GetFloati_v(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return Binding::GetFloati_vEXT(pname, index, params);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return Binding::GetFloatv(pname, data);
}

void glGetFogFuncSGIS(GLfloat * points)
{
    return Binding::GetFogFuncSGIS(points);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return Binding::GetFragDataIndex(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return Binding::GetFragDataLocation(program, name);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return Binding::GetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return Binding::GetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return Binding::GetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return Binding::GetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return Binding::GetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return Binding::GetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return Binding::GetGraphicsResetStatus();
}

GLenum glGetGraphicsResetStatusARB()
{
    return Binding::GetGraphicsResetStatusARB();
}

GLhandleARB glGetHandleARB(GLenum pname)
{
    return Binding::GetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return Binding::GetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return Binding::GetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return Binding::GetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return Binding::GetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return Binding::GetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
    return Binding::GetInstrumentsSGIX();
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return Binding::GetInteger64v(pname, data);
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return Binding::GetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return Binding::GetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return Binding::GetIntegerui64vNV(value, result);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return Binding::GetIntegerv(pname, data);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return Binding::GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return Binding::GetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return Binding::GetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return Binding::GetInvariantIntegervEXT(id, value, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return Binding::GetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return Binding::GetLightiv(light, pname, params);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return Binding::GetLightxOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return Binding::GetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return Binding::GetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return Binding::GetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return Binding::GetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return Binding::GetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return Binding::GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMapParameterivNV(target, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return Binding::GetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return Binding::GetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return Binding::GetMapiv(target, query, v);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return Binding::GetMapxvOES(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return Binding::GetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return Binding::GetMaterialiv(face, pname, params);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return Binding::GetMaterialxOES(face, pname, param);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return Binding::GetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return Binding::GetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return Binding::GetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return Binding::GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return Binding::GetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return Binding::GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return Binding::GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return Binding::GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return Binding::GetMultisamplefv(pname, index, val);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return Binding::GetMultisamplefvNV(pname, index, val);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return Binding::GetNamedBufferParameteri64v(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return Binding::GetNamedBufferParameteriv(buffer, pname, params);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return Binding::GetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return Binding::GetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return Binding::GetNamedBufferPointerv(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return Binding::GetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return Binding::GetNamedBufferSubData(buffer, offset, size, data);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return Binding::GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return Binding::GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return Binding::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return Binding::GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return Binding::GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return Binding::GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return Binding::GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return Binding::GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return Binding::GetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return Binding::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return Binding::GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return Binding::GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return Binding::GetNamedStringivARB(namelen, name, pname, params);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return Binding::GetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return Binding::GetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return Binding::GetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return Binding::GetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return Binding::GetObjectParameterivARB(obj, pname, params);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return Binding::GetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return Binding::GetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return Binding::GetPathColorGenivNV(color, pname, value);
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

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return Binding::GetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return Binding::GetPathTexGenivNV(texCoordSet, pname, value);
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

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
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

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return Binding::GetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return Binding::GetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return Binding::GetPixelMapusv(map, values);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return Binding::GetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return Binding::GetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return Binding::GetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return Binding::GetPointerIndexedvEXT(target, index, data);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return Binding::GetPointeri_vEXT(pname, index, params);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return Binding::GetPointerv(pname, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
    return Binding::GetPointervEXT(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return Binding::GetPolygonStipple(mask);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return Binding::GetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return Binding::GetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return Binding::GetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return Binding::GetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return Binding::GetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return Binding::GetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return Binding::GetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return Binding::GetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return Binding::GetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return Binding::GetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetProgramParameterfvNV(target, index, pname, params);
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

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return Binding::GetProgramResourceLocationIndex(program, programInterface, name);
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

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return Binding::GetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return Binding::GetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return Binding::GetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return Binding::GetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return Binding::GetProgramiv(program, pname, params);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetProgramivNV(id, pname, params);
}

void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return Binding::GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return Binding::GetQueryBufferObjectiv(id, buffer, pname, offset);
}

void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return Binding::GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return Binding::GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetQueryIndexediv(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return Binding::GetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return Binding::GetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return Binding::GetQueryObjectuivARB(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetQueryivARB(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetRenderbufferParameterivEXT(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return Binding::GetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return Binding::GetSeparableFilterEXT(target, format, type, row, column, span);
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

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return Binding::GetShaderSourceARB(obj, maxLength, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return Binding::GetShaderiv(shader, pname, params);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return Binding::GetSharpenTexFuncSGIS(target, points);
}

GLushort glGetStageIndexNV(GLenum shadertype)
{
    return Binding::GetStageIndexNV(shadertype);
}

const GLubyte * glGetString(GLenum name)
{
    return Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return Binding::GetStringi(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return Binding::GetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return Binding::GetSubroutineUniformLocation(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return Binding::GetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return Binding::GetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexEnviv(target, pname, params);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return Binding::GetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return Binding::GetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return Binding::GetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return Binding::GetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return Binding::GetTexGeniv(coord, pname, params);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return Binding::GetTexGenxvOES(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return Binding::GetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return Binding::GetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return Binding::GetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTexParameteriv(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return Binding::GetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return Binding::GetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return Binding::GetTextureHandleNV(texture);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return Binding::GetTextureImage(texture, level, format, type, bufSize, pixels);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return Binding::GetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return Binding::GetTextureLevelParameterfv(texture, level, pname, params);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return Binding::GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return Binding::GetTextureLevelParameteriv(texture, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return Binding::GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return Binding::GetTextureParameterIiv(texture, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return Binding::GetTextureParameterIuiv(texture, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return Binding::GetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return Binding::GetTextureParameterfv(texture, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return Binding::GetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return Binding::GetTextureParameteriv(texture, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return Binding::GetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return Binding::GetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return Binding::GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return Binding::GetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return Binding::GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return Binding::GetTransformFeedbackVaryingNV(program, index, location);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return Binding::GetTransformFeedbacki64_v(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return Binding::GetTransformFeedbacki_v(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return Binding::GetTransformFeedbackiv(xfb, pname, param);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return Binding::GetUniformBlockIndex(program, uniformBlockName);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return Binding::GetUniformBufferSizeEXT(program, location);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return Binding::GetUniformLocation(program, name);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return Binding::GetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return Binding::GetUniformOffsetEXT(program, location);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return Binding::GetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return Binding::GetUniformdv(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return Binding::GetUniformfv(program, location, params);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return Binding::GetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vARB(GLuint program, GLint location, GLint64 * params)
{
    return Binding::GetUniformi64vARB(program, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return Binding::GetUniformi64vNV(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return Binding::GetUniformiv(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return Binding::GetUniformivARB(programObj, location, params);
}

void glGetUniformui64vARB(GLuint program, GLint location, GLuint64 * params)
{
    return Binding::GetUniformui64vARB(program, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return Binding::GetUniformui64vNV(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return Binding::GetUniformuiv(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return Binding::GetUniformuivEXT(program, location, params);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return Binding::GetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return Binding::GetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return Binding::GetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return Binding::GetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return Binding::GetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return Binding::GetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return Binding::GetVaryingLocationNV(program, name);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return Binding::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return Binding::GetVertexArrayIndexediv(vaobj, index, pname, param);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return Binding::GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return Binding::GetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return Binding::GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return Binding::GetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return Binding::GetVertexArrayiv(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return Binding::GetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return Binding::GetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return Binding::GetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return Binding::GetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return Binding::GetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return Binding::GetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return Binding::GetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return Binding::GetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribiv(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return Binding::GetVertexAttribivNV(index, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return Binding::GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return Binding::GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return Binding::GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return Binding::GetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return Binding::GetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return Binding::GetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return Binding::GetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return Binding::GetVideouivNV(video_slot, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return Binding::GetnColorTable(target, format, type, bufSize, table);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return Binding::GetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return Binding::GetnCompressedTexImage(target, lod, bufSize, pixels);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return Binding::GetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return Binding::GetnConvolutionFilter(target, format, type, bufSize, image);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return Binding::GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return Binding::GetnHistogram(target, reset, format, type, bufSize, values);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return Binding::GetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return Binding::GetnMapdv(target, query, bufSize, v);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return Binding::GetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return Binding::GetnMapfv(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return Binding::GetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return Binding::GetnMapiv(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return Binding::GetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return Binding::GetnMinmax(target, reset, format, type, bufSize, values);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return Binding::GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return Binding::GetnPixelMapfv(map, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return Binding::GetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return Binding::GetnPixelMapuiv(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return Binding::GetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return Binding::GetnPixelMapusv(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return Binding::GetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return Binding::GetnPolygonStipple(bufSize, pattern);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return Binding::GetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return Binding::GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return Binding::GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return Binding::GetnTexImage(target, level, format, type, bufSize, pixels);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return Binding::GetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return Binding::GetnUniformdv(program, location, bufSize, params);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return Binding::GetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return Binding::GetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformi64vARB(GLuint program, GLint location, GLsizei bufSize, GLint64 * params)
{
    return Binding::GetnUniformi64vARB(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return Binding::GetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformui64vARB(GLuint program, GLint location, GLsizei bufSize, GLuint64 * params)
{
    return Binding::GetnUniformui64vARB(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return Binding::GetnUniformuiv(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return Binding::GetnUniformuivARB(program, location, bufSize, params);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return Binding::GlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return Binding::GlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return Binding::GlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
    return Binding::GlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return Binding::GlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return Binding::GlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return Binding::GlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return Binding::GlobalAlphaFactorusSUN(factor);
}



} // namespace gl
