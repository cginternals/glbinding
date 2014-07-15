#pragma once

#include <glbinding/nogl.h>

#include <glbinding/types.h>

#include <glbinding/values.h>
#include <glbinding/boolean.h>

namespace gl12ext
{

#include <glbinding/featured/types.inl>

#include <glbinding/featured/values.inl>
#include <glbinding/featured/boolean.inl>

} // namespace gl12ext


#include <glbinding/FunctionObjects.h>

namespace gl12ext
{

using FunctionObjects = gl::FunctionObjects;


inline void glAccumxOES(GLenum op, GLfixed value)
{
    return FunctionObjects::AccumxOES(op, value);
}

inline void glActiveProgramEXT(GLuint program)
{
    return FunctionObjects::ActiveProgramEXT(program);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return FunctionObjects::ActiveShaderProgram(pipeline, program);
}

inline void glActiveStencilFaceEXT(GLenum face)
{
    return FunctionObjects::ActiveStencilFaceEXT(face);
}

inline void glActiveTexture(GLenum texture)
{
    return FunctionObjects::ActiveTexture(texture);
}

inline void glActiveTextureARB(GLenum texture)
{
    return FunctionObjects::ActiveTextureARB(texture);
}

inline void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return FunctionObjects::ActiveVaryingNV(program, name);
}

inline void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return FunctionObjects::AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return FunctionObjects::AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return FunctionObjects::AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return FunctionObjects::AlphaFuncxOES(func, ref);
}

inline void glApplyTextureEXT(GLenum mode)
{
    return FunctionObjects::ApplyTextureEXT(mode);
}

inline GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return FunctionObjects::AreProgramsResidentNV(n, programs, residences);
}

inline GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return FunctionObjects::AreTexturesResidentEXT(n, textures, residences);
}

inline void glArrayElementEXT(GLint i)
{
    return FunctionObjects::ArrayElementEXT(i);
}

inline void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return FunctionObjects::ArrayObjectATI(array, size, type, stride, buffer, offset);
}

inline void glAsyncMarkerSGIX(GLuint marker)
{
    return FunctionObjects::AsyncMarkerSGIX(marker);
}

inline void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return FunctionObjects::AttachObjectARB(containerObj, obj);
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return FunctionObjects::AttachShader(program, shader);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return FunctionObjects::BeginConditionalRender(id, mode);
}

inline void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return FunctionObjects::BeginConditionalRenderNV(id, mode);
}

inline void glBeginConditionalRenderNVX(GLuint id)
{
    return FunctionObjects::BeginConditionalRenderNVX(id);
}

inline void glBeginFragmentShaderATI()
{
    return FunctionObjects::BeginFragmentShaderATI();
}

inline void glBeginOcclusionQueryNV(GLuint id)
{
    return FunctionObjects::BeginOcclusionQueryNV(id);
}

inline void glBeginPerfMonitorAMD(GLuint monitor)
{
    return FunctionObjects::BeginPerfMonitorAMD(monitor);
}

inline void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return FunctionObjects::BeginPerfQueryINTEL(queryHandle);
}

inline void glBeginQuery(GLenum target, GLuint id)
{
    return FunctionObjects::BeginQuery(target, id);
}

inline void glBeginQueryARB(GLenum target, GLuint id)
{
    return FunctionObjects::BeginQueryARB(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return FunctionObjects::BeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return FunctionObjects::BeginTransformFeedback(primitiveMode);
}

inline void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return FunctionObjects::BeginTransformFeedbackEXT(primitiveMode);
}

inline void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return FunctionObjects::BeginTransformFeedbackNV(primitiveMode);
}

inline void glBeginVertexShaderEXT()
{
    return FunctionObjects::BeginVertexShaderEXT();
}

inline void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return FunctionObjects::BeginVideoCaptureNV(video_capture_slot);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return FunctionObjects::BindAttribLocation(program, index, name);
}

inline void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return FunctionObjects::BindAttribLocationARB(programObj, index, name);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return FunctionObjects::BindBuffer(target, buffer);
}

inline void glBindBufferARB(GLenum target, GLuint buffer)
{
    return FunctionObjects::BindBufferARB(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return FunctionObjects::BindBufferBase(target, index, buffer);
}

inline void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return FunctionObjects::BindBufferBaseEXT(target, index, buffer);
}

inline void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return FunctionObjects::BindBufferBaseNV(target, index, buffer);
}

inline void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return FunctionObjects::BindBufferOffsetEXT(target, index, buffer, offset);
}

inline void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return FunctionObjects::BindBufferOffsetNV(target, index, buffer, offset);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::BindBufferRange(target, index, buffer, offset, size);
}

inline void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::BindBufferRangeEXT(target, index, buffer, offset, size);
}

inline void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::BindBufferRangeNV(target, index, buffer, offset, size);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return FunctionObjects::BindBuffersBase(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return FunctionObjects::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return FunctionObjects::BindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return FunctionObjects::BindFragDataLocationEXT(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return FunctionObjects::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFragmentShaderATI(GLuint id)
{
    return FunctionObjects::BindFragmentShaderATI(id);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return FunctionObjects::BindFramebuffer(target, framebuffer);
}

inline void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return FunctionObjects::BindFramebufferEXT(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return FunctionObjects::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return FunctionObjects::BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return FunctionObjects::BindImageTextures(first, count, textures);
}

inline GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return FunctionObjects::BindLightParameterEXT(light, value);
}

inline GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return FunctionObjects::BindMaterialParameterEXT(face, value);
}

inline void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return FunctionObjects::BindMultiTextureEXT(texunit, target, texture);
}

inline GLuint glBindParameterEXT(GLenum value)
{
    return FunctionObjects::BindParameterEXT(value);
}

inline void glBindProgramARB(GLenum target, GLuint program)
{
    return FunctionObjects::BindProgramARB(target, program);
}

inline void glBindProgramNV(GLenum target, GLuint id)
{
    return FunctionObjects::BindProgramNV(target, id);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
    return FunctionObjects::BindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return FunctionObjects::BindRenderbuffer(target, renderbuffer);
}

inline void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return FunctionObjects::BindRenderbufferEXT(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return FunctionObjects::BindSampler(unit, sampler);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return FunctionObjects::BindSamplers(first, count, samplers);
}

inline GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return FunctionObjects::BindTexGenParameterEXT(unit, coord, value);
}

inline void glBindTextureEXT(GLenum target, GLuint texture)
{
    return FunctionObjects::BindTextureEXT(target, texture);
}

inline GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return FunctionObjects::BindTextureUnitParameterEXT(unit, value);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return FunctionObjects::BindTextures(first, count, textures);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return FunctionObjects::BindTransformFeedback(target, id);
}

inline void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return FunctionObjects::BindTransformFeedbackNV(target, id);
}

inline void glBindVertexArray(GLuint array)
{
    return FunctionObjects::BindVertexArray(array);
}

inline void glBindVertexArrayAPPLE(GLuint array)
{
    return FunctionObjects::BindVertexArrayAPPLE(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return FunctionObjects::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return FunctionObjects::BindVertexBuffers(first, count, buffers, offsets, strides);
}

inline void glBindVertexShaderEXT(GLuint id)
{
    return FunctionObjects::BindVertexShaderEXT(id);
}

inline void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return FunctionObjects::BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

inline void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return FunctionObjects::BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

inline void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return FunctionObjects::Binormal3bEXT(bx, by, bz);
}

inline void glBinormal3bvEXT(const GLbyte * v)
{
    return FunctionObjects::Binormal3bvEXT(v);
}

inline void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return FunctionObjects::Binormal3dEXT(bx, by, bz);
}

inline void glBinormal3dvEXT(const GLdouble * v)
{
    return FunctionObjects::Binormal3dvEXT(v);
}

inline void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return FunctionObjects::Binormal3fEXT(bx, by, bz);
}

inline void glBinormal3fvEXT(const GLfloat * v)
{
    return FunctionObjects::Binormal3fvEXT(v);
}

inline void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return FunctionObjects::Binormal3iEXT(bx, by, bz);
}

inline void glBinormal3ivEXT(const GLint * v)
{
    return FunctionObjects::Binormal3ivEXT(v);
}

inline void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return FunctionObjects::Binormal3sEXT(bx, by, bz);
}

inline void glBinormal3svEXT(const GLshort * v)
{
    return FunctionObjects::Binormal3svEXT(v);
}

inline void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::BinormalPointerEXT(type, stride, pointer);
}

inline void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return FunctionObjects::BitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendBarrierNV()
{
    return FunctionObjects::BlendBarrierNV();
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::BlendColorEXT(red, green, blue, alpha);
}

inline void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return FunctionObjects::BlendColorxOES(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return FunctionObjects::BlendEquation(mode);
}

inline void glBlendEquationEXT(GLenum mode)
{
    return FunctionObjects::BlendEquationEXT(mode);
}

inline void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return FunctionObjects::BlendEquationIndexedAMD(buf, mode);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return FunctionObjects::BlendEquationSeparate(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return FunctionObjects::BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return FunctionObjects::BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return FunctionObjects::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return FunctionObjects::BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return FunctionObjects::BlendEquationi(buf, mode);
}

inline void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return FunctionObjects::BlendEquationiARB(buf, mode);
}

inline void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return FunctionObjects::BlendFuncIndexedAMD(buf, src, dst);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return FunctionObjects::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return FunctionObjects::BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return FunctionObjects::BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return FunctionObjects::BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return FunctionObjects::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return FunctionObjects::BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return FunctionObjects::BlendFunci(buf, src, dst);
}

inline void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return FunctionObjects::BlendFunciARB(buf, src, dst);
}

inline void glBlendParameteriNV(GLenum pname, GLint value)
{
    return FunctionObjects::BlendParameteriNV(pname, value);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return FunctionObjects::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    return FunctionObjects::BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return FunctionObjects::BufferAddressRangeNV(pname, index, address, length);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return FunctionObjects::BufferData(target, size, data, usage);
}

inline void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return FunctionObjects::BufferDataARB(target, size, data, usage);
}

inline void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::BufferParameteriAPPLE(target, pname, param);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
    return FunctionObjects::BufferStorage(target, size, data, flags);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return FunctionObjects::BufferSubData(target, offset, size, data);
}

inline void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return FunctionObjects::BufferSubDataARB(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::CheckFramebufferStatus(target));
}

inline GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::CheckFramebufferStatusEXT(target));
}

inline GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::CheckNamedFramebufferStatusEXT(framebuffer, target));
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return FunctionObjects::ClampColor(target, clamp);
}

inline void glClampColorARB(GLenum target, GLenum clamp)
{
    return FunctionObjects::ClampColorARB(target, clamp);
}

inline void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return FunctionObjects::ClearAccumxOES(red, green, blue, alpha);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearBufferData(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return FunctionObjects::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return FunctionObjects::ClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return FunctionObjects::ClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return FunctionObjects::ClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return FunctionObjects::ClearColorIiEXT(red, green, blue, alpha);
}

inline void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return FunctionObjects::ClearColorIuiEXT(red, green, blue, alpha);
}

inline void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return FunctionObjects::ClearColorxOES(red, green, blue, alpha);
}

inline void glClearDepthdNV(GLdouble depth)
{
    return FunctionObjects::ClearDepthdNV(depth);
}

inline void glClearDepthf(GLfloat d)
{
    return FunctionObjects::ClearDepthf(d);
}

inline void glClearDepthfOES(GLclampf depth)
{
    return FunctionObjects::ClearDepthfOES(depth);
}

inline void glClearDepthxOES(GLfixed depth)
{
    return FunctionObjects::ClearDepthxOES(depth);
}

inline void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearTexImage(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline void glClientActiveTexture(GLenum texture)
{
    return FunctionObjects::ClientActiveTexture(texture);
}

inline void glClientActiveTextureARB(GLenum texture)
{
    return FunctionObjects::ClientActiveTextureARB(texture);
}

inline void glClientActiveVertexStreamATI(GLenum stream)
{
    return FunctionObjects::ClientActiveVertexStreamATI(stream);
}

inline void glClientAttribDefaultEXT(GLbitfield mask)
{
    return FunctionObjects::ClientAttribDefaultEXT(mask);
}

inline GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::ClientWaitSync(sync, flags, timeout));
}

inline void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return FunctionObjects::ClipPlanefOES(plane, equation);
}

inline void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return FunctionObjects::ClipPlanexOES(plane, equation);
}

inline void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Color3fVertex3fSUN(r, g, b, x, y, z);
}

inline void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return FunctionObjects::Color3fVertex3fvSUN(c, v);
}

inline void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return FunctionObjects::Color3hNV(red, green, blue);
}

inline void glColor3hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Color3hvNV(v);
}

inline void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return FunctionObjects::Color3xOES(red, green, blue);
}

inline void glColor3xvOES(const GLfixed * components)
{
    return FunctionObjects::Color3xvOES(components);
}

inline void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::Color4fNormal3fVertex3fvSUN(c, n, v);
}

inline void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return FunctionObjects::Color4hNV(red, green, blue, alpha);
}

inline void glColor4hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Color4hvNV(v);
}

inline void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return FunctionObjects::Color4ubVertex2fSUN(r, g, b, a, x, y);
}

inline void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return FunctionObjects::Color4ubVertex2fvSUN(c, v);
}

inline void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}

inline void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return FunctionObjects::Color4ubVertex3fvSUN(c, v);
}

inline void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return FunctionObjects::Color4xOES(red, green, blue, alpha);
}

inline void glColor4xvOES(const GLfixed * components)
{
    return FunctionObjects::Color4xvOES(components);
}

inline void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::ColorFormatNV(size, type, stride);
}

inline void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return FunctionObjects::ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return FunctionObjects::ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return FunctionObjects::ColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return FunctionObjects::ColorMaskIndexedEXT(index, r, g, b, a);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return FunctionObjects::ColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return FunctionObjects::ColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return FunctionObjects::ColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return FunctionObjects::ColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return FunctionObjects::ColorP4uiv(type, color);
}

inline void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return FunctionObjects::ColorPointerEXT(size, type, stride, count, pointer);
}

inline void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return FunctionObjects::ColorPointervINTEL(size, type, pointer);
}

inline void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ColorSubTable(target, start, count, format, type, data);
}

inline void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return FunctionObjects::ColorSubTableEXT(target, start, count, format, type, data);
}

inline void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return FunctionObjects::ColorTable(target, internalformat, width, format, type, table);
}

inline void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return FunctionObjects::ColorTableEXT(target, internalFormat, width, format, type, table);
}

inline void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ColorTableParameterfv(target, pname, params);
}

inline void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ColorTableParameterfvSGI(target, pname, params);
}

inline void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::ColorTableParameteriv(target, pname, params);
}

inline void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::ColorTableParameterivSGI(target, pname, params);
}

inline void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return FunctionObjects::ColorTableSGI(target, internalformat, width, format, type, table);
}

inline void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return FunctionObjects::CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

inline void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return FunctionObjects::CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

inline void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return FunctionObjects::CombinerParameterfNV(pname, param);
}

inline void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::CombinerParameterfvNV(pname, params);
}

inline void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return FunctionObjects::CombinerParameteriNV(pname, param);
}

inline void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return FunctionObjects::CombinerParameterivNV(pname, params);
}

inline void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::CombinerStageParameterfvNV(stage, pname, params);
}

inline void glCompileShader(GLuint shader)
{
    return FunctionObjects::CompileShader(shader);
}

inline void glCompileShaderARB(GLhandleARB shaderObj)
{
    return FunctionObjects::CompileShaderARB(shaderObj);
}

inline void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return FunctionObjects::CompileShaderIncludeARB(shader, count, path, length);
}

inline void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return FunctionObjects::CompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return FunctionObjects::ConvolutionFilter1D(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return FunctionObjects::ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return FunctionObjects::ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return FunctionObjects::ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return FunctionObjects::ConvolutionParameterf(target, pname, params);
}

inline void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return FunctionObjects::ConvolutionParameterfEXT(target, pname, params);
}

inline void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ConvolutionParameterfv(target, pname, params);
}

inline void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ConvolutionParameterfvEXT(target, pname, params);
}

inline void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return FunctionObjects::ConvolutionParameteri(target, pname, params);
}

inline void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return FunctionObjects::ConvolutionParameteriEXT(target, pname, params);
}

inline void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::ConvolutionParameteriv(target, pname, params);
}

inline void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::ConvolutionParameterivEXT(target, pname, params);
}

inline void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return FunctionObjects::ConvolutionParameterxOES(target, pname, param);
}

inline void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return FunctionObjects::ConvolutionParameterxvOES(target, pname, params);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return FunctionObjects::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyColorSubTable(target, start, x, y, width);
}

inline void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyColorSubTableEXT(target, start, x, y, width);
}

inline void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyColorTable(target, internalformat, x, y, width);
}

inline void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyColorTableSGI(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyConvolutionFilter1D(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

inline void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return FunctionObjects::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return FunctionObjects::CopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

inline void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return FunctionObjects::CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

inline void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return FunctionObjects::CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

inline void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return FunctionObjects::CopyPathNV(resultPath, srcPath);
}

inline void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return FunctionObjects::CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return FunctionObjects::CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return FunctionObjects::CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

inline void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return FunctionObjects::CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return FunctionObjects::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return FunctionObjects::CoverFillPathNV(path, coverMode);
}

inline void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return FunctionObjects::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return FunctionObjects::CoverStrokePathNV(path, coverMode);
}

inline void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return FunctionObjects::CreatePerfQueryINTEL(queryId, queryHandle);
}

inline GLuint glCreateProgram()
{
    return FunctionObjects::CreateProgram();
}

inline GLhandleARB glCreateProgramObjectARB()
{
    return FunctionObjects::CreateProgramObjectARB();
}

inline GLuint glCreateShader(GLenum type)
{
    return FunctionObjects::CreateShader(type);
}

inline GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return FunctionObjects::CreateShaderObjectARB(shaderType);
}

inline GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return FunctionObjects::CreateShaderProgramEXT(type, string);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return FunctionObjects::CreateShaderProgramv(type, count, strings);
}

inline GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, GLbitfield flags)
{
    return FunctionObjects::CreateSyncFromCLeventARB(context, event, flags);
}

inline void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return FunctionObjects::CullParameterdvEXT(pname, params);
}

inline void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return FunctionObjects::CullParameterfvEXT(pname, params);
}

inline void glCurrentPaletteMatrixARB(GLint index)
{
    return FunctionObjects::CurrentPaletteMatrixARB(index);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return FunctionObjects::DebugMessageCallback(callback, userParam);
}

inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return FunctionObjects::DebugMessageCallbackAMD(callback, userParam);
}

inline void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return FunctionObjects::DebugMessageCallbackARB(callback, userParam);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return FunctionObjects::DebugMessageControl(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return FunctionObjects::DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return FunctionObjects::DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return FunctionObjects::DebugMessageInsert(source, type, id, severity, length, buf);
}

inline void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return FunctionObjects::DebugMessageInsertAMD(category, severity, id, length, buf);
}

inline void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return FunctionObjects::DebugMessageInsertARB(source, type, id, severity, length, buf);
}

inline void glDeformSGIX(GLbitfield mask)
{
    return FunctionObjects::DeformSGIX(mask);
}

inline void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return FunctionObjects::DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return FunctionObjects::DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return FunctionObjects::DeleteAsyncMarkersSGIX(marker, range);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return FunctionObjects::DeleteBuffers(n, buffers);
}

inline void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return FunctionObjects::DeleteBuffersARB(n, buffers);
}

inline void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return FunctionObjects::DeleteFencesAPPLE(n, fences);
}

inline void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return FunctionObjects::DeleteFencesNV(n, fences);
}

inline void glDeleteFragmentShaderATI(GLuint id)
{
    return FunctionObjects::DeleteFragmentShaderATI(id);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return FunctionObjects::DeleteFramebuffers(n, framebuffers);
}

inline void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return FunctionObjects::DeleteFramebuffersEXT(n, framebuffers);
}

inline void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return FunctionObjects::DeleteNamedStringARB(namelen, name);
}

inline void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return FunctionObjects::DeleteNamesAMD(identifier, num, names);
}

inline void glDeleteObjectARB(GLhandleARB obj)
{
    return FunctionObjects::DeleteObjectARB(obj);
}

inline void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return FunctionObjects::DeleteOcclusionQueriesNV(n, ids);
}

inline void glDeletePathsNV(GLuint path, GLsizei range)
{
    return FunctionObjects::DeletePathsNV(path, range);
}

inline void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return FunctionObjects::DeletePerfMonitorsAMD(n, monitors);
}

inline void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return FunctionObjects::DeletePerfQueryINTEL(queryHandle);
}

inline void glDeleteProgram(GLuint program)
{
    return FunctionObjects::DeleteProgram(program);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return FunctionObjects::DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return FunctionObjects::DeleteProgramsARB(n, programs);
}

inline void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return FunctionObjects::DeleteProgramsNV(n, programs);
}

inline void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return FunctionObjects::DeleteQueries(n, ids);
}

inline void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return FunctionObjects::DeleteQueriesARB(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return FunctionObjects::DeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return FunctionObjects::DeleteRenderbuffersEXT(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return FunctionObjects::DeleteSamplers(count, samplers);
}

inline void glDeleteShader(GLuint shader)
{
    return FunctionObjects::DeleteShader(shader);
}

inline void glDeleteSync(GLsync sync)
{
    return FunctionObjects::DeleteSync(sync);
}

inline void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return FunctionObjects::DeleteTexturesEXT(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return FunctionObjects::DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return FunctionObjects::DeleteTransformFeedbacksNV(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return FunctionObjects::DeleteVertexArrays(n, arrays);
}

inline void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return FunctionObjects::DeleteVertexArraysAPPLE(n, arrays);
}

inline void glDeleteVertexShaderEXT(GLuint id)
{
    return FunctionObjects::DeleteVertexShaderEXT(id);
}

inline void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return FunctionObjects::DepthBoundsEXT(zmin, zmax);
}

inline void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return FunctionObjects::DepthBoundsdNV(zmin, zmax);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return FunctionObjects::DepthRangeIndexed(index, n, f);
}

inline void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return FunctionObjects::DepthRangedNV(zNear, zFar);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
    return FunctionObjects::DepthRangef(n, f);
}

inline void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return FunctionObjects::DepthRangefOES(n, f);
}

inline void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return FunctionObjects::DepthRangexOES(n, f);
}

inline void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return FunctionObjects::DetachObjectARB(containerObj, attachedObj);
}

inline void glDetachShader(GLuint program, GLuint shader)
{
    return FunctionObjects::DetachShader(program, shader);
}

inline void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return FunctionObjects::DetailTexFuncSGIS(target, n, points);
}

inline void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return FunctionObjects::DisableClientStateIndexedEXT(array, index);
}

inline void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return FunctionObjects::DisableClientStateiEXT(array, index);
}

inline void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return FunctionObjects::DisableIndexedEXT(target, index);
}

inline void glDisableVariantClientStateEXT(GLuint id)
{
    return FunctionObjects::DisableVariantClientStateEXT(id);
}

inline void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return FunctionObjects::DisableVertexArrayAttribEXT(vaobj, index);
}

inline void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return FunctionObjects::DisableVertexArrayEXT(vaobj, array);
}

inline void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return FunctionObjects::DisableVertexAttribAPPLE(index, pname);
}

inline void glDisableVertexAttribArray(GLuint index)
{
    return FunctionObjects::DisableVertexAttribArray(index);
}

inline void glDisableVertexAttribArrayARB(GLuint index)
{
    return FunctionObjects::DisableVertexAttribArrayARB(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return FunctionObjects::Disablei(target, index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return FunctionObjects::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return FunctionObjects::DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
    return FunctionObjects::DispatchComputeIndirect(indirect);
}

inline void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return FunctionObjects::DrawArraysEXT(mode, first, count);
}

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return FunctionObjects::DrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return FunctionObjects::DrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return FunctionObjects::DrawArraysInstancedARB(mode, first, count, primcount);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return FunctionObjects::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return FunctionObjects::DrawArraysInstancedEXT(mode, start, count, primcount);
}

inline void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return FunctionObjects::DrawBuffers(n, bufs);
}

inline void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return FunctionObjects::DrawBuffersARB(n, bufs);
}

inline void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return FunctionObjects::DrawBuffersATI(n, bufs);
}

inline void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return FunctionObjects::DrawElementArrayAPPLE(mode, first, count);
}

inline void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return FunctionObjects::DrawElementArrayATI(mode, count);
}

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return FunctionObjects::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return FunctionObjects::DrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return FunctionObjects::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return FunctionObjects::DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return FunctionObjects::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return FunctionObjects::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return FunctionObjects::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return FunctionObjects::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

inline void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return FunctionObjects::DrawMeshArraysSUN(mode, first, count, width);
}

inline void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return FunctionObjects::DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

inline void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return FunctionObjects::DrawRangeElementArrayATI(mode, start, end, count);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return FunctionObjects::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return FunctionObjects::DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

inline void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return FunctionObjects::DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return FunctionObjects::DrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return FunctionObjects::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return FunctionObjects::DrawTransformFeedbackNV(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return FunctionObjects::DrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return FunctionObjects::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEdgeFlagFormatNV(GLsizei stride)
{
    return FunctionObjects::EdgeFlagFormatNV(stride);
}

inline void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return FunctionObjects::EdgeFlagPointerEXT(stride, count, pointer);
}

inline void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return FunctionObjects::EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

inline void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return FunctionObjects::ElementPointerAPPLE(type, pointer);
}

inline void glElementPointerATI(GLenum type, const void * pointer)
{
    return FunctionObjects::ElementPointerATI(type, pointer);
}

inline void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return FunctionObjects::EnableClientStateIndexedEXT(array, index);
}

inline void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return FunctionObjects::EnableClientStateiEXT(array, index);
}

inline void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return FunctionObjects::EnableIndexedEXT(target, index);
}

inline void glEnableVariantClientStateEXT(GLuint id)
{
    return FunctionObjects::EnableVariantClientStateEXT(id);
}

inline void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return FunctionObjects::EnableVertexArrayAttribEXT(vaobj, index);
}

inline void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return FunctionObjects::EnableVertexArrayEXT(vaobj, array);
}

inline void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return FunctionObjects::EnableVertexAttribAPPLE(index, pname);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return FunctionObjects::EnableVertexAttribArray(index);
}

inline void glEnableVertexAttribArrayARB(GLuint index)
{
    return FunctionObjects::EnableVertexAttribArrayARB(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return FunctionObjects::Enablei(target, index);
}

inline void glEndConditionalRender()
{
    return FunctionObjects::EndConditionalRender();
}

inline void glEndConditionalRenderNV()
{
    return FunctionObjects::EndConditionalRenderNV();
}

inline void glEndConditionalRenderNVX()
{
    return FunctionObjects::EndConditionalRenderNVX();
}

inline void glEndFragmentShaderATI()
{
    return FunctionObjects::EndFragmentShaderATI();
}

inline void glEndOcclusionQueryNV()
{
    return FunctionObjects::EndOcclusionQueryNV();
}

inline void glEndPerfMonitorAMD(GLuint monitor)
{
    return FunctionObjects::EndPerfMonitorAMD(monitor);
}

inline void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return FunctionObjects::EndPerfQueryINTEL(queryHandle);
}

inline void glEndQuery(GLenum target)
{
    return FunctionObjects::EndQuery(target);
}

inline void glEndQueryARB(GLenum target)
{
    return FunctionObjects::EndQueryARB(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return FunctionObjects::EndQueryIndexed(target, index);
}

inline void glEndTransformFeedback()
{
    return FunctionObjects::EndTransformFeedback();
}

inline void glEndTransformFeedbackEXT()
{
    return FunctionObjects::EndTransformFeedbackEXT();
}

inline void glEndTransformFeedbackNV()
{
    return FunctionObjects::EndTransformFeedbackNV();
}

inline void glEndVertexShaderEXT()
{
    return FunctionObjects::EndVertexShaderEXT();
}

inline void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return FunctionObjects::EndVideoCaptureNV(video_capture_slot);
}

inline void glEvalCoord1xOES(GLfixed u)
{
    return FunctionObjects::EvalCoord1xOES(u);
}

inline void glEvalCoord1xvOES(const GLfixed * coords)
{
    return FunctionObjects::EvalCoord1xvOES(coords);
}

inline void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return FunctionObjects::EvalCoord2xOES(u, v);
}

inline void glEvalCoord2xvOES(const GLfixed * coords)
{
    return FunctionObjects::EvalCoord2xvOES(coords);
}

inline void glEvalMapsNV(GLenum target, GLenum mode)
{
    return FunctionObjects::EvalMapsNV(target, mode);
}

inline void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return FunctionObjects::ExecuteProgramNV(target, id, params);
}

inline void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return FunctionObjects::ExtractComponentEXT(res, src, num);
}

inline void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return FunctionObjects::FeedbackBufferxOES(n, type, buffer);
}

inline GLsync glFenceSync(GLenum condition, GLbitfield flags)
{
    return FunctionObjects::FenceSync(condition, flags);
}

inline void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return FunctionObjects::FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

inline GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return FunctionObjects::FinishAsyncSGIX(markerp);
}

inline void glFinishFenceAPPLE(GLuint fence)
{
    return FunctionObjects::FinishFenceAPPLE(fence);
}

inline void glFinishFenceNV(GLuint fence)
{
    return FunctionObjects::FinishFenceNV(fence);
}

inline void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return FunctionObjects::FinishObjectAPPLE(object, name);
}

inline void glFinishTextureSUNX()
{
    return FunctionObjects::FinishTextureSUNX();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return FunctionObjects::FlushMappedBufferRange(target, offset, length);
}

inline void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::FlushMappedBufferRangeAPPLE(target, offset, size);
}

inline void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return FunctionObjects::FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

inline void glFlushPixelDataRangeNV(GLenum target)
{
    return FunctionObjects::FlushPixelDataRangeNV(target);
}

inline void glFlushRasterSGIX()
{
    return FunctionObjects::FlushRasterSGIX();
}

inline void glFlushStaticDataIBM(GLenum target)
{
    return FunctionObjects::FlushStaticDataIBM(target);
}

inline void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return FunctionObjects::FlushVertexArrayRangeAPPLE(length, pointer);
}

inline void glFlushVertexArrayRangeNV()
{
    return FunctionObjects::FlushVertexArrayRangeNV();
}

inline void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return FunctionObjects::FogCoordFormatNV(type, stride);
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::FogCoordPointer(type, stride, pointer);
}

inline void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::FogCoordPointerEXT(type, stride, pointer);
}

inline void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glFogCoordd(GLdouble coord)
{
    return FunctionObjects::FogCoordd(coord);
}

inline void glFogCoorddEXT(GLdouble coord)
{
    return FunctionObjects::FogCoorddEXT(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
    return FunctionObjects::FogCoorddv(coord);
}

inline void glFogCoorddvEXT(const GLdouble * coord)
{
    return FunctionObjects::FogCoorddvEXT(coord);
}

inline void glFogCoordf(GLfloat coord)
{
    return FunctionObjects::FogCoordf(coord);
}

inline void glFogCoordfEXT(GLfloat coord)
{
    return FunctionObjects::FogCoordfEXT(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
    return FunctionObjects::FogCoordfv(coord);
}

inline void glFogCoordfvEXT(const GLfloat * coord)
{
    return FunctionObjects::FogCoordfvEXT(coord);
}

inline void glFogCoordhNV(GLhalfNV fog)
{
    return FunctionObjects::FogCoordhNV(fog);
}

inline void glFogCoordhvNV(const GLhalfNV * fog)
{
    return FunctionObjects::FogCoordhvNV(fog);
}

inline void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return FunctionObjects::FogFuncSGIS(n, points);
}

inline void glFogxOES(GLenum pname, GLfixed param)
{
    return FunctionObjects::FogxOES(pname, param);
}

inline void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return FunctionObjects::FogxvOES(pname, param);
}

inline void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return FunctionObjects::FragmentColorMaterialSGIX(face, mode);
}

inline void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return FunctionObjects::FragmentLightModelfSGIX(pname, param);
}

inline void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::FragmentLightModelfvSGIX(pname, params);
}

inline void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return FunctionObjects::FragmentLightModeliSGIX(pname, param);
}

inline void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return FunctionObjects::FragmentLightModelivSGIX(pname, params);
}

inline void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return FunctionObjects::FragmentLightfSGIX(light, pname, param);
}

inline void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::FragmentLightfvSGIX(light, pname, params);
}

inline void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return FunctionObjects::FragmentLightiSGIX(light, pname, param);
}

inline void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return FunctionObjects::FragmentLightivSGIX(light, pname, params);
}

inline void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return FunctionObjects::FragmentMaterialfSGIX(face, pname, param);
}

inline void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::FragmentMaterialfvSGIX(face, pname, params);
}

inline void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return FunctionObjects::FragmentMaterialiSGIX(face, pname, param);
}

inline void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return FunctionObjects::FragmentMaterialivSGIX(face, pname, params);
}

inline void glFrameTerminatorGREMEDY()
{
    return FunctionObjects::FrameTerminatorGREMEDY();
}

inline void glFrameZoomSGIX(GLint factor)
{
    return FunctionObjects::FrameZoomSGIX(factor);
}

inline void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return FunctionObjects::FramebufferDrawBufferEXT(framebuffer, mode);
}

inline void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return FunctionObjects::FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::FramebufferParameteri(target, pname, param);
}

inline void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return FunctionObjects::FramebufferReadBufferEXT(framebuffer, mode);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return FunctionObjects::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return FunctionObjects::FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return FunctionObjects::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return FunctionObjects::FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTextureARB(target, attachment, texture, level);
}

inline void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return FunctionObjects::FramebufferTextureEXT(target, attachment, texture, level);
}

inline void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return FunctionObjects::FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

inline void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return FunctionObjects::FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return FunctionObjects::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return FunctionObjects::FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return FunctionObjects::FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

inline void glFreeObjectBufferATI(GLuint buffer)
{
    return FunctionObjects::FreeObjectBufferATI(buffer);
}

inline void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return FunctionObjects::FrustumfOES(l, r, b, t, n, f);
}

inline void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return FunctionObjects::FrustumxOES(l, r, b, t, n, f);
}

inline GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return FunctionObjects::GenAsyncMarkersSGIX(range);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return FunctionObjects::GenBuffers(n, buffers);
}

inline void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return FunctionObjects::GenBuffersARB(n, buffers);
}

inline void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return FunctionObjects::GenFencesAPPLE(n, fences);
}

inline void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return FunctionObjects::GenFencesNV(n, fences);
}

inline GLuint glGenFragmentShadersATI(GLuint range)
{
    return FunctionObjects::GenFragmentShadersATI(range);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return FunctionObjects::GenFramebuffers(n, framebuffers);
}

inline void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return FunctionObjects::GenFramebuffersEXT(n, framebuffers);
}

inline void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return FunctionObjects::GenNamesAMD(identifier, num, names);
}

inline void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return FunctionObjects::GenOcclusionQueriesNV(n, ids);
}

inline GLuint glGenPathsNV(GLsizei range)
{
    return FunctionObjects::GenPathsNV(range);
}

inline void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return FunctionObjects::GenPerfMonitorsAMD(n, monitors);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return FunctionObjects::GenProgramPipelines(n, pipelines);
}

inline void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return FunctionObjects::GenProgramsARB(n, programs);
}

inline void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return FunctionObjects::GenProgramsNV(n, programs);
}

inline void glGenQueries(GLsizei n, GLuint * ids)
{
    return FunctionObjects::GenQueries(n, ids);
}

inline void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return FunctionObjects::GenQueriesARB(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return FunctionObjects::GenRenderbuffers(n, renderbuffers);
}

inline void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return FunctionObjects::GenRenderbuffersEXT(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return FunctionObjects::GenSamplers(count, samplers);
}

inline GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return FunctionObjects::GenSymbolsEXT(datatype, storagetype, range, components);
}

inline void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return FunctionObjects::GenTexturesEXT(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return FunctionObjects::GenTransformFeedbacks(n, ids);
}

inline void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return FunctionObjects::GenTransformFeedbacksNV(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return FunctionObjects::GenVertexArrays(n, arrays);
}

inline void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return FunctionObjects::GenVertexArraysAPPLE(n, arrays);
}

inline GLuint glGenVertexShadersEXT(GLuint range)
{
    return FunctionObjects::GenVertexShadersEXT(range);
}

inline void glGenerateMipmap(GLenum target)
{
    return FunctionObjects::GenerateMipmap(target);
}

inline void glGenerateMipmapEXT(GLenum target)
{
    return FunctionObjects::GenerateMipmapEXT(target);
}

inline void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return FunctionObjects::GenerateMultiTexMipmapEXT(texunit, target);
}

inline void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return FunctionObjects::GenerateTextureMipmapEXT(texture, target);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return FunctionObjects::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return FunctionObjects::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return FunctionObjects::GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return FunctionObjects::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return FunctionObjects::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return FunctionObjects::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return FunctionObjects::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return FunctionObjects::GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return FunctionObjects::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return FunctionObjects::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return FunctionObjects::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return FunctionObjects::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return FunctionObjects::GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

inline void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetArrayObjectfvATI(array, pname, params);
}

inline void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return FunctionObjects::GetArrayObjectivATI(array, pname, params);
}

inline void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return FunctionObjects::GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return FunctionObjects::GetAttachedShaders(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetAttribLocation(program, name);
}

inline GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return FunctionObjects::GetAttribLocationARB(programObj, name);
}

inline void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return FunctionObjects::GetBooleanIndexedvEXT(target, index, data);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return FunctionObjects::GetBooleani_v(target, index, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return FunctionObjects::GetBufferParameteri64v(target, pname, params);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetBufferParameteriv(target, pname, params);
}

inline void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetBufferParameterivARB(target, pname, params);
}

inline void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return FunctionObjects::GetBufferParameterui64vNV(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return FunctionObjects::GetBufferPointerv(target, pname, params);
}

inline void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return FunctionObjects::GetBufferPointervARB(target, pname, params);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return FunctionObjects::GetBufferSubData(target, offset, size, data);
}

inline void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return FunctionObjects::GetBufferSubDataARB(target, offset, size, data);
}

inline void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return FunctionObjects::GetClipPlanefOES(plane, equation);
}

inline void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return FunctionObjects::GetClipPlanexOES(plane, equation);
}

inline void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return FunctionObjects::GetColorTable(target, format, type, table);
}

inline void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return FunctionObjects::GetColorTableEXT(target, format, type, data);
}

inline void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetColorTableParameterfv(target, pname, params);
}

inline void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetColorTableParameterfvEXT(target, pname, params);
}

inline void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetColorTableParameterfvSGI(target, pname, params);
}

inline void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetColorTableParameteriv(target, pname, params);
}

inline void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetColorTableParameterivEXT(target, pname, params);
}

inline void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetColorTableParameterivSGI(target, pname, params);
}

inline void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return FunctionObjects::GetColorTableSGI(target, format, type, table);
}

inline void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return FunctionObjects::GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

inline void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return FunctionObjects::GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

inline void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetCombinerStageParameterfvNV(stage, pname, params);
}

inline void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return FunctionObjects::GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return FunctionObjects::GetCompressedTexImage(target, level, img);
}

inline void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return FunctionObjects::GetCompressedTexImageARB(target, level, img);
}

inline void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return FunctionObjects::GetCompressedTextureImageEXT(texture, target, lod, img);
}

inline void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return FunctionObjects::GetConvolutionFilter(target, format, type, image);
}

inline void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return FunctionObjects::GetConvolutionFilterEXT(target, format, type, image);
}

inline void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetConvolutionParameterfv(target, pname, params);
}

inline void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetConvolutionParameterfvEXT(target, pname, params);
}

inline void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetConvolutionParameteriv(target, pname, params);
}

inline void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetConvolutionParameterivEXT(target, pname, params);
}

inline void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetConvolutionParameterxvOES(target, pname, params);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return FunctionObjects::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return FunctionObjects::GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

inline GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return FunctionObjects::GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return FunctionObjects::GetDetailTexFuncSGIS(target, points);
}

inline void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return FunctionObjects::GetDoubleIndexedvEXT(target, index, data);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return FunctionObjects::GetDoublei_v(target, index, data);
}

inline void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return FunctionObjects::GetDoublei_vEXT(pname, index, params);
}

inline void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFenceivNV(fence, pname, params);
}

inline void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

inline void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFinalCombinerInputParameterivNV(variable, pname, params);
}

inline void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return FunctionObjects::GetFirstPerfQueryIdINTEL(queryId);
}

inline void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetFixedvOES(pname, params);
}

inline void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return FunctionObjects::GetFloatIndexedvEXT(target, index, data);
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return FunctionObjects::GetFloati_v(target, index, data);
}

inline void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return FunctionObjects::GetFloati_vEXT(pname, index, params);
}

inline void glGetFogFuncSGIS(GLfloat * points)
{
    return FunctionObjects::GetFogFuncSGIS(points);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetFragDataLocation(program, name);
}

inline GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetFragDataLocationEXT(program, name);
}

inline void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetFragmentLightfvSGIX(light, pname, params);
}

inline void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFragmentLightivSGIX(light, pname, params);
}

inline void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetFragmentMaterialfvSGIX(face, pname, params);
}

inline void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFragmentMaterialivSGIX(face, pname, params);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFramebufferParameteriv(target, pname, params);
}

inline void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return FunctionObjects::GetFramebufferParameterivEXT(framebuffer, pname, params);
}

inline GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::GetGraphicsResetStatusARB());
}

inline GLhandleARB glGetHandleARB(GLenum pname)
{
    return FunctionObjects::GetHandleARB(pname);
}

inline void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return FunctionObjects::GetHistogram(target, reset, format, type, values);
}

inline void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return FunctionObjects::GetHistogramEXT(target, reset, format, type, values);
}

inline void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetHistogramParameterfv(target, pname, params);
}

inline void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetHistogramParameterfvEXT(target, pname, params);
}

inline void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetHistogramParameteriv(target, pname, params);
}

inline void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetHistogramParameterivEXT(target, pname, params);
}

inline void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetHistogramParameterxvOES(target, pname, params);
}

inline GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return FunctionObjects::GetImageHandleARB(texture, level, layered, layer, format);
}

inline GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return FunctionObjects::GetImageHandleNV(texture, level, layered, layer, format);
}

inline void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetImageTransformParameterfvHP(target, pname, params);
}

inline void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetImageTransformParameterivHP(target, pname, params);
}

inline void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return FunctionObjects::GetInfoLogARB(obj, maxLength, length, infoLog);
}

inline GLint glGetInstrumentsSGIX()
{
    return FunctionObjects::GetInstrumentsSGIX();
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return FunctionObjects::GetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return FunctionObjects::GetInteger64v(pname, data);
}

inline void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return FunctionObjects::GetIntegerIndexedvEXT(target, index, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return FunctionObjects::GetIntegeri_v(target, index, data);
}

inline void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return FunctionObjects::GetIntegerui64i_vNV(value, index, result);
}

inline void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return FunctionObjects::GetIntegerui64vNV(value, result);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return FunctionObjects::GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return FunctionObjects::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return FunctionObjects::GetInvariantBooleanvEXT(id, value, data);
}

inline void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return FunctionObjects::GetInvariantFloatvEXT(id, value, data);
}

inline void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return FunctionObjects::GetInvariantIntegervEXT(id, value, data);
}

inline void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetLightxOES(light, pname, params);
}

inline void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetListParameterfvSGIX(list, pname, params);
}

inline void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return FunctionObjects::GetListParameterivSGIX(list, pname, params);
}

inline void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return FunctionObjects::GetLocalConstantBooleanvEXT(id, value, data);
}

inline void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return FunctionObjects::GetLocalConstantFloatvEXT(id, value, data);
}

inline void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return FunctionObjects::GetLocalConstantIntegervEXT(id, value, data);
}

inline void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMapAttribParameterfvNV(target, index, pname, params);
}

inline void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMapAttribParameterivNV(target, index, pname, params);
}

inline void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return FunctionObjects::GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

inline void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMapParameterfvNV(target, pname, params);
}

inline void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMapParameterivNV(target, pname, params);
}

inline void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return FunctionObjects::GetMapxvOES(target, query, v);
}

inline void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return FunctionObjects::GetMaterialxOES(face, pname, param);
}

inline void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return FunctionObjects::GetMinmax(target, reset, format, type, values);
}

inline void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return FunctionObjects::GetMinmaxEXT(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMinmaxParameterfv(target, pname, params);
}

inline void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMinmaxParameterfvEXT(target, pname, params);
}

inline void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMinmaxParameteriv(target, pname, params);
}

inline void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMinmaxParameterivEXT(target, pname, params);
}

inline void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return FunctionObjects::GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

inline void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return FunctionObjects::GetMultisamplefv(pname, index, val);
}

inline void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return FunctionObjects::GetMultisamplefvNV(pname, index, val);
}

inline void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedBufferParameterivEXT(buffer, pname, params);
}

inline void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return FunctionObjects::GetNamedBufferParameterui64vNV(buffer, pname, params);
}

inline void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return FunctionObjects::GetNamedBufferPointervEXT(buffer, pname, params);
}

inline void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return FunctionObjects::GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

inline void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

inline void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return FunctionObjects::GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return FunctionObjects::GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return FunctionObjects::GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return FunctionObjects::GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

inline void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return FunctionObjects::GetNamedProgramStringEXT(program, target, pname, string);
}

inline void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedProgramivEXT(program, target, pname, params);
}

inline void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

inline void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return FunctionObjects::GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

inline void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return FunctionObjects::GetNamedStringivARB(namelen, name, pname, params);
}

inline void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return FunctionObjects::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

inline void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetObjectBufferfvATI(buffer, pname, params);
}

inline void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return FunctionObjects::GetObjectBufferivATI(buffer, pname, params);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return FunctionObjects::GetObjectLabel(identifier, name, bufSize, length, label);
}

inline void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return FunctionObjects::GetObjectLabelEXT(type, object, bufSize, length, label);
}

inline void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetObjectParameterfvARB(obj, pname, params);
}

inline void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return FunctionObjects::GetObjectParameterivAPPLE(objectType, name, pname, params);
}

inline void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return FunctionObjects::GetObjectParameterivARB(obj, pname, params);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return FunctionObjects::GetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return FunctionObjects::GetOcclusionQueryivNV(id, pname, params);
}

inline void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetOcclusionQueryuivNV(id, pname, params);
}

inline void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return FunctionObjects::GetPathColorGenfvNV(color, pname, value);
}

inline void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return FunctionObjects::GetPathColorGenivNV(color, pname, value);
}

inline void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return FunctionObjects::GetPathCommandsNV(path, commands);
}

inline void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return FunctionObjects::GetPathCoordsNV(path, coords);
}

inline void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return FunctionObjects::GetPathDashArrayNV(path, dashArray);
}

inline GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return FunctionObjects::GetPathLengthNV(path, startSegment, numSegments);
}

inline void glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return FunctionObjects::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

inline void glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return FunctionObjects::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

inline void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return FunctionObjects::GetPathParameterfvNV(path, pname, value);
}

inline void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return FunctionObjects::GetPathParameterivNV(path, pname, value);
}

inline void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return FunctionObjects::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

inline void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return FunctionObjects::GetPathTexGenfvNV(texCoordSet, pname, value);
}

inline void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return FunctionObjects::GetPathTexGenivNV(texCoordSet, pname, value);
}

inline void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return FunctionObjects::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

inline void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return FunctionObjects::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

inline void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return FunctionObjects::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

inline void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return FunctionObjects::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

inline void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return FunctionObjects::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

inline void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return FunctionObjects::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

inline void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return FunctionObjects::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

inline void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return FunctionObjects::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

inline void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return FunctionObjects::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

inline void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return FunctionObjects::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

inline void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return FunctionObjects::GetPixelMapxv(map, size, values);
}

inline void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetPixelTexGenParameterfvSGIS(pname, params);
}

inline void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return FunctionObjects::GetPixelTexGenParameterivSGIS(pname, params);
}

inline void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetPixelTransformParameterfvEXT(target, pname, params);
}

inline void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetPixelTransformParameterivEXT(target, pname, params);
}

inline void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return FunctionObjects::GetPointerIndexedvEXT(target, index, data);
}

inline void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return FunctionObjects::GetPointeri_vEXT(pname, index, params);
}

inline void glGetPointervEXT(GLenum pname, void ** params)
{
    return FunctionObjects::GetPointervEXT(pname, params);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return FunctionObjects::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return FunctionObjects::GetProgramEnvParameterIivNV(target, index, params);
}

inline void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return FunctionObjects::GetProgramEnvParameterIuivNV(target, index, params);
}

inline void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return FunctionObjects::GetProgramEnvParameterdvARB(target, index, params);
}

inline void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return FunctionObjects::GetProgramEnvParameterfvARB(target, index, params);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return FunctionObjects::GetProgramInfoLog(program, bufSize, length, infoLog);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return FunctionObjects::GetProgramInterfaceiv(program, programInterface, pname, params);
}

inline void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return FunctionObjects::GetProgramLocalParameterIivNV(target, index, params);
}

inline void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return FunctionObjects::GetProgramLocalParameterIuivNV(target, index, params);
}

inline void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return FunctionObjects::GetProgramLocalParameterdvARB(target, index, params);
}

inline void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return FunctionObjects::GetProgramLocalParameterfvARB(target, index, params);
}

inline void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return FunctionObjects::GetProgramNamedParameterdvNV(id, len, name, params);
}

inline void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return FunctionObjects::GetProgramNamedParameterfvNV(id, len, name, params);
}

inline void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetProgramParameterdvNV(target, index, pname, params);
}

inline void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetProgramParameterfvNV(target, index, pname, params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return FunctionObjects::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return FunctionObjects::GetProgramPipelineiv(pipeline, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return FunctionObjects::GetProgramResourceIndex(program, programInterface, name);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return FunctionObjects::GetProgramResourceLocation(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return FunctionObjects::GetProgramResourceLocationIndex(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return FunctionObjects::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return FunctionObjects::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return FunctionObjects::GetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return FunctionObjects::GetProgramStringARB(target, pname, string);
}

inline void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return FunctionObjects::GetProgramStringNV(id, pname, program);
}

inline void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return FunctionObjects::GetProgramSubroutineParameteruivNV(target, index, param);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return FunctionObjects::GetProgramiv(program, pname, params);
}

inline void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetProgramivARB(target, pname, params);
}

inline void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return FunctionObjects::GetProgramivNV(id, pname, params);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return FunctionObjects::GetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return FunctionObjects::GetQueryObjecti64vEXT(id, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return FunctionObjects::GetQueryObjectiv(id, pname, params);
}

inline void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return FunctionObjects::GetQueryObjectivARB(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return FunctionObjects::GetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return FunctionObjects::GetQueryObjectui64vEXT(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetQueryObjectuiv(id, pname, params);
}

inline void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetQueryObjectuivARB(id, pname, params);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetQueryiv(target, pname, params);
}

inline void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetQueryivARB(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetRenderbufferParameteriv(target, pname, params);
}

inline void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetRenderbufferParameterivEXT(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return FunctionObjects::GetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return FunctionObjects::GetSamplerParameteriv(sampler, pname, params);
}

inline void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return FunctionObjects::GetSeparableFilter(target, format, type, row, column, span);
}

inline void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return FunctionObjects::GetSeparableFilterEXT(target, format, type, row, column, span);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return FunctionObjects::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return FunctionObjects::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return FunctionObjects::GetShaderSource(shader, bufSize, length, source);
}

inline void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return FunctionObjects::GetShaderSourceARB(obj, maxLength, length, source);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return FunctionObjects::GetShaderiv(shader, pname, params);
}

inline void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return FunctionObjects::GetSharpenTexFuncSGIS(target, points);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return FunctionObjects::GetStringi(name, index);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return FunctionObjects::GetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return FunctionObjects::GetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return FunctionObjects::GetSynciv(sync, pname, bufSize, length, values);
}

inline void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return FunctionObjects::GetTexBumpParameterfvATI(pname, param);
}

inline void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return FunctionObjects::GetTexBumpParameterivATI(pname, param);
}

inline void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetTexEnvxvOES(target, pname, params);
}

inline void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return FunctionObjects::GetTexFilterFuncSGIS(target, filter, weights);
}

inline void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetTexGenxvOES(coord, pname, params);
}

inline void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetTexLevelParameterxvOES(target, level, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexParameterIivEXT(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetTexParameterIuivEXT(target, pname, params);
}

inline void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return FunctionObjects::GetTexParameterPointervAPPLE(target, pname, params);
}

inline void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return FunctionObjects::GetTexParameterxvOES(target, pname, params);
}

inline GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return FunctionObjects::GetTextureHandleARB(texture);
}

inline GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return FunctionObjects::GetTextureHandleNV(texture);
}

inline void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return FunctionObjects::GetTextureImageEXT(texture, target, level, format, type, pixels);
}

inline void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

inline void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

inline void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTextureParameterIivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTextureParameterfvEXT(texture, target, pname, params);
}

inline void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTextureParameterivEXT(texture, target, pname, params);
}

inline GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return FunctionObjects::GetTextureSamplerHandleARB(texture, sampler);
}

inline GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return FunctionObjects::GetTextureSamplerHandleNV(texture, sampler);
}

inline void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTrackMatrixivNV(target, address, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return FunctionObjects::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return FunctionObjects::GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return FunctionObjects::GetTransformFeedbackVaryingNV(program, index, location);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return FunctionObjects::GetUniformBlockIndex(program, uniformBlockName);
}

inline GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return FunctionObjects::GetUniformBufferSizeEXT(program, location);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return FunctionObjects::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetUniformLocation(program, name);
}

inline GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return FunctionObjects::GetUniformLocationARB(programObj, name);
}

inline GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return FunctionObjects::GetUniformOffsetEXT(program, location);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return FunctionObjects::GetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return FunctionObjects::GetUniformdv(program, location, params);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return FunctionObjects::GetUniformfv(program, location, params);
}

inline void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return FunctionObjects::GetUniformfvARB(programObj, location, params);
}

inline void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return FunctionObjects::GetUniformi64vNV(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return FunctionObjects::GetUniformiv(program, location, params);
}

inline void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return FunctionObjects::GetUniformivARB(programObj, location, params);
}

inline void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return FunctionObjects::GetUniformui64vNV(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return FunctionObjects::GetUniformuiv(program, location, params);
}

inline void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return FunctionObjects::GetUniformuivEXT(program, location, params);
}

inline void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVariantArrayObjectfvATI(id, pname, params);
}

inline void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVariantArrayObjectivATI(id, pname, params);
}

inline void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return FunctionObjects::GetVariantBooleanvEXT(id, value, data);
}

inline void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return FunctionObjects::GetVariantFloatvEXT(id, value, data);
}

inline void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return FunctionObjects::GetVariantIntegervEXT(id, value, data);
}

inline void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return FunctionObjects::GetVariantPointervEXT(id, value, data);
}

inline GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return FunctionObjects::GetVaryingLocationNV(program, name);
}

inline void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return FunctionObjects::GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return FunctionObjects::GetVertexArrayIntegervEXT(vaobj, pname, param);
}

inline void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return FunctionObjects::GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return FunctionObjects::GetVertexArrayPointervEXT(vaobj, pname, param);
}

inline void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVertexAttribArrayObjectfvATI(index, pname, params);
}

inline void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribArrayObjectivATI(index, pname, params);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribIivEXT(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetVertexAttribIuivEXT(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVertexAttribLdvEXT(index, pname, params);
}

inline void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return FunctionObjects::GetVertexAttribLi64vNV(index, pname, params);
}

inline void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return FunctionObjects::GetVertexAttribLui64vARB(index, pname, params);
}

inline void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return FunctionObjects::GetVertexAttribLui64vNV(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return FunctionObjects::GetVertexAttribPointerv(index, pname, pointer);
}

inline void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return FunctionObjects::GetVertexAttribPointervARB(index, pname, pointer);
}

inline void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return FunctionObjects::GetVertexAttribPointervNV(index, pname, pointer);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVertexAttribdv(index, pname, params);
}

inline void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVertexAttribdvARB(index, pname, params);
}

inline void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVertexAttribdvNV(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVertexAttribfv(index, pname, params);
}

inline void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVertexAttribfvARB(index, pname, params);
}

inline void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVertexAttribfvNV(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribiv(index, pname, params);
}

inline void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribivARB(index, pname, params);
}

inline void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVertexAttribivNV(index, pname, params);
}

inline void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVideoCaptureivNV(video_capture_slot, pname, params);
}

inline void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return FunctionObjects::GetVideoi64vNV(video_slot, pname, params);
}

inline void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return FunctionObjects::GetVideoivNV(video_slot, pname, params);
}

inline void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return FunctionObjects::GetVideoui64vNV(video_slot, pname, params);
}

inline void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return FunctionObjects::GetVideouivNV(video_slot, pname, params);
}

inline void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return FunctionObjects::GetnColorTableARB(target, format, type, bufSize, table);
}

inline void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return FunctionObjects::GetnCompressedTexImageARB(target, lod, bufSize, img);
}

inline void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return FunctionObjects::GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

inline void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return FunctionObjects::GetnHistogramARB(target, reset, format, type, bufSize, values);
}

inline void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return FunctionObjects::GetnMapdvARB(target, query, bufSize, v);
}

inline void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return FunctionObjects::GetnMapfvARB(target, query, bufSize, v);
}

inline void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return FunctionObjects::GetnMapivARB(target, query, bufSize, v);
}

inline void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return FunctionObjects::GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

inline void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return FunctionObjects::GetnPixelMapfvARB(map, bufSize, values);
}

inline void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return FunctionObjects::GetnPixelMapuivARB(map, bufSize, values);
}

inline void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return FunctionObjects::GetnPixelMapusvARB(map, bufSize, values);
}

inline void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return FunctionObjects::GetnPolygonStippleARB(bufSize, pattern);
}

inline void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return FunctionObjects::GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return FunctionObjects::GetnTexImageARB(target, level, format, type, bufSize, img);
}

inline void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return FunctionObjects::GetnUniformdvARB(program, location, bufSize, params);
}

inline void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return FunctionObjects::GetnUniformfvARB(program, location, bufSize, params);
}

inline void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return FunctionObjects::GetnUniformivARB(program, location, bufSize, params);
}

inline void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return FunctionObjects::GetnUniformuivARB(program, location, bufSize, params);
}

inline void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return FunctionObjects::GlobalAlphaFactorbSUN(factor);
}

inline void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return FunctionObjects::GlobalAlphaFactordSUN(factor);
}

inline void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return FunctionObjects::GlobalAlphaFactorfSUN(factor);
}

inline void glGlobalAlphaFactoriSUN(GLint factor)
{
    return FunctionObjects::GlobalAlphaFactoriSUN(factor);
}

inline void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return FunctionObjects::GlobalAlphaFactorsSUN(factor);
}

inline void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return FunctionObjects::GlobalAlphaFactorubSUN(factor);
}

inline void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return FunctionObjects::GlobalAlphaFactoruiSUN(factor);
}

inline void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return FunctionObjects::GlobalAlphaFactorusSUN(factor);
}

inline void glHintPGI(GLenum target, GLint mode)
{
    return FunctionObjects::HintPGI(target, mode);
}

inline void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return FunctionObjects::Histogram(target, width, internalformat, sink);
}

inline void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return FunctionObjects::HistogramEXT(target, width, internalformat, sink);
}

inline void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return FunctionObjects::IglooInterfaceSGIX(pname, params);
}

inline void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::ImageTransformParameterfHP(target, pname, param);
}

inline void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ImageTransformParameterfvHP(target, pname, params);
}

inline void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::ImageTransformParameteriHP(target, pname, param);
}

inline void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::ImageTransformParameterivHP(target, pname, params);
}

inline GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
    return FunctionObjects::ImportSyncEXT(external_sync_type, external_sync, flags);
}

inline void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return FunctionObjects::IndexFormatNV(type, stride);
}

inline void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return FunctionObjects::IndexFuncEXT(func, ref);
}

inline void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return FunctionObjects::IndexMaterialEXT(face, mode);
}

inline void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return FunctionObjects::IndexPointerEXT(type, stride, count, pointer);
}

inline void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glIndexxOES(GLfixed component)
{
    return FunctionObjects::IndexxOES(component);
}

inline void glIndexxvOES(const GLfixed * component)
{
    return FunctionObjects::IndexxvOES(component);
}

inline void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return FunctionObjects::InsertComponentEXT(res, src, num);
}

inline void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return FunctionObjects::InsertEventMarkerEXT(length, marker);
}

inline void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return FunctionObjects::InstrumentsBufferSGIX(size, buffer);
}

inline void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return FunctionObjects::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

inline void glInvalidateBufferData(GLuint buffer)
{
    return FunctionObjects::InvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return FunctionObjects::InvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return FunctionObjects::InvalidateFramebuffer(target, numAttachments, attachments);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
    return FunctionObjects::InvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return FunctionObjects::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return FunctionObjects::IsAsyncMarkerSGIX(marker);
}

inline GLboolean glIsBuffer(GLuint buffer)
{
    return FunctionObjects::IsBuffer(buffer);
}

inline GLboolean glIsBufferARB(GLuint buffer)
{
    return FunctionObjects::IsBufferARB(buffer);
}

inline GLboolean glIsBufferResidentNV(GLenum target)
{
    return FunctionObjects::IsBufferResidentNV(target);
}

inline GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return FunctionObjects::IsEnabledIndexedEXT(target, index);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return FunctionObjects::IsEnabledi(target, index);
}

inline GLboolean glIsFenceAPPLE(GLuint fence)
{
    return FunctionObjects::IsFenceAPPLE(fence);
}

inline GLboolean glIsFenceNV(GLuint fence)
{
    return FunctionObjects::IsFenceNV(fence);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return FunctionObjects::IsFramebuffer(framebuffer);
}

inline GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return FunctionObjects::IsFramebufferEXT(framebuffer);
}

inline GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return FunctionObjects::IsImageHandleResidentARB(handle);
}

inline GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return FunctionObjects::IsImageHandleResidentNV(handle);
}

inline GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return FunctionObjects::IsNameAMD(identifier, name);
}

inline GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return FunctionObjects::IsNamedBufferResidentNV(buffer);
}

inline GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return FunctionObjects::IsNamedStringARB(namelen, name);
}

inline GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return FunctionObjects::IsObjectBufferATI(buffer);
}

inline GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return FunctionObjects::IsOcclusionQueryNV(id);
}

inline GLboolean glIsPathNV(GLuint path)
{
    return FunctionObjects::IsPathNV(path);
}

inline GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return FunctionObjects::IsPointInFillPathNV(path, mask, x, y);
}

inline GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return FunctionObjects::IsPointInStrokePathNV(path, x, y);
}

inline GLboolean glIsProgram(GLuint program)
{
    return FunctionObjects::IsProgram(program);
}

inline GLboolean glIsProgramARB(GLuint program)
{
    return FunctionObjects::IsProgramARB(program);
}

inline GLboolean glIsProgramNV(GLuint id)
{
    return FunctionObjects::IsProgramNV(id);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return FunctionObjects::IsProgramPipeline(pipeline);
}

inline GLboolean glIsQuery(GLuint id)
{
    return FunctionObjects::IsQuery(id);
}

inline GLboolean glIsQueryARB(GLuint id)
{
    return FunctionObjects::IsQueryARB(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return FunctionObjects::IsRenderbuffer(renderbuffer);
}

inline GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return FunctionObjects::IsRenderbufferEXT(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
    return FunctionObjects::IsSampler(sampler);
}

inline GLboolean glIsShader(GLuint shader)
{
    return FunctionObjects::IsShader(shader);
}

inline GLboolean glIsSync(GLsync sync)
{
    return FunctionObjects::IsSync(sync);
}

inline GLboolean glIsTextureEXT(GLuint texture)
{
    return FunctionObjects::IsTextureEXT(texture);
}

inline GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return FunctionObjects::IsTextureHandleResidentARB(handle);
}

inline GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return FunctionObjects::IsTextureHandleResidentNV(handle);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return FunctionObjects::IsTransformFeedback(id);
}

inline GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return FunctionObjects::IsTransformFeedbackNV(id);
}

inline GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return FunctionObjects::IsVariantEnabledEXT(id, cap);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return FunctionObjects::IsVertexArray(array);
}

inline GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return FunctionObjects::IsVertexArrayAPPLE(array);
}

inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return FunctionObjects::IsVertexAttribEnabledAPPLE(index, pname);
}

inline void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return FunctionObjects::LabelObjectEXT(type, object, length, label);
}

inline void glLightEnviSGIX(GLenum pname, GLint param)
{
    return FunctionObjects::LightEnviSGIX(pname, param);
}

inline void glLightModelxOES(GLenum pname, GLfixed param)
{
    return FunctionObjects::LightModelxOES(pname, param);
}

inline void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return FunctionObjects::LightModelxvOES(pname, param);
}

inline void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return FunctionObjects::LightxOES(light, pname, param);
}

inline void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return FunctionObjects::LightxvOES(light, pname, params);
}

inline void glLineWidthxOES(GLfixed width)
{
    return FunctionObjects::LineWidthxOES(width);
}

inline void glLinkProgram(GLuint program)
{
    return FunctionObjects::LinkProgram(program);
}

inline void glLinkProgramARB(GLhandleARB programObj)
{
    return FunctionObjects::LinkProgramARB(programObj);
}

inline void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return FunctionObjects::ListParameterfSGIX(list, pname, param);
}

inline void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::ListParameterfvSGIX(list, pname, params);
}

inline void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return FunctionObjects::ListParameteriSGIX(list, pname, param);
}

inline void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return FunctionObjects::ListParameterivSGIX(list, pname, params);
}

inline void glLoadIdentityDeformationMapSGIX(GLbitfield mask)
{
    return FunctionObjects::LoadIdentityDeformationMapSGIX(mask);
}

inline void glLoadMatrixxOES(const GLfixed * m)
{
    return FunctionObjects::LoadMatrixxOES(m);
}

inline void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return FunctionObjects::LoadProgramNV(target, id, len, program);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
    return FunctionObjects::LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return FunctionObjects::LoadTransposeMatrixdARB(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
    return FunctionObjects::LoadTransposeMatrixf(m);
}

inline void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return FunctionObjects::LoadTransposeMatrixfARB(m);
}

inline void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return FunctionObjects::LoadTransposeMatrixxOES(m);
}

inline void glLockArraysEXT(GLint first, GLsizei count)
{
    return FunctionObjects::LockArraysEXT(first, count);
}

inline void glMakeBufferNonResidentNV(GLenum target)
{
    return FunctionObjects::MakeBufferNonResidentNV(target);
}

inline void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return FunctionObjects::MakeBufferResidentNV(target, access);
}

inline void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return FunctionObjects::MakeImageHandleNonResidentARB(handle);
}

inline void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return FunctionObjects::MakeImageHandleNonResidentNV(handle);
}

inline void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return FunctionObjects::MakeImageHandleResidentARB(handle, access);
}

inline void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return FunctionObjects::MakeImageHandleResidentNV(handle, access);
}

inline void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return FunctionObjects::MakeNamedBufferNonResidentNV(buffer);
}

inline void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return FunctionObjects::MakeNamedBufferResidentNV(buffer, access);
}

inline void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return FunctionObjects::MakeTextureHandleNonResidentARB(handle);
}

inline void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return FunctionObjects::MakeTextureHandleNonResidentNV(handle);
}

inline void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return FunctionObjects::MakeTextureHandleResidentARB(handle);
}

inline void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return FunctionObjects::MakeTextureHandleResidentNV(handle);
}

inline void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return FunctionObjects::Map1xOES(target, u1, u2, stride, order, points);
}

inline void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return FunctionObjects::Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBuffer(GLenum target, GLenum access)
{
    return FunctionObjects::MapBuffer(target, access);
}

inline void * glMapBufferARB(GLenum target, GLenum access)
{
    return FunctionObjects::MapBufferARB(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return FunctionObjects::MapBufferRange(target, offset, length, access);
}

inline void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return FunctionObjects::MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

inline void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return FunctionObjects::MapGrid1xOES(n, u1, u2);
}

inline void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return FunctionObjects::MapGrid2xOES(n, u1, u2, v1, v2);
}

inline void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return FunctionObjects::MapNamedBufferEXT(buffer, access);
}

inline void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
    return FunctionObjects::MapNamedBufferRangeEXT(buffer, offset, length, access);
}

inline void * glMapObjectBufferATI(GLuint buffer)
{
    return FunctionObjects::MapObjectBufferATI(buffer);
}

inline void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::MapParameterfvNV(target, pname, params);
}

inline void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::MapParameterivNV(target, pname, params);
}

inline void * glMapTexture2DINTEL(GLuint texture, GLint level, GLbitfield access, GLint * stride, GLenum * layout)
{
    return FunctionObjects::MapTexture2DINTEL(texture, level, access, stride, layout);
}

inline void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return FunctionObjects::MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return FunctionObjects::MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return FunctionObjects::MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return FunctionObjects::MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return FunctionObjects::MaterialxOES(face, pname, param);
}

inline void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return FunctionObjects::MaterialxvOES(face, pname, param);
}

inline void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return FunctionObjects::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::MatrixIndexPointerARB(size, type, stride, pointer);
}

inline void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return FunctionObjects::MatrixIndexubvARB(size, indices);
}

inline void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return FunctionObjects::MatrixIndexuivARB(size, indices);
}

inline void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return FunctionObjects::MatrixIndexusvARB(size, indices);
}

inline void glMatrixLoadIdentityEXT(GLenum mode)
{
    return FunctionObjects::MatrixLoadIdentityEXT(mode);
}

inline void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return FunctionObjects::MatrixLoadTransposedEXT(mode, m);
}

inline void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return FunctionObjects::MatrixLoadTransposefEXT(mode, m);
}

inline void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return FunctionObjects::MatrixLoaddEXT(mode, m);
}

inline void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return FunctionObjects::MatrixLoadfEXT(mode, m);
}

inline void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return FunctionObjects::MatrixMultTransposedEXT(mode, m);
}

inline void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return FunctionObjects::MatrixMultTransposefEXT(mode, m);
}

inline void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return FunctionObjects::MatrixMultdEXT(mode, m);
}

inline void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return FunctionObjects::MatrixMultfEXT(mode, m);
}

inline void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return FunctionObjects::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixPopEXT(GLenum mode)
{
    return FunctionObjects::MatrixPopEXT(mode);
}

inline void glMatrixPushEXT(GLenum mode)
{
    return FunctionObjects::MatrixPushEXT(mode);
}

inline void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::MatrixRotatedEXT(mode, angle, x, y, z);
}

inline void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::MatrixRotatefEXT(mode, angle, x, y, z);
}

inline void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::MatrixScaledEXT(mode, x, y, z);
}

inline void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::MatrixScalefEXT(mode, x, y, z);
}

inline void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::MatrixTranslatedEXT(mode, x, y, z);
}

inline void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::MatrixTranslatefEXT(mode, x, y, z);
}

inline void glMemoryBarrier(GLbitfield barriers)
{
    return FunctionObjects::MemoryBarrier(barriers);
}

inline void glMemoryBarrierEXT(GLbitfield barriers)
{
    return FunctionObjects::MemoryBarrierEXT(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
    return FunctionObjects::MinSampleShading(value);
}

inline void glMinSampleShadingARB(GLfloat value)
{
    return FunctionObjects::MinSampleShadingARB(value);
}

inline void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return FunctionObjects::Minmax(target, internalformat, sink);
}

inline void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return FunctionObjects::MinmaxEXT(target, internalformat, sink);
}

inline void glMultMatrixxOES(const GLfixed * m)
{
    return FunctionObjects::MultMatrixxOES(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
    return FunctionObjects::MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return FunctionObjects::MultTransposeMatrixdARB(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
    return FunctionObjects::MultTransposeMatrixf(m);
}

inline void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return FunctionObjects::MultTransposeMatrixfARB(m);
}

inline void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return FunctionObjects::MultTransposeMatrixxOES(m);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return FunctionObjects::MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return FunctionObjects::MultiDrawArraysEXT(mode, first, count, primcount);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

inline void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

inline void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return FunctionObjects::MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return FunctionObjects::MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return FunctionObjects::MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return FunctionObjects::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return FunctionObjects::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

inline void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

inline void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return FunctionObjects::MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return FunctionObjects::MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return FunctionObjects::MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

inline void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return FunctionObjects::MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

inline void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return FunctionObjects::MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

inline void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return FunctionObjects::MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

inline void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return FunctionObjects::MultiTexCoord1bOES(texture, s);
}

inline void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return FunctionObjects::MultiTexCoord1bvOES(texture, coords);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return FunctionObjects::MultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return FunctionObjects::MultiTexCoord1dARB(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord1dvARB(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return FunctionObjects::MultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return FunctionObjects::MultiTexCoord1fARB(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord1fvARB(target, v);
}

inline void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return FunctionObjects::MultiTexCoord1hNV(target, s);
}

inline void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return FunctionObjects::MultiTexCoord1hvNV(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
    return FunctionObjects::MultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return FunctionObjects::MultiTexCoord1iARB(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord1ivARB(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return FunctionObjects::MultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return FunctionObjects::MultiTexCoord1sARB(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord1svARB(target, v);
}

inline void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return FunctionObjects::MultiTexCoord1xOES(texture, s);
}

inline void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return FunctionObjects::MultiTexCoord1xvOES(texture, coords);
}

inline void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return FunctionObjects::MultiTexCoord2bOES(texture, s, t);
}

inline void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return FunctionObjects::MultiTexCoord2bvOES(texture, coords);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return FunctionObjects::MultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return FunctionObjects::MultiTexCoord2dARB(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord2dvARB(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return FunctionObjects::MultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return FunctionObjects::MultiTexCoord2fARB(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord2fvARB(target, v);
}

inline void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return FunctionObjects::MultiTexCoord2hNV(target, s, t);
}

inline void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return FunctionObjects::MultiTexCoord2hvNV(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return FunctionObjects::MultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return FunctionObjects::MultiTexCoord2iARB(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord2ivARB(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return FunctionObjects::MultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return FunctionObjects::MultiTexCoord2sARB(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord2svARB(target, v);
}

inline void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return FunctionObjects::MultiTexCoord2xOES(texture, s, t);
}

inline void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return FunctionObjects::MultiTexCoord2xvOES(texture, coords);
}

inline void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return FunctionObjects::MultiTexCoord3bOES(texture, s, t, r);
}

inline void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return FunctionObjects::MultiTexCoord3bvOES(texture, coords);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return FunctionObjects::MultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return FunctionObjects::MultiTexCoord3dARB(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord3dvARB(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return FunctionObjects::MultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return FunctionObjects::MultiTexCoord3fARB(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord3fvARB(target, v);
}

inline void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return FunctionObjects::MultiTexCoord3hNV(target, s, t, r);
}

inline void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return FunctionObjects::MultiTexCoord3hvNV(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return FunctionObjects::MultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return FunctionObjects::MultiTexCoord3iARB(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord3ivARB(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return FunctionObjects::MultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return FunctionObjects::MultiTexCoord3sARB(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord3svARB(target, v);
}

inline void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return FunctionObjects::MultiTexCoord3xOES(texture, s, t, r);
}

inline void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return FunctionObjects::MultiTexCoord3xvOES(texture, coords);
}

inline void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return FunctionObjects::MultiTexCoord4bOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return FunctionObjects::MultiTexCoord4bvOES(texture, coords);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return FunctionObjects::MultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return FunctionObjects::MultiTexCoord4dARB(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord4dvARB(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return FunctionObjects::MultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return FunctionObjects::MultiTexCoord4fARB(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord4fvARB(target, v);
}

inline void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return FunctionObjects::MultiTexCoord4hNV(target, s, t, r, q);
}

inline void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return FunctionObjects::MultiTexCoord4hvNV(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return FunctionObjects::MultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return FunctionObjects::MultiTexCoord4iARB(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord4ivARB(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return FunctionObjects::MultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return FunctionObjects::MultiTexCoord4sARB(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord4sv(target, v);
}

inline void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord4svARB(target, v);
}

inline void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return FunctionObjects::MultiTexCoord4xOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return FunctionObjects::MultiTexCoord4xvOES(texture, coords);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return FunctionObjects::MultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return FunctionObjects::MultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return FunctionObjects::MultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return FunctionObjects::MultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return FunctionObjects::MultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return FunctionObjects::MultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return FunctionObjects::MultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return FunctionObjects::MultiTexCoordP4uiv(texture, type, coords);
}

inline void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

inline void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::MultiTexEnvfEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::MultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::MultiTexEnviEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::MultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return FunctionObjects::MultiTexGendEXT(texunit, coord, pname, param);
}

inline void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return FunctionObjects::MultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return FunctionObjects::MultiTexGenfEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::MultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return FunctionObjects::MultiTexGeniEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return FunctionObjects::MultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

inline void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::MultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return FunctionObjects::MultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::MultiTexParameterfEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::MultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::MultiTexParameteriEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::MultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return FunctionObjects::MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

inline void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

inline void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return FunctionObjects::NamedBufferDataEXT(buffer, size, data, usage);
}

inline void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags)
{
    return FunctionObjects::NamedBufferStorageEXT(buffer, size, data, flags);
}

inline void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return FunctionObjects::NamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return FunctionObjects::NamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return FunctionObjects::NamedFramebufferParameteriEXT(framebuffer, pname, param);
}

inline void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return FunctionObjects::NamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::NamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return FunctionObjects::NamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return FunctionObjects::NamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

inline void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return FunctionObjects::NamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return FunctionObjects::NamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

inline void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return FunctionObjects::NamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

inline void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::NamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return FunctionObjects::NamedProgramLocalParameter4dvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::NamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return FunctionObjects::NamedProgramLocalParameter4fvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::NamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return FunctionObjects::NamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return FunctionObjects::NamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return FunctionObjects::NamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return FunctionObjects::NamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return FunctionObjects::NamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return FunctionObjects::NamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

inline void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return FunctionObjects::NamedProgramStringEXT(program, target, format, len, string);
}

inline void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::NamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::NamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::NamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

inline void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return FunctionObjects::NamedStringARB(type, namelen, name, stringlen, string);
}

inline GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return FunctionObjects::NewObjectBufferATI(size, pointer, usage);
}

inline void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Normal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

inline void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::Normal3fVertex3fvSUN(n, v);
}

inline void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return FunctionObjects::Normal3hNV(nx, ny, nz);
}

inline void glNormal3hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Normal3hvNV(v);
}

inline void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return FunctionObjects::Normal3xOES(nx, ny, nz);
}

inline void glNormal3xvOES(const GLfixed * coords)
{
    return FunctionObjects::Normal3xvOES(coords);
}

inline void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return FunctionObjects::NormalFormatNV(type, stride);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return FunctionObjects::NormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return FunctionObjects::NormalP3uiv(type, coords);
}

inline void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return FunctionObjects::NormalPointerEXT(type, stride, count, pointer);
}

inline void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::NormalPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return FunctionObjects::NormalPointervINTEL(type, pointer);
}

inline void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return FunctionObjects::NormalStream3bATI(stream, nx, ny, nz);
}

inline void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return FunctionObjects::NormalStream3bvATI(stream, coords);
}

inline void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return FunctionObjects::NormalStream3dATI(stream, nx, ny, nz);
}

inline void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return FunctionObjects::NormalStream3dvATI(stream, coords);
}

inline void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return FunctionObjects::NormalStream3fATI(stream, nx, ny, nz);
}

inline void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return FunctionObjects::NormalStream3fvATI(stream, coords);
}

inline void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return FunctionObjects::NormalStream3iATI(stream, nx, ny, nz);
}

inline void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return FunctionObjects::NormalStream3ivATI(stream, coords);
}

inline void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return FunctionObjects::NormalStream3sATI(stream, nx, ny, nz);
}

inline void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return FunctionObjects::NormalStream3svATI(stream, coords);
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return FunctionObjects::ObjectLabel(identifier, name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return FunctionObjects::ObjectPtrLabel(ptr, length, label);
}

inline GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::ObjectPurgeableAPPLE(objectType, name, option));
}

inline GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::ObjectUnpurgeableAPPLE(objectType, name, option));
}

inline void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return FunctionObjects::OrthofOES(l, r, b, t, n, f);
}

inline void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return FunctionObjects::OrthoxOES(l, r, b, t, n, f);
}

inline void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return FunctionObjects::PNTrianglesfATI(pname, param);
}

inline void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return FunctionObjects::PNTrianglesiATI(pname, param);
}

inline void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return FunctionObjects::PassTexCoordATI(dst, coord, swizzle);
}

inline void glPassThroughxOES(GLfixed token)
{
    return FunctionObjects::PassThroughxOES(token);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return FunctionObjects::PatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return FunctionObjects::PatchParameteri(pname, value);
}

inline void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return FunctionObjects::PathColorGenNV(color, genMode, colorFormat, coeffs);
}

inline void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return FunctionObjects::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return FunctionObjects::PathCoordsNV(path, numCoords, coordType, coords);
}

inline void glPathCoverDepthFuncNV(GLenum func)
{
    return FunctionObjects::PathCoverDepthFuncNV(func);
}

inline void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return FunctionObjects::PathDashArrayNV(path, dashCount, dashArray);
}

inline void glPathFogGenNV(GLenum genMode)
{
    return FunctionObjects::PathFogGenNV(genMode);
}

inline void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return FunctionObjects::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return FunctionObjects::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return FunctionObjects::PathParameterfNV(path, pname, value);
}

inline void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return FunctionObjects::PathParameterfvNV(path, pname, value);
}

inline void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return FunctionObjects::PathParameteriNV(path, pname, value);
}

inline void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return FunctionObjects::PathParameterivNV(path, pname, value);
}

inline void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return FunctionObjects::PathStencilDepthOffsetNV(factor, units);
}

inline void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return FunctionObjects::PathStencilFuncNV(func, ref, mask);
}

inline void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return FunctionObjects::PathStringNV(path, format, length, pathString);
}

inline void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return FunctionObjects::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return FunctionObjects::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

inline void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return FunctionObjects::PathTexGenNV(texCoordSet, genMode, components, coeffs);
}

inline void glPauseTransformFeedback()
{
    return FunctionObjects::PauseTransformFeedback();
}

inline void glPauseTransformFeedbackNV()
{
    return FunctionObjects::PauseTransformFeedbackNV();
}

inline void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return FunctionObjects::PixelDataRangeNV(target, length, pointer);
}

inline void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return FunctionObjects::PixelMapx(map, size, values);
}

inline void glPixelStorex(GLenum pname, GLfixed param)
{
    return FunctionObjects::PixelStorex(pname, param);
}

inline void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return FunctionObjects::PixelTexGenParameterfSGIS(pname, param);
}

inline void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PixelTexGenParameterfvSGIS(pname, params);
}

inline void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return FunctionObjects::PixelTexGenParameteriSGIS(pname, param);
}

inline void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return FunctionObjects::PixelTexGenParameterivSGIS(pname, params);
}

inline void glPixelTexGenSGIX(GLenum mode)
{
    return FunctionObjects::PixelTexGenSGIX(mode);
}

inline void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return FunctionObjects::PixelTransferxOES(pname, param);
}

inline void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::PixelTransformParameterfEXT(target, pname, param);
}

inline void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PixelTransformParameterfvEXT(target, pname, params);
}

inline void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::PixelTransformParameteriEXT(target, pname, param);
}

inline void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::PixelTransformParameterivEXT(target, pname, params);
}

inline void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return FunctionObjects::PixelZoomxOES(xfactor, yfactor);
}

inline GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return FunctionObjects::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return FunctionObjects::PointParameterf(pname, param);
}

inline void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return FunctionObjects::PointParameterfARB(pname, param);
}

inline void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return FunctionObjects::PointParameterfEXT(pname, param);
}

inline void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return FunctionObjects::PointParameterfSGIS(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PointParameterfv(pname, params);
}

inline void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PointParameterfvARB(pname, params);
}

inline void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PointParameterfvEXT(pname, params);
}

inline void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PointParameterfvSGIS(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return FunctionObjects::PointParameteri(pname, param);
}

inline void glPointParameteriNV(GLenum pname, GLint param)
{
    return FunctionObjects::PointParameteriNV(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return FunctionObjects::PointParameteriv(pname, params);
}

inline void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return FunctionObjects::PointParameterivNV(pname, params);
}

inline void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return FunctionObjects::PointParameterxvOES(pname, params);
}

inline void glPointSizexOES(GLfixed size)
{
    return FunctionObjects::PointSizexOES(size);
}

inline GLint glPollAsyncSGIX(GLuint * markerp)
{
    return FunctionObjects::PollAsyncSGIX(markerp);
}

inline GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return FunctionObjects::PollInstrumentsSGIX(marker_p);
}

inline void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return FunctionObjects::PolygonOffsetEXT(factor, bias);
}

inline void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return FunctionObjects::PolygonOffsetxOES(factor, units);
}

inline void glPopDebugGroup()
{
    return FunctionObjects::PopDebugGroup();
}

inline void glPopGroupMarkerEXT()
{
    return FunctionObjects::PopGroupMarkerEXT();
}

inline void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return FunctionObjects::PresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

inline void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return FunctionObjects::PresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

inline void glPrimitiveRestartIndex(GLuint index)
{
    return FunctionObjects::PrimitiveRestartIndex(index);
}

inline void glPrimitiveRestartIndexNV(GLuint index)
{
    return FunctionObjects::PrimitiveRestartIndexNV(index);
}

inline void glPrimitiveRestartNV()
{
    return FunctionObjects::PrimitiveRestartNV();
}

inline void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return FunctionObjects::PrioritizeTexturesEXT(n, textures, priorities);
}

inline void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return FunctionObjects::PrioritizeTexturesxOES(n, textures, priorities);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return FunctionObjects::ProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return FunctionObjects::ProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return FunctionObjects::ProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return FunctionObjects::ProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return FunctionObjects::ProgramEnvParameter4dvARB(target, index, params);
}

inline void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return FunctionObjects::ProgramEnvParameter4fvARB(target, index, params);
}

inline void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return FunctionObjects::ProgramEnvParameterI4ivNV(target, index, params);
}

inline void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return FunctionObjects::ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return FunctionObjects::ProgramEnvParameterI4uivNV(target, index, params);
}

inline void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return FunctionObjects::ProgramEnvParameters4fvEXT(target, index, count, params);
}

inline void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return FunctionObjects::ProgramEnvParametersI4ivNV(target, index, count, params);
}

inline void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return FunctionObjects::ProgramEnvParametersI4uivNV(target, index, count, params);
}

inline void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return FunctionObjects::ProgramLocalParameter4dvARB(target, index, params);
}

inline void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return FunctionObjects::ProgramLocalParameter4fvARB(target, index, params);
}

inline void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return FunctionObjects::ProgramLocalParameterI4ivNV(target, index, params);
}

inline void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return FunctionObjects::ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return FunctionObjects::ProgramLocalParameterI4uivNV(target, index, params);
}

inline void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return FunctionObjects::ProgramLocalParameters4fvEXT(target, index, count, params);
}

inline void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return FunctionObjects::ProgramLocalParametersI4ivNV(target, index, count, params);
}

inline void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return FunctionObjects::ProgramLocalParametersI4uivNV(target, index, count, params);
}

inline void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return FunctionObjects::ProgramNamedParameter4dvNV(id, len, name, v);
}

inline void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return FunctionObjects::ProgramNamedParameter4fvNV(id, len, name, v);
}

inline void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::ProgramParameter4dNV(target, index, x, y, z, w);
}

inline void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return FunctionObjects::ProgramParameter4dvNV(target, index, v);
}

inline void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::ProgramParameter4fNV(target, index, x, y, z, w);
}

inline void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return FunctionObjects::ProgramParameter4fvNV(target, index, v);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return FunctionObjects::ProgramParameteri(program, pname, value);
}

inline void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return FunctionObjects::ProgramParameteriARB(program, pname, value);
}

inline void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return FunctionObjects::ProgramParameteriEXT(program, pname, value);
}

inline void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::ProgramParameters4dvNV(target, index, count, v);
}

inline void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::ProgramParameters4fvNV(target, index, count, v);
}

inline void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return FunctionObjects::ProgramStringARB(target, format, len, string);
}

inline void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return FunctionObjects::ProgramSubroutineParametersuivNV(target, count, params);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return FunctionObjects::ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return FunctionObjects::ProgramUniform1dEXT(program, location, x);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform1dvEXT(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return FunctionObjects::ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return FunctionObjects::ProgramUniform1fEXT(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform1fvEXT(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return FunctionObjects::ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return FunctionObjects::ProgramUniform1i64NV(program, location, x);
}

inline void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::ProgramUniform1i64vNV(program, location, count, value);
}

inline void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return FunctionObjects::ProgramUniform1iEXT(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform1ivEXT(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return FunctionObjects::ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return FunctionObjects::ProgramUniform1ui64NV(program, location, x);
}

inline void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::ProgramUniform1ui64vNV(program, location, count, value);
}

inline void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return FunctionObjects::ProgramUniform1uiEXT(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform1uivEXT(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return FunctionObjects::ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return FunctionObjects::ProgramUniform2dEXT(program, location, x, y);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform2dvEXT(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return FunctionObjects::ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return FunctionObjects::ProgramUniform2fEXT(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform2fvEXT(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return FunctionObjects::ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return FunctionObjects::ProgramUniform2i64NV(program, location, x, y);
}

inline void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::ProgramUniform2i64vNV(program, location, count, value);
}

inline void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return FunctionObjects::ProgramUniform2iEXT(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform2ivEXT(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return FunctionObjects::ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return FunctionObjects::ProgramUniform2ui64NV(program, location, x, y);
}

inline void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::ProgramUniform2ui64vNV(program, location, count, value);
}

inline void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return FunctionObjects::ProgramUniform2uiEXT(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform2uivEXT(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return FunctionObjects::ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::ProgramUniform3dEXT(program, location, x, y, z);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform3dvEXT(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return FunctionObjects::ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return FunctionObjects::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform3fvEXT(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return FunctionObjects::ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return FunctionObjects::ProgramUniform3i64NV(program, location, x, y, z);
}

inline void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::ProgramUniform3i64vNV(program, location, count, value);
}

inline void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return FunctionObjects::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform3ivEXT(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return FunctionObjects::ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return FunctionObjects::ProgramUniform3ui64NV(program, location, x, y, z);
}

inline void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::ProgramUniform3ui64vNV(program, location, count, value);
}

inline void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return FunctionObjects::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform3uivEXT(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return FunctionObjects::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::ProgramUniform4dEXT(program, location, x, y, z, w);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::ProgramUniform4dvEXT(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return FunctionObjects::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return FunctionObjects::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::ProgramUniform4fvEXT(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return FunctionObjects::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return FunctionObjects::ProgramUniform4i64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::ProgramUniform4i64vNV(program, location, count, value);
}

inline void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return FunctionObjects::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::ProgramUniform4ivEXT(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return FunctionObjects::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return FunctionObjects::ProgramUniform4ui64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::ProgramUniform4ui64vNV(program, location, count, value);
}

inline void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return FunctionObjects::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::ProgramUniform4uivEXT(program, location, count, value);
}

inline void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return FunctionObjects::ProgramUniformHandleui64ARB(program, location, value);
}

inline void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return FunctionObjects::ProgramUniformHandleui64NV(program, location, value);
}

inline void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return FunctionObjects::ProgramUniformHandleui64vARB(program, location, count, values);
}

inline void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return FunctionObjects::ProgramUniformHandleui64vNV(program, location, count, values);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return FunctionObjects::ProgramUniformui64NV(program, location, value);
}

inline void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::ProgramUniformui64vNV(program, location, count, value);
}

inline void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return FunctionObjects::ProgramVertexLimitNV(target, limit);
}

inline void glProvokingVertex(GLenum mode)
{
    return FunctionObjects::ProvokingVertex(mode);
}

inline void glProvokingVertexEXT(GLenum mode)
{
    return FunctionObjects::ProvokingVertexEXT(mode);
}

inline void glPushClientAttribDefaultEXT(GLbitfield mask)
{
    return FunctionObjects::PushClientAttribDefaultEXT(mask);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return FunctionObjects::PushDebugGroup(source, id, length, message);
}

inline void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return FunctionObjects::PushGroupMarkerEXT(length, marker);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return FunctionObjects::QueryCounter(id, target);
}

inline GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl12ext::GLbitfield>(FunctionObjects::QueryMatrixxOES(mantissa, exponent));
}

inline void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return FunctionObjects::QueryObjectParameteruiAMD(target, id, pname, param);
}

inline void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return FunctionObjects::RasterPos2xOES(x, y);
}

inline void glRasterPos2xvOES(const GLfixed * coords)
{
    return FunctionObjects::RasterPos2xvOES(coords);
}

inline void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return FunctionObjects::RasterPos3xOES(x, y, z);
}

inline void glRasterPos3xvOES(const GLfixed * coords)
{
    return FunctionObjects::RasterPos3xvOES(coords);
}

inline void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return FunctionObjects::RasterPos4xOES(x, y, z, w);
}

inline void glRasterPos4xvOES(const GLfixed * coords)
{
    return FunctionObjects::RasterPos4xvOES(coords);
}

inline void glReadInstrumentsSGIX(GLint marker)
{
    return FunctionObjects::ReadInstrumentsSGIX(marker);
}

inline void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return FunctionObjects::ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

inline void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return FunctionObjects::RectxOES(x1, y1, x2, y2);
}

inline void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return FunctionObjects::RectxvOES(v1, v2);
}

inline void glReferencePlaneSGIX(const GLdouble * equation)
{
    return FunctionObjects::ReferencePlaneSGIX(equation);
}

inline void glReleaseShaderCompiler()
{
    return FunctionObjects::ReleaseShaderCompiler();
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::RenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::RenderbufferStorageEXT(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

inline void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return FunctionObjects::ReplacementCodePointerSUN(type, stride, pointer);
}

inline void glReplacementCodeubSUN(GLubyte code)
{
    return FunctionObjects::ReplacementCodeubSUN(code);
}

inline void glReplacementCodeubvSUN(const GLubyte * code)
{
    return FunctionObjects::ReplacementCodeubvSUN(code);
}

inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

inline void glReplacementCodeuiSUN(GLuint code)
{
    return FunctionObjects::ReplacementCodeuiSUN(code);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

inline void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

inline void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return FunctionObjects::ReplacementCodeuiVertex3fvSUN(rc, v);
}

inline void glReplacementCodeuivSUN(const GLuint * code)
{
    return FunctionObjects::ReplacementCodeuivSUN(code);
}

inline void glReplacementCodeusSUN(GLushort code)
{
    return FunctionObjects::ReplacementCodeusSUN(code);
}

inline void glReplacementCodeusvSUN(const GLushort * code)
{
    return FunctionObjects::ReplacementCodeusvSUN(code);
}

inline void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return FunctionObjects::RequestResidentProgramsNV(n, programs);
}

inline void glResetHistogram(GLenum target)
{
    return FunctionObjects::ResetHistogram(target);
}

inline void glResetHistogramEXT(GLenum target)
{
    return FunctionObjects::ResetHistogramEXT(target);
}

inline void glResetMinmax(GLenum target)
{
    return FunctionObjects::ResetMinmax(target);
}

inline void glResetMinmaxEXT(GLenum target)
{
    return FunctionObjects::ResetMinmaxEXT(target);
}

inline void glResizeBuffersMESA()
{
    return FunctionObjects::ResizeBuffersMESA();
}

inline void glResumeTransformFeedback()
{
    return FunctionObjects::ResumeTransformFeedback();
}

inline void glResumeTransformFeedbackNV()
{
    return FunctionObjects::ResumeTransformFeedbackNV();
}

inline void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return FunctionObjects::RotatexOES(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return FunctionObjects::SampleCoverage(value, invert);
}

inline void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return FunctionObjects::SampleCoverageARB(value, invert);
}

inline void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return FunctionObjects::SampleCoverageOES(value, invert);
}

inline void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return FunctionObjects::SampleMapATI(dst, interp, swizzle);
}

inline void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return FunctionObjects::SampleMaskEXT(value, invert);
}

inline void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return FunctionObjects::SampleMaskIndexedNV(index, mask);
}

inline void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return FunctionObjects::SampleMaskSGIS(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return FunctionObjects::SampleMaski(maskNumber, mask);
}

inline void glSamplePatternEXT(GLenum pattern)
{
    return FunctionObjects::SamplePatternEXT(pattern);
}

inline void glSamplePatternSGIS(GLenum pattern)
{
    return FunctionObjects::SamplePatternSGIS(pattern);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return FunctionObjects::SamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return FunctionObjects::SamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return FunctionObjects::SamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return FunctionObjects::SamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return FunctionObjects::SamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return FunctionObjects::SamplerParameteriv(sampler, pname, param);
}

inline void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return FunctionObjects::ScalexOES(x, y, z);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return FunctionObjects::ScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return FunctionObjects::ScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
    return FunctionObjects::ScissorIndexedv(index, v);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return FunctionObjects::SecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return FunctionObjects::SecondaryColor3bEXT(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
    return FunctionObjects::SecondaryColor3bv(v);
}

inline void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return FunctionObjects::SecondaryColor3bvEXT(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return FunctionObjects::SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return FunctionObjects::SecondaryColor3dEXT(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
    return FunctionObjects::SecondaryColor3dv(v);
}

inline void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return FunctionObjects::SecondaryColor3dvEXT(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return FunctionObjects::SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return FunctionObjects::SecondaryColor3fEXT(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
    return FunctionObjects::SecondaryColor3fv(v);
}

inline void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return FunctionObjects::SecondaryColor3fvEXT(v);
}

inline void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return FunctionObjects::SecondaryColor3hNV(red, green, blue);
}

inline void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return FunctionObjects::SecondaryColor3hvNV(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return FunctionObjects::SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return FunctionObjects::SecondaryColor3iEXT(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
    return FunctionObjects::SecondaryColor3iv(v);
}

inline void glSecondaryColor3ivEXT(const GLint * v)
{
    return FunctionObjects::SecondaryColor3ivEXT(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return FunctionObjects::SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return FunctionObjects::SecondaryColor3sEXT(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
    return FunctionObjects::SecondaryColor3sv(v);
}

inline void glSecondaryColor3svEXT(const GLshort * v)
{
    return FunctionObjects::SecondaryColor3svEXT(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return FunctionObjects::SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return FunctionObjects::SecondaryColor3ubEXT(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
    return FunctionObjects::SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return FunctionObjects::SecondaryColor3ubvEXT(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return FunctionObjects::SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return FunctionObjects::SecondaryColor3uiEXT(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
    return FunctionObjects::SecondaryColor3uiv(v);
}

inline void glSecondaryColor3uivEXT(const GLuint * v)
{
    return FunctionObjects::SecondaryColor3uivEXT(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return FunctionObjects::SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return FunctionObjects::SecondaryColor3usEXT(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
    return FunctionObjects::SecondaryColor3usv(v);
}

inline void glSecondaryColor3usvEXT(const GLushort * v)
{
    return FunctionObjects::SecondaryColor3usvEXT(v);
}

inline void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::SecondaryColorFormatNV(size, type, stride);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return FunctionObjects::SecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return FunctionObjects::SecondaryColorP3uiv(type, color);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::SecondaryColorPointer(size, type, stride, pointer);
}

inline void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::SecondaryColorPointerEXT(size, type, stride, pointer);
}

inline void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return FunctionObjects::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

inline void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return FunctionObjects::SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

inline void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return FunctionObjects::SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

inline void glSetFenceAPPLE(GLuint fence)
{
    return FunctionObjects::SetFenceAPPLE(fence);
}

inline void glSetFenceNV(GLuint fence, GLenum condition)
{
    return FunctionObjects::SetFenceNV(fence, condition);
}

inline void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return FunctionObjects::SetFragmentShaderConstantATI(dst, value);
}

inline void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return FunctionObjects::SetInvariantEXT(id, type, addr);
}

inline void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return FunctionObjects::SetLocalConstantEXT(id, type, addr);
}

inline void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return FunctionObjects::SetMultisamplefvAMD(pname, index, val);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return FunctionObjects::ShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return FunctionObjects::ShaderOp1EXT(op, res, arg1);
}

inline void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return FunctionObjects::ShaderOp2EXT(op, res, arg1, arg2);
}

inline void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return FunctionObjects::ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return FunctionObjects::ShaderSource(shader, count, string, length);
}

inline void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return FunctionObjects::ShaderSourceARB(shaderObj, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return FunctionObjects::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return FunctionObjects::SharpenTexFuncSGIS(target, n, points);
}

inline void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return FunctionObjects::SpriteParameterfSGIX(pname, param);
}

inline void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::SpriteParameterfvSGIX(pname, params);
}

inline void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return FunctionObjects::SpriteParameteriSGIX(pname, param);
}

inline void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return FunctionObjects::SpriteParameterivSGIX(pname, params);
}

inline void glStartInstrumentsSGIX()
{
    return FunctionObjects::StartInstrumentsSGIX();
}

inline void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return FunctionObjects::StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

inline void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return FunctionObjects::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

inline void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return FunctionObjects::StencilFillPathNV(path, fillMode, mask);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return FunctionObjects::StencilFuncSeparate(face, func, ref, mask);
}

inline void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return FunctionObjects::StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return FunctionObjects::StencilMaskSeparate(face, mask);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return FunctionObjects::StencilOpSeparate(face, sfail, dpfail, dppass);
}

inline void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return FunctionObjects::StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

inline void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return FunctionObjects::StencilOpValueAMD(face, value);
}

inline void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return FunctionObjects::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

inline void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return FunctionObjects::StencilStrokePathNV(path, reference, mask);
}

inline void glStopInstrumentsSGIX(GLint marker)
{
    return FunctionObjects::StopInstrumentsSGIX(marker);
}

inline void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return FunctionObjects::StringMarkerGREMEDY(len, string);
}

inline void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return FunctionObjects::SwizzleEXT(res, in, outX, outY, outZ, outW);
}

inline void glSyncTextureINTEL(GLuint texture)
{
    return FunctionObjects::SyncTextureINTEL(texture);
}

inline void glTagSampleBufferSGIX()
{
    return FunctionObjects::TagSampleBufferSGIX();
}

inline void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return FunctionObjects::Tangent3bEXT(tx, ty, tz);
}

inline void glTangent3bvEXT(const GLbyte * v)
{
    return FunctionObjects::Tangent3bvEXT(v);
}

inline void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return FunctionObjects::Tangent3dEXT(tx, ty, tz);
}

inline void glTangent3dvEXT(const GLdouble * v)
{
    return FunctionObjects::Tangent3dvEXT(v);
}

inline void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return FunctionObjects::Tangent3fEXT(tx, ty, tz);
}

inline void glTangent3fvEXT(const GLfloat * v)
{
    return FunctionObjects::Tangent3fvEXT(v);
}

inline void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return FunctionObjects::Tangent3iEXT(tx, ty, tz);
}

inline void glTangent3ivEXT(const GLint * v)
{
    return FunctionObjects::Tangent3ivEXT(v);
}

inline void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return FunctionObjects::Tangent3sEXT(tx, ty, tz);
}

inline void glTangent3svEXT(const GLshort * v)
{
    return FunctionObjects::Tangent3svEXT(v);
}

inline void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::TangentPointerEXT(type, stride, pointer);
}

inline void glTbufferMask3DFX(GLuint mask)
{
    return FunctionObjects::TbufferMask3DFX(mask);
}

inline void glTessellationFactorAMD(GLfloat factor)
{
    return FunctionObjects::TessellationFactorAMD(factor);
}

inline void glTessellationModeAMD(GLenum mode)
{
    return FunctionObjects::TessellationModeAMD(mode);
}

inline GLboolean glTestFenceAPPLE(GLuint fence)
{
    return FunctionObjects::TestFenceAPPLE(fence);
}

inline GLboolean glTestFenceNV(GLuint fence)
{
    return FunctionObjects::TestFenceNV(fence);
}

inline GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return FunctionObjects::TestObjectAPPLE(object, name);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return FunctionObjects::TexBuffer(target, internalformat, buffer);
}

inline void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return FunctionObjects::TexBufferARB(target, internalformat, buffer);
}

inline void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return FunctionObjects::TexBufferEXT(target, internalformat, buffer);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::TexBufferRange(target, internalformat, buffer, offset, size);
}

inline void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return FunctionObjects::TexBumpParameterfvATI(pname, param);
}

inline void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return FunctionObjects::TexBumpParameterivATI(pname, param);
}

inline void glTexCoord1bOES(GLbyte s)
{
    return FunctionObjects::TexCoord1bOES(s);
}

inline void glTexCoord1bvOES(const GLbyte * coords)
{
    return FunctionObjects::TexCoord1bvOES(coords);
}

inline void glTexCoord1hNV(GLhalfNV s)
{
    return FunctionObjects::TexCoord1hNV(s);
}

inline void glTexCoord1hvNV(const GLhalfNV * v)
{
    return FunctionObjects::TexCoord1hvNV(v);
}

inline void glTexCoord1xOES(GLfixed s)
{
    return FunctionObjects::TexCoord1xOES(s);
}

inline void glTexCoord1xvOES(const GLfixed * coords)
{
    return FunctionObjects::TexCoord1xvOES(coords);
}

inline void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return FunctionObjects::TexCoord2bOES(s, t);
}

inline void glTexCoord2bvOES(const GLbyte * coords)
{
    return FunctionObjects::TexCoord2bvOES(coords);
}

inline void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return FunctionObjects::TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::TexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return FunctionObjects::TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

inline void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::TexCoord2fVertex3fSUN(s, t, x, y, z);
}

inline void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return FunctionObjects::TexCoord2fVertex3fvSUN(tc, v);
}

inline void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return FunctionObjects::TexCoord2hNV(s, t);
}

inline void glTexCoord2hvNV(const GLhalfNV * v)
{
    return FunctionObjects::TexCoord2hvNV(v);
}

inline void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return FunctionObjects::TexCoord2xOES(s, t);
}

inline void glTexCoord2xvOES(const GLfixed * coords)
{
    return FunctionObjects::TexCoord2xvOES(coords);
}

inline void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return FunctionObjects::TexCoord3bOES(s, t, r);
}

inline void glTexCoord3bvOES(const GLbyte * coords)
{
    return FunctionObjects::TexCoord3bvOES(coords);
}

inline void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return FunctionObjects::TexCoord3hNV(s, t, r);
}

inline void glTexCoord3hvNV(const GLhalfNV * v)
{
    return FunctionObjects::TexCoord3hvNV(v);
}

inline void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return FunctionObjects::TexCoord3xOES(s, t, r);
}

inline void glTexCoord3xvOES(const GLfixed * coords)
{
    return FunctionObjects::TexCoord3xvOES(coords);
}

inline void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return FunctionObjects::TexCoord4bOES(s, t, r, q);
}

inline void glTexCoord4bvOES(const GLbyte * coords)
{
    return FunctionObjects::TexCoord4bvOES(coords);
}

inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::TexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return FunctionObjects::TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

inline void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

inline void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return FunctionObjects::TexCoord4fVertex4fvSUN(tc, v);
}

inline void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return FunctionObjects::TexCoord4hNV(s, t, r, q);
}

inline void glTexCoord4hvNV(const GLhalfNV * v)
{
    return FunctionObjects::TexCoord4hvNV(v);
}

inline void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return FunctionObjects::TexCoord4xOES(s, t, r, q);
}

inline void glTexCoord4xvOES(const GLfixed * coords)
{
    return FunctionObjects::TexCoord4xvOES(coords);
}

inline void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::TexCoordFormatNV(size, type, stride);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return FunctionObjects::TexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return FunctionObjects::TexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return FunctionObjects::TexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return FunctionObjects::TexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return FunctionObjects::TexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return FunctionObjects::TexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return FunctionObjects::TexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return FunctionObjects::TexCoordP4uiv(type, coords);
}

inline void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return FunctionObjects::TexCoordPointerEXT(size, type, stride, count, pointer);
}

inline void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return FunctionObjects::TexCoordPointervINTEL(size, type, pointer);
}

inline void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return FunctionObjects::TexEnvxOES(target, pname, param);
}

inline void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return FunctionObjects::TexEnvxvOES(target, pname, params);
}

inline void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return FunctionObjects::TexFilterFuncSGIS(target, filter, n, weights);
}

inline void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return FunctionObjects::TexGenxOES(coord, pname, param);
}

inline void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return FunctionObjects::TexGenxvOES(coord, pname, params);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

inline void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return FunctionObjects::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TexParameterIiv(target, pname, params);
}

inline void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TexParameterIivEXT(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return FunctionObjects::TexParameterIuiv(target, pname, params);
}

inline void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return FunctionObjects::TexParameterIuivEXT(target, pname, params);
}

inline void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return FunctionObjects::TexParameterxOES(target, pname, param);
}

inline void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return FunctionObjects::TexParameterxvOES(target, pname, params);
}

inline void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return FunctionObjects::TexRenderbufferNV(target, renderbuffer);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return FunctionObjects::TexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::TexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return FunctionObjects::TexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
    return FunctionObjects::TexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

inline void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

inline void glTextureBarrierNV()
{
    return FunctionObjects::TextureBarrierNV();
}

inline void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return FunctionObjects::TextureBufferEXT(texture, target, internalformat, buffer);
}

inline void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return FunctionObjects::TextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

inline void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return FunctionObjects::TextureColorMaskSGIS(red, green, blue, alpha);
}

inline void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

inline void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return FunctionObjects::TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureLightEXT(GLenum pname)
{
    return FunctionObjects::TextureLightEXT(pname);
}

inline void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return FunctionObjects::TextureMaterialEXT(face, mode);
}

inline void glTextureNormalEXT(GLenum mode)
{
    return FunctionObjects::TextureNormalEXT(mode);
}

inline void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return FunctionObjects::TexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TextureParameterIivEXT(texture, target, pname, params);
}

inline void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return FunctionObjects::TextureParameterIuivEXT(texture, target, pname, params);
}

inline void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::TextureParameterfEXT(texture, target, pname, param);
}

inline void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::TextureParameterfvEXT(texture, target, pname, params);
}

inline void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::TextureParameteriEXT(texture, target, pname, param);
}

inline void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TextureParameterivEXT(texture, target, pname, params);
}

inline void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return FunctionObjects::TextureRangeAPPLE(target, length, pointer);
}

inline void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return FunctionObjects::TextureRenderbufferEXT(texture, target, renderbuffer);
}

inline void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return FunctionObjects::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

inline void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return FunctionObjects::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

inline void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return FunctionObjects::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

inline void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return FunctionObjects::TextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
    return FunctionObjects::TextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

inline void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return FunctionObjects::TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return FunctionObjects::TrackMatrixNV(target, address, matrix, transform);
}

inline void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return FunctionObjects::TransformFeedbackAttribsNV(count, attribs, bufferMode);
}

inline void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return FunctionObjects::TransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return FunctionObjects::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return FunctionObjects::TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return FunctionObjects::TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

inline void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return FunctionObjects::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

inline void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return FunctionObjects::TranslatexOES(x, y, z);
}

inline void glUniform1d(GLint location, GLdouble x)
{
    return FunctionObjects::Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::Uniform1dv(location, count, value);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return FunctionObjects::Uniform1f(location, v0);
}

inline void glUniform1fARB(GLint location, GLfloat v0)
{
    return FunctionObjects::Uniform1fARB(location, v0);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform1fv(location, count, value);
}

inline void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform1fvARB(location, count, value);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return FunctionObjects::Uniform1i(location, v0);
}

inline void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return FunctionObjects::Uniform1i64NV(location, x);
}

inline void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::Uniform1i64vNV(location, count, value);
}

inline void glUniform1iARB(GLint location, GLint v0)
{
    return FunctionObjects::Uniform1iARB(location, v0);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform1iv(location, count, value);
}

inline void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform1ivARB(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
    return FunctionObjects::Uniform1ui(location, v0);
}

inline void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return FunctionObjects::Uniform1ui64NV(location, x);
}

inline void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::Uniform1ui64vNV(location, count, value);
}

inline void glUniform1uiEXT(GLint location, GLuint v0)
{
    return FunctionObjects::Uniform1uiEXT(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform1uiv(location, count, value);
}

inline void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform1uivEXT(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return FunctionObjects::Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::Uniform2dv(location, count, value);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return FunctionObjects::Uniform2f(location, v0, v1);
}

inline void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return FunctionObjects::Uniform2fARB(location, v0, v1);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform2fv(location, count, value);
}

inline void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform2fvARB(location, count, value);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return FunctionObjects::Uniform2i(location, v0, v1);
}

inline void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return FunctionObjects::Uniform2i64NV(location, x, y);
}

inline void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::Uniform2i64vNV(location, count, value);
}

inline void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return FunctionObjects::Uniform2iARB(location, v0, v1);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform2iv(location, count, value);
}

inline void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform2ivARB(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return FunctionObjects::Uniform2ui(location, v0, v1);
}

inline void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return FunctionObjects::Uniform2ui64NV(location, x, y);
}

inline void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::Uniform2ui64vNV(location, count, value);
}

inline void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return FunctionObjects::Uniform2uiEXT(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform2uiv(location, count, value);
}

inline void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform2uivEXT(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::Uniform3dv(location, count, value);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return FunctionObjects::Uniform3f(location, v0, v1, v2);
}

inline void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return FunctionObjects::Uniform3fARB(location, v0, v1, v2);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform3fv(location, count, value);
}

inline void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform3fvARB(location, count, value);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return FunctionObjects::Uniform3i(location, v0, v1, v2);
}

inline void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return FunctionObjects::Uniform3i64NV(location, x, y, z);
}

inline void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::Uniform3i64vNV(location, count, value);
}

inline void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return FunctionObjects::Uniform3iARB(location, v0, v1, v2);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform3iv(location, count, value);
}

inline void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform3ivARB(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return FunctionObjects::Uniform3ui(location, v0, v1, v2);
}

inline void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return FunctionObjects::Uniform3ui64NV(location, x, y, z);
}

inline void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::Uniform3ui64vNV(location, count, value);
}

inline void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return FunctionObjects::Uniform3uiEXT(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform3uiv(location, count, value);
}

inline void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform3uivEXT(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return FunctionObjects::Uniform4dv(location, count, value);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return FunctionObjects::Uniform4f(location, v0, v1, v2, v3);
}

inline void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return FunctionObjects::Uniform4fARB(location, v0, v1, v2, v3);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform4fv(location, count, value);
}

inline void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return FunctionObjects::Uniform4fvARB(location, count, value);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return FunctionObjects::Uniform4i(location, v0, v1, v2, v3);
}

inline void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return FunctionObjects::Uniform4i64NV(location, x, y, z, w);
}

inline void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return FunctionObjects::Uniform4i64vNV(location, count, value);
}

inline void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return FunctionObjects::Uniform4iARB(location, v0, v1, v2, v3);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform4iv(location, count, value);
}

inline void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return FunctionObjects::Uniform4ivARB(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return FunctionObjects::Uniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return FunctionObjects::Uniform4ui64NV(location, x, y, z, w);
}

inline void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::Uniform4ui64vNV(location, count, value);
}

inline void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return FunctionObjects::Uniform4uiEXT(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform4uiv(location, count, value);
}

inline void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return FunctionObjects::Uniform4uivEXT(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return FunctionObjects::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return FunctionObjects::UniformBufferEXT(program, location, buffer);
}

inline void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return FunctionObjects::UniformHandleui64ARB(location, value);
}

inline void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return FunctionObjects::UniformHandleui64NV(location, value);
}

inline void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return FunctionObjects::UniformHandleui64vARB(location, count, value);
}

inline void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return FunctionObjects::UniformHandleui64vNV(location, count, value);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix2fv(location, count, transpose, value);
}

inline void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix2fvARB(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix3fv(location, count, transpose, value);
}

inline void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix3fvARB(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix4fvARB(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return FunctionObjects::UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return FunctionObjects::UniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return FunctionObjects::UniformSubroutinesuiv(shadertype, count, indices);
}

inline void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return FunctionObjects::Uniformui64NV(location, value);
}

inline void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return FunctionObjects::Uniformui64vNV(location, count, value);
}

inline void glUnlockArraysEXT()
{
    return FunctionObjects::UnlockArraysEXT();
}

inline GLboolean glUnmapBuffer(GLenum target)
{
    return FunctionObjects::UnmapBuffer(target);
}

inline GLboolean glUnmapBufferARB(GLenum target)
{
    return FunctionObjects::UnmapBufferARB(target);
}

inline GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return FunctionObjects::UnmapNamedBufferEXT(buffer);
}

inline void glUnmapObjectBufferATI(GLuint buffer)
{
    return FunctionObjects::UnmapObjectBufferATI(buffer);
}

inline void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return FunctionObjects::UnmapTexture2DINTEL(texture, level);
}

inline void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return FunctionObjects::UpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

inline void glUseProgram(GLuint program)
{
    return FunctionObjects::UseProgram(program);
}

inline void glUseProgramObjectARB(GLhandleARB programObj)
{
    return FunctionObjects::UseProgramObjectARB(programObj);
}

inline void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
    return FunctionObjects::UseProgramStages(pipeline, stages, program);
}

inline void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return FunctionObjects::UseShaderProgramEXT(type, program);
}

inline void glVDPAUFiniNV()
{
    return FunctionObjects::VDPAUFiniNV();
}

inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return FunctionObjects::VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

inline void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return FunctionObjects::VDPAUInitNV(vdpDevice, getProcAddress);
}

inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return FunctionObjects::VDPAUIsSurfaceNV(surface);
}

inline void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return FunctionObjects::VDPAUMapSurfacesNV(numSurfaces, surfaces);
}

inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return FunctionObjects::VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return FunctionObjects::VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return FunctionObjects::VDPAUSurfaceAccessNV(surface, access);
}

inline void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return FunctionObjects::VDPAUUnmapSurfacesNV(numSurface, surfaces);
}

inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return FunctionObjects::VDPAUUnregisterSurfaceNV(surface);
}

inline void glValidateProgram(GLuint program)
{
    return FunctionObjects::ValidateProgram(program);
}

inline void glValidateProgramARB(GLhandleARB programObj)
{
    return FunctionObjects::ValidateProgramARB(programObj);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
    return FunctionObjects::ValidateProgramPipeline(pipeline);
}

inline void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return FunctionObjects::VariantArrayObjectATI(id, type, stride, buffer, offset);
}

inline void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return FunctionObjects::VariantPointerEXT(id, type, stride, addr);
}

inline void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return FunctionObjects::VariantbvEXT(id, addr);
}

inline void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return FunctionObjects::VariantdvEXT(id, addr);
}

inline void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return FunctionObjects::VariantfvEXT(id, addr);
}

inline void glVariantivEXT(GLuint id, const GLint * addr)
{
    return FunctionObjects::VariantivEXT(id, addr);
}

inline void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return FunctionObjects::VariantsvEXT(id, addr);
}

inline void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return FunctionObjects::VariantubvEXT(id, addr);
}

inline void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return FunctionObjects::VariantuivEXT(id, addr);
}

inline void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return FunctionObjects::VariantusvEXT(id, addr);
}

inline void glVertex2bOES(GLbyte x)
{
    return FunctionObjects::Vertex2bOES(x);
}

inline void glVertex2bvOES(const GLbyte * coords)
{
    return FunctionObjects::Vertex2bvOES(coords);
}

inline void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return FunctionObjects::Vertex2hNV(x, y);
}

inline void glVertex2hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Vertex2hvNV(v);
}

inline void glVertex2xOES(GLfixed x)
{
    return FunctionObjects::Vertex2xOES(x);
}

inline void glVertex2xvOES(const GLfixed * coords)
{
    return FunctionObjects::Vertex2xvOES(coords);
}

inline void glVertex3bOES(GLbyte x, GLbyte y)
{
    return FunctionObjects::Vertex3bOES(x, y);
}

inline void glVertex3bvOES(const GLbyte * coords)
{
    return FunctionObjects::Vertex3bvOES(coords);
}

inline void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return FunctionObjects::Vertex3hNV(x, y, z);
}

inline void glVertex3hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Vertex3hvNV(v);
}

inline void glVertex3xOES(GLfixed x, GLfixed y)
{
    return FunctionObjects::Vertex3xOES(x, y);
}

inline void glVertex3xvOES(const GLfixed * coords)
{
    return FunctionObjects::Vertex3xvOES(coords);
}

inline void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return FunctionObjects::Vertex4bOES(x, y, z);
}

inline void glVertex4bvOES(const GLbyte * coords)
{
    return FunctionObjects::Vertex4bvOES(coords);
}

inline void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return FunctionObjects::Vertex4hNV(x, y, z, w);
}

inline void glVertex4hvNV(const GLhalfNV * v)
{
    return FunctionObjects::Vertex4hvNV(v);
}

inline void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return FunctionObjects::Vertex4xOES(x, y, z);
}

inline void glVertex4xvOES(const GLfixed * coords)
{
    return FunctionObjects::Vertex4xvOES(coords);
}

inline void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return FunctionObjects::VertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

inline void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

inline void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return FunctionObjects::VertexArrayParameteriAPPLE(pname, param);
}

inline void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return FunctionObjects::VertexArrayRangeAPPLE(length, pointer);
}

inline void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return FunctionObjects::VertexArrayRangeNV(length, pointer);
}

inline void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return FunctionObjects::VertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return FunctionObjects::VertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

inline void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return FunctionObjects::VertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return FunctionObjects::VertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return FunctionObjects::VertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

inline void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return FunctionObjects::VertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

inline void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return FunctionObjects::VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return FunctionObjects::VertexAttrib1d(index, x);
}

inline void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return FunctionObjects::VertexAttrib1dARB(index, x);
}

inline void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return FunctionObjects::VertexAttrib1dNV(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib1dv(index, v);
}

inline void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib1dvARB(index, v);
}

inline void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib1dvNV(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return FunctionObjects::VertexAttrib1f(index, x);
}

inline void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return FunctionObjects::VertexAttrib1fARB(index, x);
}

inline void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return FunctionObjects::VertexAttrib1fNV(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib1fv(index, v);
}

inline void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib1fvARB(index, v);
}

inline void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib1fvNV(index, v);
}

inline void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return FunctionObjects::VertexAttrib1hNV(index, x);
}

inline void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttrib1hvNV(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x)
{
    return FunctionObjects::VertexAttrib1s(index, x);
}

inline void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return FunctionObjects::VertexAttrib1sARB(index, x);
}

inline void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return FunctionObjects::VertexAttrib1sNV(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib1sv(index, v);
}

inline void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib1svARB(index, v);
}

inline void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib1svNV(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexAttrib2d(index, x, y);
}

inline void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexAttrib2dARB(index, x, y);
}

inline void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexAttrib2dNV(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib2dv(index, v);
}

inline void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib2dvARB(index, v);
}

inline void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib2dvNV(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return FunctionObjects::VertexAttrib2f(index, x, y);
}

inline void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return FunctionObjects::VertexAttrib2fARB(index, x, y);
}

inline void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return FunctionObjects::VertexAttrib2fNV(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib2fv(index, v);
}

inline void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib2fvARB(index, v);
}

inline void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib2fvNV(index, v);
}

inline void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return FunctionObjects::VertexAttrib2hNV(index, x, y);
}

inline void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttrib2hvNV(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return FunctionObjects::VertexAttrib2s(index, x, y);
}

inline void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return FunctionObjects::VertexAttrib2sARB(index, x, y);
}

inline void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return FunctionObjects::VertexAttrib2sNV(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib2sv(index, v);
}

inline void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib2svARB(index, v);
}

inline void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib2svNV(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexAttrib3d(index, x, y, z);
}

inline void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexAttrib3dARB(index, x, y, z);
}

inline void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexAttrib3dNV(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib3dv(index, v);
}

inline void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib3dvARB(index, v);
}

inline void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib3dvNV(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::VertexAttrib3f(index, x, y, z);
}

inline void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::VertexAttrib3fARB(index, x, y, z);
}

inline void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::VertexAttrib3fNV(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib3fv(index, v);
}

inline void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib3fvARB(index, v);
}

inline void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib3fvNV(index, v);
}

inline void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return FunctionObjects::VertexAttrib3hNV(index, x, y, z);
}

inline void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttrib3hvNV(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::VertexAttrib3s(index, x, y, z);
}

inline void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::VertexAttrib3sARB(index, x, y, z);
}

inline void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::VertexAttrib3sNV(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib3sv(index, v);
}

inline void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib3svARB(index, v);
}

inline void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib3svNV(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttrib4Nbv(index, v);
}

inline void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttrib4NbvARB(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttrib4Niv(index, v);
}

inline void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttrib4NivARB(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib4Nsv(index, v);
}

inline void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib4NsvARB(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return FunctionObjects::VertexAttrib4Nub(index, x, y, z, w);
}

inline void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return FunctionObjects::VertexAttrib4NubARB(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttrib4Nubv(index, v);
}

inline void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttrib4NubvARB(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttrib4Nuiv(index, v);
}

inline void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttrib4NuivARB(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttrib4Nusv(index, v);
}

inline void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttrib4NusvARB(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttrib4bv(index, v);
}

inline void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttrib4bvARB(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexAttrib4d(index, x, y, z, w);
}

inline void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexAttrib4dARB(index, x, y, z, w);
}

inline void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexAttrib4dNV(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib4dv(index, v);
}

inline void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib4dvARB(index, v);
}

inline void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttrib4dvNV(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::VertexAttrib4f(index, x, y, z, w);
}

inline void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::VertexAttrib4fARB(index, x, y, z, w);
}

inline void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::VertexAttrib4fNV(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib4fv(index, v);
}

inline void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib4fvARB(index, v);
}

inline void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return FunctionObjects::VertexAttrib4fvNV(index, v);
}

inline void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return FunctionObjects::VertexAttrib4hNV(index, x, y, z, w);
}

inline void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttrib4hvNV(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttrib4iv(index, v);
}

inline void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttrib4ivARB(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::VertexAttrib4s(index, x, y, z, w);
}

inline void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::VertexAttrib4sARB(index, x, y, z, w);
}

inline void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::VertexAttrib4sNV(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib4sv(index, v);
}

inline void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib4svARB(index, v);
}

inline void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttrib4svNV(index, v);
}

inline void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return FunctionObjects::VertexAttrib4ubNV(index, x, y, z, w);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttrib4ubv(index, v);
}

inline void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttrib4ubvARB(index, v);
}

inline void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttrib4ubvNV(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttrib4uiv(index, v);
}

inline void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttrib4uivARB(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttrib4usv(index, v);
}

inline void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttrib4usvARB(index, v);
}

inline void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return FunctionObjects::VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return FunctionObjects::VertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return FunctionObjects::VertexAttribDivisor(index, divisor);
}

inline void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return FunctionObjects::VertexAttribDivisorARB(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return FunctionObjects::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return FunctionObjects::VertexAttribFormatNV(index, size, type, normalized, stride);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return FunctionObjects::VertexAttribI1i(index, x);
}

inline void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return FunctionObjects::VertexAttribI1iEXT(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI1ivEXT(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return FunctionObjects::VertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return FunctionObjects::VertexAttribI1uiEXT(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI1uiv(index, v);
}

inline void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI1uivEXT(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return FunctionObjects::VertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return FunctionObjects::VertexAttribI2iEXT(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI2ivEXT(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return FunctionObjects::VertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return FunctionObjects::VertexAttribI2uiEXT(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI2uiv(index, v);
}

inline void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI2uivEXT(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return FunctionObjects::VertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return FunctionObjects::VertexAttribI3iEXT(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI3ivEXT(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return FunctionObjects::VertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return FunctionObjects::VertexAttribI3uiEXT(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI3uiv(index, v);
}

inline void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI3uivEXT(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttribI4bv(index, v);
}

inline void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return FunctionObjects::VertexAttribI4bvEXT(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::VertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::VertexAttribI4iEXT(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI4iv(index, v);
}

inline void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return FunctionObjects::VertexAttribI4ivEXT(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttribI4sv(index, v);
}

inline void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return FunctionObjects::VertexAttribI4svEXT(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return FunctionObjects::VertexAttribI4ubvEXT(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return FunctionObjects::VertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return FunctionObjects::VertexAttribI4uiEXT(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return FunctionObjects::VertexAttribI4uivEXT(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttribI4usv(index, v);
}

inline void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return FunctionObjects::VertexAttribI4usvEXT(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return FunctionObjects::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::VertexAttribIFormatNV(index, size, type, stride);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribIPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return FunctionObjects::VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return FunctionObjects::VertexAttribL1dEXT(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL1dv(index, v);
}

inline void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL1dvEXT(index, v);
}

inline void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return FunctionObjects::VertexAttribL1i64NV(index, x);
}

inline void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return FunctionObjects::VertexAttribL1i64vNV(index, v);
}

inline void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return FunctionObjects::VertexAttribL1ui64ARB(index, x);
}

inline void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return FunctionObjects::VertexAttribL1ui64NV(index, x);
}

inline void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return FunctionObjects::VertexAttribL1ui64vARB(index, v);
}

inline void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return FunctionObjects::VertexAttribL1ui64vNV(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexAttribL2dEXT(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL2dv(index, v);
}

inline void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL2dvEXT(index, v);
}

inline void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return FunctionObjects::VertexAttribL2i64NV(index, x, y);
}

inline void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return FunctionObjects::VertexAttribL2i64vNV(index, v);
}

inline void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return FunctionObjects::VertexAttribL2ui64NV(index, x, y);
}

inline void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return FunctionObjects::VertexAttribL2ui64vNV(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexAttribL3dEXT(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL3dv(index, v);
}

inline void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL3dvEXT(index, v);
}

inline void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return FunctionObjects::VertexAttribL3i64NV(index, x, y, z);
}

inline void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return FunctionObjects::VertexAttribL3i64vNV(index, v);
}

inline void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return FunctionObjects::VertexAttribL3ui64NV(index, x, y, z);
}

inline void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return FunctionObjects::VertexAttribL3ui64vNV(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexAttribL4dEXT(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL4dv(index, v);
}

inline void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return FunctionObjects::VertexAttribL4dvEXT(index, v);
}

inline void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return FunctionObjects::VertexAttribL4i64NV(index, x, y, z, w);
}

inline void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return FunctionObjects::VertexAttribL4i64vNV(index, v);
}

inline void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return FunctionObjects::VertexAttribL4ui64NV(index, x, y, z, w);
}

inline void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return FunctionObjects::VertexAttribL4ui64vNV(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return FunctionObjects::VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::VertexAttribLFormatNV(index, size, type, stride);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribLPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return FunctionObjects::VertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return FunctionObjects::VertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return FunctionObjects::VertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return FunctionObjects::VertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return FunctionObjects::VertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return FunctionObjects::VertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return FunctionObjects::VertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return FunctionObjects::VertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return FunctionObjects::VertexAttribParameteriAMD(index, pname, param);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

inline void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexAttribPointerNV(index, fsize, type, stride, pointer);
}

inline void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::VertexAttribs1dvNV(index, count, v);
}

inline void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::VertexAttribs1fvNV(index, count, v);
}

inline void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttribs1hvNV(index, n, v);
}

inline void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return FunctionObjects::VertexAttribs1svNV(index, count, v);
}

inline void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::VertexAttribs2dvNV(index, count, v);
}

inline void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::VertexAttribs2fvNV(index, count, v);
}

inline void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttribs2hvNV(index, n, v);
}

inline void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return FunctionObjects::VertexAttribs2svNV(index, count, v);
}

inline void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::VertexAttribs3dvNV(index, count, v);
}

inline void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::VertexAttribs3fvNV(index, count, v);
}

inline void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttribs3hvNV(index, n, v);
}

inline void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return FunctionObjects::VertexAttribs3svNV(index, count, v);
}

inline void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return FunctionObjects::VertexAttribs4dvNV(index, count, v);
}

inline void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::VertexAttribs4fvNV(index, count, v);
}

inline void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return FunctionObjects::VertexAttribs4hvNV(index, n, v);
}

inline void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return FunctionObjects::VertexAttribs4svNV(index, count, v);
}

inline void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return FunctionObjects::VertexAttribs4ubvNV(index, count, v);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return FunctionObjects::VertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexBlendARB(GLint count)
{
    return FunctionObjects::VertexBlendARB(count);
}

inline void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return FunctionObjects::VertexBlendEnvfATI(pname, param);
}

inline void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return FunctionObjects::VertexBlendEnviATI(pname, param);
}

inline void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return FunctionObjects::VertexFormatNV(size, type, stride);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return FunctionObjects::VertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return FunctionObjects::VertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return FunctionObjects::VertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return FunctionObjects::VertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return FunctionObjects::VertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return FunctionObjects::VertexP4uiv(type, value);
}

inline void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return FunctionObjects::VertexPointerEXT(size, type, stride, count, pointer);
}

inline void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return FunctionObjects::VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return FunctionObjects::VertexPointervINTEL(size, type, pointer);
}

inline void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return FunctionObjects::VertexStream1dATI(stream, x);
}

inline void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return FunctionObjects::VertexStream1dvATI(stream, coords);
}

inline void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return FunctionObjects::VertexStream1fATI(stream, x);
}

inline void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return FunctionObjects::VertexStream1fvATI(stream, coords);
}

inline void glVertexStream1iATI(GLenum stream, GLint x)
{
    return FunctionObjects::VertexStream1iATI(stream, x);
}

inline void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return FunctionObjects::VertexStream1ivATI(stream, coords);
}

inline void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return FunctionObjects::VertexStream1sATI(stream, x);
}

inline void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return FunctionObjects::VertexStream1svATI(stream, coords);
}

inline void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return FunctionObjects::VertexStream2dATI(stream, x, y);
}

inline void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return FunctionObjects::VertexStream2dvATI(stream, coords);
}

inline void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return FunctionObjects::VertexStream2fATI(stream, x, y);
}

inline void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return FunctionObjects::VertexStream2fvATI(stream, coords);
}

inline void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return FunctionObjects::VertexStream2iATI(stream, x, y);
}

inline void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return FunctionObjects::VertexStream2ivATI(stream, coords);
}

inline void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return FunctionObjects::VertexStream2sATI(stream, x, y);
}

inline void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return FunctionObjects::VertexStream2svATI(stream, coords);
}

inline void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::VertexStream3dATI(stream, x, y, z);
}

inline void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return FunctionObjects::VertexStream3dvATI(stream, coords);
}

inline void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::VertexStream3fATI(stream, x, y, z);
}

inline void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return FunctionObjects::VertexStream3fvATI(stream, coords);
}

inline void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return FunctionObjects::VertexStream3iATI(stream, x, y, z);
}

inline void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return FunctionObjects::VertexStream3ivATI(stream, coords);
}

inline void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::VertexStream3sATI(stream, x, y, z);
}

inline void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return FunctionObjects::VertexStream3svATI(stream, coords);
}

inline void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::VertexStream4dATI(stream, x, y, z, w);
}

inline void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return FunctionObjects::VertexStream4dvATI(stream, coords);
}

inline void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::VertexStream4fATI(stream, x, y, z, w);
}

inline void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return FunctionObjects::VertexStream4fvATI(stream, coords);
}

inline void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::VertexStream4iATI(stream, x, y, z, w);
}

inline void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return FunctionObjects::VertexStream4ivATI(stream, coords);
}

inline void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::VertexStream4sATI(stream, x, y, z, w);
}

inline void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return FunctionObjects::VertexStream4svATI(stream, coords);
}

inline void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexWeightPointerEXT(size, type, stride, pointer);
}

inline void glVertexWeightfEXT(GLfloat weight)
{
    return FunctionObjects::VertexWeightfEXT(weight);
}

inline void glVertexWeightfvEXT(const GLfloat * weight)
{
    return FunctionObjects::VertexWeightfvEXT(weight);
}

inline void glVertexWeighthNV(GLhalfNV weight)
{
    return FunctionObjects::VertexWeighthNV(weight);
}

inline void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return FunctionObjects::VertexWeighthvNV(weight);
}

inline GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl12ext::GLenum>(FunctionObjects::VideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

inline void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return FunctionObjects::VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return FunctionObjects::VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return FunctionObjects::ViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return FunctionObjects::ViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return FunctionObjects::ViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return FunctionObjects::WaitSync(sync, flags, timeout);
}

inline void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return FunctionObjects::WeightPathsNV(resultPath, numPaths, paths, weights);
}

inline void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::WeightPointerARB(size, type, stride, pointer);
}

inline void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return FunctionObjects::WeightbvARB(size, weights);
}

inline void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return FunctionObjects::WeightdvARB(size, weights);
}

inline void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return FunctionObjects::WeightfvARB(size, weights);
}

inline void glWeightivARB(GLint size, const GLint * weights)
{
    return FunctionObjects::WeightivARB(size, weights);
}

inline void glWeightsvARB(GLint size, const GLshort * weights)
{
    return FunctionObjects::WeightsvARB(size, weights);
}

inline void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return FunctionObjects::WeightubvARB(size, weights);
}

inline void glWeightuivARB(GLint size, const GLuint * weights)
{
    return FunctionObjects::WeightuivARB(size, weights);
}

inline void glWeightusvARB(GLint size, const GLushort * weights)
{
    return FunctionObjects::WeightusvARB(size, weights);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
    return FunctionObjects::WindowPos2d(x, y);
}

inline void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return FunctionObjects::WindowPos2dARB(x, y);
}

inline void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return FunctionObjects::WindowPos2dMESA(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
    return FunctionObjects::WindowPos2dv(v);
}

inline void glWindowPos2dvARB(const GLdouble * v)
{
    return FunctionObjects::WindowPos2dvARB(v);
}

inline void glWindowPos2dvMESA(const GLdouble * v)
{
    return FunctionObjects::WindowPos2dvMESA(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
    return FunctionObjects::WindowPos2f(x, y);
}

inline void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return FunctionObjects::WindowPos2fARB(x, y);
}

inline void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return FunctionObjects::WindowPos2fMESA(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
    return FunctionObjects::WindowPos2fv(v);
}

inline void glWindowPos2fvARB(const GLfloat * v)
{
    return FunctionObjects::WindowPos2fvARB(v);
}

inline void glWindowPos2fvMESA(const GLfloat * v)
{
    return FunctionObjects::WindowPos2fvMESA(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
    return FunctionObjects::WindowPos2i(x, y);
}

inline void glWindowPos2iARB(GLint x, GLint y)
{
    return FunctionObjects::WindowPos2iARB(x, y);
}

inline void glWindowPos2iMESA(GLint x, GLint y)
{
    return FunctionObjects::WindowPos2iMESA(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
    return FunctionObjects::WindowPos2iv(v);
}

inline void glWindowPos2ivARB(const GLint * v)
{
    return FunctionObjects::WindowPos2ivARB(v);
}

inline void glWindowPos2ivMESA(const GLint * v)
{
    return FunctionObjects::WindowPos2ivMESA(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
    return FunctionObjects::WindowPos2s(x, y);
}

inline void glWindowPos2sARB(GLshort x, GLshort y)
{
    return FunctionObjects::WindowPos2sARB(x, y);
}

inline void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return FunctionObjects::WindowPos2sMESA(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
    return FunctionObjects::WindowPos2sv(v);
}

inline void glWindowPos2svARB(const GLshort * v)
{
    return FunctionObjects::WindowPos2svARB(v);
}

inline void glWindowPos2svMESA(const GLshort * v)
{
    return FunctionObjects::WindowPos2svMESA(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::WindowPos3d(x, y, z);
}

inline void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::WindowPos3dARB(x, y, z);
}

inline void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::WindowPos3dMESA(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
    return FunctionObjects::WindowPos3dv(v);
}

inline void glWindowPos3dvARB(const GLdouble * v)
{
    return FunctionObjects::WindowPos3dvARB(v);
}

inline void glWindowPos3dvMESA(const GLdouble * v)
{
    return FunctionObjects::WindowPos3dvMESA(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::WindowPos3f(x, y, z);
}

inline void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::WindowPos3fARB(x, y, z);
}

inline void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::WindowPos3fMESA(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
    return FunctionObjects::WindowPos3fv(v);
}

inline void glWindowPos3fvARB(const GLfloat * v)
{
    return FunctionObjects::WindowPos3fvARB(v);
}

inline void glWindowPos3fvMESA(const GLfloat * v)
{
    return FunctionObjects::WindowPos3fvMESA(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return FunctionObjects::WindowPos3i(x, y, z);
}

inline void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return FunctionObjects::WindowPos3iARB(x, y, z);
}

inline void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return FunctionObjects::WindowPos3iMESA(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
    return FunctionObjects::WindowPos3iv(v);
}

inline void glWindowPos3ivARB(const GLint * v)
{
    return FunctionObjects::WindowPos3ivARB(v);
}

inline void glWindowPos3ivMESA(const GLint * v)
{
    return FunctionObjects::WindowPos3ivMESA(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::WindowPos3s(x, y, z);
}

inline void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::WindowPos3sARB(x, y, z);
}

inline void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::WindowPos3sMESA(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
    return FunctionObjects::WindowPos3sv(v);
}

inline void glWindowPos3svARB(const GLshort * v)
{
    return FunctionObjects::WindowPos3svARB(v);
}

inline void glWindowPos3svMESA(const GLshort * v)
{
    return FunctionObjects::WindowPos3svMESA(v);
}

inline void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::WindowPos4dMESA(x, y, z, w);
}

inline void glWindowPos4dvMESA(const GLdouble * v)
{
    return FunctionObjects::WindowPos4dvMESA(v);
}

inline void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::WindowPos4fMESA(x, y, z, w);
}

inline void glWindowPos4fvMESA(const GLfloat * v)
{
    return FunctionObjects::WindowPos4fvMESA(v);
}

inline void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::WindowPos4iMESA(x, y, z, w);
}

inline void glWindowPos4ivMESA(const GLint * v)
{
    return FunctionObjects::WindowPos4ivMESA(v);
}

inline void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::WindowPos4sMESA(x, y, z, w);
}

inline void glWindowPos4svMESA(const GLshort * v)
{
    return FunctionObjects::WindowPos4svMESA(v);
}

inline void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return FunctionObjects::WriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl12ext
