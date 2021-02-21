
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


namespace gl
{


void glBegin(GLenum mode)
{
    return glbinding::Binding::Begin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::Binding::BeginConditionalRender(id, mode);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glbinding::Binding::BeginConditionalRenderNV(id, mode);
}

void glBeginConditionalRenderNVX(GLuint id)
{
    return glbinding::Binding::BeginConditionalRenderNVX(id);
}

void glBeginFragmentShaderATI()
{
    return glbinding::Binding::BeginFragmentShaderATI();
}

void glBeginOcclusionQueryNV(GLuint id)
{
    return glbinding::Binding::BeginOcclusionQueryNV(id);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glbinding::Binding::BeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::Binding::BeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQuery(target, id);
}

void glBeginQueryARB(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQueryARB(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::Binding::BeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedbackEXT(primitiveMode);
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedbackNV(primitiveMode);
}

void glBeginVertexShaderEXT()
{
    return glbinding::Binding::BeginVertexShaderEXT();
}

void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::Binding::BeginVideoCaptureNV(video_capture_slot);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return glbinding::Binding::BindAttribLocationARB(programObj, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBufferARB(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBaseEXT(target, index, buffer);
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBaseNV(target, index, buffer);
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::Binding::BindBufferOffsetEXT(target, index, buffer, offset);
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::Binding::BindBufferOffsetNV(target, index, buffer, offset);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::Binding::BindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::Binding::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocation(program, color, name);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFragmentShaderATI(GLuint id)
{
    return glbinding::Binding::BindFragmentShaderATI(id);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebufferEXT(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return glbinding::Binding::BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindImageTextures(first, count, textures);
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return glbinding::Binding::BindLightParameterEXT(light, value);
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return glbinding::Binding::BindMaterialParameterEXT(face, value);
}

void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return glbinding::Binding::BindMultiTextureEXT(texunit, target, texture);
}

GLuint glBindParameterEXT(GLenum value)
{
    return glbinding::Binding::BindParameterEXT(value);
}

void glBindProgramARB(GLenum target, GLuint program)
{
    return glbinding::Binding::BindProgramARB(target, program);
}

void glBindProgramNV(GLenum target, GLuint id)
{
    return glbinding::Binding::BindProgramNV(target, id);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::BindProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
    return glbinding::Binding::BindProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbufferEXT(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::Binding::BindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::Binding::BindSamplers(first, count, samplers);
}

void glBindShadingRateImageNV(GLuint texture)
{
    return glbinding::Binding::BindShadingRateImageNV(texture);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return glbinding::Binding::BindTexGenParameterEXT(unit, coord, value);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTexture(target, texture);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTextureEXT(target, texture);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindTextures(first, count, textures);
}

void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return glbinding::Binding::BindTextureUnit(unit, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return glbinding::Binding::BindTextureUnitParameterEXT(unit, value);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::Binding::BindTransformFeedback(target, id);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return glbinding::Binding::BindTransformFeedbackNV(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glbinding::Binding::BindVertexArray(array);
}

void glBindVertexArrayAPPLE(GLuint array)
{
    return glbinding::Binding::BindVertexArrayAPPLE(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::BindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBindVertexShaderEXT(GLuint id)
{
    return glbinding::Binding::BindVertexShaderEXT(id);
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return glbinding::Binding::BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return glbinding::Binding::BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return glbinding::Binding::Binormal3bEXT(bx, by, bz);
}

void glBinormal3bvEXT(const GLbyte * v)
{
    return glbinding::Binding::Binormal3bvEXT(v);
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return glbinding::Binding::Binormal3dEXT(bx, by, bz);
}

void glBinormal3dvEXT(const GLdouble * v)
{
    return glbinding::Binding::Binormal3dvEXT(v);
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return glbinding::Binding::Binormal3fEXT(bx, by, bz);
}

void glBinormal3fvEXT(const GLfloat * v)
{
    return glbinding::Binding::Binormal3fvEXT(v);
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return glbinding::Binding::Binormal3iEXT(bx, by, bz);
}

void glBinormal3ivEXT(const GLint * v)
{
    return glbinding::Binding::Binormal3ivEXT(v);
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return glbinding::Binding::Binormal3sEXT(bx, by, bz);
}

void glBinormal3svEXT(const GLshort * v)
{
    return glbinding::Binding::Binormal3svEXT(v);
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::BinormalPointerEXT(type, stride, pointer);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::Binding::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return glbinding::Binding::BitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendBarrierKHR()
{
    return glbinding::Binding::BlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return glbinding::Binding::BlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::Binding::BlendColorxOES(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::Binding::BlendEquation(mode);
}

void glBlendEquationEXT(GLenum mode)
{
    return glbinding::Binding::BlendEquationEXT(mode);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationi(buf, mode);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationiARB(buf, mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFunci(buf, src, dst);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFunciARB(buf, src, dst);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glbinding::Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return glbinding::Binding::BufferAddressRangeNV(pname, index, address, length);
}

void glBufferAttachMemoryNV(GLenum target, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::BufferAttachMemoryNV(target, memory, offset);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferDataARB(target, size, data, usage);
}

void glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return glbinding::Binding::BufferPageCommitmentARB(target, offset, size, commit);
}

void glBufferPageCommitmentMemNV(GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit)
{
    return glbinding::Binding::BufferPageCommitmentMemNV(target, offset, size, memory, memOffset, commit);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::BufferParameteriAPPLE(target, pname, param);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::BufferStorage(target, size, data, flags);
}

void glBufferStorageExternalEXT(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, BufferStorageMask flags)
{
    return glbinding::Binding::BufferStorageExternalEXT(target, offset, size, clientBuffer, flags);
}

void glBufferStorageMemEXT(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return glbinding::Binding::BufferStorageMemEXT(target, size, memory, offset);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::BufferSubData(target, offset, size, data);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return glbinding::Binding::BufferSubDataARB(target, offset, size, data);
}


} // namespace gl