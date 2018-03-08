
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


using namespace glesbinding;


namespace gles
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return Binding::SampleMaski(maskNumber, mask);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return Binding::SamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
    return Binding::SamplerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint * param)
{
    return Binding::SamplerParameterIivOES(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return Binding::SamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
    return Binding::SamplerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint * param)
{
    return Binding::SamplerParameterIuivOES(sampler, pname, param);
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

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return Binding::Scissor(x, y, width, height);
}

void glScissorArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return Binding::ScissorArrayvNV(first, count, v);
}

void glScissorArrayvOES(GLuint first, GLsizei count, const GLint * v)
{
    return Binding::ScissorArrayvOES(first, count, v);
}

void glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return Binding::ScissorIndexedNV(index, left, bottom, width, height);
}

void glScissorIndexedOES(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return Binding::ScissorIndexedOES(index, left, bottom, width, height);
}

void glScissorIndexedvNV(GLuint index, const GLint * v)
{
    return Binding::ScissorIndexedvNV(index, v);
}

void glScissorIndexedvOES(GLuint index, const GLint * v)
{
    return Binding::ScissorIndexedvOES(index, v);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, const GLuint64 * params)
{
    return Binding::SemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return Binding::SetFenceNV(fence, condition);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return Binding::ShaderSource(shader, count, string, length);
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

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, BufferBitQCOM preserveMask)
{
    return Binding::StartTilingQCOM(x, y, width, height, preserveMask);
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

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}




} // namespace gles
