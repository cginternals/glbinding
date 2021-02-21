
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverage(value, invert);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverageARB(value, invert);
}

void glSampleCoveragexOES(GLclampx value, GLboolean invert)
{
    return glbinding::Binding::SampleCoveragexOES(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return glbinding::Binding::SampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return glbinding::Binding::SampleMaskEXT(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::Binding::SampleMaski(maskNumber, mask);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return glbinding::Binding::SampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return glbinding::Binding::SampleMaskSGIS(value, invert);
}

void glSamplePatternEXT(GLenum pattern)
{
    return glbinding::Binding::SamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
    return glbinding::Binding::SamplePatternSGIS(pattern);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::Binding::SamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Scaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Scalef(x, y, z);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::Binding::ScalexOES(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Scissor(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::Binding::ScissorArrayv(first, count, v);
}

void glScissorExclusiveArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::Binding::ScissorExclusiveArrayvNV(first, count, v);
}

void glScissorExclusiveNV(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::ScissorExclusiveNV(x, y, width, height);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::Binding::ScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::Binding::ScissorIndexedv(index, v);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::SecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::SecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::Binding::SecondaryColor3bv(v);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return glbinding::Binding::SecondaryColor3bvEXT(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::SecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::SecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::Binding::SecondaryColor3dv(v);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return glbinding::Binding::SecondaryColor3dvEXT(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::SecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::SecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::Binding::SecondaryColor3fv(v);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return glbinding::Binding::SecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::Binding::SecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return glbinding::Binding::SecondaryColor3hvNV(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::SecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::SecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::Binding::SecondaryColor3iv(v);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
    return glbinding::Binding::SecondaryColor3ivEXT(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::SecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::SecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::Binding::SecondaryColor3sv(v);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
    return glbinding::Binding::SecondaryColor3svEXT(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::SecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::SecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::Binding::SecondaryColor3ubv(v);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return glbinding::Binding::SecondaryColor3ubvEXT(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::SecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::SecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::Binding::SecondaryColor3uiv(v);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
    return glbinding::Binding::SecondaryColor3uivEXT(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::SecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::SecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::Binding::SecondaryColor3usv(v);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
    return glbinding::Binding::SecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::Binding::SecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::SecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::SecondaryColorP3uiv(type, color);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::SecondaryColorPointer(size, type, stride, pointer);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::SecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::Binding::SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::Binding::SelectBuffer(size, buffer);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glbinding::Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSemaphoreParameterivNV(GLuint semaphore, GLenum pname, const GLint * params)
{
    return glbinding::Binding::SemaphoreParameterivNV(semaphore, pname, params);
}

void glSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, const GLuint64 * params)
{
    return glbinding::Binding::SemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::Binding::SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::Binding::SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
    return glbinding::Binding::SetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glbinding::Binding::SetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return glbinding::Binding::SetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::Binding::SetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::Binding::SetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return glbinding::Binding::SetMultisamplefvAMD(pname, index, val);
}

void glShadeModel(GLenum mode)
{
    return glbinding::Binding::ShadeModel(mode);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ShaderBinary(count, shaders, binaryFormat, binary, length);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return glbinding::Binding::ShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return glbinding::Binding::ShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return glbinding::Binding::ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::Binding::ShaderSource(shader, count, string, length);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return glbinding::Binding::ShaderSourceARB(shaderObj, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::Binding::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glShadingRateImageBarrierNV(GLboolean synchronize)
{
    return glbinding::Binding::ShadingRateImageBarrierNV(synchronize);
}

void glShadingRateImagePaletteNV(GLuint viewport, GLuint first, GLsizei count, const GLenum * rates)
{
    return glbinding::Binding::ShadingRateImagePaletteNV(viewport, first, count, rates);
}

void glShadingRateSampleOrderCustomNV(GLenum rate, GLuint samples, const GLint * locations)
{
    return glbinding::Binding::ShadingRateSampleOrderCustomNV(rate, samples, locations);
}

void glShadingRateSampleOrderNV(GLenum order)
{
    return glbinding::Binding::ShadingRateSampleOrderNV(order);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::Binding::SharpenTexFuncSGIS(target, n, points);
}

void glSignalSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts)
{
    return glbinding::Binding::SignalSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
}

void glSignalSemaphoreui64NVX(GLuint signalGpu, GLsizei fenceObjectCount, const GLuint * semaphoreArray, const GLuint64 * fenceValueArray)
{
    return glbinding::Binding::SignalSemaphoreui64NVX(signalGpu, fenceObjectCount, semaphoreArray, fenceValueArray);
}

void glSignalVkFenceNV(GLuint64 vkFence)
{
    return glbinding::Binding::SignalVkFenceNV(vkFence);
}

void glSignalVkSemaphoreNV(GLuint64 vkSemaphore)
{
    return glbinding::Binding::SignalVkSemaphoreNV(vkSemaphore);
}

void glSpecializeShader(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue)
{
    return glbinding::Binding::SpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glSpecializeShaderARB(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue)
{
    return glbinding::Binding::SpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::Binding::SpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::SpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return glbinding::Binding::SpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::Binding::SpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
    return glbinding::Binding::StartInstrumentsSGIX();
}

void glStateCaptureNV(GLuint state, GLenum mode)
{
    return glbinding::Binding::StateCaptureNV(state, mode);
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return glbinding::Binding::StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glbinding::Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return glbinding::Binding::StencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glbinding::Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glbinding::Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glbinding::Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glStopInstrumentsSGIX(GLint marker)
{
    return glbinding::Binding::StopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return glbinding::Binding::StringMarkerGREMEDY(len, string);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return glbinding::Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::Binding::SwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
    return glbinding::Binding::SyncTextureINTEL(texture);
}


} // namespace gl