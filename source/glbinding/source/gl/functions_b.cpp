
#include "../Binding_pch.h"

#include <glbinding/gl/functions.h>


using namespace glbinding;


namespace gl
{


void glBegin(GLenum mode)
{
    return Binding::Begin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return Binding::BeginConditionalRender(id, mode);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return Binding::BeginConditionalRenderNV(id, mode);
}

void glBeginConditionalRenderNVX(GLuint id)
{
    return Binding::BeginConditionalRenderNVX(id);
}

void glBeginFragmentShaderATI()
{
    return Binding::BeginFragmentShaderATI();
}

void glBeginOcclusionQueryNV(GLuint id)
{
    return Binding::BeginOcclusionQueryNV(id);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return Binding::BeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return Binding::BeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return Binding::BeginQuery(target, id);
}

void glBeginQueryARB(GLenum target, GLuint id)
{
    return Binding::BeginQueryARB(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return Binding::BeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return Binding::BeginTransformFeedback(primitiveMode);
}

void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return Binding::BeginTransformFeedbackEXT(primitiveMode);
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return Binding::BeginTransformFeedbackNV(primitiveMode);
}

void glBeginVertexShaderEXT()
{
    return Binding::BeginVertexShaderEXT();
}

void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return Binding::BeginVideoCaptureNV(video_capture_slot);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return Binding::BindAttribLocation(program, index, name);
}

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return Binding::BindAttribLocationARB(programObj, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return Binding::BindBuffer(target, buffer);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
    return Binding::BindBufferARB(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return Binding::BindBufferBaseEXT(target, index, buffer);
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return Binding::BindBufferBaseNV(target, index, buffer);
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return Binding::BindBufferOffsetEXT(target, index, buffer, offset);
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return Binding::BindBufferOffsetNV(target, index, buffer, offset);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return Binding::BindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return Binding::BindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return Binding::BindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return Binding::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return Binding::BindFragDataLocation(program, color, name);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return Binding::BindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return Binding::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFragmentShaderATI(GLuint id)
{
    return Binding::BindFragmentShaderATI(id);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return Binding::BindFramebuffer(target, framebuffer);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return Binding::BindFramebufferEXT(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return Binding::BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return Binding::BindImageTextures(first, count, textures);
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return Binding::BindLightParameterEXT(light, value);
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return Binding::BindMaterialParameterEXT(face, value);
}

void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return Binding::BindMultiTextureEXT(texunit, target, texture);
}

GLuint glBindParameterEXT(GLenum value)
{
    return Binding::BindParameterEXT(value);
}

void glBindProgramARB(GLenum target, GLuint program)
{
    return Binding::BindProgramARB(target, program);
}

void glBindProgramNV(GLenum target, GLuint id)
{
    return Binding::BindProgramNV(target, id);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return Binding::BindProgramPipeline(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return Binding::BindRenderbufferEXT(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return Binding::BindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return Binding::BindSamplers(first, count, samplers);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return Binding::BindTexGenParameterEXT(unit, coord, value);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return Binding::BindTexture(target, texture);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
    return Binding::BindTextureEXT(target, texture);
}

void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return Binding::BindTextureUnit(unit, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return Binding::BindTextureUnitParameterEXT(unit, value);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return Binding::BindTextures(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return Binding::BindTransformFeedback(target, id);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return Binding::BindTransformFeedbackNV(target, id);
}

void glBindVertexArray(GLuint array)
{
    return Binding::BindVertexArray(array);
}

void glBindVertexArrayAPPLE(GLuint array)
{
    return Binding::BindVertexArrayAPPLE(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return Binding::BindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBindVertexShaderEXT(GLuint id)
{
    return Binding::BindVertexShaderEXT(id);
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return Binding::BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return Binding::BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return Binding::Binormal3bEXT(bx, by, bz);
}

void glBinormal3bvEXT(const GLbyte * v)
{
    return Binding::Binormal3bvEXT(v);
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return Binding::Binormal3dEXT(bx, by, bz);
}

void glBinormal3dvEXT(const GLdouble * v)
{
    return Binding::Binormal3dvEXT(v);
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return Binding::Binormal3fEXT(bx, by, bz);
}

void glBinormal3fvEXT(const GLfloat * v)
{
    return Binding::Binormal3fvEXT(v);
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return Binding::Binormal3iEXT(bx, by, bz);
}

void glBinormal3ivEXT(const GLint * v)
{
    return Binding::Binormal3ivEXT(v);
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return Binding::Binormal3sEXT(bx, by, bz);
}

void glBinormal3svEXT(const GLshort * v)
{
    return Binding::Binormal3svEXT(v);
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return Binding::BinormalPointerEXT(type, stride, pointer);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return Binding::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return Binding::BitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendBarrierKHR()
{
    return Binding::BlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return Binding::BlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return Binding::BlendColor(red, green, blue, alpha);
}

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return Binding::BlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return Binding::BlendColorxOES(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return Binding::BlendEquation(mode);
}

void glBlendEquationEXT(GLenum mode)
{
    return Binding::BlendEquationEXT(mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return Binding::BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationi(buf, mode);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return Binding::BlendEquationiARB(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return Binding::BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return Binding::BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return Binding::BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFunci(buf, src, dst);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return Binding::BlendFunciARB(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return Binding::BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return Binding::BufferAddressRangeNV(pname, index, address, length);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return Binding::BufferData(target, size, data, usage);
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return Binding::BufferDataARB(target, size, data, usage);
}

void glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return Binding::BufferPageCommitmentARB(target, offset, size, commit);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return Binding::BufferParameteriAPPLE(target, pname, param);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return Binding::BufferStorage(target, size, data, flags);
}

void glBufferStorageExternalEXT(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags)
{
    return Binding::BufferStorageExternalEXT(target, offset, size, clientBuffer, flags);
}

void glBufferStorageMemEXT(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return Binding::BufferStorageMemEXT(target, size, memory, offset);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return Binding::BufferSubData(target, offset, size, data);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return Binding::BufferSubDataARB(target, offset, size, data);
}




} // namespace gl
