#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl30ext
{

#include <glbinding/gl/types.inl>

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl30ext


#include <glbinding/FunctionObjects.h>

namespace gl30ext
{

inline void glAccumxOES(GLenum op, GLfixed value)
{
    return glbinding::FunctionObjects::current().glAccumxOES(op, value);
}

inline void glActiveProgramEXT(GLuint program)
{
    return glbinding::FunctionObjects::current().glActiveProgramEXT(program);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::FunctionObjects::current().glActiveShaderProgram(pipeline, program);
}

inline void glActiveStencilFaceEXT(GLenum face)
{
    return glbinding::FunctionObjects::current().glActiveStencilFaceEXT(face);
}

inline void glActiveTextureARB(GLenum texture)
{
    return glbinding::FunctionObjects::current().glActiveTextureARB(texture);
}

inline void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glActiveVaryingNV(program, name);
}

inline void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::FunctionObjects::current().glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::FunctionObjects::current().glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::FunctionObjects::current().glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return glbinding::FunctionObjects::current().glAlphaFuncxOES(func, ref);
}

inline void glApplyTextureEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glApplyTextureEXT(mode);
}

inline GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().glAreProgramsResidentNV(n, programs, residences);
}

inline GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().glAreTexturesResidentEXT(n, textures, residences);
}

inline void glArrayElementEXT(GLint i)
{
    return glbinding::FunctionObjects::current().glArrayElementEXT(i);
}

inline void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().glArrayObjectATI(array, size, type, stride, buffer, offset);
}

inline void glAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::FunctionObjects::current().glAsyncMarkerSGIX(marker);
}

inline void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return glbinding::FunctionObjects::current().glAttachObjectARB(containerObj, obj);
}

inline void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glbinding::FunctionObjects::current().glBeginConditionalRenderNV(id, mode);
}

inline void glBeginConditionalRenderNVX(GLuint id)
{
    return glbinding::FunctionObjects::current().glBeginConditionalRenderNVX(id);
}

inline void glBeginFragmentShaderATI()
{
    return glbinding::FunctionObjects::current().glBeginFragmentShaderATI();
}

inline void glBeginOcclusionQueryNV(GLuint id)
{
    return glbinding::FunctionObjects::current().glBeginOcclusionQueryNV(id);
}

inline void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glbinding::FunctionObjects::current().glBeginPerfMonitorAMD(monitor);
}

inline void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().glBeginPerfQueryINTEL(queryHandle);
}

inline void glBeginQueryARB(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().glBeginQueryARB(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::FunctionObjects::current().glBeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().glBeginTransformFeedbackEXT(primitiveMode);
}

inline void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().glBeginTransformFeedbackNV(primitiveMode);
}

inline void glBeginVertexShaderEXT()
{
    return glbinding::FunctionObjects::current().glBeginVertexShaderEXT();
}

inline void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::FunctionObjects::current().glBeginVideoCaptureNV(video_capture_slot);
}

inline void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().glBindAttribLocationARB(programObj, index, name);
}

inline void glBindBufferARB(GLenum target, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glBindBufferARB(target, buffer);
}

inline void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glBindBufferBaseEXT(target, index, buffer);
}

inline void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glBindBufferBaseNV(target, index, buffer);
}

inline void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glBindBufferOffsetEXT(target, index, buffer, offset);
}

inline void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glBindBufferOffsetNV(target, index, buffer, offset);
}

inline void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glBindBufferRangeEXT(target, index, buffer, offset, size);
}

inline void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glBindBufferRangeNV(target, index, buffer, offset, size);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().glBindBuffersBase(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::FunctionObjects::current().glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

inline void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glBindFragDataLocationEXT(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFragmentShaderATI(GLuint id)
{
    return glbinding::FunctionObjects::current().glBindFragmentShaderATI(id);
}

inline void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().glBindFramebufferEXT(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::FunctionObjects::current().glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return glbinding::FunctionObjects::current().glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().glBindImageTextures(first, count, textures);
}

inline GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return glbinding::FunctionObjects::current().glBindLightParameterEXT(light, value);
}

inline GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return glbinding::FunctionObjects::current().glBindMaterialParameterEXT(face, value);
}

inline void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().glBindMultiTextureEXT(texunit, target, texture);
}

inline GLuint glBindParameterEXT(GLenum value)
{
    return glbinding::FunctionObjects::current().glBindParameterEXT(value);
}

inline void glBindProgramARB(GLenum target, GLuint program)
{
    return glbinding::FunctionObjects::current().glBindProgramARB(target, program);
}

inline void glBindProgramNV(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().glBindProgramNV(target, id);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().glBindProgramPipeline(pipeline);
}

inline void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glBindRenderbufferEXT(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::FunctionObjects::current().glBindSampler(unit, sampler);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::FunctionObjects::current().glBindSamplers(first, count, samplers);
}

inline GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return glbinding::FunctionObjects::current().glBindTexGenParameterEXT(unit, coord, value);
}

inline void glBindTextureEXT(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().glBindTextureEXT(target, texture);
}

inline GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return glbinding::FunctionObjects::current().glBindTextureUnitParameterEXT(unit, value);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().glBindTextures(first, count, textures);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().glBindTransformFeedback(target, id);
}

inline void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().glBindTransformFeedbackNV(target, id);
}

inline void glBindVertexArrayAPPLE(GLuint array)
{
    return glbinding::FunctionObjects::current().glBindVertexArrayAPPLE(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::FunctionObjects::current().glBindVertexBuffers(first, count, buffers, offsets, strides);
}

inline void glBindVertexShaderEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().glBindVertexShaderEXT(id);
}

inline void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return glbinding::FunctionObjects::current().glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

inline void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

inline void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return glbinding::FunctionObjects::current().glBinormal3bEXT(bx, by, bz);
}

inline void glBinormal3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glBinormal3bvEXT(v);
}

inline void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return glbinding::FunctionObjects::current().glBinormal3dEXT(bx, by, bz);
}

inline void glBinormal3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glBinormal3dvEXT(v);
}

inline void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return glbinding::FunctionObjects::current().glBinormal3fEXT(bx, by, bz);
}

inline void glBinormal3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glBinormal3fvEXT(v);
}

inline void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return glbinding::FunctionObjects::current().glBinormal3iEXT(bx, by, bz);
}

inline void glBinormal3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().glBinormal3ivEXT(v);
}

inline void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return glbinding::FunctionObjects::current().glBinormal3sEXT(bx, by, bz);
}

inline void glBinormal3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glBinormal3svEXT(v);
}

inline void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glBinormalPointerEXT(type, stride, pointer);
}

inline void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return glbinding::FunctionObjects::current().glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendBarrierNV()
{
    return glbinding::FunctionObjects::current().glBlendBarrierNV();
}

inline void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().glBlendColorEXT(red, green, blue, alpha);
}

inline void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().glBlendColorxOES(red, green, blue, alpha);
}

inline void glBlendEquationEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glBlendEquationEXT(mode);
}

inline void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().glBlendEquationIndexedAMD(buf, mode);
}

inline void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().glBlendEquationi(buf, mode);
}

inline void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().glBlendEquationiARB(buf, mode);
}

inline void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().glBlendFuncIndexedAMD(buf, src, dst);
}

inline void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().glBlendFunci(buf, src, dst);
}

inline void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().glBlendFunciARB(buf, src, dst);
}

inline void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glBlendParameteriNV(pname, value);
}

inline void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::FunctionObjects::current().glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().glBufferAddressRangeNV(pname, index, address, length);
}

inline void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().glBufferDataARB(target, size, data, usage);
}

inline void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glBufferParameteriAPPLE(target, pname, param);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::FunctionObjects::current().glBufferStorage(target, size, data, flags);
}

inline void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return glbinding::FunctionObjects::current().glBufferSubDataARB(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glCheckFramebufferStatusEXT(target));
}

inline GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glCheckNamedFramebufferStatusEXT(framebuffer, target));
}

inline void glClampColorARB(GLenum target, GLenum clamp)
{
    return glbinding::FunctionObjects::current().glClampColorARB(target, clamp);
}

inline void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().glClearAccumxOES(red, green, blue, alpha);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearBufferData(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

inline void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::FunctionObjects::current().glClearColorIiEXT(red, green, blue, alpha);
}

inline void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::FunctionObjects::current().glClearColorIuiEXT(red, green, blue, alpha);
}

inline void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().glClearColorxOES(red, green, blue, alpha);
}

inline void glClearDepthdNV(GLdouble depth)
{
    return glbinding::FunctionObjects::current().glClearDepthdNV(depth);
}

inline void glClearDepthf(GLfloat d)
{
    return glbinding::FunctionObjects::current().glClearDepthf(d);
}

inline void glClearDepthfOES(GLclampf depth)
{
    return glbinding::FunctionObjects::current().glClearDepthfOES(depth);
}

inline void glClearDepthxOES(GLfixed depth)
{
    return glbinding::FunctionObjects::current().glClearDepthxOES(depth);
}

inline void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearTexImage(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline void glClientActiveTextureARB(GLenum texture)
{
    return glbinding::FunctionObjects::current().glClientActiveTextureARB(texture);
}

inline void glClientActiveVertexStreamATI(GLenum stream)
{
    return glbinding::FunctionObjects::current().glClientActiveVertexStreamATI(stream);
}

inline void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().glClientAttribDefaultEXT(mask);
}

inline GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glClientWaitSync(sync, flags, timeout));
}

inline void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return glbinding::FunctionObjects::current().glClipPlanefOES(plane, equation);
}

inline void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return glbinding::FunctionObjects::current().glClipPlanexOES(plane, equation);
}

inline void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glColor3fVertex3fSUN(r, g, b, x, y, z);
}

inline void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor3fVertex3fvSUN(c, v);
}

inline void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::FunctionObjects::current().glColor3hNV(red, green, blue);
}

inline void glColor3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glColor3hvNV(v);
}

inline void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return glbinding::FunctionObjects::current().glColor3xOES(red, green, blue);
}

inline void glColor3xvOES(const GLfixed * components)
{
    return glbinding::FunctionObjects::current().glColor3xvOES(components);
}

inline void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor4fNormal3fVertex3fvSUN(c, n, v);
}

inline void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return glbinding::FunctionObjects::current().glColor4hNV(red, green, blue, alpha);
}

inline void glColor4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glColor4hvNV(v);
}

inline void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

inline void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor4ubVertex2fvSUN(c, v);
}

inline void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

inline void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glColor4ubVertex3fvSUN(c, v);
}

inline void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().glColor4xOES(red, green, blue, alpha);
}

inline void glColor4xvOES(const GLfixed * components)
{
    return glbinding::FunctionObjects::current().glColor4xvOES(components);
}

inline void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glColorFormatNV(size, type, stride);
}

inline void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::FunctionObjects::current().glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::FunctionObjects::current().glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::FunctionObjects::current().glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::FunctionObjects::current().glColorMaskIndexedEXT(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().glColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().glColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().glColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().glColorP4uiv(type, color);
}

inline void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().glColorPointerEXT(size, type, stride, count, pointer);
}

inline void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().glColorPointervINTEL(size, type, pointer);
}

inline void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glColorSubTable(target, start, count, format, type, data);
}

inline void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().glColorSubTableEXT(target, start, count, format, type, data);
}

inline void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().glColorTable(target, internalformat, width, format, type, table);
}

inline void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().glColorTableEXT(target, internalFormat, width, format, type, table);
}

inline void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glColorTableParameterfv(target, pname, params);
}

inline void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glColorTableParameterfvSGI(target, pname, params);
}

inline void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glColorTableParameteriv(target, pname, params);
}

inline void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glColorTableParameterivSGI(target, pname, params);
}

inline void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().glColorTableSGI(target, internalformat, width, format, type, table);
}

inline void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::FunctionObjects::current().glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

inline void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return glbinding::FunctionObjects::current().glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

inline void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glCombinerParameterfNV(pname, param);
}

inline void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glCombinerParameterfvNV(pname, params);
}

inline void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glCombinerParameteriNV(pname, param);
}

inline void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glCombinerParameterivNV(pname, params);
}

inline void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glCombinerStageParameterfvNV(stage, pname, params);
}

inline void glCompileShaderARB(GLhandleARB shaderObj)
{
    return glbinding::FunctionObjects::current().glCompileShaderARB(shaderObj);
}

inline void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return glbinding::FunctionObjects::current().glCompileShaderIncludeARB(shader, count, path, length);
}

inline void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterf(target, pname, params);
}

inline void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterfEXT(target, pname, params);
}

inline void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterfv(target, pname, params);
}

inline void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterfvEXT(target, pname, params);
}

inline void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameteri(target, pname, params);
}

inline void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameteriEXT(target, pname, params);
}

inline void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameteriv(target, pname, params);
}

inline void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterivEXT(target, pname, params);
}

inline void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterxOES(target, pname, param);
}

inline void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glConvolutionParameterxvOES(target, pname, params);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyColorSubTable(target, start, x, y, width);
}

inline void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyColorSubTableEXT(target, start, x, y, width);
}

inline void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyColorTable(target, internalformat, x, y, width);
}

inline void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyColorTableSGI(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

inline void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::FunctionObjects::current().glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

inline void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

inline void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

inline void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glbinding::FunctionObjects::current().glCopyPathNV(resultPath, srcPath);
}

inline void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

inline void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().glCoverFillPathNV(path, coverMode);
}

inline void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().glCoverStrokePathNV(path, coverMode);
}

inline void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glbinding::FunctionObjects::current().glCreatePerfQueryINTEL(queryId, queryHandle);
}

inline GLhandleARB glCreateProgramObjectARB()
{
    return glbinding::FunctionObjects::current().glCreateProgramObjectARB();
}

inline GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return glbinding::FunctionObjects::current().glCreateShaderObjectARB(shaderType);
}

inline GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glbinding::FunctionObjects::current().glCreateShaderProgramEXT(type, string);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::FunctionObjects::current().glCreateShaderProgramv(type, count, strings);
}

inline GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().glCreateSyncFromCLeventARB(context, event, flags);
}

inline void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glCullParameterdvEXT(pname, params);
}

inline void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glCullParameterfvEXT(pname, params);
}

inline void glCurrentPaletteMatrixARB(GLint index)
{
    return glbinding::FunctionObjects::current().glCurrentPaletteMatrixARB(index);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::FunctionObjects::current().glDebugMessageCallback(callback, userParam);
}

inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return glbinding::FunctionObjects::current().glDebugMessageCallbackAMD(callback, userParam);
}

inline void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return glbinding::FunctionObjects::current().glDebugMessageCallbackARB(callback, userParam);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().glDebugMessageControl(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().glDebugMessageControlARB(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().glDebugMessageEnableAMD(category, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().glDebugMessageInsert(source, type, id, severity, length, buf);
}

inline void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().glDebugMessageInsertAMD(category, severity, id, length, buf);
}

inline void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().glDebugMessageInsertARB(source, type, id, severity, length, buf);
}

inline void glDeformSGIX(FfdMaskSGIX mask)
{
    return glbinding::FunctionObjects::current().glDeformSGIX(mask);
}

inline void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return glbinding::FunctionObjects::current().glDeleteAsyncMarkersSGIX(marker, range);
}

inline void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().glDeleteBuffersARB(n, buffers);
}

inline void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return glbinding::FunctionObjects::current().glDeleteFencesAPPLE(n, fences);
}

inline void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glbinding::FunctionObjects::current().glDeleteFencesNV(n, fences);
}

inline void glDeleteFragmentShaderATI(GLuint id)
{
    return glbinding::FunctionObjects::current().glDeleteFragmentShaderATI(id);
}

inline void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().glDeleteFramebuffersEXT(n, framebuffers);
}

inline void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glDeleteNamedStringARB(namelen, name);
}

inline void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return glbinding::FunctionObjects::current().glDeleteNamesAMD(identifier, num, names);
}

inline void glDeleteObjectARB(GLhandleARB obj)
{
    return glbinding::FunctionObjects::current().glDeleteObjectARB(obj);
}

inline void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().glDeleteOcclusionQueriesNV(n, ids);
}

inline void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glbinding::FunctionObjects::current().glDeletePathsNV(path, range);
}

inline void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::FunctionObjects::current().glDeletePerfMonitorsAMD(n, monitors);
}

inline void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().glDeletePerfQueryINTEL(queryHandle);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::FunctionObjects::current().glDeleteProgramPipelines(n, pipelines);
}

inline void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().glDeleteProgramsARB(n, programs);
}

inline void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().glDeleteProgramsNV(n, programs);
}

inline void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().glDeleteQueriesARB(n, ids);
}

inline void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().glDeleteRenderbuffersEXT(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glbinding::FunctionObjects::current().glDeleteSamplers(count, samplers);
}

inline void glDeleteSync(GLsync sync)
{
    return glbinding::FunctionObjects::current().glDeleteSync(sync);
}

inline void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().glDeleteTexturesEXT(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().glDeleteTransformFeedbacks(n, ids);
}

inline void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().glDeleteTransformFeedbacksNV(n, ids);
}

inline void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return glbinding::FunctionObjects::current().glDeleteVertexArraysAPPLE(n, arrays);
}

inline void glDeleteVertexShaderEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().glDeleteVertexShaderEXT(id);
}

inline void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return glbinding::FunctionObjects::current().glDepthBoundsEXT(zmin, zmax);
}

inline void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return glbinding::FunctionObjects::current().glDepthBoundsdNV(zmin, zmax);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glDepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::FunctionObjects::current().glDepthRangeIndexed(index, n, f);
}

inline void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glDepthRangedNV(zNear, zFar);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().glDepthRangef(n, f);
}

inline void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return glbinding::FunctionObjects::current().glDepthRangefOES(n, f);
}

inline void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().glDepthRangexOES(n, f);
}

inline void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return glbinding::FunctionObjects::current().glDetachObjectARB(containerObj, attachedObj);
}

inline void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glDetailTexFuncSGIS(target, n, points);
}

inline void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableClientStateIndexedEXT(array, index);
}

inline void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableClientStateiEXT(array, index);
}

inline void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableIndexedEXT(target, index);
}

inline void glDisableVariantClientStateEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().glDisableVariantClientStateEXT(id);
}

inline void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableVertexArrayAttribEXT(vaobj, index);
}

inline void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::FunctionObjects::current().glDisableVertexArrayEXT(vaobj, array);
}

inline void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().glDisableVertexAttribAPPLE(index, pname);
}

inline void glDisableVertexAttribArrayARB(GLuint index)
{
    return glbinding::FunctionObjects::current().glDisableVertexAttribArrayARB(index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::FunctionObjects::current().glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return glbinding::FunctionObjects::current().glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::FunctionObjects::current().glDispatchComputeIndirect(indirect);
}

inline void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawArraysEXT(mode, first, count);
}

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::FunctionObjects::current().glDrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().glDrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glDrawArraysInstancedARB(mode, first, count, primcount);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glDrawArraysInstancedEXT(mode, start, count, primcount);
}

inline void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().glDrawBuffersARB(n, bufs);
}

inline void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().glDrawBuffersATI(n, bufs);
}

inline void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawElementArrayAPPLE(mode, first, count);
}

inline void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawElementArrayATI(mode, count);
}

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::FunctionObjects::current().glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::FunctionObjects::current().glDrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstancedARB(mode, count, type, indices, primcount);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

inline void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return glbinding::FunctionObjects::current().glDrawMeshArraysSUN(mode, first, count, width);
}

inline void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

inline void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return glbinding::FunctionObjects::current().glDrawRangeElementArrayATI(mode, start, end, count);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::FunctionObjects::current().glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}

inline void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return glbinding::FunctionObjects::current().glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::FunctionObjects::current().glDrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return glbinding::FunctionObjects::current().glDrawTransformFeedbackNV(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::FunctionObjects::current().glDrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEdgeFlagFormatNV(GLsizei stride)
{
    return glbinding::FunctionObjects::current().glEdgeFlagFormatNV(stride);
}

inline void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return glbinding::FunctionObjects::current().glEdgeFlagPointerEXT(stride, count, pointer);
}

inline void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

inline void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return glbinding::FunctionObjects::current().glElementPointerAPPLE(type, pointer);
}

inline void glElementPointerATI(GLenum type, const void * pointer)
{
    return glbinding::FunctionObjects::current().glElementPointerATI(type, pointer);
}

inline void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableClientStateIndexedEXT(array, index);
}

inline void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableClientStateiEXT(array, index);
}

inline void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableIndexedEXT(target, index);
}

inline void glEnableVariantClientStateEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().glEnableVariantClientStateEXT(id);
}

inline void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableVertexArrayAttribEXT(vaobj, index);
}

inline void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::FunctionObjects::current().glEnableVertexArrayEXT(vaobj, array);
}

inline void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().glEnableVertexAttribAPPLE(index, pname);
}

inline void glEnableVertexAttribArrayARB(GLuint index)
{
    return glbinding::FunctionObjects::current().glEnableVertexAttribArrayARB(index);
}

inline void glEndConditionalRenderNV()
{
    return glbinding::FunctionObjects::current().glEndConditionalRenderNV();
}

inline void glEndConditionalRenderNVX()
{
    return glbinding::FunctionObjects::current().glEndConditionalRenderNVX();
}

inline void glEndFragmentShaderATI()
{
    return glbinding::FunctionObjects::current().glEndFragmentShaderATI();
}

inline void glEndOcclusionQueryNV()
{
    return glbinding::FunctionObjects::current().glEndOcclusionQueryNV();
}

inline void glEndPerfMonitorAMD(GLuint monitor)
{
    return glbinding::FunctionObjects::current().glEndPerfMonitorAMD(monitor);
}

inline void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().glEndPerfQueryINTEL(queryHandle);
}

inline void glEndQueryARB(GLenum target)
{
    return glbinding::FunctionObjects::current().glEndQueryARB(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glEndQueryIndexed(target, index);
}

inline void glEndTransformFeedbackEXT()
{
    return glbinding::FunctionObjects::current().glEndTransformFeedbackEXT();
}

inline void glEndTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().glEndTransformFeedbackNV();
}

inline void glEndVertexShaderEXT()
{
    return glbinding::FunctionObjects::current().glEndVertexShaderEXT();
}

inline void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::FunctionObjects::current().glEndVideoCaptureNV(video_capture_slot);
}

inline void glEvalCoord1xOES(GLfixed u)
{
    return glbinding::FunctionObjects::current().glEvalCoord1xOES(u);
}

inline void glEvalCoord1xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glEvalCoord1xvOES(coords);
}

inline void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return glbinding::FunctionObjects::current().glEvalCoord2xOES(u, v);
}

inline void glEvalCoord2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glEvalCoord2xvOES(coords);
}

inline void glEvalMapsNV(GLenum target, GLenum mode)
{
    return glbinding::FunctionObjects::current().glEvalMapsNV(target, mode);
}

inline void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glExecuteProgramNV(target, id, params);
}

inline void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::FunctionObjects::current().glExtractComponentEXT(res, src, num);
}

inline void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return glbinding::FunctionObjects::current().glFeedbackBufferxOES(n, type, buffer);
}

inline GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().glFenceSync(condition, flags);
}

inline void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::FunctionObjects::current().glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

inline GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return glbinding::FunctionObjects::current().glFinishAsyncSGIX(markerp);
}

inline void glFinishFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().glFinishFenceAPPLE(fence);
}

inline void glFinishFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().glFinishFenceNV(fence);
}

inline void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return glbinding::FunctionObjects::current().glFinishObjectAPPLE(object, name);
}

inline void glFinishTextureSUNX()
{
    return glbinding::FunctionObjects::current().glFinishTextureSUNX();
}

inline void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glFlushMappedBufferRangeAPPLE(target, offset, size);
}

inline void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

inline void glFlushPixelDataRangeNV(GLenum target)
{
    return glbinding::FunctionObjects::current().glFlushPixelDataRangeNV(target);
}

inline void glFlushRasterSGIX()
{
    return glbinding::FunctionObjects::current().glFlushRasterSGIX();
}

inline void glFlushStaticDataIBM(GLenum target)
{
    return glbinding::FunctionObjects::current().glFlushStaticDataIBM(target);
}

inline void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::FunctionObjects::current().glFlushVertexArrayRangeAPPLE(length, pointer);
}

inline void glFlushVertexArrayRangeNV()
{
    return glbinding::FunctionObjects::current().glFlushVertexArrayRangeNV();
}

inline void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glFogCoordFormatNV(type, stride);
}

inline void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glFogCoordPointerEXT(type, stride, pointer);
}

inline void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glFogCoorddEXT(GLdouble coord)
{
    return glbinding::FunctionObjects::current().glFogCoorddEXT(coord);
}

inline void glFogCoorddvEXT(const GLdouble * coord)
{
    return glbinding::FunctionObjects::current().glFogCoorddvEXT(coord);
}

inline void glFogCoordfEXT(GLfloat coord)
{
    return glbinding::FunctionObjects::current().glFogCoordfEXT(coord);
}

inline void glFogCoordfvEXT(const GLfloat * coord)
{
    return glbinding::FunctionObjects::current().glFogCoordfvEXT(coord);
}

inline void glFogCoordhNV(GLhalfNV fog)
{
    return glbinding::FunctionObjects::current().glFogCoordhNV(fog);
}

inline void glFogCoordhvNV(const GLhalfNV * fog)
{
    return glbinding::FunctionObjects::current().glFogCoordhvNV(fog);
}

inline void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glFogFuncSGIS(n, points);
}

inline void glFogxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glFogxOES(pname, param);
}

inline void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().glFogxvOES(pname, param);
}

inline void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glFragmentColorMaterialSGIX(face, mode);
}

inline void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glFragmentLightModelfSGIX(pname, param);
}

inline void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glFragmentLightModelfvSGIX(pname, params);
}

inline void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glFragmentLightModeliSGIX(pname, param);
}

inline void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glFragmentLightModelivSGIX(pname, params);
}

inline void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glFragmentLightfSGIX(light, pname, param);
}

inline void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glFragmentLightfvSGIX(light, pname, params);
}

inline void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glFragmentLightiSGIX(light, pname, param);
}

inline void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glFragmentLightivSGIX(light, pname, params);
}

inline void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glFragmentMaterialfSGIX(face, pname, param);
}

inline void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glFragmentMaterialfvSGIX(face, pname, params);
}

inline void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glFragmentMaterialiSGIX(face, pname, param);
}

inline void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glFragmentMaterialivSGIX(face, pname, params);
}

inline void glFrameTerminatorGREMEDY()
{
    return glbinding::FunctionObjects::current().glFrameTerminatorGREMEDY();
}

inline void glFrameZoomSGIX(GLint factor)
{
    return glbinding::FunctionObjects::current().glFrameZoomSGIX(factor);
}

inline void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::FunctionObjects::current().glFramebufferDrawBufferEXT(framebuffer, mode);
}

inline void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glFramebufferParameteri(target, pname, param);
}

inline void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::FunctionObjects::current().glFramebufferReadBufferEXT(framebuffer, mode);
}

inline void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureARB(target, attachment, texture, level);
}

inline void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureEXT(target, attachment, texture, level);
}

inline void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

inline void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

inline void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

inline void glFreeObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glFreeObjectBufferATI(buffer);
}

inline void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().glFrustumfOES(l, r, b, t, n, f);
}

inline void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().glFrustumxOES(l, r, b, t, n, f);
}

inline GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return glbinding::FunctionObjects::current().glGenAsyncMarkersSGIX(range);
}

inline void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return glbinding::FunctionObjects::current().glGenBuffersARB(n, buffers);
}

inline void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return glbinding::FunctionObjects::current().glGenFencesAPPLE(n, fences);
}

inline void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glbinding::FunctionObjects::current().glGenFencesNV(n, fences);
}

inline GLuint glGenFragmentShadersATI(GLuint range)
{
    return glbinding::FunctionObjects::current().glGenFragmentShadersATI(range);
}

inline void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().glGenFramebuffersEXT(n, framebuffers);
}

inline void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return glbinding::FunctionObjects::current().glGenNamesAMD(identifier, num, names);
}

inline void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().glGenOcclusionQueriesNV(n, ids);
}

inline GLuint glGenPathsNV(GLsizei range)
{
    return glbinding::FunctionObjects::current().glGenPathsNV(range);
}

inline void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::FunctionObjects::current().glGenPerfMonitorsAMD(n, monitors);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::FunctionObjects::current().glGenProgramPipelines(n, pipelines);
}

inline void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return glbinding::FunctionObjects::current().glGenProgramsARB(n, programs);
}

inline void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return glbinding::FunctionObjects::current().glGenProgramsNV(n, programs);
}

inline void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().glGenQueriesARB(n, ids);
}

inline void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().glGenRenderbuffersEXT(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::FunctionObjects::current().glGenSamplers(count, samplers);
}

inline GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return glbinding::FunctionObjects::current().glGenSymbolsEXT(datatype, storagetype, range, components);
}

inline void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().glGenTexturesEXT(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().glGenTransformFeedbacks(n, ids);
}

inline void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().glGenTransformFeedbacksNV(n, ids);
}

inline void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return glbinding::FunctionObjects::current().glGenVertexArraysAPPLE(n, arrays);
}

inline GLuint glGenVertexShadersEXT(GLuint range)
{
    return glbinding::FunctionObjects::current().glGenVertexShadersEXT(range);
}

inline void glGenerateMipmapEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().glGenerateMipmapEXT(target);
}

inline void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return glbinding::FunctionObjects::current().glGenerateMultiTexMipmapEXT(texunit, target);
}

inline void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return glbinding::FunctionObjects::current().glGenerateTextureMipmapEXT(texture, target);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::FunctionObjects::current().glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::FunctionObjects::current().glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::FunctionObjects::current().glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::FunctionObjects::current().glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

inline void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetArrayObjectfvATI(array, pname, params);
}

inline void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetArrayObjectivATI(array, pname, params);
}

inline void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return glbinding::FunctionObjects::current().glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

inline GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().glGetAttribLocationARB(programObj, name);
}

inline void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetBooleanIndexedvEXT(target, index, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().glGetBufferParameteri64v(target, pname, params);
}

inline void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetBufferParameterivARB(target, pname, params);
}

inline void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetBufferParameterui64vNV(target, pname, params);
}

inline void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetBufferPointervARB(target, pname, params);
}

inline void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return glbinding::FunctionObjects::current().glGetBufferSubDataARB(target, offset, size, data);
}

inline void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return glbinding::FunctionObjects::current().glGetClipPlanefOES(plane, equation);
}

inline void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return glbinding::FunctionObjects::current().glGetClipPlanexOES(plane, equation);
}

inline void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::FunctionObjects::current().glGetColorTable(target, format, type, table);
}

inline void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return glbinding::FunctionObjects::current().glGetColorTableEXT(target, format, type, data);
}

inline void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameterfv(target, pname, params);
}

inline void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameterfvEXT(target, pname, params);
}

inline void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameterfvSGI(target, pname, params);
}

inline void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameteriv(target, pname, params);
}

inline void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameterivEXT(target, pname, params);
}

inline void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetColorTableParameterivSGI(target, pname, params);
}

inline void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::FunctionObjects::current().glGetColorTableSGI(target, format, type, table);
}

inline void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

inline void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

inline void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetCombinerStageParameterfvNV(stage, pname, params);
}

inline void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return glbinding::FunctionObjects::current().glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

inline void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return glbinding::FunctionObjects::current().glGetCompressedTexImageARB(target, level, img);
}

inline void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return glbinding::FunctionObjects::current().glGetCompressedTextureImageEXT(texture, target, lod, img);
}

inline void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::FunctionObjects::current().glGetConvolutionFilter(target, format, type, image);
}

inline void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::FunctionObjects::current().glGetConvolutionFilterEXT(target, format, type, image);
}

inline void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetConvolutionParameterfv(target, pname, params);
}

inline void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetConvolutionParameterfvEXT(target, pname, params);
}

inline void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetConvolutionParameteriv(target, pname, params);
}

inline void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetConvolutionParameterivEXT(target, pname, params);
}

inline void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetConvolutionParameterxvOES(target, pname, params);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::FunctionObjects::current().glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return glbinding::FunctionObjects::current().glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

inline GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::FunctionObjects::current().glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::FunctionObjects::current().glGetDetailTexFuncSGIS(target, points);
}

inline void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::FunctionObjects::current().glGetDoubleIndexedvEXT(target, index, data);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::FunctionObjects::current().glGetDoublei_v(target, index, data);
}

inline void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetDoublei_vEXT(pname, index, params);
}

inline void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFenceivNV(fence, pname, params);
}

inline void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

inline void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFinalCombinerInputParameterivNV(variable, pname, params);
}

inline void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glbinding::FunctionObjects::current().glGetFirstPerfQueryIdINTEL(queryId);
}

inline void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetFixedvOES(pname, params);
}

inline void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetFloatIndexedvEXT(target, index, data);
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetFloati_v(target, index, data);
}

inline void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetFloati_vEXT(pname, index, params);
}

inline void glGetFogFuncSGIS(GLfloat * points)
{
    return glbinding::FunctionObjects::current().glGetFogFuncSGIS(points);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetFragDataLocationEXT(program, name);
}

inline void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetFragmentLightfvSGIX(light, pname, params);
}

inline void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFragmentLightivSGIX(light, pname, params);
}

inline void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetFragmentMaterialfvSGIX(face, pname, params);
}

inline void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFragmentMaterialivSGIX(face, pname, params);
}

inline void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFramebufferParameteriv(target, pname, params);
}

inline void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetFramebufferParameterivEXT(framebuffer, pname, params);
}

inline GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glGetGraphicsResetStatusARB());
}

inline GLhandleARB glGetHandleARB(GLenum pname)
{
    return glbinding::FunctionObjects::current().glGetHandleARB(pname);
}

inline void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().glGetHistogram(target, reset, format, type, values);
}

inline void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().glGetHistogramEXT(target, reset, format, type, values);
}

inline void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetHistogramParameterfv(target, pname, params);
}

inline void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetHistogramParameterfvEXT(target, pname, params);
}

inline void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetHistogramParameteriv(target, pname, params);
}

inline void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetHistogramParameterivEXT(target, pname, params);
}

inline void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetHistogramParameterxvOES(target, pname, params);
}

inline GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::FunctionObjects::current().glGetImageHandleARB(texture, level, layered, layer, format);
}

inline GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::FunctionObjects::current().glGetImageHandleNV(texture, level, layered, layer, format);
}

inline void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetImageTransformParameterfvHP(target, pname, params);
}

inline void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetImageTransformParameterivHP(target, pname, params);
}

inline void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return glbinding::FunctionObjects::current().glGetInfoLogARB(obj, maxLength, length, infoLog);
}

inline GLint glGetInstrumentsSGIX()
{
    return glbinding::FunctionObjects::current().glGetInstrumentsSGIX();
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::FunctionObjects::current().glGetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::FunctionObjects::current().glGetInteger64v(pname, data);
}

inline void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetIntegerIndexedvEXT(target, index, data);
}

inline void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return glbinding::FunctionObjects::current().glGetIntegerui64i_vNV(value, index, result);
}

inline void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return glbinding::FunctionObjects::current().glGetIntegerui64vNV(value, result);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::FunctionObjects::current().glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetInvariantBooleanvEXT(id, value, data);
}

inline void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetInvariantFloatvEXT(id, value, data);
}

inline void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetInvariantIntegervEXT(id, value, data);
}

inline void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetLightxOES(light, pname, params);
}

inline void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetListParameterfvSGIX(list, pname, params);
}

inline void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetListParameterivSGIX(list, pname, params);
}

inline void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetLocalConstantBooleanvEXT(id, value, data);
}

inline void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetLocalConstantFloatvEXT(id, value, data);
}

inline void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetLocalConstantIntegervEXT(id, value, data);
}

inline void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMapAttribParameterfvNV(target, index, pname, params);
}

inline void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMapAttribParameterivNV(target, index, pname, params);
}

inline void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return glbinding::FunctionObjects::current().glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

inline void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMapParameterfvNV(target, pname, params);
}

inline void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMapParameterivNV(target, pname, params);
}

inline void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return glbinding::FunctionObjects::current().glGetMapxvOES(target, query, v);
}

inline void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glGetMaterialxOES(face, pname, param);
}

inline void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().glGetMinmax(target, reset, format, type, values);
}

inline void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().glGetMinmaxEXT(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMinmaxParameterfv(target, pname, params);
}

inline void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMinmaxParameterfvEXT(target, pname, params);
}

inline void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMinmaxParameteriv(target, pname, params);
}

inline void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMinmaxParameterivEXT(target, pname, params);
}

inline void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

inline void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::FunctionObjects::current().glGetMultisamplefv(pname, index, val);
}

inline void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::FunctionObjects::current().glGetMultisamplefvNV(pname, index, val);
}

inline void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedBufferParameterivEXT(buffer, pname, params);
}

inline void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetNamedBufferParameterui64vNV(buffer, pname, params);
}

inline void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetNamedBufferPointervEXT(buffer, pname, params);
}

inline void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::FunctionObjects::current().glGetNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

inline void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

inline void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

inline void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramStringEXT(program, target, pname, string);
}

inline void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedProgramivEXT(program, target, pname, params);
}

inline void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

inline void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return glbinding::FunctionObjects::current().glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

inline void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetNamedStringivARB(namelen, name, pname, params);
}

inline void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glbinding::FunctionObjects::current().glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

inline void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetObjectBufferfvATI(buffer, pname, params);
}

inline void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetObjectBufferivATI(buffer, pname, params);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().glGetObjectLabel(identifier, name, bufSize, length, label);
}

inline void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().glGetObjectLabelEXT(type, object, bufSize, length, label);
}

inline void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetObjectParameterfvARB(obj, pname, params);
}

inline void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetObjectParameterivAPPLE(objectType, name, pname, params);
}

inline void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetObjectParameterivARB(obj, pname, params);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().glGetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetOcclusionQueryivNV(id, pname, params);
}

inline void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetOcclusionQueryuivNV(id, pname, params);
}

inline void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().glGetPathColorGenfvNV(color, pname, value);
}

inline void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().glGetPathColorGenivNV(color, pname, value);
}

inline void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glbinding::FunctionObjects::current().glGetPathCommandsNV(path, commands);
}

inline void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glGetPathCoordsNV(path, coords);
}

inline void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glbinding::FunctionObjects::current().glGetPathDashArrayNV(path, dashArray);
}

inline GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glbinding::FunctionObjects::current().glGetPathLengthNV(path, startSegment, numSegments);
}

inline void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glbinding::FunctionObjects::current().glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

inline void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glbinding::FunctionObjects::current().glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

inline void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().glGetPathParameterfvNV(path, pname, value);
}

inline void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().glGetPathParameterivNV(path, pname, value);
}

inline void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glbinding::FunctionObjects::current().glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

inline void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().glGetPathTexGenfvNV(texCoordSet, pname, value);
}

inline void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().glGetPathTexGenivNV(texCoordSet, pname, value);
}

inline void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glbinding::FunctionObjects::current().glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

inline void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

inline void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

inline void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

inline void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

inline void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

inline void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glbinding::FunctionObjects::current().glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

inline void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glbinding::FunctionObjects::current().glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

inline void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glbinding::FunctionObjects::current().glGetPerfQueryIdByNameINTEL(queryName, queryId);
}

inline void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glbinding::FunctionObjects::current().glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

inline void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return glbinding::FunctionObjects::current().glGetPixelMapxv(map, size, values);
}

inline void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetPixelTexGenParameterfvSGIS(pname, params);
}

inline void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetPixelTexGenParameterivSGIS(pname, params);
}

inline void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetPixelTransformParameterfvEXT(target, pname, params);
}

inline void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetPixelTransformParameterivEXT(target, pname, params);
}

inline void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return glbinding::FunctionObjects::current().glGetPointerIndexedvEXT(target, index, data);
}

inline void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return glbinding::FunctionObjects::current().glGetPointeri_vEXT(pname, index, params);
}

inline void glGetPointervEXT(GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetPointervEXT(pname, params);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::FunctionObjects::current().glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramEnvParameterIivNV(target, index, params);
}

inline void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramEnvParameterIuivNV(target, index, params);
}

inline void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetProgramEnvParameterdvARB(target, index, params);
}

inline void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetProgramEnvParameterfvARB(target, index, params);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramInterfaceiv(program, programInterface, pname, params);
}

inline void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramLocalParameterIivNV(target, index, params);
}

inline void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramLocalParameterIuivNV(target, index, params);
}

inline void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetProgramLocalParameterdvARB(target, index, params);
}

inline void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetProgramLocalParameterfvARB(target, index, params);
}

inline void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetProgramNamedParameterdvNV(id, len, name, params);
}

inline void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetProgramNamedParameterfvNV(id, len, name, params);
}

inline void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetProgramParameterdvNV(target, index, pname, params);
}

inline void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetProgramParameterfvNV(target, index, pname, params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramPipelineiv(pipeline, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetProgramResourceIndex(program, programInterface, name);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetProgramResourceLocation(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetProgramResourceLocationIndex(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().glGetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return glbinding::FunctionObjects::current().glGetProgramStringARB(target, pname, string);
}

inline void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return glbinding::FunctionObjects::current().glGetProgramStringNV(id, pname, program);
}

inline void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return glbinding::FunctionObjects::current().glGetProgramSubroutineParameteruivNV(target, index, param);
}

inline void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramivARB(target, pname, params);
}

inline void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetProgramivNV(id, pname, params);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjecti64vEXT(id, pname, params);
}

inline void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectivARB(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectui64vEXT(id, pname, params);
}

inline void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryObjectuivARB(id, pname, params);
}

inline void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetQueryivARB(target, pname, params);
}

inline void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetRenderbufferParameterivEXT(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetSamplerParameteriv(sampler, pname, params);
}

inline void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::FunctionObjects::current().glGetSeparableFilter(target, format, type, row, column, span);
}

inline void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::FunctionObjects::current().glGetSeparableFilterEXT(target, format, type, row, column, span);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::FunctionObjects::current().glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return glbinding::FunctionObjects::current().glGetShaderSourceARB(obj, maxLength, length, source);
}

inline void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::FunctionObjects::current().glGetSharpenTexFuncSGIS(target, points);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::FunctionObjects::current().glGetSynciv(sync, pname, bufSize, length, values);
}

inline void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return glbinding::FunctionObjects::current().glGetTexBumpParameterfvATI(pname, param);
}

inline void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().glGetTexBumpParameterivATI(pname, param);
}

inline void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetTexEnvxvOES(target, pname, params);
}

inline void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return glbinding::FunctionObjects::current().glGetTexFilterFuncSGIS(target, filter, weights);
}

inline void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetTexGenxvOES(coord, pname, params);
}

inline void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetTexLevelParameterxvOES(target, level, pname, params);
}

inline void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterIivEXT(target, pname, params);
}

inline void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterIuivEXT(target, pname, params);
}

inline void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterPointervAPPLE(target, pname, params);
}

inline void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().glGetTexParameterxvOES(target, pname, params);
}

inline GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return glbinding::FunctionObjects::current().glGetTextureHandleARB(texture);
}

inline GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glbinding::FunctionObjects::current().glGetTextureHandleNV(texture);
}

inline void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

inline void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

inline void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

inline void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTextureParameterIivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetTextureParameterfvEXT(texture, target, pname, params);
}

inline void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTextureParameterivEXT(texture, target, pname, params);
}

inline GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return glbinding::FunctionObjects::current().glGetTextureSamplerHandleARB(texture, sampler);
}

inline GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glbinding::FunctionObjects::current().glGetTextureSamplerHandleNV(texture, sampler);
}

inline void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetTrackMatrixivNV(target, address, pname, params);
}

inline void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return glbinding::FunctionObjects::current().glGetTransformFeedbackVaryingNV(program, index, location);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::FunctionObjects::current().glGetUniformBlockIndex(program, uniformBlockName);
}

inline GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return glbinding::FunctionObjects::current().glGetUniformBufferSizeEXT(program, location);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::FunctionObjects::current().glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().glGetUniformLocationARB(programObj, name);
}

inline GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return glbinding::FunctionObjects::current().glGetUniformOffsetEXT(program, location);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetUniformdv(program, location, params);
}

inline void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetUniformfvARB(programObj, location, params);
}

inline void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetUniformi64vNV(program, location, params);
}

inline void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetUniformivARB(programObj, location, params);
}

inline void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetUniformui64vNV(program, location, params);
}

inline void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetUniformuivEXT(program, location, params);
}

inline void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVariantArrayObjectfvATI(id, pname, params);
}

inline void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVariantArrayObjectivATI(id, pname, params);
}

inline void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().glGetVariantBooleanvEXT(id, value, data);
}

inline void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().glGetVariantFloatvEXT(id, value, data);
}

inline void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().glGetVariantIntegervEXT(id, value, data);
}

inline void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return glbinding::FunctionObjects::current().glGetVariantPointervEXT(id, value, data);
}

inline GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glGetVaryingLocationNV(program, name);
}

inline void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

inline void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return glbinding::FunctionObjects::current().glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return glbinding::FunctionObjects::current().glGetVertexArrayPointervEXT(vaobj, pname, param);
}

inline void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

inline void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribArrayObjectivATI(index, pname, params);
}

inline void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribIivEXT(index, pname, params);
}

inline void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribIuivEXT(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribLdvEXT(index, pname, params);
}

inline void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribLi64vNV(index, pname, params);
}

inline void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribLui64vARB(index, pname, params);
}

inline void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribLui64vNV(index, pname, params);
}

inline void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribPointervARB(index, pname, pointer);
}

inline void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribPointervNV(index, pname, pointer);
}

inline void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribdvARB(index, pname, params);
}

inline void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribdvNV(index, pname, params);
}

inline void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribfvARB(index, pname, params);
}

inline void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribfvNV(index, pname, params);
}

inline void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribivARB(index, pname, params);
}

inline void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVertexAttribivNV(index, pname, params);
}

inline void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVideoCaptureivNV(video_capture_slot, pname, params);
}

inline void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetVideoi64vNV(video_slot, pname, params);
}

inline void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetVideoivNV(video_slot, pname, params);
}

inline void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().glGetVideoui64vNV(video_slot, pname, params);
}

inline void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetVideouivNV(video_slot, pname, params);
}

inline void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::FunctionObjects::current().glGetnColorTableARB(target, format, type, bufSize, table);
}

inline void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return glbinding::FunctionObjects::current().glGetnCompressedTexImageARB(target, lod, bufSize, img);
}

inline void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::FunctionObjects::current().glGetnConvolutionFilterARB(target, format, type, bufSize, image);
}

inline void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::FunctionObjects::current().glGetnHistogramARB(target, reset, format, type, bufSize, values);
}

inline void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::FunctionObjects::current().glGetnMapdvARB(target, query, bufSize, v);
}

inline void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::FunctionObjects::current().glGetnMapfvARB(target, query, bufSize, v);
}

inline void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::FunctionObjects::current().glGetnMapivARB(target, query, bufSize, v);
}

inline void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::FunctionObjects::current().glGetnMinmaxARB(target, reset, format, type, bufSize, values);
}

inline void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::FunctionObjects::current().glGetnPixelMapfvARB(map, bufSize, values);
}

inline void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::FunctionObjects::current().glGetnPixelMapuivARB(map, bufSize, values);
}

inline void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::FunctionObjects::current().glGetnPixelMapusvARB(map, bufSize, values);
}

inline void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::FunctionObjects::current().glGetnPolygonStippleARB(bufSize, pattern);
}

inline void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::FunctionObjects::current().glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return glbinding::FunctionObjects::current().glGetnTexImageARB(target, level, format, type, bufSize, img);
}

inline void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::FunctionObjects::current().glGetnUniformdvARB(program, location, bufSize, params);
}

inline void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::FunctionObjects::current().glGetnUniformfvARB(program, location, bufSize, params);
}

inline void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::FunctionObjects::current().glGetnUniformivARB(program, location, bufSize, params);
}

inline void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::FunctionObjects::current().glGetnUniformuivARB(program, location, bufSize, params);
}

inline void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactorbSUN(factor);
}

inline void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactordSUN(factor);
}

inline void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactorfSUN(factor);
}

inline void glGlobalAlphaFactoriSUN(GLint factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactoriSUN(factor);
}

inline void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactorsSUN(factor);
}

inline void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactorubSUN(factor);
}

inline void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactoruiSUN(factor);
}

inline void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return glbinding::FunctionObjects::current().glGlobalAlphaFactorusSUN(factor);
}

inline void glHintPGI(GLenum target, GLint mode)
{
    return glbinding::FunctionObjects::current().glHintPGI(target, mode);
}

inline void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().glHistogram(target, width, internalformat, sink);
}

inline void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().glHistogramEXT(target, width, internalformat, sink);
}

inline void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return glbinding::FunctionObjects::current().glIglooInterfaceSGIX(pname, params);
}

inline void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glImageTransformParameterfHP(target, pname, param);
}

inline void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glImageTransformParameterfvHP(target, pname, params);
}

inline void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glImageTransformParameteriHP(target, pname, param);
}

inline void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glImageTransformParameterivHP(target, pname, params);
}

inline GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().glImportSyncEXT(external_sync_type, external_sync, flags);
}

inline void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glIndexFormatNV(type, stride);
}

inline void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return glbinding::FunctionObjects::current().glIndexFuncEXT(func, ref);
}

inline void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glIndexMaterialEXT(face, mode);
}

inline void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().glIndexPointerEXT(type, stride, count, pointer);
}

inline void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glIndexxOES(GLfixed component)
{
    return glbinding::FunctionObjects::current().glIndexxOES(component);
}

inline void glIndexxvOES(const GLfixed * component)
{
    return glbinding::FunctionObjects::current().glIndexxvOES(component);
}

inline void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::FunctionObjects::current().glInsertComponentEXT(res, src, num);
}

inline void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::FunctionObjects::current().glInsertEventMarkerEXT(length, marker);
}

inline void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return glbinding::FunctionObjects::current().glInstrumentsBufferSGIX(size, buffer);
}

inline void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glbinding::FunctionObjects::current().glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}

inline void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glInvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().glInvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::FunctionObjects::current().glInvalidateFramebuffer(target, numAttachments, attachments);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glInvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::FunctionObjects::current().glIsAsyncMarkerSGIX(marker);
}

inline GLboolean glIsBufferARB(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glIsBufferARB(buffer);
}

inline GLboolean glIsBufferResidentNV(GLenum target)
{
    return glbinding::FunctionObjects::current().glIsBufferResidentNV(target);
}

inline GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().glIsEnabledIndexedEXT(target, index);
}

inline GLboolean glIsFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().glIsFenceAPPLE(fence);
}

inline GLboolean glIsFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().glIsFenceNV(fence);
}

inline GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().glIsFramebufferEXT(framebuffer);
}

inline GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glIsImageHandleResidentARB(handle);
}

inline GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glIsImageHandleResidentNV(handle);
}

inline GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return glbinding::FunctionObjects::current().glIsNameAMD(identifier, name);
}

inline GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glIsNamedBufferResidentNV(buffer);
}

inline GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::FunctionObjects::current().glIsNamedStringARB(namelen, name);
}

inline GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glIsObjectBufferATI(buffer);
}

inline GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsOcclusionQueryNV(id);
}

inline GLboolean glIsPathNV(GLuint path)
{
    return glbinding::FunctionObjects::current().glIsPathNV(path);
}

inline GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glIsPointInFillPathNV(path, mask, x, y);
}

inline GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glIsPointInStrokePathNV(path, x, y);
}

inline GLboolean glIsProgramARB(GLuint program)
{
    return glbinding::FunctionObjects::current().glIsProgramARB(program);
}

inline GLboolean glIsProgramNV(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsProgramNV(id);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().glIsProgramPipeline(pipeline);
}

inline GLboolean glIsQueryARB(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsQueryARB(id);
}

inline GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glIsRenderbufferEXT(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::FunctionObjects::current().glIsSampler(sampler);
}

inline GLboolean glIsSync(GLsync sync)
{
    return glbinding::FunctionObjects::current().glIsSync(sync);
}

inline GLboolean glIsTextureEXT(GLuint texture)
{
    return glbinding::FunctionObjects::current().glIsTextureEXT(texture);
}

inline GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glIsTextureHandleResidentARB(handle);
}

inline GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glIsTextureHandleResidentNV(handle);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsTransformFeedback(id);
}

inline GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return glbinding::FunctionObjects::current().glIsTransformFeedbackNV(id);
}

inline GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return glbinding::FunctionObjects::current().glIsVariantEnabledEXT(id, cap);
}

inline GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return glbinding::FunctionObjects::current().glIsVertexArrayAPPLE(array);
}

inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().glIsVertexAttribEnabledAPPLE(index, pname);
}

inline void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().glLabelObjectEXT(type, object, length, label);
}

inline void glLightEnviSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glLightEnviSGIX(pname, param);
}

inline void glLightModelxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glLightModelxOES(pname, param);
}

inline void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().glLightModelxvOES(pname, param);
}

inline void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glLightxOES(light, pname, param);
}

inline void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glLightxvOES(light, pname, params);
}

inline void glLineWidthxOES(GLfixed width)
{
    return glbinding::FunctionObjects::current().glLineWidthxOES(width);
}

inline void glLinkProgramARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().glLinkProgramARB(programObj);
}

inline void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glListParameterfSGIX(list, pname, param);
}

inline void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glListParameterfvSGIX(list, pname, params);
}

inline void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glListParameteriSGIX(list, pname, param);
}

inline void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glListParameterivSGIX(list, pname, params);
}

inline void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return glbinding::FunctionObjects::current().glLoadIdentityDeformationMapSGIX(mask);
}

inline void glLoadMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().glLoadMatrixxOES(m);
}

inline void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return glbinding::FunctionObjects::current().glLoadProgramNV(target, id, len, program);
}

inline void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glLoadTransposeMatrixdARB(m);
}

inline void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glLoadTransposeMatrixfARB(m);
}

inline void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().glLoadTransposeMatrixxOES(m);
}

inline void glLockArraysEXT(GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().glLockArraysEXT(first, count);
}

inline void glMakeBufferNonResidentNV(GLenum target)
{
    return glbinding::FunctionObjects::current().glMakeBufferNonResidentNV(target);
}

inline void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().glMakeBufferResidentNV(target, access);
}

inline void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeImageHandleNonResidentARB(handle);
}

inline void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeImageHandleNonResidentNV(handle);
}

inline void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return glbinding::FunctionObjects::current().glMakeImageHandleResidentARB(handle, access);
}

inline void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glbinding::FunctionObjects::current().glMakeImageHandleResidentNV(handle, access);
}

inline void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glMakeNamedBufferNonResidentNV(buffer);
}

inline void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return glbinding::FunctionObjects::current().glMakeNamedBufferResidentNV(buffer, access);
}

inline void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeTextureHandleNonResidentARB(handle);
}

inline void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeTextureHandleNonResidentNV(handle);
}

inline void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeTextureHandleResidentARB(handle);
}

inline void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().glMakeTextureHandleResidentNV(handle);
}

inline void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return glbinding::FunctionObjects::current().glMap1xOES(target, u1, u2, stride, order, points);
}

inline void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return glbinding::FunctionObjects::current().glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBufferARB(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().glMapBufferARB(target, access);
}

inline void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return glbinding::FunctionObjects::current().glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

inline void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return glbinding::FunctionObjects::current().glMapGrid1xOES(n, u1, u2);
}

inline void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return glbinding::FunctionObjects::current().glMapGrid2xOES(n, u1, u2, v1, v2);
}

inline void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return glbinding::FunctionObjects::current().glMapNamedBufferEXT(buffer, access);
}

inline void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::FunctionObjects::current().glMapNamedBufferRangeEXT(buffer, offset, length, access);
}

inline void * glMapObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glMapObjectBufferATI(buffer);
}

inline void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glMapParameterfvNV(target, pname, params);
}

inline void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMapParameterivNV(target, pname, params);
}

inline void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return glbinding::FunctionObjects::current().glMapTexture2DINTEL(texture, level, access, stride, layout);
}

inline void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glMaterialxOES(face, pname, param);
}

inline void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().glMaterialxvOES(face, pname, param);
}

inline void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glMatrixIndexPointerARB(size, type, stride, pointer);
}

inline void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return glbinding::FunctionObjects::current().glMatrixIndexubvARB(size, indices);
}

inline void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return glbinding::FunctionObjects::current().glMatrixIndexuivARB(size, indices);
}

inline void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return glbinding::FunctionObjects::current().glMatrixIndexusvARB(size, indices);
}

inline void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoad3x2fNV(matrixMode, m);
}

inline void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoad3x3fNV(matrixMode, m);
}

inline void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glMatrixLoadIdentityEXT(mode);
}

inline void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoadTranspose3x3fNV(matrixMode, m);
}

inline void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoadTransposedEXT(mode, m);
}

inline void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoadTransposefEXT(mode, m);
}

inline void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoaddEXT(mode, m);
}

inline void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixLoadfEXT(mode, m);
}

inline void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixMult3x2fNV(matrixMode, m);
}

inline void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixMult3x3fNV(matrixMode, m);
}

inline void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixMultTranspose3x3fNV(matrixMode, m);
}

inline void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMatrixMultTransposedEXT(mode, m);
}

inline void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixMultTransposefEXT(mode, m);
}

inline void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMatrixMultdEXT(mode, m);
}

inline void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMatrixMultfEXT(mode, m);
}

inline void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixPopEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glMatrixPopEXT(mode);
}

inline void glMatrixPushEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glMatrixPushEXT(mode);
}

inline void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glMatrixRotatedEXT(mode, angle, x, y, z);
}

inline void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glMatrixRotatefEXT(mode, angle, x, y, z);
}

inline void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glMatrixScaledEXT(mode, x, y, z);
}

inline void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glMatrixScalefEXT(mode, x, y, z);
}

inline void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glMatrixTranslatedEXT(mode, x, y, z);
}

inline void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glMatrixTranslatefEXT(mode, x, y, z);
}

inline void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::FunctionObjects::current().glMemoryBarrier(barriers);
}

inline void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return glbinding::FunctionObjects::current().glMemoryBarrierEXT(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
    return glbinding::FunctionObjects::current().glMinSampleShading(value);
}

inline void glMinSampleShadingARB(GLfloat value)
{
    return glbinding::FunctionObjects::current().glMinSampleShadingARB(value);
}

inline void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().glMinmax(target, internalformat, sink);
}

inline void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().glMinmaxEXT(target, internalformat, sink);
}

inline void glMultMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().glMultMatrixxOES(m);
}

inline void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().glMultTransposeMatrixdARB(m);
}

inline void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().glMultTransposeMatrixfARB(m);
}

inline void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().glMultTransposeMatrixxOES(m);
}

inline void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysEXT(mode, first, count, primcount);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

inline void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

inline void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

inline void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

inline void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

inline void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return glbinding::FunctionObjects::current().glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

inline void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return glbinding::FunctionObjects::current().glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

inline void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

inline void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1bOES(texture, s);
}

inline void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1bvOES(texture, coords);
}

inline void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1dARB(target, s);
}

inline void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1dvARB(target, v);
}

inline void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1fARB(target, s);
}

inline void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1fvARB(target, v);
}

inline void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1hNV(target, s);
}

inline void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1hvNV(target, v);
}

inline void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1iARB(target, s);
}

inline void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1ivARB(target, v);
}

inline void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1sARB(target, s);
}

inline void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1svARB(target, v);
}

inline void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1xOES(texture, s);
}

inline void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord1xvOES(texture, coords);
}

inline void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2bOES(texture, s, t);
}

inline void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2bvOES(texture, coords);
}

inline void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2dARB(target, s, t);
}

inline void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2dvARB(target, v);
}

inline void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2fARB(target, s, t);
}

inline void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2fvARB(target, v);
}

inline void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2hNV(target, s, t);
}

inline void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2hvNV(target, v);
}

inline void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2iARB(target, s, t);
}

inline void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2ivARB(target, v);
}

inline void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2sARB(target, s, t);
}

inline void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2svARB(target, v);
}

inline void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2xOES(texture, s, t);
}

inline void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord2xvOES(texture, coords);
}

inline void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3bOES(texture, s, t, r);
}

inline void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3bvOES(texture, coords);
}

inline void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3dARB(target, s, t, r);
}

inline void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3dvARB(target, v);
}

inline void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3fARB(target, s, t, r);
}

inline void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3fvARB(target, v);
}

inline void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3hNV(target, s, t, r);
}

inline void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3hvNV(target, v);
}

inline void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3iARB(target, s, t, r);
}

inline void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3ivARB(target, v);
}

inline void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3sARB(target, s, t, r);
}

inline void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3svARB(target, v);
}

inline void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3xOES(texture, s, t, r);
}

inline void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord3xvOES(texture, coords);
}

inline void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4bOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4bvOES(texture, coords);
}

inline void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4dARB(target, s, t, r, q);
}

inline void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4dvARB(target, v);
}

inline void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4fARB(target, s, t, r, q);
}

inline void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4fvARB(target, v);
}

inline void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4hNV(target, s, t, r, q);
}

inline void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4hvNV(target, v);
}

inline void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4iARB(target, s, t, r, q);
}

inline void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4ivARB(target, v);
}

inline void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4sARB(target, s, t, r, q);
}

inline void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4svARB(target, v);
}

inline void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4xOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoord4xvOES(texture, coords);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordP4uiv(texture, type, coords);
}

inline void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

inline void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glMultiTexEnvfEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glMultiTexEnviEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::FunctionObjects::current().glMultiTexGendEXT(texunit, coord, pname, param);
}

inline void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glMultiTexGenfEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glMultiTexGeniEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

inline void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glMultiTexParameterfEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glMultiTexParameteriEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

inline void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

inline void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().glNamedBufferDataEXT(buffer, size, data, usage);
}

inline void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::FunctionObjects::current().glNamedBufferStorageEXT(buffer, size, data, flags);
}

inline void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::FunctionObjects::current().glNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

inline void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

inline void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

inline void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

inline void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

inline void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().glNamedProgramStringEXT(program, target, format, len, string);
}

inline void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

inline void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return glbinding::FunctionObjects::current().glNamedStringARB(type, namelen, name, stringlen, string);
}

inline GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return glbinding::FunctionObjects::current().glNewObjectBufferATI(size, pointer, usage);
}

inline void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

inline void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glNormal3fVertex3fvSUN(n, v);
}

inline void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return glbinding::FunctionObjects::current().glNormal3hNV(nx, ny, nz);
}

inline void glNormal3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glNormal3hvNV(v);
}

inline void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return glbinding::FunctionObjects::current().glNormal3xOES(nx, ny, nz);
}

inline void glNormal3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glNormal3xvOES(coords);
}

inline void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glNormalFormatNV(type, stride);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glNormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glNormalP3uiv(type, coords);
}

inline void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().glNormalPointerEXT(type, stride, count, pointer);
}

inline void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().glNormalPointervINTEL(type, pointer);
}

inline void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::FunctionObjects::current().glNormalStream3bATI(stream, nx, ny, nz);
}

inline void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glNormalStream3bvATI(stream, coords);
}

inline void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::FunctionObjects::current().glNormalStream3dATI(stream, nx, ny, nz);
}

inline void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().glNormalStream3dvATI(stream, coords);
}

inline void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::FunctionObjects::current().glNormalStream3fATI(stream, nx, ny, nz);
}

inline void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glNormalStream3fvATI(stream, coords);
}

inline void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return glbinding::FunctionObjects::current().glNormalStream3iATI(stream, nx, ny, nz);
}

inline void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().glNormalStream3ivATI(stream, coords);
}

inline void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::FunctionObjects::current().glNormalStream3sATI(stream, nx, ny, nz);
}

inline void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().glNormalStream3svATI(stream, coords);
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().glObjectLabel(identifier, name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().glObjectPtrLabel(ptr, length, label);
}

inline GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glObjectPurgeableAPPLE(objectType, name, option));
}

inline GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glObjectUnpurgeableAPPLE(objectType, name, option));
}

inline void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().glOrthofOES(l, r, b, t, n, f);
}

inline void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().glOrthoxOES(l, r, b, t, n, f);
}

inline void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPNTrianglesfATI(pname, param);
}

inline void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPNTrianglesiATI(pname, param);
}

inline void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return glbinding::FunctionObjects::current().glPassTexCoordATI(dst, coord, swizzle);
}

inline void glPassThroughxOES(GLfixed token)
{
    return glbinding::FunctionObjects::current().glPassThroughxOES(token);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::FunctionObjects::current().glPatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glPatchParameteri(pname, value);
}

inline void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return glbinding::FunctionObjects::current().glPathColorGenNV(color, genMode, colorFormat, coeffs);
}

inline void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().glPathCoordsNV(path, numCoords, coordType, coords);
}

inline void glPathCoverDepthFuncNV(GLenum func)
{
    return glbinding::FunctionObjects::current().glPathCoverDepthFuncNV(func);
}

inline void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glbinding::FunctionObjects::current().glPathDashArrayNV(path, dashCount, dashArray);
}

inline void glPathFogGenNV(GLenum genMode)
{
    return glbinding::FunctionObjects::current().glPathFogGenNV(genMode);
}

inline GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

inline GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint2 baseAndCount)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount));
}

inline void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::FunctionObjects::current().glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::FunctionObjects::current().glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

inline void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glbinding::FunctionObjects::current().glPathParameterfNV(path, pname, value);
}

inline void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glPathParameterfvNV(path, pname, value);
}

inline void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glPathParameteriNV(path, pname, value);
}

inline void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glbinding::FunctionObjects::current().glPathParameterivNV(path, pname, value);
}

inline void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glbinding::FunctionObjects::current().glPathStencilDepthOffsetNV(factor, units);
}

inline void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().glPathStencilFuncNV(func, ref, mask);
}

inline void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glbinding::FunctionObjects::current().glPathStringNV(path, format, length, pathString);
}

inline void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

inline void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::FunctionObjects::current().glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}

inline void glPauseTransformFeedback()
{
    return glbinding::FunctionObjects::current().glPauseTransformFeedback();
}

inline void glPauseTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().glPauseTransformFeedbackNV();
}

inline void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().glPixelDataRangeNV(target, length, pointer);
}

inline void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return glbinding::FunctionObjects::current().glPixelMapx(map, size, values);
}

inline void glPixelStorex(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glPixelStorex(pname, param);
}

inline void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPixelTexGenParameterfSGIS(pname, param);
}

inline void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPixelTexGenParameterfvSGIS(pname, params);
}

inline void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPixelTexGenParameteriSGIS(pname, param);
}

inline void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glPixelTexGenParameterivSGIS(pname, params);
}

inline void glPixelTexGenSGIX(GLenum mode)
{
    return glbinding::FunctionObjects::current().glPixelTexGenSGIX(mode);
}

inline void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glPixelTransferxOES(pname, param);
}

inline void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPixelTransformParameterfEXT(target, pname, param);
}

inline void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPixelTransformParameterfvEXT(target, pname, params);
}

inline void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPixelTransformParameteriEXT(target, pname, param);
}

inline void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glPixelTransformParameterivEXT(target, pname, params);
}

inline void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return glbinding::FunctionObjects::current().glPixelZoomxOES(xfactor, yfactor);
}

inline GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glbinding::FunctionObjects::current().glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

inline void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPointParameterfARB(pname, param);
}

inline void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPointParameterfEXT(pname, param);
}

inline void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glPointParameterfSGIS(pname, param);
}

inline void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPointParameterfvARB(pname, params);
}

inline void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPointParameterfvEXT(pname, params);
}

inline void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glPointParameterfvSGIS(pname, params);
}

inline void glPointParameteriNV(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glPointParameteriNV(pname, param);
}

inline void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glPointParameterivNV(pname, params);
}

inline void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glPointParameterxvOES(pname, params);
}

inline void glPointSizexOES(GLfixed size)
{
    return glbinding::FunctionObjects::current().glPointSizexOES(size);
}

inline GLint glPollAsyncSGIX(GLuint * markerp)
{
    return glbinding::FunctionObjects::current().glPollAsyncSGIX(markerp);
}

inline GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return glbinding::FunctionObjects::current().glPollInstrumentsSGIX(marker_p);
}

inline void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return glbinding::FunctionObjects::current().glPolygonOffsetEXT(factor, bias);
}

inline void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return glbinding::FunctionObjects::current().glPolygonOffsetxOES(factor, units);
}

inline void glPopDebugGroup()
{
    return glbinding::FunctionObjects::current().glPopDebugGroup();
}

inline void glPopGroupMarkerEXT()
{
    return glbinding::FunctionObjects::current().glPopGroupMarkerEXT();
}

inline void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return glbinding::FunctionObjects::current().glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

inline void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return glbinding::FunctionObjects::current().glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

inline void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::FunctionObjects::current().glPrimitiveRestartIndex(index);
}

inline void glPrimitiveRestartIndexNV(GLuint index)
{
    return glbinding::FunctionObjects::current().glPrimitiveRestartIndexNV(index);
}

inline void glPrimitiveRestartNV()
{
    return glbinding::FunctionObjects::current().glPrimitiveRestartNV();
}

inline void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return glbinding::FunctionObjects::current().glPrioritizeTexturesEXT(n, textures, priorities);
}

inline void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return glbinding::FunctionObjects::current().glPrioritizeTexturesxOES(n, textures, priorities);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::FunctionObjects::current().glProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().glProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameter4dvARB(target, index, params);
}

inline void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameter4fvARB(target, index, params);
}

inline void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameterI4ivNV(target, index, params);
}

inline void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameterI4uivNV(target, index, params);
}

inline void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParameters4fvEXT(target, index, count, params);
}

inline void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParametersI4ivNV(target, index, count, params);
}

inline void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramEnvParametersI4uivNV(target, index, count, params);
}

inline void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameter4dvARB(target, index, params);
}

inline void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameter4fvARB(target, index, params);
}

inline void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameterI4ivNV(target, index, params);
}

inline void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameterI4uivNV(target, index, params);
}

inline void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParameters4fvEXT(target, index, count, params);
}

inline void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParametersI4ivNV(target, index, count, params);
}

inline void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramLocalParametersI4uivNV(target, index, count, params);
}

inline void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glProgramNamedParameter4dvNV(id, len, name, v);
}

inline void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glProgramNamedParameter4fvNV(id, len, name, v);
}

inline void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glProgramParameter4dNV(target, index, x, y, z, w);
}

inline void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glProgramParameter4dvNV(target, index, v);
}

inline void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glProgramParameter4fNV(target, index, x, y, z, w);
}

inline void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glProgramParameter4fvNV(target, index, v);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glProgramParameteri(program, pname, value);
}

inline void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glProgramParameteriARB(program, pname, value);
}

inline void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().glProgramParameteriEXT(program, pname, value);
}

inline void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glProgramParameters4dvNV(target, index, count, v);
}

inline void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glProgramParameters4fvNV(target, index, count, v);
}

inline void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::FunctionObjects::current().glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

inline void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().glProgramStringARB(target, format, len, string);
}

inline void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glProgramSubroutineParametersuivNV(target, count, params);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return glbinding::FunctionObjects::current().glProgramUniform1dEXT(program, location, x);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1dvEXT(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1fEXT(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1fvEXT(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().glProgramUniform1i64NV(program, location, x);
}

inline void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1i64vNV(program, location, count, value);
}

inline void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1iEXT(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1ivEXT(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().glProgramUniform1ui64NV(program, location, x);
}

inline void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1ui64vNV(program, location, count, value);
}

inline void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().glProgramUniform1uiEXT(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform1uivEXT(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glProgramUniform2dEXT(program, location, x, y);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2dvEXT(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2fEXT(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2fvEXT(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().glProgramUniform2i64NV(program, location, x, y);
}

inline void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2i64vNV(program, location, count, value);
}

inline void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2iEXT(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2ivEXT(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().glProgramUniform2ui64NV(program, location, x, y);
}

inline void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2ui64vNV(program, location, count, value);
}

inline void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().glProgramUniform2uiEXT(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform2uivEXT(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glProgramUniform3dEXT(program, location, x, y, z);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3dvEXT(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3fEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3fvEXT(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().glProgramUniform3i64NV(program, location, x, y, z);
}

inline void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3i64vNV(program, location, count, value);
}

inline void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3iEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3ivEXT(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().glProgramUniform3ui64NV(program, location, x, y, z);
}

inline void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3ui64vNV(program, location, count, value);
}

inline void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform3uivEXT(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glProgramUniform4dEXT(program, location, x, y, z, w);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4dvEXT(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4fvEXT(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().glProgramUniform4i64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4i64vNV(program, location, count, value);
}

inline void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4ivEXT(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().glProgramUniform4ui64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4ui64vNV(program, location, count, value);
}

inline void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glProgramUniform4uivEXT(program, location, count, value);
}

inline void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().glProgramUniformHandleui64ARB(program, location, value);
}

inline void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().glProgramUniformHandleui64NV(program, location, value);
}

inline void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::FunctionObjects::current().glProgramUniformHandleui64vARB(program, location, count, values);
}

inline void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::FunctionObjects::current().glProgramUniformHandleui64vNV(program, location, count, values);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return glbinding::FunctionObjects::current().glProgramUniformui64NV(program, location, value);
}

inline void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glProgramUniformui64vNV(program, location, count, value);
}

inline void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return glbinding::FunctionObjects::current().glProgramVertexLimitNV(target, limit);
}

inline void glProvokingVertex(GLenum mode)
{
    return glbinding::FunctionObjects::current().glProvokingVertex(mode);
}

inline void glProvokingVertexEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glProvokingVertexEXT(mode);
}

inline void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().glPushClientAttribDefaultEXT(mask);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::FunctionObjects::current().glPushDebugGroup(source, id, length, message);
}

inline void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::FunctionObjects::current().glPushGroupMarkerEXT(length, marker);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::FunctionObjects::current().glQueryCounter(id, target);
}

inline GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl30ext::GLbitfield>(glbinding::FunctionObjects::current().glQueryMatrixxOES(mantissa, exponent));
}

inline void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return glbinding::FunctionObjects::current().glQueryObjectParameteruiAMD(target, id, pname, param);
}

inline void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return glbinding::FunctionObjects::current().glRasterPos2xOES(x, y);
}

inline void glRasterPos2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glRasterPos2xvOES(coords);
}

inline void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().glRasterPos3xOES(x, y, z);
}

inline void glRasterPos3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glRasterPos3xvOES(coords);
}

inline void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return glbinding::FunctionObjects::current().glRasterPos4xOES(x, y, z, w);
}

inline void glRasterPos4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glRasterPos4xvOES(coords);
}

inline void glReadInstrumentsSGIX(GLint marker)
{
    return glbinding::FunctionObjects::current().glReadInstrumentsSGIX(marker);
}

inline void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::FunctionObjects::current().glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

inline void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return glbinding::FunctionObjects::current().glRectxOES(x1, y1, x2, y2);
}

inline void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return glbinding::FunctionObjects::current().glRectxvOES(v1, v2);
}

inline void glReferencePlaneSGIX(const GLdouble * equation)
{
    return glbinding::FunctionObjects::current().glReferencePlaneSGIX(equation);
}

inline void glReleaseShaderCompiler()
{
    return glbinding::FunctionObjects::current().glReleaseShaderCompiler();
}

inline void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glRenderbufferStorageEXT(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

inline void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return glbinding::FunctionObjects::current().glReplacementCodePointerSUN(type, stride, pointer);
}

inline void glReplacementCodeubSUN(GLubyte code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeubSUN(code);
}

inline void glReplacementCodeubvSUN(const GLubyte * code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeubvSUN(code);
}

inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

inline void glReplacementCodeuiSUN(GLuint code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiSUN(code);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

inline void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

inline void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuiVertex3fvSUN(rc, v);
}

inline void glReplacementCodeuivSUN(const GLuint * code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeuivSUN(code);
}

inline void glReplacementCodeusSUN(GLushort code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeusSUN(code);
}

inline void glReplacementCodeusvSUN(const GLushort * code)
{
    return glbinding::FunctionObjects::current().glReplacementCodeusvSUN(code);
}

inline void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().glRequestResidentProgramsNV(n, programs);
}

inline void glResetHistogram(GLenum target)
{
    return glbinding::FunctionObjects::current().glResetHistogram(target);
}

inline void glResetHistogramEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().glResetHistogramEXT(target);
}

inline void glResetMinmax(GLenum target)
{
    return glbinding::FunctionObjects::current().glResetMinmax(target);
}

inline void glResetMinmaxEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().glResetMinmaxEXT(target);
}

inline void glResizeBuffersMESA()
{
    return glbinding::FunctionObjects::current().glResizeBuffersMESA();
}

inline void glResumeTransformFeedback()
{
    return glbinding::FunctionObjects::current().glResumeTransformFeedback();
}

inline void glResumeTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().glResumeTransformFeedbackNV();
}

inline void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().glRotatexOES(angle, x, y, z);
}

inline void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().glSampleCoverageARB(value, invert);
}

inline void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().glSampleCoverageOES(value, invert);
}

inline void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return glbinding::FunctionObjects::current().glSampleMapATI(dst, interp, swizzle);
}

inline void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().glSampleMaskEXT(value, invert);
}

inline void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return glbinding::FunctionObjects::current().glSampleMaskIndexedNV(index, mask);
}

inline void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().glSampleMaskSGIS(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::FunctionObjects::current().glSampleMaski(maskNumber, mask);
}

inline void glSamplePatternEXT(GLenum pattern)
{
    return glbinding::FunctionObjects::current().glSamplePatternEXT(pattern);
}

inline void glSamplePatternSGIS(GLenum pattern)
{
    return glbinding::FunctionObjects::current().glSamplePatternSGIS(pattern);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().glSamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::FunctionObjects::current().glSamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glSamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::FunctionObjects::current().glSamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glSamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().glSamplerParameteriv(sampler, pname, param);
}

inline void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().glScalexOES(x, y, z);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::FunctionObjects::current().glScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glScissorIndexedv(index, v);
}

inline void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3bEXT(red, green, blue);
}

inline void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3bvEXT(v);
}

inline void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3dEXT(red, green, blue);
}

inline void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3dvEXT(v);
}

inline void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3fEXT(red, green, blue);
}

inline void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3fvEXT(v);
}

inline void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3hNV(red, green, blue);
}

inline void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3hvNV(v);
}

inline void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3iEXT(red, green, blue);
}

inline void glSecondaryColor3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ivEXT(v);
}

inline void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3sEXT(red, green, blue);
}

inline void glSecondaryColor3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3svEXT(v);
}

inline void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ubEXT(red, green, blue);
}

inline void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3ubvEXT(v);
}

inline void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3uiEXT(red, green, blue);
}

inline void glSecondaryColor3uivEXT(const GLuint * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3uivEXT(v);
}

inline void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3usEXT(red, green, blue);
}

inline void glSecondaryColor3usvEXT(const GLushort * v)
{
    return glbinding::FunctionObjects::current().glSecondaryColor3usvEXT(v);
}

inline void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glSecondaryColorFormatNV(size, type, stride);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::FunctionObjects::current().glSecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::FunctionObjects::current().glSecondaryColorP3uiv(type, color);
}

inline void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glSecondaryColorPointerEXT(size, type, stride, pointer);
}

inline void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glbinding::FunctionObjects::current().glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

inline void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::FunctionObjects::current().glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

inline void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::FunctionObjects::current().glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

inline void glSetFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().glSetFenceAPPLE(fence);
}

inline void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glbinding::FunctionObjects::current().glSetFenceNV(fence, condition);
}

inline void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glSetFragmentShaderConstantATI(dst, value);
}

inline void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::FunctionObjects::current().glSetInvariantEXT(id, type, addr);
}

inline void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::FunctionObjects::current().glSetLocalConstantEXT(id, type, addr);
}

inline void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return glbinding::FunctionObjects::current().glSetMultisamplefvAMD(pname, index, val);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::FunctionObjects::current().glShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return glbinding::FunctionObjects::current().glShaderOp1EXT(op, res, arg1);
}

inline void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return glbinding::FunctionObjects::current().glShaderOp2EXT(op, res, arg1, arg2);
}

inline void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return glbinding::FunctionObjects::current().glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

inline void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return glbinding::FunctionObjects::current().glShaderSourceARB(shaderObj, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::FunctionObjects::current().glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().glSharpenTexFuncSGIS(target, n, points);
}

inline void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glSpriteParameterfSGIX(pname, param);
}

inline void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glSpriteParameterfvSGIX(pname, params);
}

inline void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glSpriteParameteriSGIX(pname, param);
}

inline void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glSpriteParameterivSGIX(pname, params);
}

inline void glStartInstrumentsSGIX()
{
    return glbinding::FunctionObjects::current().glStartInstrumentsSGIX();
}

inline void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return glbinding::FunctionObjects::current().glStencilClearTagEXT(stencilTagBits, stencilClearTag);
}

inline void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

inline void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilFillPathNV(path, fillMode, mask);
}

inline void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

inline void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::FunctionObjects::current().glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

inline void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return glbinding::FunctionObjects::current().glStencilOpValueAMD(face, value);
}

inline void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

inline void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glbinding::FunctionObjects::current().glStencilStrokePathNV(path, reference, mask);
}

inline void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

inline void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

inline void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

inline void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

inline void glStopInstrumentsSGIX(GLint marker)
{
    return glbinding::FunctionObjects::current().glStopInstrumentsSGIX(marker);
}

inline void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().glStringMarkerGREMEDY(len, string);
}

inline void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::FunctionObjects::current().glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

inline void glSyncTextureINTEL(GLuint texture)
{
    return glbinding::FunctionObjects::current().glSyncTextureINTEL(texture);
}

inline void glTagSampleBufferSGIX()
{
    return glbinding::FunctionObjects::current().glTagSampleBufferSGIX();
}

inline void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return glbinding::FunctionObjects::current().glTangent3bEXT(tx, ty, tz);
}

inline void glTangent3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glTangent3bvEXT(v);
}

inline void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return glbinding::FunctionObjects::current().glTangent3dEXT(tx, ty, tz);
}

inline void glTangent3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glTangent3dvEXT(v);
}

inline void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return glbinding::FunctionObjects::current().glTangent3fEXT(tx, ty, tz);
}

inline void glTangent3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTangent3fvEXT(v);
}

inline void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return glbinding::FunctionObjects::current().glTangent3iEXT(tx, ty, tz);
}

inline void glTangent3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().glTangent3ivEXT(v);
}

inline void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return glbinding::FunctionObjects::current().glTangent3sEXT(tx, ty, tz);
}

inline void glTangent3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glTangent3svEXT(v);
}

inline void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glTangentPointerEXT(type, stride, pointer);
}

inline void glTbufferMask3DFX(GLuint mask)
{
    return glbinding::FunctionObjects::current().glTbufferMask3DFX(mask);
}

inline void glTessellationFactorAMD(GLfloat factor)
{
    return glbinding::FunctionObjects::current().glTessellationFactorAMD(factor);
}

inline void glTessellationModeAMD(GLenum mode)
{
    return glbinding::FunctionObjects::current().glTessellationModeAMD(mode);
}

inline GLboolean glTestFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().glTestFenceAPPLE(fence);
}

inline GLboolean glTestFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().glTestFenceNV(fence);
}

inline GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return glbinding::FunctionObjects::current().glTestObjectAPPLE(object, name);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glTexBuffer(target, internalformat, buffer);
}

inline void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glTexBufferARB(target, internalformat, buffer);
}

inline void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glTexBufferEXT(target, internalformat, buffer);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glTexBufferRange(target, internalformat, buffer, offset, size);
}

inline void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return glbinding::FunctionObjects::current().glTexBumpParameterfvATI(pname, param);
}

inline void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().glTexBumpParameterivATI(pname, param);
}

inline void glTexCoord1bOES(GLbyte s)
{
    return glbinding::FunctionObjects::current().glTexCoord1bOES(s);
}

inline void glTexCoord1bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord1bvOES(coords);
}

inline void glTexCoord1hNV(GLhalfNV s)
{
    return glbinding::FunctionObjects::current().glTexCoord1hNV(s);
}

inline void glTexCoord1hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glTexCoord1hvNV(v);
}

inline void glTexCoord1xOES(GLfixed s)
{
    return glbinding::FunctionObjects::current().glTexCoord1xOES(s);
}

inline void glTexCoord1xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord1xvOES(coords);
}

inline void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return glbinding::FunctionObjects::current().glTexCoord2bOES(s, t);
}

inline void glTexCoord2bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord2bvOES(coords);
}

inline void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

inline void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

inline void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2fVertex3fvSUN(tc, v);
}

inline void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return glbinding::FunctionObjects::current().glTexCoord2hNV(s, t);
}

inline void glTexCoord2hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glTexCoord2hvNV(v);
}

inline void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return glbinding::FunctionObjects::current().glTexCoord2xOES(s, t);
}

inline void glTexCoord2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord2xvOES(coords);
}

inline void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::FunctionObjects::current().glTexCoord3bOES(s, t, r);
}

inline void glTexCoord3bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord3bvOES(coords);
}

inline void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::FunctionObjects::current().glTexCoord3hNV(s, t, r);
}

inline void glTexCoord3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glTexCoord3hvNV(v);
}

inline void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::FunctionObjects::current().glTexCoord3xOES(s, t, r);
}

inline void glTexCoord3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord3xvOES(coords);
}

inline void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::FunctionObjects::current().glTexCoord4bOES(s, t, r, q);
}

inline void glTexCoord4bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord4bvOES(coords);
}

inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

inline void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

inline void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4fVertex4fvSUN(tc, v);
}

inline void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::FunctionObjects::current().glTexCoord4hNV(s, t, r, q);
}

inline void glTexCoord4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glTexCoord4hvNV(v);
}

inline void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::FunctionObjects::current().glTexCoord4xOES(s, t, r, q);
}

inline void glTexCoord4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glTexCoord4xvOES(coords);
}

inline void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glTexCoordFormatNV(size, type, stride);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::FunctionObjects::current().glTexCoordP4uiv(type, coords);
}

inline void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().glTexCoordPointerEXT(size, type, stride, count, pointer);
}

inline void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().glTexCoordPointervINTEL(size, type, pointer);
}

inline void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glTexEnvxOES(target, pname, param);
}

inline void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glTexEnvxvOES(target, pname, params);
}

inline void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().glTexFilterFuncSGIS(target, filter, n, weights);
}

inline void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glTexGenxOES(coord, pname, param);
}

inline void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glTexGenxvOES(coord, pname, params);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

inline void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::FunctionObjects::current().glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTexParameterIivEXT(target, pname, params);
}

inline void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glTexParameterIuivEXT(target, pname, params);
}

inline void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().glTexParameterxOES(target, pname, param);
}

inline void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().glTexParameterxvOES(target, pname, params);
}

inline void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glTexRenderbufferNV(target, renderbuffer);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::FunctionObjects::current().glTexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glTexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().glTexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::FunctionObjects::current().glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

inline void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

inline void glTextureBarrierNV()
{
    return glbinding::FunctionObjects::current().glTextureBarrierNV();
}

inline void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glTextureBufferEXT(texture, target, internalformat, buffer);
}

inline void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

inline void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::FunctionObjects::current().glTextureColorMaskSGIS(red, green, blue, alpha);
}

inline void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

inline void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureLightEXT(GLenum pname)
{
    return glbinding::FunctionObjects::current().glTextureLightEXT(pname);
}

inline void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().glTextureMaterialEXT(face, mode);
}

inline void glTextureNormalEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().glTextureNormalEXT(mode);
}

inline void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::FunctionObjects::current().glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTextureParameterIivEXT(texture, target, pname, params);
}

inline void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().glTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glTextureParameterfEXT(texture, target, pname, param);
}

inline void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glTextureParameterfvEXT(texture, target, pname, params);
}

inline void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glTextureParameteriEXT(texture, target, pname, param);
}

inline void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glTextureParameterivEXT(texture, target, pname, params);
}

inline void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().glTextureRangeAPPLE(target, length, pointer);
}

inline void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().glTextureRenderbufferEXT(texture, target, renderbuffer);
}

inline void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::FunctionObjects::current().glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

inline void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

inline void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

inline void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::FunctionObjects::current().glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

inline void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::FunctionObjects::current().glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return glbinding::FunctionObjects::current().glTrackMatrixNV(target, address, matrix, transform);
}

inline void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().glTransformFeedbackAttribsNV(count, attribs, bufferMode);
}

inline void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().glTransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

inline void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

inline void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}

inline void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().glTranslatexOES(x, y, z);
}

inline void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::FunctionObjects::current().glUniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniform1dv(location, count, value);
}

inline void glUniform1fARB(GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().glUniform1fARB(location, v0);
}

inline void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform1fvARB(location, count, value);
}

inline void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().glUniform1i64NV(location, x);
}

inline void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform1i64vNV(location, count, value);
}

inline void glUniform1iARB(GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().glUniform1iARB(location, v0);
}

inline void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform1ivARB(location, count, value);
}

inline void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().glUniform1ui64NV(location, x);
}

inline void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform1ui64vNV(location, count, value);
}

inline void glUniform1uiEXT(GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().glUniform1uiEXT(location, v0);
}

inline void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform1uivEXT(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glUniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniform2dv(location, count, value);
}

inline void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().glUniform2fARB(location, v0, v1);
}

inline void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform2fvARB(location, count, value);
}

inline void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().glUniform2i64NV(location, x, y);
}

inline void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform2i64vNV(location, count, value);
}

inline void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().glUniform2iARB(location, v0, v1);
}

inline void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform2ivARB(location, count, value);
}

inline void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().glUniform2ui64NV(location, x, y);
}

inline void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform2ui64vNV(location, count, value);
}

inline void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().glUniform2uiEXT(location, v0, v1);
}

inline void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform2uivEXT(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glUniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniform3dv(location, count, value);
}

inline void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().glUniform3fARB(location, v0, v1, v2);
}

inline void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform3fvARB(location, count, value);
}

inline void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().glUniform3i64NV(location, x, y, z);
}

inline void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform3i64vNV(location, count, value);
}

inline void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().glUniform3iARB(location, v0, v1, v2);
}

inline void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform3ivARB(location, count, value);
}

inline void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().glUniform3ui64NV(location, x, y, z);
}

inline void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform3ui64vNV(location, count, value);
}

inline void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().glUniform3uiEXT(location, v0, v1, v2);
}

inline void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform3uivEXT(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glUniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniform4dv(location, count, value);
}

inline void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().glUniform4fARB(location, v0, v1, v2, v3);
}

inline void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniform4fvARB(location, count, value);
}

inline void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().glUniform4i64NV(location, x, y, z, w);
}

inline void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform4i64vNV(location, count, value);
}

inline void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().glUniform4iARB(location, v0, v1, v2, v3);
}

inline void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().glUniform4ivARB(location, count, value);
}

inline void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().glUniform4ui64NV(location, x, y, z, w);
}

inline void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniform4ui64vNV(location, count, value);
}

inline void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().glUniform4uiEXT(location, v0, v1, v2, v3);
}

inline void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glUniform4uivEXT(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::FunctionObjects::current().glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return glbinding::FunctionObjects::current().glUniformBufferEXT(program, location, buffer);
}

inline void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().glUniformHandleui64ARB(location, value);
}

inline void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().glUniformHandleui64NV(location, value);
}

inline void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::FunctionObjects::current().glUniformHandleui64vARB(location, count, value);
}

inline void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::FunctionObjects::current().glUniformHandleui64vNV(location, count, value);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2fvARB(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3fvARB(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4fvARB(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().glUniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::FunctionObjects::current().glUniformSubroutinesuiv(shadertype, count, indices);
}

inline void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return glbinding::FunctionObjects::current().glUniformui64NV(location, value);
}

inline void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().glUniformui64vNV(location, count, value);
}

inline void glUnlockArraysEXT()
{
    return glbinding::FunctionObjects::current().glUnlockArraysEXT();
}

inline GLboolean glUnmapBufferARB(GLenum target)
{
    return glbinding::FunctionObjects::current().glUnmapBufferARB(target);
}

inline GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glUnmapNamedBufferEXT(buffer);
}

inline void glUnmapObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().glUnmapObjectBufferATI(buffer);
}

inline void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().glUnmapTexture2DINTEL(texture, level);
}

inline void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return glbinding::FunctionObjects::current().glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

inline void glUseProgramObjectARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().glUseProgramObjectARB(programObj);
}

inline void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::FunctionObjects::current().glUseProgramStages(pipeline, stages, program);
}

inline void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return glbinding::FunctionObjects::current().glUseShaderProgramEXT(type, program);
}

inline void glVDPAUFiniNV()
{
    return glbinding::FunctionObjects::current().glVDPAUFiniNV();
}

inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::FunctionObjects::current().glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

inline void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return glbinding::FunctionObjects::current().glVDPAUInitNV(vdpDevice, getProcAddress);
}

inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::FunctionObjects::current().glVDPAUIsSurfaceNV(surface);
}

inline void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::FunctionObjects::current().glVDPAUMapSurfacesNV(numSurfaces, surfaces);
}

inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::FunctionObjects::current().glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::FunctionObjects::current().glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return glbinding::FunctionObjects::current().glVDPAUSurfaceAccessNV(surface, access);
}

inline void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::FunctionObjects::current().glVDPAUUnmapSurfacesNV(numSurface, surfaces);
}

inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::FunctionObjects::current().glVDPAUUnregisterSurfaceNV(surface);
}

inline void glValidateProgramARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().glValidateProgramARB(programObj);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().glValidateProgramPipeline(pipeline);
}

inline void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

inline void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return glbinding::FunctionObjects::current().glVariantPointerEXT(id, type, stride, addr);
}

inline void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return glbinding::FunctionObjects::current().glVariantbvEXT(id, addr);
}

inline void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return glbinding::FunctionObjects::current().glVariantdvEXT(id, addr);
}

inline void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return glbinding::FunctionObjects::current().glVariantfvEXT(id, addr);
}

inline void glVariantivEXT(GLuint id, const GLint * addr)
{
    return glbinding::FunctionObjects::current().glVariantivEXT(id, addr);
}

inline void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return glbinding::FunctionObjects::current().glVariantsvEXT(id, addr);
}

inline void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return glbinding::FunctionObjects::current().glVariantubvEXT(id, addr);
}

inline void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return glbinding::FunctionObjects::current().glVariantuivEXT(id, addr);
}

inline void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return glbinding::FunctionObjects::current().glVariantusvEXT(id, addr);
}

inline void glVertex2bOES(GLbyte x, GLbyte y)
{
    return glbinding::FunctionObjects::current().glVertex2bOES(x, y);
}

inline void glVertex2bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glVertex2bvOES(coords);
}

inline void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return glbinding::FunctionObjects::current().glVertex2hNV(x, y);
}

inline void glVertex2hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertex2hvNV(v);
}

inline void glVertex2xOES(GLfixed x)
{
    return glbinding::FunctionObjects::current().glVertex2xOES(x);
}

inline void glVertex2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glVertex2xvOES(coords);
}

inline void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return glbinding::FunctionObjects::current().glVertex3bOES(x, y, z);
}

inline void glVertex3bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glVertex3bvOES(coords);
}

inline void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::FunctionObjects::current().glVertex3hNV(x, y, z);
}

inline void glVertex3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertex3hvNV(v);
}

inline void glVertex3xOES(GLfixed x, GLfixed y)
{
    return glbinding::FunctionObjects::current().glVertex3xOES(x, y);
}

inline void glVertex3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glVertex3xvOES(coords);
}

inline void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return glbinding::FunctionObjects::current().glVertex4bOES(x, y, z, w);
}

inline void glVertex4bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().glVertex4bvOES(coords);
}

inline void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::FunctionObjects::current().glVertex4hNV(x, y, z, w);
}

inline void glVertex4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertex4hvNV(v);
}

inline void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().glVertex4xOES(x, y, z);
}

inline void glVertex4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().glVertex4xvOES(coords);
}

inline void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

inline void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

inline void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glVertexArrayParameteriAPPLE(pname, param);
}

inline void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexArrayRangeAPPLE(length, pointer);
}

inline void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexArrayRangeNV(length, pointer);
}

inline void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

inline void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

inline void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

inline void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1dARB(index, x);
}

inline void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1dNV(index, x);
}

inline void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1dvARB(index, v);
}

inline void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1dvNV(index, v);
}

inline void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1fARB(index, x);
}

inline void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1fNV(index, x);
}

inline void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1fvARB(index, v);
}

inline void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1fvNV(index, v);
}

inline void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1hNV(index, x);
}

inline void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1hvNV(index, v);
}

inline void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1sARB(index, x);
}

inline void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1sNV(index, x);
}

inline void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1svARB(index, v);
}

inline void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib1svNV(index, v);
}

inline void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2dARB(index, x, y);
}

inline void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2dNV(index, x, y);
}

inline void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2dvARB(index, v);
}

inline void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2dvNV(index, v);
}

inline void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2fARB(index, x, y);
}

inline void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2fNV(index, x, y);
}

inline void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2fvARB(index, v);
}

inline void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2fvNV(index, v);
}

inline void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2hNV(index, x, y);
}

inline void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2hvNV(index, v);
}

inline void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2sARB(index, x, y);
}

inline void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2sNV(index, x, y);
}

inline void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2svARB(index, v);
}

inline void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib2svNV(index, v);
}

inline void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3dARB(index, x, y, z);
}

inline void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3dNV(index, x, y, z);
}

inline void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3dvARB(index, v);
}

inline void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3dvNV(index, v);
}

inline void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3fARB(index, x, y, z);
}

inline void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3fNV(index, x, y, z);
}

inline void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3fvARB(index, v);
}

inline void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3fvNV(index, v);
}

inline void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3hNV(index, x, y, z);
}

inline void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3hvNV(index, v);
}

inline void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3sARB(index, x, y, z);
}

inline void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3sNV(index, x, y, z);
}

inline void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3svARB(index, v);
}

inline void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib3svNV(index, v);
}

inline void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NbvARB(index, v);
}

inline void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NivARB(index, v);
}

inline void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NsvARB(index, v);
}

inline void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NubARB(index, x, y, z, w);
}

inline void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NubvARB(index, v);
}

inline void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NuivARB(index, v);
}

inline void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4NusvARB(index, v);
}

inline void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4bvARB(index, v);
}

inline void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4dARB(index, x, y, z, w);
}

inline void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4dNV(index, x, y, z, w);
}

inline void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4dvARB(index, v);
}

inline void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4dvNV(index, v);
}

inline void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4fARB(index, x, y, z, w);
}

inline void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4fNV(index, x, y, z, w);
}

inline void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4fvARB(index, v);
}

inline void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4fvNV(index, v);
}

inline void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4hNV(index, x, y, z, w);
}

inline void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4hvNV(index, v);
}

inline void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4ivARB(index, v);
}

inline void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4sARB(index, x, y, z, w);
}

inline void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4sNV(index, x, y, z, w);
}

inline void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4svARB(index, v);
}

inline void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4svNV(index, v);
}

inline void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4ubNV(index, x, y, z, w);
}

inline void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4ubvARB(index, v);
}

inline void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4ubvNV(index, v);
}

inline void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4uivARB(index, v);
}

inline void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttrib4usvARB(index, v);
}

inline void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::FunctionObjects::current().glVertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().glVertexAttribDivisor(index, divisor);
}

inline void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().glVertexAttribDivisorARB(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glVertexAttribFormatNV(index, size, type, normalized, stride);
}

inline void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1iEXT(index, x);
}

inline void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1ivEXT(index, v);
}

inline void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1uiEXT(index, x);
}

inline void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI1uivEXT(index, v);
}

inline void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2iEXT(index, x, y);
}

inline void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2ivEXT(index, v);
}

inline void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2uiEXT(index, x, y);
}

inline void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI2uivEXT(index, v);
}

inline void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3iEXT(index, x, y, z);
}

inline void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3ivEXT(index, v);
}

inline void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3uiEXT(index, x, y, z);
}

inline void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI3uivEXT(index, v);
}

inline void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4bvEXT(index, v);
}

inline void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4iEXT(index, x, y, z, w);
}

inline void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4ivEXT(index, v);
}

inline void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4svEXT(index, v);
}

inline void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4ubvEXT(index, v);
}

inline void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4uiEXT(index, x, y, z, w);
}

inline void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4uivEXT(index, v);
}

inline void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribI4usvEXT(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glVertexAttribIFormatNV(index, size, type, stride);
}

inline void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribIPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1d(index, x);
}

inline void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1dEXT(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1dv(index, v);
}

inline void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1dvEXT(index, v);
}

inline void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1i64NV(index, x);
}

inline void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1i64vNV(index, v);
}

inline void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1ui64ARB(index, x);
}

inline void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1ui64NV(index, x);
}

inline void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1ui64vARB(index, v);
}

inline void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL1ui64vNV(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2dEXT(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2dv(index, v);
}

inline void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2dvEXT(index, v);
}

inline void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2i64NV(index, x, y);
}

inline void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2i64vNV(index, v);
}

inline void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2ui64NV(index, x, y);
}

inline void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL2ui64vNV(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3dEXT(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3dv(index, v);
}

inline void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3dvEXT(index, v);
}

inline void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3i64NV(index, x, y, z);
}

inline void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3i64vNV(index, v);
}

inline void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3ui64NV(index, x, y, z);
}

inline void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL3ui64vNV(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4dEXT(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4dv(index, v);
}

inline void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4dvEXT(index, v);
}

inline void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4i64NV(index, x, y, z, w);
}

inline void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4i64vNV(index, v);
}

inline void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4ui64NV(index, x, y, z, w);
}

inline void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribL4ui64vNV(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glVertexAttribLFormatNV(index, size, type, stride);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glVertexAttribParameteriAMD(index, pname, param);
}

inline void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

inline void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

inline void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs1dvNV(index, count, v);
}

inline void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs1fvNV(index, count, v);
}

inline void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs1hvNV(index, n, v);
}

inline void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs1svNV(index, count, v);
}

inline void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs2dvNV(index, count, v);
}

inline void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs2fvNV(index, count, v);
}

inline void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs2hvNV(index, n, v);
}

inline void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs2svNV(index, count, v);
}

inline void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs3dvNV(index, count, v);
}

inline void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs3fvNV(index, count, v);
}

inline void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs3hvNV(index, n, v);
}

inline void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs3svNV(index, count, v);
}

inline void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs4dvNV(index, count, v);
}

inline void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs4fvNV(index, count, v);
}

inline void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs4hvNV(index, n, v);
}

inline void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs4svNV(index, count, v);
}

inline void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().glVertexAttribs4ubvNV(index, count, v);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::FunctionObjects::current().glVertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexBlendARB(GLint count)
{
    return glbinding::FunctionObjects::current().glVertexBlendARB(count);
}

inline void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().glVertexBlendEnvfATI(pname, param);
}

inline void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().glVertexBlendEnviATI(pname, param);
}

inline void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().glVertexFormatNV(size, type, stride);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return glbinding::FunctionObjects::current().glVertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return glbinding::FunctionObjects::current().glVertexP4uiv(type, value);
}

inline void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexPointerEXT(size, type, stride, count, pointer);
}

inline void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().glVertexPointervINTEL(size, type, pointer);
}

inline void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return glbinding::FunctionObjects::current().glVertexStream1dATI(stream, x);
}

inline void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream1dvATI(stream, coords);
}

inline void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return glbinding::FunctionObjects::current().glVertexStream1fATI(stream, x);
}

inline void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream1fvATI(stream, coords);
}

inline void glVertexStream1iATI(GLenum stream, GLint x)
{
    return glbinding::FunctionObjects::current().glVertexStream1iATI(stream, x);
}

inline void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream1ivATI(stream, coords);
}

inline void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return glbinding::FunctionObjects::current().glVertexStream1sATI(stream, x);
}

inline void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream1svATI(stream, coords);
}

inline void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glVertexStream2dATI(stream, x, y);
}

inline void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream2dvATI(stream, coords);
}

inline void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glVertexStream2fATI(stream, x, y);
}

inline void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream2fvATI(stream, coords);
}

inline void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glVertexStream2iATI(stream, x, y);
}

inline void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream2ivATI(stream, coords);
}

inline void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glVertexStream2sATI(stream, x, y);
}

inline void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream2svATI(stream, coords);
}

inline void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glVertexStream3dATI(stream, x, y, z);
}

inline void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream3dvATI(stream, coords);
}

inline void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glVertexStream3fATI(stream, x, y, z);
}

inline void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream3fvATI(stream, coords);
}

inline void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glVertexStream3iATI(stream, x, y, z);
}

inline void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream3ivATI(stream, coords);
}

inline void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glVertexStream3sATI(stream, x, y, z);
}

inline void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream3svATI(stream, coords);
}

inline void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glVertexStream4dATI(stream, x, y, z, w);
}

inline void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream4dvATI(stream, coords);
}

inline void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glVertexStream4fATI(stream, x, y, z, w);
}

inline void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream4fvATI(stream, coords);
}

inline void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glVertexStream4iATI(stream, x, y, z, w);
}

inline void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream4ivATI(stream, coords);
}

inline void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glVertexStream4sATI(stream, x, y, z, w);
}

inline void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().glVertexStream4svATI(stream, coords);
}

inline void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glVertexWeightPointerEXT(size, type, stride, pointer);
}

inline void glVertexWeightfEXT(GLfloat weight)
{
    return glbinding::FunctionObjects::current().glVertexWeightfEXT(weight);
}

inline void glVertexWeightfvEXT(const GLfloat * weight)
{
    return glbinding::FunctionObjects::current().glVertexWeightfvEXT(weight);
}

inline void glVertexWeighthNV(GLhalfNV weight)
{
    return glbinding::FunctionObjects::current().glVertexWeighthNV(weight);
}

inline void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return glbinding::FunctionObjects::current().glVertexWeighthvNV(weight);
}

inline GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl30ext::GLenum>(glbinding::FunctionObjects::current().glVideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

inline void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::FunctionObjects::current().glViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::FunctionObjects::current().glWaitSync(sync, flags, timeout);
}

inline void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().glWeightPathsNV(resultPath, numPaths, paths, weights);
}

inline void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().glWeightPointerARB(size, type, stride, pointer);
}

inline void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return glbinding::FunctionObjects::current().glWeightbvARB(size, weights);
}

inline void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return glbinding::FunctionObjects::current().glWeightdvARB(size, weights);
}

inline void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().glWeightfvARB(size, weights);
}

inline void glWeightivARB(GLint size, const GLint * weights)
{
    return glbinding::FunctionObjects::current().glWeightivARB(size, weights);
}

inline void glWeightsvARB(GLint size, const GLshort * weights)
{
    return glbinding::FunctionObjects::current().glWeightsvARB(size, weights);
}

inline void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return glbinding::FunctionObjects::current().glWeightubvARB(size, weights);
}

inline void glWeightuivARB(GLint size, const GLuint * weights)
{
    return glbinding::FunctionObjects::current().glWeightuivARB(size, weights);
}

inline void glWeightusvARB(GLint size, const GLushort * weights)
{
    return glbinding::FunctionObjects::current().glWeightusvARB(size, weights);
}

inline void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glWindowPos2dARB(x, y);
}

inline void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().glWindowPos2dMESA(x, y);
}

inline void glWindowPos2dvARB(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2dvARB(v);
}

inline void glWindowPos2dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2dvMESA(v);
}

inline void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glWindowPos2fARB(x, y);
}

inline void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().glWindowPos2fMESA(x, y);
}

inline void glWindowPos2fvARB(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2fvARB(v);
}

inline void glWindowPos2fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2fvMESA(v);
}

inline void glWindowPos2iARB(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glWindowPos2iARB(x, y);
}

inline void glWindowPos2iMESA(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().glWindowPos2iMESA(x, y);
}

inline void glWindowPos2ivARB(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2ivARB(v);
}

inline void glWindowPos2ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2ivMESA(v);
}

inline void glWindowPos2sARB(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glWindowPos2sARB(x, y);
}

inline void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().glWindowPos2sMESA(x, y);
}

inline void glWindowPos2svARB(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2svARB(v);
}

inline void glWindowPos2svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos2svMESA(v);
}

inline void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glWindowPos3dARB(x, y, z);
}

inline void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().glWindowPos3dMESA(x, y, z);
}

inline void glWindowPos3dvARB(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3dvARB(v);
}

inline void glWindowPos3dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3dvMESA(v);
}

inline void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glWindowPos3fARB(x, y, z);
}

inline void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().glWindowPos3fMESA(x, y, z);
}

inline void glWindowPos3fvARB(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3fvARB(v);
}

inline void glWindowPos3fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3fvMESA(v);
}

inline void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glWindowPos3iARB(x, y, z);
}

inline void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().glWindowPos3iMESA(x, y, z);
}

inline void glWindowPos3ivARB(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3ivARB(v);
}

inline void glWindowPos3ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3ivMESA(v);
}

inline void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glWindowPos3sARB(x, y, z);
}

inline void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().glWindowPos3sMESA(x, y, z);
}

inline void glWindowPos3svARB(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3svARB(v);
}

inline void glWindowPos3svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos3svMESA(v);
}

inline void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().glWindowPos4dMESA(x, y, z, w);
}

inline void glWindowPos4dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().glWindowPos4dvMESA(v);
}

inline void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().glWindowPos4fMESA(x, y, z, w);
}

inline void glWindowPos4fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().glWindowPos4fvMESA(v);
}

inline void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().glWindowPos4iMESA(x, y, z, w);
}

inline void glWindowPos4ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().glWindowPos4ivMESA(v);
}

inline void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().glWindowPos4sMESA(x, y, z, w);
}

inline void glWindowPos4svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().glWindowPos4svMESA(v);
}

inline void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::FunctionObjects::current().glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl30ext
