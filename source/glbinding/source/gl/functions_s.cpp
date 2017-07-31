
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


using namespace glbinding;


namespace gl
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return Binding::SampleCoverage(value, invert);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return Binding::SampleCoverageARB(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return Binding::SampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return Binding::SampleMaskEXT(value, invert);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return Binding::SampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return Binding::SampleMaskSGIS(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return Binding::SampleMaski(maskNumber, mask);
}

void glSamplePatternEXT(GLenum pattern)
{
    return Binding::SamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
    return Binding::SamplePatternSGIS(pattern);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return Binding::SamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return Binding::SamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return Binding::SamplerParameteriv(sampler, pname, param);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return Binding::Scaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return Binding::Scalef(x, y, z);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return Binding::ScalexOES(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::Scissor(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return Binding::ScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return Binding::ScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return Binding::ScissorIndexedv(index, v);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return Binding::SecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return Binding::SecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return Binding::SecondaryColor3bv(v);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return Binding::SecondaryColor3bvEXT(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return Binding::SecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return Binding::SecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return Binding::SecondaryColor3dv(v);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return Binding::SecondaryColor3dvEXT(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return Binding::SecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return Binding::SecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return Binding::SecondaryColor3fv(v);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return Binding::SecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return Binding::SecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return Binding::SecondaryColor3hvNV(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return Binding::SecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return Binding::SecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return Binding::SecondaryColor3iv(v);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
    return Binding::SecondaryColor3ivEXT(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return Binding::SecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return Binding::SecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return Binding::SecondaryColor3sv(v);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
    return Binding::SecondaryColor3svEXT(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return Binding::SecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return Binding::SecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return Binding::SecondaryColor3ubv(v);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return Binding::SecondaryColor3ubvEXT(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return Binding::SecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return Binding::SecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return Binding::SecondaryColor3uiv(v);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
    return Binding::SecondaryColor3uivEXT(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return Binding::SecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return Binding::SecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return Binding::SecondaryColor3usv(v);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
    return Binding::SecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return Binding::SecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return Binding::SecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return Binding::SecondaryColorP3uiv(type, color);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::SecondaryColorPointer(size, type, stride, pointer);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::SecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return Binding::SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return Binding::SelectBuffer(size, buffer);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, const GLuint64 * params)
{
    return Binding::SemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return Binding::SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return Binding::SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
    return Binding::SetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return Binding::SetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return Binding::SetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return Binding::SetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return Binding::SetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return Binding::SetMultisamplefvAMD(pname, index, val);
}

void glShadeModel(GLenum mode)
{
    return Binding::ShadeModel(mode);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return Binding::ShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return Binding::ShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return Binding::ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return Binding::ShaderSource(shader, count, string, length);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return Binding::ShaderSourceARB(shaderObj, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return Binding::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return Binding::SharpenTexFuncSGIS(target, n, points);
}

void glSignalSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts)
{
    return Binding::SignalSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
}

void glSignalVkFenceNV(GLuint64 vkFence)
{
    return Binding::SignalVkFenceNV(vkFence);
}

void glSignalVkSemaphoreNV(GLuint64 vkSemaphore)
{
    return Binding::SignalVkSemaphoreNV(vkSemaphore);
}

void glSpecializeShader(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue)
{
    return Binding::SpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glSpecializeShaderARB(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue)
{
    return Binding::SpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return Binding::SpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return Binding::SpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return Binding::SpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return Binding::SpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
    return Binding::StartInstrumentsSGIX();
}

void glStateCaptureNV(GLuint state, GLenum mode)
{
    return Binding::StateCaptureNV(state, mode);
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return Binding::StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return Binding::StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return Binding::StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return Binding::StencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glStopInstrumentsSGIX(GLint marker)
{
    return Binding::StopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return Binding::StringMarkerGREMEDY(len, string);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return Binding::SwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
    return Binding::SyncTextureINTEL(texture);
}




} // namespace gl
