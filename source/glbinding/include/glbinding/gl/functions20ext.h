#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/functions.h>
#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl20ext
{

#include <glbinding/gl/types.inl>
#include <glbinding/gl/boolean.inl>
#include <glbinding/gl/values.inl>

} // namespace gl20ext


namespace gl20ext
{

inline void glAccumxOES(GLenum op, GLfixed value)
{
    return gl::glAccumxOES(op, value);
}

inline void glActiveProgramEXT(GLuint program)
{
    return gl::glActiveProgramEXT(program);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return gl::glActiveShaderProgram(pipeline, program);
}

inline void glActiveStencilFaceEXT(GLenum face)
{
    return gl::glActiveStencilFaceEXT(face);
}

inline void glActiveTextureARB(GLenum texture)
{
    return gl::glActiveTextureARB(texture);
}

inline void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return gl::glActiveVaryingNV(program, name);
}

inline void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return gl::glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return gl::glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return gl::glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return gl::glAlphaFuncxOES(func, ref);
}

inline void glApplyTextureEXT(GLenum mode)
{
    return gl::glApplyTextureEXT(mode);
}

inline GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return gl::glAreProgramsResidentNV(n, programs, residences);
}

inline GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return gl::glAreTexturesResidentEXT(n, textures, residences);
}

inline void glArrayElementEXT(GLint i)
{
    return gl::glArrayElementEXT(i);
}

inline void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glArrayObjectATI(array, size, type, stride, buffer, offset);
}

inline void glAsyncMarkerSGIX(GLuint marker)
{
    return gl::glAsyncMarkerSGIX(marker);
}

inline void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return gl::glAttachObjectARB(containerObj, obj);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return gl::glBeginConditionalRender(id, mode);
}

inline void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return gl::glBeginConditionalRenderNV(id, mode);
}

inline void glBeginConditionalRenderNVX(GLuint id)
{
    return gl::glBeginConditionalRenderNVX(id);
}

inline void glBeginFragmentShaderATI()
{
    return gl::glBeginFragmentShaderATI();
}

inline void glBeginOcclusionQueryNV(GLuint id)
{
    return gl::glBeginOcclusionQueryNV(id);
}

inline void glBeginPerfMonitorAMD(GLuint monitor)
{
    return gl::glBeginPerfMonitorAMD(monitor);
}

inline void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return gl::glBeginPerfQueryINTEL(queryHandle);
}

inline void glBeginQueryARB(GLenum target, GLuint id)
{
    return gl::glBeginQueryARB(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return gl::glBeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedback(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedback(primitiveMode);
}

inline void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedbackEXT(primitiveMode);
}

inline void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedbackNV(primitiveMode);
}

inline void glBeginVertexShaderEXT()
{
    return gl::glBeginVertexShaderEXT();
}

inline void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return gl::glBeginVideoCaptureNV(video_capture_slot);
}

inline void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return gl::glBindAttribLocationARB(programObj, index, name);
}

inline void glBindBufferARB(GLenum target, GLuint buffer)
{
    return gl::glBindBufferARB(target, buffer);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBase(target, index, buffer);
}

inline void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBaseEXT(target, index, buffer);
}

inline void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBaseNV(target, index, buffer);
}

inline void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return gl::glBindBufferOffsetEXT(target, index, buffer, offset);
}

inline void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return gl::glBindBufferOffsetNV(target, index, buffer, offset);
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRange(target, index, buffer, offset, size);
}

inline void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRangeEXT(target, index, buffer, offset, size);
}

inline void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRangeNV(target, index, buffer, offset, size);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return gl::glBindBuffersBase(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return gl::glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return gl::glBindFragDataLocation(program, color, name);
}

inline void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return gl::glBindFragDataLocationEXT(program, color, name);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return gl::glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

inline void glBindFragmentShaderATI(GLuint id)
{
    return gl::glBindFragmentShaderATI(id);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return gl::glBindFramebuffer(target, framebuffer);
}

inline void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return gl::glBindFramebufferEXT(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return gl::glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return gl::glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return gl::glBindImageTextures(first, count, textures);
}

inline GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return gl::glBindLightParameterEXT(light, value);
}

inline GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return gl::glBindMaterialParameterEXT(face, value);
}

inline void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return gl::glBindMultiTextureEXT(texunit, target, texture);
}

inline GLuint glBindParameterEXT(GLenum value)
{
    return gl::glBindParameterEXT(value);
}

inline void glBindProgramARB(GLenum target, GLuint program)
{
    return gl::glBindProgramARB(target, program);
}

inline void glBindProgramNV(GLenum target, GLuint id)
{
    return gl::glBindProgramNV(target, id);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
    return gl::glBindProgramPipeline(pipeline);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return gl::glBindRenderbuffer(target, renderbuffer);
}

inline void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return gl::glBindRenderbufferEXT(target, renderbuffer);
}

inline void glBindSampler(GLuint unit, GLuint sampler)
{
    return gl::glBindSampler(unit, sampler);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return gl::glBindSamplers(first, count, samplers);
}

inline GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return gl::glBindTexGenParameterEXT(unit, coord, value);
}

inline void glBindTextureEXT(GLenum target, GLuint texture)
{
    return gl::glBindTextureEXT(target, texture);
}

inline GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return gl::glBindTextureUnitParameterEXT(unit, value);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return gl::glBindTextures(first, count, textures);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return gl::glBindTransformFeedback(target, id);
}

inline void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return gl::glBindTransformFeedbackNV(target, id);
}

inline void glBindVertexArray(GLuint array)
{
    return gl::glBindVertexArray(array);
}

inline void glBindVertexArrayAPPLE(GLuint array)
{
    return gl::glBindVertexArrayAPPLE(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gl::glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return gl::glBindVertexBuffers(first, count, buffers, offsets, strides);
}

inline void glBindVertexShaderEXT(GLuint id)
{
    return gl::glBindVertexShaderEXT(id);
}

inline void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return gl::glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

inline void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return gl::glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

inline void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return gl::glBinormal3bEXT(bx, by, bz);
}

inline void glBinormal3bvEXT(const GLbyte * v)
{
    return gl::glBinormal3bvEXT(v);
}

inline void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return gl::glBinormal3dEXT(bx, by, bz);
}

inline void glBinormal3dvEXT(const GLdouble * v)
{
    return gl::glBinormal3dvEXT(v);
}

inline void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return gl::glBinormal3fEXT(bx, by, bz);
}

inline void glBinormal3fvEXT(const GLfloat * v)
{
    return gl::glBinormal3fvEXT(v);
}

inline void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return gl::glBinormal3iEXT(bx, by, bz);
}

inline void glBinormal3ivEXT(const GLint * v)
{
    return gl::glBinormal3ivEXT(v);
}

inline void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return gl::glBinormal3sEXT(bx, by, bz);
}

inline void glBinormal3svEXT(const GLshort * v)
{
    return gl::glBinormal3svEXT(v);
}

inline void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glBinormalPointerEXT(type, stride, pointer);
}

inline void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return gl::glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendBarrierNV()
{
    return gl::glBlendBarrierNV();
}

inline void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glBlendColorEXT(red, green, blue, alpha);
}

inline void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glBlendColorxOES(red, green, blue, alpha);
}

inline void glBlendEquationEXT(GLenum mode)
{
    return gl::glBlendEquationEXT(mode);
}

inline void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationIndexedAMD(buf, mode);
}

inline void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationi(buf, mode);
}

inline void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationiARB(buf, mode);
}

inline void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFuncIndexedAMD(buf, src, dst);
}

inline void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFunci(buf, src, dst);
}

inline void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFunciARB(buf, src, dst);
}

inline void glBlendParameteriNV(GLenum pname, GLint value)
{
    return gl::glBlendParameteriNV(pname, value);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return gl::glBufferAddressRangeNV(pname, index, address, length);
}

inline void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return gl::glBufferDataARB(target, size, data, usage);
}

inline void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return gl::glBufferParameteriAPPLE(target, pname, param);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return gl::glBufferStorage(target, size, data, flags);
}

inline void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return gl::glBufferSubDataARB(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatus(GLenum target)
{
    return gl::glCheckFramebufferStatus(target);
}

inline GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return gl::glCheckFramebufferStatusEXT(target);
}

inline GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return gl::glCheckNamedFramebufferStatusEXT(framebuffer, target);
}

inline void glClampColor(GLenum target, GLenum clamp)
{
    return gl::glClampColor(target, clamp);
}

inline void glClampColorARB(GLenum target, GLenum clamp)
{
    return gl::glClampColorARB(target, clamp);
}

inline void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glClearAccumxOES(red, green, blue, alpha);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return gl::glClearBufferData(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return gl::glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return gl::glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return gl::glClearBufferfv(buffer, drawbuffer, value);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return gl::glClearBufferiv(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return gl::glClearBufferuiv(buffer, drawbuffer, value);
}

inline void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return gl::glClearColorIiEXT(red, green, blue, alpha);
}

inline void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return gl::glClearColorIuiEXT(red, green, blue, alpha);
}

inline void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glClearColorxOES(red, green, blue, alpha);
}

inline void glClearDepthdNV(GLdouble depth)
{
    return gl::glClearDepthdNV(depth);
}

inline void glClearDepthf(GLfloat d)
{
    return gl::glClearDepthf(d);
}

inline void glClearDepthfOES(GLclampf depth)
{
    return gl::glClearDepthfOES(depth);
}

inline void glClearDepthxOES(GLfixed depth)
{
    return gl::glClearDepthxOES(depth);
}

inline void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return gl::glClearTexImage(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return gl::glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline void glClientActiveTextureARB(GLenum texture)
{
    return gl::glClientActiveTextureARB(texture);
}

inline void glClientActiveVertexStreamATI(GLenum stream)
{
    return gl::glClientActiveVertexStreamATI(stream);
}

inline void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return gl::glClientAttribDefaultEXT(mask);
}

inline GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return gl::glClientWaitSync(sync, flags, timeout);
}

inline void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return gl::glClipPlanefOES(plane, equation);
}

inline void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return gl::glClipPlanexOES(plane, equation);
}

inline void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor3fVertex3fSUN(r, g, b, x, y, z);
}

inline void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return gl::glColor3fVertex3fvSUN(c, v);
}

inline void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return gl::glColor3hNV(red, green, blue);
}

inline void glColor3hvNV(const GLhalfNV * v)
{
    return gl::glColor3hvNV(v);
}

inline void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return gl::glColor3xOES(red, green, blue);
}

inline void glColor3xvOES(const GLfixed * components)
{
    return gl::glColor3xvOES(components);
}

inline void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glColor4fNormal3fVertex3fvSUN(c, n, v);
}

inline void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return gl::glColor4hNV(red, green, blue, alpha);
}

inline void glColor4hvNV(const GLhalfNV * v)
{
    return gl::glColor4hvNV(v);
}

inline void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return gl::glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

inline void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return gl::glColor4ubVertex2fvSUN(c, v);
}

inline void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

inline void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return gl::glColor4ubVertex3fvSUN(c, v);
}

inline void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glColor4xOES(red, green, blue, alpha);
}

inline void glColor4xvOES(const GLfixed * components)
{
    return gl::glColor4xvOES(components);
}

inline void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glColorFormatNV(size, type, stride);
}

inline void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return gl::glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return gl::glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return gl::glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gl::glColorMaskIndexedEXT(index, r, g, b, a);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gl::glColorMaski(index, r, g, b, a);
}

inline void glColorP3ui(GLenum type, GLuint color)
{
    return gl::glColorP3ui(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP3uiv(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color)
{
    return gl::glColorP4ui(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP4uiv(type, color);
}

inline void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glColorPointerEXT(size, type, stride, count, pointer);
}

inline void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glColorPointervINTEL(size, type, pointer);
}

inline void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return gl::glColorSubTable(target, start, count, format, type, data);
}

inline void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return gl::glColorSubTableEXT(target, start, count, format, type, data);
}

inline void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTable(target, internalformat, width, format, type, table);
}

inline void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTableEXT(target, internalFormat, width, format, type, table);
}

inline void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glColorTableParameterfv(target, pname, params);
}

inline void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glColorTableParameterfvSGI(target, pname, params);
}

inline void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glColorTableParameteriv(target, pname, params);
}

inline void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glColorTableParameterivSGI(target, pname, params);
}

inline void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTableSGI(target, internalformat, width, format, type, table);
}

inline void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return gl::glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

inline void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return gl::glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

inline void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return gl::glCombinerParameterfNV(pname, param);
}

inline void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return gl::glCombinerParameterfvNV(pname, params);
}

inline void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return gl::glCombinerParameteriNV(pname, param);
}

inline void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return gl::glCombinerParameterivNV(pname, params);
}

inline void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return gl::glCombinerStageParameterfvNV(stage, pname, params);
}

inline void glCompileShaderARB(GLhandleARB shaderObj)
{
    return gl::glCompileShaderARB(shaderObj);
}

inline void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return gl::glCompileShaderIncludeARB(shader, count, path, length);
}

inline void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return gl::glConvolutionParameterf(target, pname, params);
}

inline void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return gl::glConvolutionParameterfEXT(target, pname, params);
}

inline void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glConvolutionParameterfv(target, pname, params);
}

inline void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glConvolutionParameterfvEXT(target, pname, params);
}

inline void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return gl::glConvolutionParameteri(target, pname, params);
}

inline void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return gl::glConvolutionParameteriEXT(target, pname, params);
}

inline void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glConvolutionParameteriv(target, pname, params);
}

inline void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glConvolutionParameterivEXT(target, pname, params);
}

inline void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glConvolutionParameterxOES(target, pname, param);
}

inline void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glConvolutionParameterxvOES(target, pname, params);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorSubTable(target, start, x, y, width);
}

inline void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorSubTableEXT(target, start, x, y, width);
}

inline void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorTable(target, internalformat, x, y, width);
}

inline void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorTableSGI(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

inline void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return gl::glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

inline void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

inline void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

inline void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return gl::glCopyPathNV(resultPath, srcPath);
}

inline void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

inline void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return gl::glCoverFillPathNV(path, coverMode);
}

inline void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return gl::glCoverStrokePathNV(path, coverMode);
}

inline void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return gl::glCreatePerfQueryINTEL(queryId, queryHandle);
}

inline GLhandleARB glCreateProgramObjectARB()
{
    return gl::glCreateProgramObjectARB();
}

inline GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return gl::glCreateShaderObjectARB(shaderType);
}

inline GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return gl::glCreateShaderProgramEXT(type, string);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return gl::glCreateShaderProgramv(type, count, strings);
}

inline GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return gl::glCreateSyncFromCLeventARB(context, event, flags);
}

inline void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return gl::glCullParameterdvEXT(pname, params);
}

inline void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return gl::glCullParameterfvEXT(pname, params);
}

inline void glCurrentPaletteMatrixARB(GLint index)
{
    return gl::glCurrentPaletteMatrixARB(index);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return gl::glDebugMessageCallback(callback, userParam);
}

inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return gl::glDebugMessageCallbackAMD(callback, userParam);
}

inline void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return gl::glDebugMessageCallbackARB(callback, userParam);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageControl(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageControlARB(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageEnableAMD(category, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsert(source, type, id, severity, length, buf);
}

inline void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsertAMD(category, severity, id, length, buf);
}

inline void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsertARB(source, type, id, severity, length, buf);
}

inline void glDeformSGIX(FfdMaskSGIX mask)
{
    return gl::glDeformSGIX(mask);
}

inline void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return gl::glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return gl::glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return gl::glDeleteAsyncMarkersSGIX(marker, range);
}

inline void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return gl::glDeleteBuffersARB(n, buffers);
}

inline void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return gl::glDeleteFencesAPPLE(n, fences);
}

inline void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return gl::glDeleteFencesNV(n, fences);
}

inline void glDeleteFragmentShaderATI(GLuint id)
{
    return gl::glDeleteFragmentShaderATI(id);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return gl::glDeleteFramebuffers(n, framebuffers);
}

inline void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return gl::glDeleteFramebuffersEXT(n, framebuffers);
}

inline void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return gl::glDeleteNamedStringARB(namelen, name);
}

inline void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return gl::glDeleteNamesAMD(identifier, num, names);
}

inline void glDeleteObjectARB(GLhandleARB obj)
{
    return gl::glDeleteObjectARB(obj);
}

inline void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteOcclusionQueriesNV(n, ids);
}

inline void glDeletePathsNV(GLuint path, GLsizei range)
{
    return gl::glDeletePathsNV(path, range);
}

inline void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gl::glDeletePerfMonitorsAMD(n, monitors);
}

inline void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return gl::glDeletePerfQueryINTEL(queryHandle);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return gl::glDeleteProgramPipelines(n, pipelines);
}

inline void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return gl::glDeleteProgramsARB(n, programs);
}

inline void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return gl::glDeleteProgramsNV(n, programs);
}

inline void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteQueriesARB(n, ids);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return gl::glDeleteRenderbuffers(n, renderbuffers);
}

inline void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return gl::glDeleteRenderbuffersEXT(n, renderbuffers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return gl::glDeleteSamplers(count, samplers);
}

inline void glDeleteSync(GLsync sync)
{
    return gl::glDeleteSync(sync);
}

inline void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return gl::glDeleteTexturesEXT(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteTransformFeedbacks(n, ids);
}

inline void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteTransformFeedbacksNV(n, ids);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return gl::glDeleteVertexArrays(n, arrays);
}

inline void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return gl::glDeleteVertexArraysAPPLE(n, arrays);
}

inline void glDeleteVertexShaderEXT(GLuint id)
{
    return gl::glDeleteVertexShaderEXT(id);
}

inline void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return gl::glDepthBoundsEXT(zmin, zmax);
}

inline void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return gl::glDepthBoundsdNV(zmin, zmax);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return gl::glDepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return gl::glDepthRangeIndexed(index, n, f);
}

inline void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return gl::glDepthRangedNV(zNear, zFar);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
    return gl::glDepthRangef(n, f);
}

inline void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return gl::glDepthRangefOES(n, f);
}

inline void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return gl::glDepthRangexOES(n, f);
}

inline void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return gl::glDetachObjectARB(containerObj, attachedObj);
}

inline void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return gl::glDetailTexFuncSGIS(target, n, points);
}

inline void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return gl::glDisableClientStateIndexedEXT(array, index);
}

inline void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return gl::glDisableClientStateiEXT(array, index);
}

inline void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return gl::glDisableIndexedEXT(target, index);
}

inline void glDisableVariantClientStateEXT(GLuint id)
{
    return gl::glDisableVariantClientStateEXT(id);
}

inline void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return gl::glDisableVertexArrayAttribEXT(vaobj, index);
}

inline void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return gl::glDisableVertexArrayEXT(vaobj, array);
}

inline void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return gl::glDisableVertexAttribAPPLE(index, pname);
}

inline void glDisableVertexAttribArrayARB(GLuint index)
{
    return gl::glDisableVertexAttribArrayARB(index);
}

inline void glDisablei(GLenum target, GLuint index)
{
    return gl::glDisablei(target, index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return gl::glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return gl::glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
    return gl::glDispatchComputeIndirect(indirect);
}

inline void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawArraysEXT(mode, first, count);
}

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return gl::glDrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return gl::glDrawArraysInstanced(mode, first, count, instancecount);
}

inline void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return gl::glDrawArraysInstancedARB(mode, first, count, primcount);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return gl::glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return gl::glDrawArraysInstancedEXT(mode, start, count, primcount);
}

inline void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffersARB(n, bufs);
}

inline void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffersATI(n, bufs);
}

inline void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawElementArrayAPPLE(mode, first, count);
}

inline void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return gl::glDrawElementArrayATI(mode, count);
}

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gl::glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return gl::glDrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return gl::glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gl::glDrawElementsInstancedARB(mode, count, type, indices, primcount);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return gl::glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return gl::glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return gl::glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gl::glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

inline void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return gl::glDrawMeshArraysSUN(mode, first, count, width);
}

inline void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return gl::glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

inline void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return gl::glDrawRangeElementArrayATI(mode, start, end, count);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return gl::glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}

inline void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return gl::glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return gl::glDrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return gl::glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return gl::glDrawTransformFeedbackNV(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return gl::glDrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return gl::glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEdgeFlagFormatNV(GLsizei stride)
{
    return gl::glEdgeFlagFormatNV(stride);
}

inline void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return gl::glEdgeFlagPointerEXT(stride, count, pointer);
}

inline void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return gl::glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

inline void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return gl::glElementPointerAPPLE(type, pointer);
}

inline void glElementPointerATI(GLenum type, const void * pointer)
{
    return gl::glElementPointerATI(type, pointer);
}

inline void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return gl::glEnableClientStateIndexedEXT(array, index);
}

inline void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return gl::glEnableClientStateiEXT(array, index);
}

inline void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return gl::glEnableIndexedEXT(target, index);
}

inline void glEnableVariantClientStateEXT(GLuint id)
{
    return gl::glEnableVariantClientStateEXT(id);
}

inline void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return gl::glEnableVertexArrayAttribEXT(vaobj, index);
}

inline void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return gl::glEnableVertexArrayEXT(vaobj, array);
}

inline void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return gl::glEnableVertexAttribAPPLE(index, pname);
}

inline void glEnableVertexAttribArrayARB(GLuint index)
{
    return gl::glEnableVertexAttribArrayARB(index);
}

inline void glEnablei(GLenum target, GLuint index)
{
    return gl::glEnablei(target, index);
}

inline void glEndConditionalRender()
{
    return gl::glEndConditionalRender();
}

inline void glEndConditionalRenderNV()
{
    return gl::glEndConditionalRenderNV();
}

inline void glEndConditionalRenderNVX()
{
    return gl::glEndConditionalRenderNVX();
}

inline void glEndFragmentShaderATI()
{
    return gl::glEndFragmentShaderATI();
}

inline void glEndOcclusionQueryNV()
{
    return gl::glEndOcclusionQueryNV();
}

inline void glEndPerfMonitorAMD(GLuint monitor)
{
    return gl::glEndPerfMonitorAMD(monitor);
}

inline void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return gl::glEndPerfQueryINTEL(queryHandle);
}

inline void glEndQueryARB(GLenum target)
{
    return gl::glEndQueryARB(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return gl::glEndQueryIndexed(target, index);
}

inline void glEndTransformFeedback()
{
    return gl::glEndTransformFeedback();
}

inline void glEndTransformFeedbackEXT()
{
    return gl::glEndTransformFeedbackEXT();
}

inline void glEndTransformFeedbackNV()
{
    return gl::glEndTransformFeedbackNV();
}

inline void glEndVertexShaderEXT()
{
    return gl::glEndVertexShaderEXT();
}

inline void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return gl::glEndVideoCaptureNV(video_capture_slot);
}

inline void glEvalCoord1xOES(GLfixed u)
{
    return gl::glEvalCoord1xOES(u);
}

inline void glEvalCoord1xvOES(const GLfixed * coords)
{
    return gl::glEvalCoord1xvOES(coords);
}

inline void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return gl::glEvalCoord2xOES(u, v);
}

inline void glEvalCoord2xvOES(const GLfixed * coords)
{
    return gl::glEvalCoord2xvOES(coords);
}

inline void glEvalMapsNV(GLenum target, GLenum mode)
{
    return gl::glEvalMapsNV(target, mode);
}

inline void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return gl::glExecuteProgramNV(target, id, params);
}

inline void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return gl::glExtractComponentEXT(res, src, num);
}

inline void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return gl::glFeedbackBufferxOES(n, type, buffer);
}

inline GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return gl::glFenceSync(condition, flags);
}

inline void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return gl::glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

inline GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return gl::glFinishAsyncSGIX(markerp);
}

inline void glFinishFenceAPPLE(GLuint fence)
{
    return gl::glFinishFenceAPPLE(fence);
}

inline void glFinishFenceNV(GLuint fence)
{
    return gl::glFinishFenceNV(fence);
}

inline void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return gl::glFinishObjectAPPLE(object, name);
}

inline void glFinishTextureSUNX()
{
    return gl::glFinishTextureSUNX();
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedBufferRange(target, offset, length);
}

inline void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return gl::glFlushMappedBufferRangeAPPLE(target, offset, size);
}

inline void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

inline void glFlushPixelDataRangeNV(GLenum target)
{
    return gl::glFlushPixelDataRangeNV(target);
}

inline void glFlushRasterSGIX()
{
    return gl::glFlushRasterSGIX();
}

inline void glFlushStaticDataIBM(GLenum target)
{
    return gl::glFlushStaticDataIBM(target);
}

inline void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return gl::glFlushVertexArrayRangeAPPLE(length, pointer);
}

inline void glFlushVertexArrayRangeNV()
{
    return gl::glFlushVertexArrayRangeNV();
}

inline void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return gl::glFogCoordFormatNV(type, stride);
}

inline void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glFogCoordPointerEXT(type, stride, pointer);
}

inline void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glFogCoorddEXT(GLdouble coord)
{
    return gl::glFogCoorddEXT(coord);
}

inline void glFogCoorddvEXT(const GLdouble * coord)
{
    return gl::glFogCoorddvEXT(coord);
}

inline void glFogCoordfEXT(GLfloat coord)
{
    return gl::glFogCoordfEXT(coord);
}

inline void glFogCoordfvEXT(const GLfloat * coord)
{
    return gl::glFogCoordfvEXT(coord);
}

inline void glFogCoordhNV(GLhalfNV fog)
{
    return gl::glFogCoordhNV(fog);
}

inline void glFogCoordhvNV(const GLhalfNV * fog)
{
    return gl::glFogCoordhvNV(fog);
}

inline void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return gl::glFogFuncSGIS(n, points);
}

inline void glFogxOES(GLenum pname, GLfixed param)
{
    return gl::glFogxOES(pname, param);
}

inline void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return gl::glFogxvOES(pname, param);
}

inline void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return gl::glFragmentColorMaterialSGIX(face, mode);
}

inline void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return gl::glFragmentLightModelfSGIX(pname, param);
}

inline void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return gl::glFragmentLightModelfvSGIX(pname, params);
}

inline void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return gl::glFragmentLightModeliSGIX(pname, param);
}

inline void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return gl::glFragmentLightModelivSGIX(pname, params);
}

inline void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return gl::glFragmentLightfSGIX(light, pname, param);
}

inline void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return gl::glFragmentLightfvSGIX(light, pname, params);
}

inline void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return gl::glFragmentLightiSGIX(light, pname, param);
}

inline void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return gl::glFragmentLightivSGIX(light, pname, params);
}

inline void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return gl::glFragmentMaterialfSGIX(face, pname, param);
}

inline void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return gl::glFragmentMaterialfvSGIX(face, pname, params);
}

inline void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return gl::glFragmentMaterialiSGIX(face, pname, param);
}

inline void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return gl::glFragmentMaterialivSGIX(face, pname, params);
}

inline void glFrameTerminatorGREMEDY()
{
    return gl::glFrameTerminatorGREMEDY();
}

inline void glFrameZoomSGIX(GLint factor)
{
    return gl::glFrameZoomSGIX(factor);
}

inline void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return gl::glFramebufferDrawBufferEXT(framebuffer, mode);
}

inline void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return gl::glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return gl::glFramebufferParameteri(target, pname, param);
}

inline void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return gl::glFramebufferReadBufferEXT(framebuffer, mode);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture(target, attachment, texture, level);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTextureARB(target, attachment, texture, level);
}

inline void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTextureEXT(target, attachment, texture, level);
}

inline void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

inline void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

inline void glFreeObjectBufferATI(GLuint buffer)
{
    return gl::glFreeObjectBufferATI(buffer);
}

inline void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return gl::glFrustumfOES(l, r, b, t, n, f);
}

inline void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return gl::glFrustumxOES(l, r, b, t, n, f);
}

inline GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return gl::glGenAsyncMarkersSGIX(range);
}

inline void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return gl::glGenBuffersARB(n, buffers);
}

inline void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return gl::glGenFencesAPPLE(n, fences);
}

inline void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return gl::glGenFencesNV(n, fences);
}

inline GLuint glGenFragmentShadersATI(GLuint range)
{
    return gl::glGenFragmentShadersATI(range);
}

inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return gl::glGenFramebuffers(n, framebuffers);
}

inline void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return gl::glGenFramebuffersEXT(n, framebuffers);
}

inline void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return gl::glGenNamesAMD(identifier, num, names);
}

inline void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return gl::glGenOcclusionQueriesNV(n, ids);
}

inline GLuint glGenPathsNV(GLsizei range)
{
    return gl::glGenPathsNV(range);
}

inline void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gl::glGenPerfMonitorsAMD(n, monitors);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return gl::glGenProgramPipelines(n, pipelines);
}

inline void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return gl::glGenProgramsARB(n, programs);
}

inline void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return gl::glGenProgramsNV(n, programs);
}

inline void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return gl::glGenQueriesARB(n, ids);
}

inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return gl::glGenRenderbuffers(n, renderbuffers);
}

inline void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return gl::glGenRenderbuffersEXT(n, renderbuffers);
}

inline void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return gl::glGenSamplers(count, samplers);
}

inline GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return gl::glGenSymbolsEXT(datatype, storagetype, range, components);
}

inline void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return gl::glGenTexturesEXT(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return gl::glGenTransformFeedbacks(n, ids);
}

inline void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return gl::glGenTransformFeedbacksNV(n, ids);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return gl::glGenVertexArrays(n, arrays);
}

inline void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return gl::glGenVertexArraysAPPLE(n, arrays);
}

inline GLuint glGenVertexShadersEXT(GLuint range)
{
    return gl::glGenVertexShadersEXT(range);
}

inline void glGenerateMipmap(GLenum target)
{
    return gl::glGenerateMipmap(target);
}

inline void glGenerateMipmapEXT(GLenum target)
{
    return gl::glGenerateMipmapEXT(target);
}

inline void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return gl::glGenerateMultiTexMipmapEXT(texunit, target);
}

inline void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return gl::glGenerateTextureMipmapEXT(texture, target);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return gl::glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return gl::glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return gl::glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return gl::glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return gl::glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return gl::glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return gl::glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return gl::glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return gl::glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

inline void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return gl::glGetArrayObjectfvATI(array, pname, params);
}

inline void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return gl::glGetArrayObjectivATI(array, pname, params);
}

inline void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return gl::glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

inline GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return gl::glGetAttribLocationARB(programObj, name);
}

inline void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return gl::glGetBooleanIndexedvEXT(target, index, data);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return gl::glGetBooleani_v(target, index, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return gl::glGetBufferParameteri64v(target, pname, params);
}

inline void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetBufferParameterivARB(target, pname, params);
}

inline void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetBufferParameterui64vNV(target, pname, params);
}

inline void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetBufferPointervARB(target, pname, params);
}

inline void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return gl::glGetBufferSubDataARB(target, offset, size, data);
}

inline void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return gl::glGetClipPlanefOES(plane, equation);
}

inline void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return gl::glGetClipPlanexOES(plane, equation);
}

inline void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return gl::glGetColorTable(target, format, type, table);
}

inline void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return gl::glGetColorTableEXT(target, format, type, data);
}

inline void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfv(target, pname, params);
}

inline void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfvEXT(target, pname, params);
}

inline void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfvSGI(target, pname, params);
}

inline void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameteriv(target, pname, params);
}

inline void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameterivEXT(target, pname, params);
}

inline void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameterivSGI(target, pname, params);
}

inline void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return gl::glGetColorTableSGI(target, format, type, table);
}

inline void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return gl::glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

inline void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return gl::glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

inline void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerStageParameterfvNV(stage, pname, params);
}

inline void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return gl::glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

inline void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return gl::glGetCompressedTexImageARB(target, level, img);
}

inline void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return gl::glGetCompressedTextureImageEXT(texture, target, lod, img);
}

inline void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return gl::glGetConvolutionFilter(target, format, type, image);
}

inline void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return gl::glGetConvolutionFilterEXT(target, format, type, image);
}

inline void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetConvolutionParameterfv(target, pname, params);
}

inline void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetConvolutionParameterfvEXT(target, pname, params);
}

inline void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetConvolutionParameteriv(target, pname, params);
}

inline void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetConvolutionParameterivEXT(target, pname, params);
}

inline void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetConvolutionParameterxvOES(target, pname, params);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return gl::glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return gl::glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

inline GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return gl::glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return gl::glGetDetailTexFuncSGIS(target, points);
}

inline void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return gl::glGetDoubleIndexedvEXT(target, index, data);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return gl::glGetDoublei_v(target, index, data);
}

inline void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return gl::glGetDoublei_vEXT(pname, index, params);
}

inline void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return gl::glGetFenceivNV(fence, pname, params);
}

inline void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return gl::glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

inline void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return gl::glGetFinalCombinerInputParameterivNV(variable, pname, params);
}

inline void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return gl::glGetFirstPerfQueryIdINTEL(queryId);
}

inline void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return gl::glGetFixedvOES(pname, params);
}

inline void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return gl::glGetFloatIndexedvEXT(target, index, data);
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return gl::glGetFloati_v(target, index, data);
}

inline void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return gl::glGetFloati_vEXT(pname, index, params);
}

inline void glGetFogFuncSGIS(GLfloat * points)
{
    return gl::glGetFogFuncSGIS(points);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataIndex(program, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataLocation(program, name);
}

inline GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataLocationEXT(program, name);
}

inline void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return gl::glGetFragmentLightfvSGIX(light, pname, params);
}

inline void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return gl::glGetFragmentLightivSGIX(light, pname, params);
}

inline void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return gl::glGetFragmentMaterialfvSGIX(face, pname, params);
}

inline void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return gl::glGetFragmentMaterialivSGIX(face, pname, params);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

inline void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferParameteriv(target, pname, params);
}

inline void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferParameterivEXT(framebuffer, pname, params);
}

inline GLenum glGetGraphicsResetStatusARB()
{
    return gl::glGetGraphicsResetStatusARB();
}

inline GLhandleARB glGetHandleARB(GLenum pname)
{
    return gl::glGetHandleARB(pname);
}

inline void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetHistogram(target, reset, format, type, values);
}

inline void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetHistogramEXT(target, reset, format, type, values);
}

inline void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetHistogramParameterfv(target, pname, params);
}

inline void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetHistogramParameterfvEXT(target, pname, params);
}

inline void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetHistogramParameteriv(target, pname, params);
}

inline void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetHistogramParameterivEXT(target, pname, params);
}

inline void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetHistogramParameterxvOES(target, pname, params);
}

inline GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return gl::glGetImageHandleARB(texture, level, layered, layer, format);
}

inline GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return gl::glGetImageHandleNV(texture, level, layered, layer, format);
}

inline void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetImageTransformParameterfvHP(target, pname, params);
}

inline void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetImageTransformParameterivHP(target, pname, params);
}

inline void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return gl::glGetInfoLogARB(obj, maxLength, length, infoLog);
}

inline GLint glGetInstrumentsSGIX()
{
    return gl::glGetInstrumentsSGIX();
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return gl::glGetInteger64i_v(target, index, data);
}

inline void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return gl::glGetInteger64v(pname, data);
}

inline void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return gl::glGetIntegerIndexedvEXT(target, index, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return gl::glGetIntegeri_v(target, index, data);
}

inline void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return gl::glGetIntegerui64i_vNV(value, index, result);
}

inline void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return gl::glGetIntegerui64vNV(value, result);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return gl::glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return gl::glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetInvariantBooleanvEXT(id, value, data);
}

inline void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetInvariantFloatvEXT(id, value, data);
}

inline void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetInvariantIntegervEXT(id, value, data);
}

inline void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return gl::glGetLightxOES(light, pname, params);
}

inline void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return gl::glGetListParameterfvSGIX(list, pname, params);
}

inline void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return gl::glGetListParameterivSGIX(list, pname, params);
}

inline void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetLocalConstantBooleanvEXT(id, value, data);
}

inline void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetLocalConstantFloatvEXT(id, value, data);
}

inline void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetLocalConstantIntegervEXT(id, value, data);
}

inline void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetMapAttribParameterfvNV(target, index, pname, params);
}

inline void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetMapAttribParameterivNV(target, index, pname, params);
}

inline void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return gl::glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

inline void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMapParameterfvNV(target, pname, params);
}

inline void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMapParameterivNV(target, pname, params);
}

inline void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return gl::glGetMapxvOES(target, query, v);
}

inline void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return gl::glGetMaterialxOES(face, pname, param);
}

inline void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetMinmax(target, reset, format, type, values);
}

inline void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetMinmaxEXT(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMinmaxParameterfv(target, pname, params);
}

inline void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMinmaxParameterfvEXT(target, pname, params);
}

inline void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMinmaxParameteriv(target, pname, params);
}

inline void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMinmaxParameterivEXT(target, pname, params);
}

inline void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return gl::glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

inline void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return gl::glGetMultisamplefv(pname, index, val);
}

inline void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return gl::glGetMultisamplefvNV(pname, index, val);
}

inline void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedBufferParameterivEXT(buffer, pname, params);
}

inline void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetNamedBufferParameterui64vNV(buffer, pname, params);
}

inline void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return gl::glGetNamedBufferPointervEXT(buffer, pname, params);
}

inline void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return gl::glGetNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

inline void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

inline void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return gl::glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

inline void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return gl::glGetNamedProgramStringEXT(program, target, pname, string);
}

inline void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetNamedProgramivEXT(program, target, pname, params);
}

inline void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

inline void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return gl::glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

inline void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return gl::glGetNamedStringivARB(namelen, name, pname, params);
}

inline void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return gl::glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

inline void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return gl::glGetObjectBufferfvATI(buffer, pname, params);
}

inline void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return gl::glGetObjectBufferivATI(buffer, pname, params);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectLabel(identifier, name, bufSize, length, label);
}

inline void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectLabelEXT(type, object, bufSize, length, label);
}

inline void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return gl::glGetObjectParameterfvARB(obj, pname, params);
}

inline void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return gl::glGetObjectParameterivAPPLE(objectType, name, pname, params);
}

inline void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return gl::glGetObjectParameterivARB(obj, pname, params);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetOcclusionQueryivNV(id, pname, params);
}

inline void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetOcclusionQueryuivNV(id, pname, params);
}

inline void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return gl::glGetPathColorGenfvNV(color, pname, value);
}

inline void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return gl::glGetPathColorGenivNV(color, pname, value);
}

inline void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return gl::glGetPathCommandsNV(path, commands);
}

inline void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return gl::glGetPathCoordsNV(path, coords);
}

inline void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return gl::glGetPathDashArrayNV(path, dashArray);
}

inline GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return gl::glGetPathLengthNV(path, startSegment, numSegments);
}

inline void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return gl::glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

inline void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return gl::glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

inline void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return gl::glGetPathParameterfvNV(path, pname, value);
}

inline void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return gl::glGetPathParameterivNV(path, pname, value);
}

inline void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return gl::glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

inline void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return gl::glGetPathTexGenfvNV(texCoordSet, pname, value);
}

inline void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return gl::glGetPathTexGenivNV(texCoordSet, pname, value);
}

inline void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return gl::glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

inline void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return gl::glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

inline void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return gl::glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

inline void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return gl::glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

inline void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return gl::glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

inline void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return gl::glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

inline void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return gl::glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

inline void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return gl::glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

inline void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return gl::glGetPerfQueryIdByNameINTEL(queryName, queryId);
}

inline void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return gl::glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

inline void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return gl::glGetPixelMapxv(map, size, values);
}

inline void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return gl::glGetPixelTexGenParameterfvSGIS(pname, params);
}

inline void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return gl::glGetPixelTexGenParameterivSGIS(pname, params);
}

inline void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetPixelTransformParameterfvEXT(target, pname, params);
}

inline void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetPixelTransformParameterivEXT(target, pname, params);
}

inline void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return gl::glGetPointerIndexedvEXT(target, index, data);
}

inline void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return gl::glGetPointeri_vEXT(pname, index, params);
}

inline void glGetPointervEXT(GLenum pname, void ** params)
{
    return gl::glGetPointervEXT(pname, params);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return gl::glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return gl::glGetProgramEnvParameterIivNV(target, index, params);
}

inline void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetProgramEnvParameterIuivNV(target, index, params);
}

inline void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetProgramEnvParameterdvARB(target, index, params);
}

inline void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetProgramEnvParameterfvARB(target, index, params);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return gl::glGetProgramInterfaceiv(program, programInterface, pname, params);
}

inline void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return gl::glGetProgramLocalParameterIivNV(target, index, params);
}

inline void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetProgramLocalParameterIuivNV(target, index, params);
}

inline void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetProgramLocalParameterdvARB(target, index, params);
}

inline void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetProgramLocalParameterfvARB(target, index, params);
}

inline void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return gl::glGetProgramNamedParameterdvNV(id, len, name, params);
}

inline void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return gl::glGetProgramNamedParameterfvNV(id, len, name, params);
}

inline void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetProgramParameterdvNV(target, index, pname, params);
}

inline void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetProgramParameterfvNV(target, index, pname, params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return gl::glGetProgramPipelineiv(pipeline, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceIndex(program, programInterface, name);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceLocation(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceLocationIndex(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return gl::glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return gl::glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return gl::glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return gl::glGetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return gl::glGetProgramStringARB(target, pname, string);
}

inline void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return gl::glGetProgramStringNV(id, pname, program);
}

inline void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return gl::glGetProgramSubroutineParameteruivNV(target, index, param);
}

inline void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetProgramivARB(target, pname, params);
}

inline void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetProgramivNV(id, pname, params);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return gl::glGetQueryObjecti64v(id, pname, params);
}

inline void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return gl::glGetQueryObjecti64vEXT(id, pname, params);
}

inline void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetQueryObjectivARB(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return gl::glGetQueryObjectui64v(id, pname, params);
}

inline void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return gl::glGetQueryObjectui64vEXT(id, pname, params);
}

inline void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetQueryObjectuivARB(id, pname, params);
}

inline void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetQueryivARB(target, pname, params);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetRenderbufferParameteriv(target, pname, params);
}

inline void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetRenderbufferParameterivEXT(target, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameterIiv(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return gl::glGetSamplerParameterIuiv(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return gl::glGetSamplerParameterfv(sampler, pname, params);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameteriv(sampler, pname, params);
}

inline void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return gl::glGetSeparableFilter(target, format, type, row, column, span);
}

inline void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return gl::glGetSeparableFilterEXT(target, format, type, row, column, span);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return gl::glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return gl::glGetShaderSourceARB(obj, maxLength, length, source);
}

inline void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return gl::glGetSharpenTexFuncSGIS(target, points);
}

inline const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return gl::glGetStringi(name, index);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return gl::glGetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return gl::glGetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gl::glGetSynciv(sync, pname, bufSize, length, values);
}

inline void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return gl::glGetTexBumpParameterfvATI(pname, param);
}

inline void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return gl::glGetTexBumpParameterivATI(pname, param);
}

inline void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetTexEnvxvOES(target, pname, params);
}

inline void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return gl::glGetTexFilterFuncSGIS(target, filter, weights);
}

inline void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return gl::glGetTexGenxvOES(coord, pname, params);
}

inline void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return gl::glGetTexLevelParameterxvOES(target, level, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameterIiv(target, pname, params);
}

inline void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameterIivEXT(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTexParameterIuiv(target, pname, params);
}

inline void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTexParameterIuivEXT(target, pname, params);
}

inline void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetTexParameterPointervAPPLE(target, pname, params);
}

inline void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetTexParameterxvOES(target, pname, params);
}

inline GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return gl::glGetTextureHandleARB(texture);
}

inline GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return gl::glGetTextureHandleNV(texture);
}

inline void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

inline void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

inline void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

inline void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameterIivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureParameterfvEXT(texture, target, pname, params);
}

inline void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameterivEXT(texture, target, pname, params);
}

inline GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return gl::glGetTextureSamplerHandleARB(texture, sampler);
}

inline GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return gl::glGetTextureSamplerHandleNV(texture, sampler);
}

inline void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return gl::glGetTrackMatrixivNV(target, address, pname, params);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return gl::glGetTransformFeedbackVaryingNV(program, index, location);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return gl::glGetUniformBlockIndex(program, uniformBlockName);
}

inline GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return gl::glGetUniformBufferSizeEXT(program, location);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return gl::glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

inline GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return gl::glGetUniformLocationARB(programObj, name);
}

inline GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return gl::glGetUniformOffsetEXT(program, location);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return gl::glGetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return gl::glGetUniformdv(program, location, params);
}

inline void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return gl::glGetUniformfvARB(programObj, location, params);
}

inline void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return gl::glGetUniformi64vNV(program, location, params);
}

inline void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return gl::glGetUniformivARB(programObj, location, params);
}

inline void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return gl::glGetUniformui64vNV(program, location, params);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return gl::glGetUniformuiv(program, location, params);
}

inline void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return gl::glGetUniformuivEXT(program, location, params);
}

inline void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return gl::glGetVariantArrayObjectfvATI(id, pname, params);
}

inline void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetVariantArrayObjectivATI(id, pname, params);
}

inline void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetVariantBooleanvEXT(id, value, data);
}

inline void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetVariantFloatvEXT(id, value, data);
}

inline void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetVariantIntegervEXT(id, value, data);
}

inline void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return gl::glGetVariantPointervEXT(id, value, data);
}

inline GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return gl::glGetVaryingLocationNV(program, name);
}

inline void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

inline void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return gl::glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return gl::glGetVertexArrayPointervEXT(vaobj, pname, param);
}

inline void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

inline void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribArrayObjectivATI(index, pname, params);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribIiv(index, pname, params);
}

inline void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribIivEXT(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return gl::glGetVertexAttribIuiv(index, pname, params);
}

inline void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return gl::glGetVertexAttribIuivEXT(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribLdvEXT(index, pname, params);
}

inline void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return gl::glGetVertexAttribLi64vNV(index, pname, params);
}

inline void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVertexAttribLui64vARB(index, pname, params);
}

inline void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVertexAttribLui64vNV(index, pname, params);
}

inline void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointervARB(index, pname, pointer);
}

inline void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointervNV(index, pname, pointer);
}

inline void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdvARB(index, pname, params);
}

inline void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdvNV(index, pname, params);
}

inline void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfvARB(index, pname, params);
}

inline void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfvNV(index, pname, params);
}

inline void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribivARB(index, pname, params);
}

inline void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribivNV(index, pname, params);
}

inline void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return gl::glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return gl::glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return gl::glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return gl::glGetVideoCaptureivNV(video_capture_slot, pname, params);
}

inline void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return gl::glGetVideoi64vNV(video_slot, pname, params);
}

inline void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return gl::glGetVideoivNV(video_slot, pname, params);
}

inline void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVideoui64vNV(video_slot, pname, params);
}

inline void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return gl::glGetVideouivNV(video_slot, pname, params);
}

inline void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return gl::glGetnColorTableARB(target, format, type, bufSize, table);
}

inline void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return gl::glGetnCompressedTexImageARB(target, lod, bufSize, img);
}

inline void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return gl::glGetnConvolutionFilterARB(target, format, type, bufSize, image);
}

inline void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnHistogramARB(target, reset, format, type, bufSize, values);
}

inline void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return gl::glGetnMapdvARB(target, query, bufSize, v);
}

inline void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return gl::glGetnMapfvARB(target, query, bufSize, v);
}

inline void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return gl::glGetnMapivARB(target, query, bufSize, v);
}

inline void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnMinmaxARB(target, reset, format, type, bufSize, values);
}

inline void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return gl::glGetnPixelMapfvARB(map, bufSize, values);
}

inline void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return gl::glGetnPixelMapuivARB(map, bufSize, values);
}

inline void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return gl::glGetnPixelMapusvARB(map, bufSize, values);
}

inline void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return gl::glGetnPolygonStippleARB(bufSize, pattern);
}

inline void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return gl::glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return gl::glGetnTexImageARB(target, level, format, type, bufSize, img);
}

inline void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return gl::glGetnUniformdvARB(program, location, bufSize, params);
}

inline void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return gl::glGetnUniformfvARB(program, location, bufSize, params);
}

inline void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return gl::glGetnUniformivARB(program, location, bufSize, params);
}

inline void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return gl::glGetnUniformuivARB(program, location, bufSize, params);
}

inline void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return gl::glGlobalAlphaFactorbSUN(factor);
}

inline void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return gl::glGlobalAlphaFactordSUN(factor);
}

inline void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return gl::glGlobalAlphaFactorfSUN(factor);
}

inline void glGlobalAlphaFactoriSUN(GLint factor)
{
    return gl::glGlobalAlphaFactoriSUN(factor);
}

inline void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return gl::glGlobalAlphaFactorsSUN(factor);
}

inline void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return gl::glGlobalAlphaFactorubSUN(factor);
}

inline void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return gl::glGlobalAlphaFactoruiSUN(factor);
}

inline void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return gl::glGlobalAlphaFactorusSUN(factor);
}

inline void glHintPGI(GLenum target, GLint mode)
{
    return gl::glHintPGI(target, mode);
}

inline void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return gl::glHistogram(target, width, internalformat, sink);
}

inline void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return gl::glHistogramEXT(target, width, internalformat, sink);
}

inline void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return gl::glIglooInterfaceSGIX(pname, params);
}

inline void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glImageTransformParameterfHP(target, pname, param);
}

inline void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glImageTransformParameterfvHP(target, pname, params);
}

inline void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return gl::glImageTransformParameteriHP(target, pname, param);
}

inline void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glImageTransformParameterivHP(target, pname, params);
}

inline GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return gl::glImportSyncEXT(external_sync_type, external_sync, flags);
}

inline void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return gl::glIndexFormatNV(type, stride);
}

inline void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return gl::glIndexFuncEXT(func, ref);
}

inline void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return gl::glIndexMaterialEXT(face, mode);
}

inline void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glIndexPointerEXT(type, stride, count, pointer);
}

inline void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glIndexxOES(GLfixed component)
{
    return gl::glIndexxOES(component);
}

inline void glIndexxvOES(const GLfixed * component)
{
    return gl::glIndexxvOES(component);
}

inline void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return gl::glInsertComponentEXT(res, src, num);
}

inline void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gl::glInsertEventMarkerEXT(length, marker);
}

inline void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return gl::glInstrumentsBufferSGIX(size, buffer);
}

inline void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return gl::glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}

inline void glInvalidateBufferData(GLuint buffer)
{
    return gl::glInvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return gl::glInvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return gl::glInvalidateFramebuffer(target, numAttachments, attachments);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
    return gl::glInvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return gl::glIsAsyncMarkerSGIX(marker);
}

inline GLboolean glIsBufferARB(GLuint buffer)
{
    return gl::glIsBufferARB(buffer);
}

inline GLboolean glIsBufferResidentNV(GLenum target)
{
    return gl::glIsBufferResidentNV(target);
}

inline GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return gl::glIsEnabledIndexedEXT(target, index);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return gl::glIsEnabledi(target, index);
}

inline GLboolean glIsFenceAPPLE(GLuint fence)
{
    return gl::glIsFenceAPPLE(fence);
}

inline GLboolean glIsFenceNV(GLuint fence)
{
    return gl::glIsFenceNV(fence);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return gl::glIsFramebuffer(framebuffer);
}

inline GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return gl::glIsFramebufferEXT(framebuffer);
}

inline GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return gl::glIsImageHandleResidentARB(handle);
}

inline GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return gl::glIsImageHandleResidentNV(handle);
}

inline GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return gl::glIsNameAMD(identifier, name);
}

inline GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return gl::glIsNamedBufferResidentNV(buffer);
}

inline GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return gl::glIsNamedStringARB(namelen, name);
}

inline GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return gl::glIsObjectBufferATI(buffer);
}

inline GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return gl::glIsOcclusionQueryNV(id);
}

inline GLboolean glIsPathNV(GLuint path)
{
    return gl::glIsPathNV(path);
}

inline GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return gl::glIsPointInFillPathNV(path, mask, x, y);
}

inline GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return gl::glIsPointInStrokePathNV(path, x, y);
}

inline GLboolean glIsProgramARB(GLuint program)
{
    return gl::glIsProgramARB(program);
}

inline GLboolean glIsProgramNV(GLuint id)
{
    return gl::glIsProgramNV(id);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return gl::glIsProgramPipeline(pipeline);
}

inline GLboolean glIsQueryARB(GLuint id)
{
    return gl::glIsQueryARB(id);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return gl::glIsRenderbuffer(renderbuffer);
}

inline GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return gl::glIsRenderbufferEXT(renderbuffer);
}

inline GLboolean glIsSampler(GLuint sampler)
{
    return gl::glIsSampler(sampler);
}

inline GLboolean glIsSync(GLsync sync)
{
    return gl::glIsSync(sync);
}

inline GLboolean glIsTextureEXT(GLuint texture)
{
    return gl::glIsTextureEXT(texture);
}

inline GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return gl::glIsTextureHandleResidentARB(handle);
}

inline GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return gl::glIsTextureHandleResidentNV(handle);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return gl::glIsTransformFeedback(id);
}

inline GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return gl::glIsTransformFeedbackNV(id);
}

inline GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return gl::glIsVariantEnabledEXT(id, cap);
}

inline GLboolean glIsVertexArray(GLuint array)
{
    return gl::glIsVertexArray(array);
}

inline GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return gl::glIsVertexArrayAPPLE(array);
}

inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return gl::glIsVertexAttribEnabledAPPLE(index, pname);
}

inline void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return gl::glLabelObjectEXT(type, object, length, label);
}

inline void glLightEnviSGIX(GLenum pname, GLint param)
{
    return gl::glLightEnviSGIX(pname, param);
}

inline void glLightModelxOES(GLenum pname, GLfixed param)
{
    return gl::glLightModelxOES(pname, param);
}

inline void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return gl::glLightModelxvOES(pname, param);
}

inline void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return gl::glLightxOES(light, pname, param);
}

inline void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return gl::glLightxvOES(light, pname, params);
}

inline void glLineWidthxOES(GLfixed width)
{
    return gl::glLineWidthxOES(width);
}

inline void glLinkProgramARB(GLhandleARB programObj)
{
    return gl::glLinkProgramARB(programObj);
}

inline void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return gl::glListParameterfSGIX(list, pname, param);
}

inline void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return gl::glListParameterfvSGIX(list, pname, params);
}

inline void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return gl::glListParameteriSGIX(list, pname, param);
}

inline void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return gl::glListParameterivSGIX(list, pname, params);
}

inline void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return gl::glLoadIdentityDeformationMapSGIX(mask);
}

inline void glLoadMatrixxOES(const GLfixed * m)
{
    return gl::glLoadMatrixxOES(m);
}

inline void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return gl::glLoadProgramNV(target, id, len, program);
}

inline void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return gl::glLoadTransposeMatrixdARB(m);
}

inline void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return gl::glLoadTransposeMatrixfARB(m);
}

inline void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return gl::glLoadTransposeMatrixxOES(m);
}

inline void glLockArraysEXT(GLint first, GLsizei count)
{
    return gl::glLockArraysEXT(first, count);
}

inline void glMakeBufferNonResidentNV(GLenum target)
{
    return gl::glMakeBufferNonResidentNV(target);
}

inline void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return gl::glMakeBufferResidentNV(target, access);
}

inline void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return gl::glMakeImageHandleNonResidentARB(handle);
}

inline void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return gl::glMakeImageHandleNonResidentNV(handle);
}

inline void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return gl::glMakeImageHandleResidentARB(handle, access);
}

inline void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return gl::glMakeImageHandleResidentNV(handle, access);
}

inline void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return gl::glMakeNamedBufferNonResidentNV(buffer);
}

inline void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return gl::glMakeNamedBufferResidentNV(buffer, access);
}

inline void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return gl::glMakeTextureHandleNonResidentARB(handle);
}

inline void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return gl::glMakeTextureHandleNonResidentNV(handle);
}

inline void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return gl::glMakeTextureHandleResidentARB(handle);
}

inline void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return gl::glMakeTextureHandleResidentNV(handle);
}

inline void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return gl::glMap1xOES(target, u1, u2, stride, order, points);
}

inline void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return gl::glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBufferARB(GLenum target, GLenum access)
{
    return gl::glMapBufferARB(target, access);
}

inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapBufferRange(target, offset, length, access);
}

inline void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return gl::glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

inline void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return gl::glMapGrid1xOES(n, u1, u2);
}

inline void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return gl::glMapGrid2xOES(n, u1, u2, v1, v2);
}

inline void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return gl::glMapNamedBufferEXT(buffer, access);
}

inline void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapNamedBufferRangeEXT(buffer, offset, length, access);
}

inline void * glMapObjectBufferATI(GLuint buffer)
{
    return gl::glMapObjectBufferATI(buffer);
}

inline void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMapParameterfvNV(target, pname, params);
}

inline void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMapParameterivNV(target, pname, params);
}

inline void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return gl::glMapTexture2DINTEL(texture, level, access, stride, layout);
}

inline void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return gl::glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return gl::glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return gl::glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return gl::glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return gl::glMaterialxOES(face, pname, param);
}

inline void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return gl::glMaterialxvOES(face, pname, param);
}

inline void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glMatrixIndexPointerARB(size, type, stride, pointer);
}

inline void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return gl::glMatrixIndexubvARB(size, indices);
}

inline void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return gl::glMatrixIndexuivARB(size, indices);
}

inline void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return gl::glMatrixIndexusvARB(size, indices);
}

inline void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoad3x2fNV(matrixMode, m);
}

inline void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoad3x3fNV(matrixMode, m);
}

inline void glMatrixLoadIdentityEXT(GLenum mode)
{
    return gl::glMatrixLoadIdentityEXT(mode);
}

inline void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoadTranspose3x3fNV(matrixMode, m);
}

inline void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixLoadTransposedEXT(mode, m);
}

inline void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixLoadTransposefEXT(mode, m);
}

inline void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixLoaddEXT(mode, m);
}

inline void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixLoadfEXT(mode, m);
}

inline void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMult3x2fNV(matrixMode, m);
}

inline void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMult3x3fNV(matrixMode, m);
}

inline void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMultTranspose3x3fNV(matrixMode, m);
}

inline void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixMultTransposedEXT(mode, m);
}

inline void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixMultTransposefEXT(mode, m);
}

inline void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixMultdEXT(mode, m);
}

inline void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixMultfEXT(mode, m);
}

inline void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixPopEXT(GLenum mode)
{
    return gl::glMatrixPopEXT(mode);
}

inline void glMatrixPushEXT(GLenum mode)
{
    return gl::glMatrixPushEXT(mode);
}

inline void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixRotatedEXT(mode, angle, x, y, z);
}

inline void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixRotatefEXT(mode, angle, x, y, z);
}

inline void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixScaledEXT(mode, x, y, z);
}

inline void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixScalefEXT(mode, x, y, z);
}

inline void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixTranslatedEXT(mode, x, y, z);
}

inline void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixTranslatefEXT(mode, x, y, z);
}

inline void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return gl::glMemoryBarrier(barriers);
}

inline void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return gl::glMemoryBarrierEXT(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
    return gl::glMinSampleShading(value);
}

inline void glMinSampleShadingARB(GLfloat value)
{
    return gl::glMinSampleShadingARB(value);
}

inline void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return gl::glMinmax(target, internalformat, sink);
}

inline void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return gl::glMinmaxEXT(target, internalformat, sink);
}

inline void glMultMatrixxOES(const GLfixed * m)
{
    return gl::glMultMatrixxOES(m);
}

inline void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return gl::glMultTransposeMatrixdARB(m);
}

inline void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return gl::glMultTransposeMatrixfARB(m);
}

inline void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return gl::glMultTransposeMatrixxOES(m);
}

inline void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawArraysEXT(mode, first, count, primcount);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

inline void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

inline void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return gl::glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

inline void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return gl::glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

inline void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

inline void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

inline void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return gl::glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

inline void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return gl::glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

inline void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

inline void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return gl::glMultiTexCoord1bOES(texture, s);
}

inline void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord1bvOES(texture, coords);
}

inline void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return gl::glMultiTexCoord1dARB(target, s);
}

inline void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord1dvARB(target, v);
}

inline void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return gl::glMultiTexCoord1fARB(target, s);
}

inline void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord1fvARB(target, v);
}

inline void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return gl::glMultiTexCoord1hNV(target, s);
}

inline void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord1hvNV(target, v);
}

inline void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return gl::glMultiTexCoord1iARB(target, s);
}

inline void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord1ivARB(target, v);
}

inline void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return gl::glMultiTexCoord1sARB(target, s);
}

inline void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord1svARB(target, v);
}

inline void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return gl::glMultiTexCoord1xOES(texture, s);
}

inline void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord1xvOES(texture, coords);
}

inline void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return gl::glMultiTexCoord2bOES(texture, s, t);
}

inline void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord2bvOES(texture, coords);
}

inline void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return gl::glMultiTexCoord2dARB(target, s, t);
}

inline void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord2dvARB(target, v);
}

inline void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return gl::glMultiTexCoord2fARB(target, s, t);
}

inline void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord2fvARB(target, v);
}

inline void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return gl::glMultiTexCoord2hNV(target, s, t);
}

inline void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord2hvNV(target, v);
}

inline void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return gl::glMultiTexCoord2iARB(target, s, t);
}

inline void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord2ivARB(target, v);
}

inline void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return gl::glMultiTexCoord2sARB(target, s, t);
}

inline void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord2svARB(target, v);
}

inline void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return gl::glMultiTexCoord2xOES(texture, s, t);
}

inline void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord2xvOES(texture, coords);
}

inline void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return gl::glMultiTexCoord3bOES(texture, s, t, r);
}

inline void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord3bvOES(texture, coords);
}

inline void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glMultiTexCoord3dARB(target, s, t, r);
}

inline void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord3dvARB(target, v);
}

inline void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glMultiTexCoord3fARB(target, s, t, r);
}

inline void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord3fvARB(target, v);
}

inline void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return gl::glMultiTexCoord3hNV(target, s, t, r);
}

inline void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord3hvNV(target, v);
}

inline void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return gl::glMultiTexCoord3iARB(target, s, t, r);
}

inline void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord3ivARB(target, v);
}

inline void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return gl::glMultiTexCoord3sARB(target, s, t, r);
}

inline void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord3svARB(target, v);
}

inline void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return gl::glMultiTexCoord3xOES(texture, s, t, r);
}

inline void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord3xvOES(texture, coords);
}

inline void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return gl::glMultiTexCoord4bOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord4bvOES(texture, coords);
}

inline void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glMultiTexCoord4dARB(target, s, t, r, q);
}

inline void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord4dvARB(target, v);
}

inline void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glMultiTexCoord4fARB(target, s, t, r, q);
}

inline void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord4fvARB(target, v);
}

inline void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return gl::glMultiTexCoord4hNV(target, s, t, r, q);
}

inline void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord4hvNV(target, v);
}

inline void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return gl::glMultiTexCoord4iARB(target, s, t, r, q);
}

inline void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord4ivARB(target, v);
}

inline void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glMultiTexCoord4sARB(target, s, t, r, q);
}

inline void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord4svARB(target, v);
}

inline void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return gl::glMultiTexCoord4xOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord4xvOES(texture, coords);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP1ui(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP1uiv(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP2ui(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP2uiv(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP3ui(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP3uiv(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP4ui(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP4uiv(texture, type, coords);
}

inline void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

inline void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glMultiTexEnvfEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return gl::glMultiTexEnviEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return gl::glMultiTexGendEXT(texunit, coord, pname, param);
}

inline void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return gl::glMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return gl::glMultiTexGenfEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return gl::glMultiTexGeniEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return gl::glMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

inline void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glMultiTexParameterfEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return gl::glMultiTexParameteriEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return gl::glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

inline void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

inline void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glNamedBufferDataEXT(buffer, size, data, usage);
}

inline void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return gl::glNamedBufferStorageEXT(buffer, size, data, flags);
}

inline void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return gl::glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

inline void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

inline void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

inline void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

inline void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return gl::glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return gl::glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

inline void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return gl::glNamedProgramStringEXT(program, target, format, len, string);
}

inline void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

inline void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return gl::glNamedStringARB(type, namelen, name, stringlen, string);
}

inline GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return gl::glNewObjectBufferATI(size, pointer, usage);
}

inline void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

inline void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return gl::glNormal3fVertex3fvSUN(n, v);
}

inline void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return gl::glNormal3hNV(nx, ny, nz);
}

inline void glNormal3hvNV(const GLhalfNV * v)
{
    return gl::glNormal3hvNV(v);
}

inline void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return gl::glNormal3xOES(nx, ny, nz);
}

inline void glNormal3xvOES(const GLfixed * coords)
{
    return gl::glNormal3xvOES(coords);
}

inline void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return gl::glNormalFormatNV(type, stride);
}

inline void glNormalP3ui(GLenum type, GLuint coords)
{
    return gl::glNormalP3ui(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glNormalP3uiv(type, coords);
}

inline void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glNormalPointerEXT(type, stride, count, pointer);
}

inline void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return gl::glNormalPointervINTEL(type, pointer);
}

inline void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return gl::glNormalStream3bATI(stream, nx, ny, nz);
}

inline void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return gl::glNormalStream3bvATI(stream, coords);
}

inline void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return gl::glNormalStream3dATI(stream, nx, ny, nz);
}

inline void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glNormalStream3dvATI(stream, coords);
}

inline void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return gl::glNormalStream3fATI(stream, nx, ny, nz);
}

inline void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glNormalStream3fvATI(stream, coords);
}

inline void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return gl::glNormalStream3iATI(stream, nx, ny, nz);
}

inline void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return gl::glNormalStream3ivATI(stream, coords);
}

inline void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return gl::glNormalStream3sATI(stream, nx, ny, nz);
}

inline void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return gl::glNormalStream3svATI(stream, coords);
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return gl::glObjectLabel(identifier, name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return gl::glObjectPtrLabel(ptr, length, label);
}

inline GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return gl::glObjectPurgeableAPPLE(objectType, name, option);
}

inline GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return gl::glObjectUnpurgeableAPPLE(objectType, name, option);
}

inline void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return gl::glOrthofOES(l, r, b, t, n, f);
}

inline void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return gl::glOrthoxOES(l, r, b, t, n, f);
}

inline void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return gl::glPNTrianglesfATI(pname, param);
}

inline void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return gl::glPNTrianglesiATI(pname, param);
}

inline void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return gl::glPassTexCoordATI(dst, coord, swizzle);
}

inline void glPassThroughxOES(GLfixed token)
{
    return gl::glPassThroughxOES(token);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return gl::glPatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return gl::glPatchParameteri(pname, value);
}

inline void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return gl::glPathColorGenNV(color, genMode, colorFormat, coeffs);
}

inline void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathCoordsNV(path, numCoords, coordType, coords);
}

inline void glPathCoverDepthFuncNV(GLenum func)
{
    return gl::glPathCoverDepthFuncNV(func);
}

inline void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return gl::glPathDashArrayNV(path, dashCount, dashArray);
}

inline void glPathFogGenNV(GLenum genMode)
{
    return gl::glPathFogGenNV(genMode);
}

inline GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

inline GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return gl::glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

inline void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

inline void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return gl::glPathParameterfNV(path, pname, value);
}

inline void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return gl::glPathParameterfvNV(path, pname, value);
}

inline void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return gl::glPathParameteriNV(path, pname, value);
}

inline void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return gl::glPathParameterivNV(path, pname, value);
}

inline void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return gl::glPathStencilDepthOffsetNV(factor, units);
}

inline void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return gl::glPathStencilFuncNV(func, ref, mask);
}

inline void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return gl::glPathStringNV(path, format, length, pathString);
}

inline void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

inline void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return gl::glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}

inline void glPauseTransformFeedback()
{
    return gl::glPauseTransformFeedback();
}

inline void glPauseTransformFeedbackNV()
{
    return gl::glPauseTransformFeedbackNV();
}

inline void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return gl::glPixelDataRangeNV(target, length, pointer);
}

inline void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return gl::glPixelMapx(map, size, values);
}

inline void glPixelStorex(GLenum pname, GLfixed param)
{
    return gl::glPixelStorex(pname, param);
}

inline void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return gl::glPixelTexGenParameterfSGIS(pname, param);
}

inline void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return gl::glPixelTexGenParameterfvSGIS(pname, params);
}

inline void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return gl::glPixelTexGenParameteriSGIS(pname, param);
}

inline void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return gl::glPixelTexGenParameterivSGIS(pname, params);
}

inline void glPixelTexGenSGIX(GLenum mode)
{
    return gl::glPixelTexGenSGIX(mode);
}

inline void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return gl::glPixelTransferxOES(pname, param);
}

inline void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glPixelTransformParameterfEXT(target, pname, param);
}

inline void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glPixelTransformParameterfvEXT(target, pname, params);
}

inline void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return gl::glPixelTransformParameteriEXT(target, pname, param);
}

inline void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glPixelTransformParameterivEXT(target, pname, params);
}

inline void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return gl::glPixelZoomxOES(xfactor, yfactor);
}

inline GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return gl::glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

inline void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfARB(pname, param);
}

inline void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfEXT(pname, param);
}

inline void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfSGIS(pname, param);
}

inline void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvARB(pname, params);
}

inline void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvEXT(pname, params);
}

inline void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvSGIS(pname, params);
}

inline void glPointParameteriNV(GLenum pname, GLint param)
{
    return gl::glPointParameteriNV(pname, param);
}

inline void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return gl::glPointParameterivNV(pname, params);
}

inline void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return gl::glPointParameterxvOES(pname, params);
}

inline void glPointSizexOES(GLfixed size)
{
    return gl::glPointSizexOES(size);
}

inline GLint glPollAsyncSGIX(GLuint * markerp)
{
    return gl::glPollAsyncSGIX(markerp);
}

inline GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return gl::glPollInstrumentsSGIX(marker_p);
}

inline void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return gl::glPolygonOffsetEXT(factor, bias);
}

inline void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return gl::glPolygonOffsetxOES(factor, units);
}

inline void glPopDebugGroup()
{
    return gl::glPopDebugGroup();
}

inline void glPopGroupMarkerEXT()
{
    return gl::glPopGroupMarkerEXT();
}

inline void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return gl::glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

inline void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return gl::glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

inline void glPrimitiveRestartIndex(GLuint index)
{
    return gl::glPrimitiveRestartIndex(index);
}

inline void glPrimitiveRestartIndexNV(GLuint index)
{
    return gl::glPrimitiveRestartIndexNV(index);
}

inline void glPrimitiveRestartNV()
{
    return gl::glPrimitiveRestartNV();
}

inline void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return gl::glPrioritizeTexturesEXT(n, textures, priorities);
}

inline void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return gl::glPrioritizeTexturesxOES(n, textures, priorities);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return gl::glProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return gl::glProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return gl::glProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return gl::glProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glProgramEnvParameter4dvARB(target, index, params);
}

inline void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glProgramEnvParameter4fvARB(target, index, params);
}

inline void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return gl::glProgramEnvParameterI4ivNV(target, index, params);
}

inline void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return gl::glProgramEnvParameterI4uivNV(target, index, params);
}

inline void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glProgramEnvParameters4fvEXT(target, index, count, params);
}

inline void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glProgramEnvParametersI4ivNV(target, index, count, params);
}

inline void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glProgramEnvParametersI4uivNV(target, index, count, params);
}

inline void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glProgramLocalParameter4dvARB(target, index, params);
}

inline void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glProgramLocalParameter4fvARB(target, index, params);
}

inline void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return gl::glProgramLocalParameterI4ivNV(target, index, params);
}

inline void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return gl::glProgramLocalParameterI4uivNV(target, index, params);
}

inline void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glProgramLocalParameters4fvEXT(target, index, count, params);
}

inline void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glProgramLocalParametersI4ivNV(target, index, count, params);
}

inline void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glProgramLocalParametersI4uivNV(target, index, count, params);
}

inline void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return gl::glProgramNamedParameter4dvNV(id, len, name, v);
}

inline void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return gl::glProgramNamedParameter4fvNV(id, len, name, v);
}

inline void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramParameter4dNV(target, index, x, y, z, w);
}

inline void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return gl::glProgramParameter4dvNV(target, index, v);
}

inline void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramParameter4fNV(target, index, x, y, z, w);
}

inline void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return gl::glProgramParameter4fvNV(target, index, v);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteri(program, pname, value);
}

inline void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteriARB(program, pname, value);
}

inline void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteriEXT(program, pname, value);
}

inline void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glProgramParameters4dvNV(target, index, count, v);
}

inline void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glProgramParameters4fvNV(target, index, count, v);
}

inline void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return gl::glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

inline void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return gl::glProgramStringARB(target, format, len, string);
}

inline void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return gl::glProgramSubroutineParametersuivNV(target, count, params);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return gl::glProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return gl::glProgramUniform1dEXT(program, location, x);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform1dvEXT(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return gl::glProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return gl::glProgramUniform1fEXT(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform1fvEXT(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return gl::glProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return gl::glProgramUniform1i64NV(program, location, x);
}

inline void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform1i64vNV(program, location, count, value);
}

inline void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return gl::glProgramUniform1iEXT(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform1ivEXT(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return gl::glProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return gl::glProgramUniform1ui64NV(program, location, x);
}

inline void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform1ui64vNV(program, location, count, value);
}

inline void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return gl::glProgramUniform1uiEXT(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform1uivEXT(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return gl::glProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return gl::glProgramUniform2dEXT(program, location, x, y);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform2dvEXT(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glProgramUniform2fEXT(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform2fvEXT(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gl::glProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return gl::glProgramUniform2i64NV(program, location, x, y);
}

inline void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform2i64vNV(program, location, count, value);
}

inline void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gl::glProgramUniform2iEXT(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform2ivEXT(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gl::glProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glProgramUniform2ui64NV(program, location, x, y);
}

inline void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform2ui64vNV(program, location, count, value);
}

inline void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gl::glProgramUniform2uiEXT(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform2uivEXT(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return gl::glProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glProgramUniform3dEXT(program, location, x, y, z);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform3dvEXT(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glProgramUniform3fEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform3fvEXT(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glProgramUniform3i64NV(program, location, x, y, z);
}

inline void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform3i64vNV(program, location, count, value);
}

inline void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glProgramUniform3iEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform3ivEXT(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glProgramUniform3ui64NV(program, location, x, y, z);
}

inline void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform3ui64vNV(program, location, count, value);
}

inline void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform3uivEXT(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return gl::glProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramUniform4dEXT(program, location, x, y, z, w);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform4dvEXT(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform4fvEXT(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glProgramUniform4i64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform4i64vNV(program, location, count, value);
}

inline void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform4ivEXT(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glProgramUniform4ui64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform4ui64vNV(program, location, count, value);
}

inline void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform4uivEXT(program, location, count, value);
}

inline void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return gl::glProgramUniformHandleui64ARB(program, location, value);
}

inline void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return gl::glProgramUniformHandleui64NV(program, location, value);
}

inline void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return gl::glProgramUniformHandleui64vARB(program, location, count, values);
}

inline void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return gl::glProgramUniformHandleui64vNV(program, location, count, values);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return gl::glProgramUniformui64NV(program, location, value);
}

inline void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniformui64vNV(program, location, count, value);
}

inline void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return gl::glProgramVertexLimitNV(target, limit);
}

inline void glProvokingVertex(GLenum mode)
{
    return gl::glProvokingVertex(mode);
}

inline void glProvokingVertexEXT(GLenum mode)
{
    return gl::glProvokingVertexEXT(mode);
}

inline void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return gl::glPushClientAttribDefaultEXT(mask);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return gl::glPushDebugGroup(source, id, length, message);
}

inline void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gl::glPushGroupMarkerEXT(length, marker);
}

inline void glQueryCounter(GLuint id, GLenum target)
{
    return gl::glQueryCounter(id, target);
}

inline GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return gl::glQueryMatrixxOES(mantissa, exponent);
}

inline void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return gl::glQueryObjectParameteruiAMD(target, id, pname, param);
}

inline void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return gl::glRasterPos2xOES(x, y);
}

inline void glRasterPos2xvOES(const GLfixed * coords)
{
    return gl::glRasterPos2xvOES(coords);
}

inline void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glRasterPos3xOES(x, y, z);
}

inline void glRasterPos3xvOES(const GLfixed * coords)
{
    return gl::glRasterPos3xvOES(coords);
}

inline void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return gl::glRasterPos4xOES(x, y, z, w);
}

inline void glRasterPos4xvOES(const GLfixed * coords)
{
    return gl::glRasterPos4xvOES(coords);
}

inline void glReadInstrumentsSGIX(GLint marker)
{
    return gl::glReadInstrumentsSGIX(marker);
}

inline void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return gl::glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

inline void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return gl::glRectxOES(x1, y1, x2, y2);
}

inline void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return gl::glRectxvOES(v1, v2);
}

inline void glReferencePlaneSGIX(const GLdouble * equation)
{
    return gl::glReferencePlaneSGIX(equation);
}

inline void glReleaseShaderCompiler()
{
    return gl::glReleaseShaderCompiler();
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorage(target, internalformat, width, height);
}

inline void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageEXT(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

inline void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return gl::glReplacementCodePointerSUN(type, stride, pointer);
}

inline void glReplacementCodeubSUN(GLubyte code)
{
    return gl::glReplacementCodeubSUN(code);
}

inline void glReplacementCodeubvSUN(const GLubyte * code)
{
    return gl::glReplacementCodeubvSUN(code);
}

inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

inline void glReplacementCodeuiSUN(GLuint code)
{
    return gl::glReplacementCodeuiSUN(code);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

inline void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

inline void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return gl::glReplacementCodeuiVertex3fvSUN(rc, v);
}

inline void glReplacementCodeuivSUN(const GLuint * code)
{
    return gl::glReplacementCodeuivSUN(code);
}

inline void glReplacementCodeusSUN(GLushort code)
{
    return gl::glReplacementCodeusSUN(code);
}

inline void glReplacementCodeusvSUN(const GLushort * code)
{
    return gl::glReplacementCodeusvSUN(code);
}

inline void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return gl::glRequestResidentProgramsNV(n, programs);
}

inline void glResetHistogram(GLenum target)
{
    return gl::glResetHistogram(target);
}

inline void glResetHistogramEXT(GLenum target)
{
    return gl::glResetHistogramEXT(target);
}

inline void glResetMinmax(GLenum target)
{
    return gl::glResetMinmax(target);
}

inline void glResetMinmaxEXT(GLenum target)
{
    return gl::glResetMinmaxEXT(target);
}

inline void glResizeBuffersMESA()
{
    return gl::glResizeBuffersMESA();
}

inline void glResumeTransformFeedback()
{
    return gl::glResumeTransformFeedback();
}

inline void glResumeTransformFeedbackNV()
{
    return gl::glResumeTransformFeedbackNV();
}

inline void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glRotatexOES(angle, x, y, z);
}

inline void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return gl::glSampleCoverageARB(value, invert);
}

inline void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return gl::glSampleCoverageOES(value, invert);
}

inline void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return gl::glSampleMapATI(dst, interp, swizzle);
}

inline void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return gl::glSampleMaskEXT(value, invert);
}

inline void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return gl::glSampleMaskIndexedNV(index, mask);
}

inline void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return gl::glSampleMaskSGIS(value, invert);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return gl::glSampleMaski(maskNumber, mask);
}

inline void glSamplePatternEXT(GLenum pattern)
{
    return gl::glSamplePatternEXT(pattern);
}

inline void glSamplePatternSGIS(GLenum pattern)
{
    return gl::glSamplePatternSGIS(pattern);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameterIiv(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return gl::glSamplerParameterIuiv(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return gl::glSamplerParameterf(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return gl::glSamplerParameterfv(sampler, pname, param);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return gl::glSamplerParameteri(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameteriv(sampler, pname, param);
}

inline void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glScalexOES(x, y, z);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return gl::glScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return gl::glScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
    return gl::glScissorIndexedv(index, v);
}

inline void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glSecondaryColor3bEXT(red, green, blue);
}

inline void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return gl::glSecondaryColor3bvEXT(v);
}

inline void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glSecondaryColor3dEXT(red, green, blue);
}

inline void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return gl::glSecondaryColor3dvEXT(v);
}

inline void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glSecondaryColor3fEXT(red, green, blue);
}

inline void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return gl::glSecondaryColor3fvEXT(v);
}

inline void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return gl::glSecondaryColor3hNV(red, green, blue);
}

inline void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return gl::glSecondaryColor3hvNV(v);
}

inline void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return gl::glSecondaryColor3iEXT(red, green, blue);
}

inline void glSecondaryColor3ivEXT(const GLint * v)
{
    return gl::glSecondaryColor3ivEXT(v);
}

inline void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return gl::glSecondaryColor3sEXT(red, green, blue);
}

inline void glSecondaryColor3svEXT(const GLshort * v)
{
    return gl::glSecondaryColor3svEXT(v);
}

inline void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glSecondaryColor3ubEXT(red, green, blue);
}

inline void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return gl::glSecondaryColor3ubvEXT(v);
}

inline void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return gl::glSecondaryColor3uiEXT(red, green, blue);
}

inline void glSecondaryColor3uivEXT(const GLuint * v)
{
    return gl::glSecondaryColor3uivEXT(v);
}

inline void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return gl::glSecondaryColor3usEXT(red, green, blue);
}

inline void glSecondaryColor3usvEXT(const GLushort * v)
{
    return gl::glSecondaryColor3usvEXT(v);
}

inline void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glSecondaryColorFormatNV(size, type, stride);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return gl::glSecondaryColorP3ui(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glSecondaryColorP3uiv(type, color);
}

inline void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glSecondaryColorPointerEXT(size, type, stride, pointer);
}

inline void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return gl::glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

inline void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return gl::glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

inline void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return gl::glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

inline void glSetFenceAPPLE(GLuint fence)
{
    return gl::glSetFenceAPPLE(fence);
}

inline void glSetFenceNV(GLuint fence, GLenum condition)
{
    return gl::glSetFenceNV(fence, condition);
}

inline void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return gl::glSetFragmentShaderConstantATI(dst, value);
}

inline void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return gl::glSetInvariantEXT(id, type, addr);
}

inline void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return gl::glSetLocalConstantEXT(id, type, addr);
}

inline void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return gl::glSetMultisamplefvAMD(pname, index, val);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return gl::glShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return gl::glShaderOp1EXT(op, res, arg1);
}

inline void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return gl::glShaderOp2EXT(op, res, arg1, arg2);
}

inline void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return gl::glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

inline void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return gl::glShaderSourceARB(shaderObj, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return gl::glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return gl::glSharpenTexFuncSGIS(target, n, points);
}

inline void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return gl::glSpriteParameterfSGIX(pname, param);
}

inline void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return gl::glSpriteParameterfvSGIX(pname, params);
}

inline void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return gl::glSpriteParameteriSGIX(pname, param);
}

inline void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return gl::glSpriteParameterivSGIX(pname, params);
}

inline void glStartInstrumentsSGIX()
{
    return gl::glStartInstrumentsSGIX();
}

inline void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return gl::glStencilClearTagEXT(stencilTagBits, stencilClearTag);
}

inline void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

inline void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return gl::glStencilFillPathNV(path, fillMode, mask);
}

inline void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return gl::glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

inline void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return gl::glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

inline void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return gl::glStencilOpValueAMD(face, value);
}

inline void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

inline void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return gl::glStencilStrokePathNV(path, reference, mask);
}

inline void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

inline void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return gl::glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

inline void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

inline void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return gl::glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

inline void glStopInstrumentsSGIX(GLint marker)
{
    return gl::glStopInstrumentsSGIX(marker);
}

inline void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return gl::glStringMarkerGREMEDY(len, string);
}

inline void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return gl::glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

inline void glSyncTextureINTEL(GLuint texture)
{
    return gl::glSyncTextureINTEL(texture);
}

inline void glTagSampleBufferSGIX()
{
    return gl::glTagSampleBufferSGIX();
}

inline void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return gl::glTangent3bEXT(tx, ty, tz);
}

inline void glTangent3bvEXT(const GLbyte * v)
{
    return gl::glTangent3bvEXT(v);
}

inline void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return gl::glTangent3dEXT(tx, ty, tz);
}

inline void glTangent3dvEXT(const GLdouble * v)
{
    return gl::glTangent3dvEXT(v);
}

inline void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return gl::glTangent3fEXT(tx, ty, tz);
}

inline void glTangent3fvEXT(const GLfloat * v)
{
    return gl::glTangent3fvEXT(v);
}

inline void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return gl::glTangent3iEXT(tx, ty, tz);
}

inline void glTangent3ivEXT(const GLint * v)
{
    return gl::glTangent3ivEXT(v);
}

inline void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return gl::glTangent3sEXT(tx, ty, tz);
}

inline void glTangent3svEXT(const GLshort * v)
{
    return gl::glTangent3svEXT(v);
}

inline void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glTangentPointerEXT(type, stride, pointer);
}

inline void glTbufferMask3DFX(GLuint mask)
{
    return gl::glTbufferMask3DFX(mask);
}

inline void glTessellationFactorAMD(GLfloat factor)
{
    return gl::glTessellationFactorAMD(factor);
}

inline void glTessellationModeAMD(GLenum mode)
{
    return gl::glTessellationModeAMD(mode);
}

inline GLboolean glTestFenceAPPLE(GLuint fence)
{
    return gl::glTestFenceAPPLE(fence);
}

inline GLboolean glTestFenceNV(GLuint fence)
{
    return gl::glTestFenceNV(fence);
}

inline GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return gl::glTestObjectAPPLE(object, name);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBuffer(target, internalformat, buffer);
}

inline void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBufferARB(target, internalformat, buffer);
}

inline void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBufferEXT(target, internalformat, buffer);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTexBufferRange(target, internalformat, buffer, offset, size);
}

inline void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return gl::glTexBumpParameterfvATI(pname, param);
}

inline void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return gl::glTexBumpParameterivATI(pname, param);
}

inline void glTexCoord1bOES(GLbyte s)
{
    return gl::glTexCoord1bOES(s);
}

inline void glTexCoord1bvOES(const GLbyte * coords)
{
    return gl::glTexCoord1bvOES(coords);
}

inline void glTexCoord1hNV(GLhalfNV s)
{
    return gl::glTexCoord1hNV(s);
}

inline void glTexCoord1hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord1hvNV(v);
}

inline void glTexCoord1xOES(GLfixed s)
{
    return gl::glTexCoord1xOES(s);
}

inline void glTexCoord1xvOES(const GLfixed * coords)
{
    return gl::glTexCoord1xvOES(coords);
}

inline void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return gl::glTexCoord2bOES(s, t);
}

inline void glTexCoord2bvOES(const GLbyte * coords)
{
    return gl::glTexCoord2bvOES(coords);
}

inline void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return gl::glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return gl::glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

inline void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

inline void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return gl::glTexCoord2fVertex3fvSUN(tc, v);
}

inline void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return gl::glTexCoord2hNV(s, t);
}

inline void glTexCoord2hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord2hvNV(v);
}

inline void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return gl::glTexCoord2xOES(s, t);
}

inline void glTexCoord2xvOES(const GLfixed * coords)
{
    return gl::glTexCoord2xvOES(coords);
}

inline void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return gl::glTexCoord3bOES(s, t, r);
}

inline void glTexCoord3bvOES(const GLbyte * coords)
{
    return gl::glTexCoord3bvOES(coords);
}

inline void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return gl::glTexCoord3hNV(s, t, r);
}

inline void glTexCoord3hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord3hvNV(v);
}

inline void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return gl::glTexCoord3xOES(s, t, r);
}

inline void glTexCoord3xvOES(const GLfixed * coords)
{
    return gl::glTexCoord3xvOES(coords);
}

inline void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return gl::glTexCoord4bOES(s, t, r, q);
}

inline void glTexCoord4bvOES(const GLbyte * coords)
{
    return gl::glTexCoord4bvOES(coords);
}

inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

inline void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

inline void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return gl::glTexCoord4fVertex4fvSUN(tc, v);
}

inline void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return gl::glTexCoord4hNV(s, t, r, q);
}

inline void glTexCoord4hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord4hvNV(v);
}

inline void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return gl::glTexCoord4xOES(s, t, r, q);
}

inline void glTexCoord4xvOES(const GLfixed * coords)
{
    return gl::glTexCoord4xvOES(coords);
}

inline void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glTexCoordFormatNV(size, type, stride);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP1ui(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP1uiv(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP2ui(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP2uiv(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP3ui(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP3uiv(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP4ui(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP4uiv(type, coords);
}

inline void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glTexCoordPointerEXT(size, type, stride, count, pointer);
}

inline void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glTexCoordPointervINTEL(size, type, pointer);
}

inline void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glTexEnvxOES(target, pname, param);
}

inline void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glTexEnvxvOES(target, pname, params);
}

inline void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return gl::glTexFilterFuncSGIS(target, filter, n, weights);
}

inline void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return gl::glTexGenxOES(coord, pname, param);
}

inline void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return gl::glTexGenxvOES(coord, pname, params);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

inline void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return gl::glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameterIiv(target, pname, params);
}

inline void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameterIivEXT(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTexParameterIuiv(target, pname, params);
}

inline void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTexParameterIuivEXT(target, pname, params);
}

inline void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glTexParameterxOES(target, pname, param);
}

inline void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glTexParameterxvOES(target, pname, params);
}

inline void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return gl::glTexRenderbufferNV(target, renderbuffer);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gl::glTexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glTexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glTexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return gl::glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

inline void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

inline void glTextureBarrierNV()
{
    return gl::glTextureBarrierNV();
}

inline void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTextureBufferEXT(texture, target, internalformat, buffer);
}

inline void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

inline void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gl::glTextureColorMaskSGIS(red, green, blue, alpha);
}

inline void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

inline void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureLightEXT(GLenum pname)
{
    return gl::glTextureLightEXT(pname);
}

inline void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return gl::glTextureMaterialEXT(face, mode);
}

inline void glTextureNormalEXT(GLenum mode)
{
    return gl::glTextureNormalEXT(mode);
}

inline void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return gl::glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTextureParameterIivEXT(texture, target, pname, params);
}

inline void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTextureParameterfEXT(texture, target, pname, param);
}

inline void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTextureParameterfvEXT(texture, target, pname, params);
}

inline void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return gl::glTextureParameteriEXT(texture, target, pname, param);
}

inline void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTextureParameterivEXT(texture, target, pname, params);
}

inline void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return gl::glTextureRangeAPPLE(target, length, pointer);
}

inline void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return gl::glTextureRenderbufferEXT(texture, target, renderbuffer);
}

inline void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gl::glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

inline void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

inline void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

inline void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return gl::glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

inline void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return gl::glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return gl::glTrackMatrixNV(target, address, matrix, transform);
}

inline void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return gl::glTransformFeedbackAttribsNV(count, attribs, bufferMode);
}

inline void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return gl::glTransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

inline void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}

inline void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glTranslatexOES(x, y, z);
}

inline void glUniform1d(GLint location, GLdouble x)
{
    return gl::glUniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform1dv(location, count, value);
}

inline void glUniform1fARB(GLint location, GLfloat v0)
{
    return gl::glUniform1fARB(location, v0);
}

inline void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform1fvARB(location, count, value);
}

inline void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return gl::glUniform1i64NV(location, x);
}

inline void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform1i64vNV(location, count, value);
}

inline void glUniform1iARB(GLint location, GLint v0)
{
    return gl::glUniform1iARB(location, v0);
}

inline void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform1ivARB(location, count, value);
}

inline void glUniform1ui(GLint location, GLuint v0)
{
    return gl::glUniform1ui(location, v0);
}

inline void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return gl::glUniform1ui64NV(location, x);
}

inline void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform1ui64vNV(location, count, value);
}

inline void glUniform1uiEXT(GLint location, GLuint v0)
{
    return gl::glUniform1uiEXT(location, v0);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform1uiv(location, count, value);
}

inline void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform1uivEXT(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return gl::glUniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform2dv(location, count, value);
}

inline void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glUniform2fARB(location, v0, v1);
}

inline void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform2fvARB(location, count, value);
}

inline void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return gl::glUniform2i64NV(location, x, y);
}

inline void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform2i64vNV(location, count, value);
}

inline void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return gl::glUniform2iARB(location, v0, v1);
}

inline void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform2ivARB(location, count, value);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return gl::glUniform2ui(location, v0, v1);
}

inline void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glUniform2ui64NV(location, x, y);
}

inline void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform2ui64vNV(location, count, value);
}

inline void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return gl::glUniform2uiEXT(location, v0, v1);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform2uiv(location, count, value);
}

inline void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform2uivEXT(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glUniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform3dv(location, count, value);
}

inline void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glUniform3fARB(location, v0, v1, v2);
}

inline void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform3fvARB(location, count, value);
}

inline void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glUniform3i64NV(location, x, y, z);
}

inline void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform3i64vNV(location, count, value);
}

inline void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glUniform3iARB(location, v0, v1, v2);
}

inline void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform3ivARB(location, count, value);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glUniform3ui(location, v0, v1, v2);
}

inline void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glUniform3ui64NV(location, x, y, z);
}

inline void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform3ui64vNV(location, count, value);
}

inline void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glUniform3uiEXT(location, v0, v1, v2);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform3uiv(location, count, value);
}

inline void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform3uivEXT(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glUniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform4dv(location, count, value);
}

inline void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glUniform4fARB(location, v0, v1, v2, v3);
}

inline void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform4fvARB(location, count, value);
}

inline void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glUniform4i64NV(location, x, y, z, w);
}

inline void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform4i64vNV(location, count, value);
}

inline void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glUniform4iARB(location, v0, v1, v2, v3);
}

inline void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform4ivARB(location, count, value);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glUniform4ui(location, v0, v1, v2, v3);
}

inline void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glUniform4ui64NV(location, x, y, z, w);
}

inline void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform4ui64vNV(location, count, value);
}

inline void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glUniform4uiEXT(location, v0, v1, v2, v3);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform4uiv(location, count, value);
}

inline void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform4uivEXT(location, count, value);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return gl::glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return gl::glUniformBufferEXT(program, location, buffer);
}

inline void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return gl::glUniformHandleui64ARB(location, value);
}

inline void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return gl::glUniformHandleui64NV(location, value);
}

inline void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return gl::glUniformHandleui64vARB(location, count, value);
}

inline void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return gl::glUniformHandleui64vNV(location, count, value);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2fvARB(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x3fv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2x4fv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3fvARB(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x2fv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3x4fv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4fvARB(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x2fv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4x3fv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return gl::glUniformSubroutinesuiv(shadertype, count, indices);
}

inline void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return gl::glUniformui64NV(location, value);
}

inline void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniformui64vNV(location, count, value);
}

inline void glUnlockArraysEXT()
{
    return gl::glUnlockArraysEXT();
}

inline GLboolean glUnmapBufferARB(GLenum target)
{
    return gl::glUnmapBufferARB(target);
}

inline GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return gl::glUnmapNamedBufferEXT(buffer);
}

inline void glUnmapObjectBufferATI(GLuint buffer)
{
    return gl::glUnmapObjectBufferATI(buffer);
}

inline void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return gl::glUnmapTexture2DINTEL(texture, level);
}

inline void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return gl::glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

inline void glUseProgramObjectARB(GLhandleARB programObj)
{
    return gl::glUseProgramObjectARB(programObj);
}

inline void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return gl::glUseProgramStages(pipeline, stages, program);
}

inline void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return gl::glUseShaderProgramEXT(type, program);
}

inline void glVDPAUFiniNV()
{
    return gl::glVDPAUFiniNV();
}

inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gl::glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

inline void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return gl::glVDPAUInitNV(vdpDevice, getProcAddress);
}

inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return gl::glVDPAUIsSurfaceNV(surface);
}

inline void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return gl::glVDPAUMapSurfacesNV(numSurfaces, surfaces);
}

inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return gl::glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return gl::glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return gl::glVDPAUSurfaceAccessNV(surface, access);
}

inline void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return gl::glVDPAUUnmapSurfacesNV(numSurface, surfaces);
}

inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return gl::glVDPAUUnregisterSurfaceNV(surface);
}

inline void glValidateProgramARB(GLhandleARB programObj)
{
    return gl::glValidateProgramARB(programObj);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
    return gl::glValidateProgramPipeline(pipeline);
}

inline void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

inline void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return gl::glVariantPointerEXT(id, type, stride, addr);
}

inline void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return gl::glVariantbvEXT(id, addr);
}

inline void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return gl::glVariantdvEXT(id, addr);
}

inline void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return gl::glVariantfvEXT(id, addr);
}

inline void glVariantivEXT(GLuint id, const GLint * addr)
{
    return gl::glVariantivEXT(id, addr);
}

inline void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return gl::glVariantsvEXT(id, addr);
}

inline void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return gl::glVariantubvEXT(id, addr);
}

inline void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return gl::glVariantuivEXT(id, addr);
}

inline void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return gl::glVariantusvEXT(id, addr);
}

inline void glVertex2bOES(GLbyte x, GLbyte y)
{
    return gl::glVertex2bOES(x, y);
}

inline void glVertex2bvOES(const GLbyte * coords)
{
    return gl::glVertex2bvOES(coords);
}

inline void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return gl::glVertex2hNV(x, y);
}

inline void glVertex2hvNV(const GLhalfNV * v)
{
    return gl::glVertex2hvNV(v);
}

inline void glVertex2xOES(GLfixed x)
{
    return gl::glVertex2xOES(x);
}

inline void glVertex2xvOES(const GLfixed * coords)
{
    return gl::glVertex2xvOES(coords);
}

inline void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return gl::glVertex3bOES(x, y, z);
}

inline void glVertex3bvOES(const GLbyte * coords)
{
    return gl::glVertex3bvOES(coords);
}

inline void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return gl::glVertex3hNV(x, y, z);
}

inline void glVertex3hvNV(const GLhalfNV * v)
{
    return gl::glVertex3hvNV(v);
}

inline void glVertex3xOES(GLfixed x, GLfixed y)
{
    return gl::glVertex3xOES(x, y);
}

inline void glVertex3xvOES(const GLfixed * coords)
{
    return gl::glVertex3xvOES(coords);
}

inline void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return gl::glVertex4bOES(x, y, z, w);
}

inline void glVertex4bvOES(const GLbyte * coords)
{
    return gl::glVertex4bvOES(coords);
}

inline void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return gl::glVertex4hNV(x, y, z, w);
}

inline void glVertex4hvNV(const GLhalfNV * v)
{
    return gl::glVertex4hvNV(v);
}

inline void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glVertex4xOES(x, y, z);
}

inline void glVertex4xvOES(const GLfixed * coords)
{
    return gl::glVertex4xvOES(coords);
}

inline void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gl::glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

inline void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

inline void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return gl::glVertexArrayParameteriAPPLE(pname, param);
}

inline void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return gl::glVertexArrayRangeAPPLE(length, pointer);
}

inline void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return gl::glVertexArrayRangeNV(length, pointer);
}

inline void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return gl::glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return gl::glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

inline void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

inline void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return gl::glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

inline void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1dARB(index, x);
}

inline void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1dNV(index, x);
}

inline void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dvARB(index, v);
}

inline void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dvNV(index, v);
}

inline void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1fARB(index, x);
}

inline void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1fNV(index, x);
}

inline void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fvARB(index, v);
}

inline void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fvNV(index, v);
}

inline void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return gl::glVertexAttrib1hNV(index, x);
}

inline void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib1hvNV(index, v);
}

inline void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1sARB(index, x);
}

inline void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1sNV(index, x);
}

inline void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1svARB(index, v);
}

inline void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1svNV(index, v);
}

inline void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2dARB(index, x, y);
}

inline void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2dNV(index, x, y);
}

inline void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dvARB(index, v);
}

inline void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dvNV(index, v);
}

inline void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2fARB(index, x, y);
}

inline void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2fNV(index, x, y);
}

inline void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fvARB(index, v);
}

inline void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fvNV(index, v);
}

inline void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return gl::glVertexAttrib2hNV(index, x, y);
}

inline void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib2hvNV(index, v);
}

inline void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2sARB(index, x, y);
}

inline void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2sNV(index, x, y);
}

inline void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2svARB(index, v);
}

inline void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2svNV(index, v);
}

inline void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3dARB(index, x, y, z);
}

inline void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3dNV(index, x, y, z);
}

inline void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dvARB(index, v);
}

inline void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dvNV(index, v);
}

inline void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3fARB(index, x, y, z);
}

inline void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3fNV(index, x, y, z);
}

inline void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fvARB(index, v);
}

inline void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fvNV(index, v);
}

inline void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return gl::glVertexAttrib3hNV(index, x, y, z);
}

inline void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib3hvNV(index, v);
}

inline void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3sARB(index, x, y, z);
}

inline void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3sNV(index, x, y, z);
}

inline void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3svARB(index, v);
}

inline void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3svNV(index, v);
}

inline void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4NbvARB(index, v);
}

inline void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4NivARB(index, v);
}

inline void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4NsvARB(index, v);
}

inline void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4NubARB(index, x, y, z, w);
}

inline void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4NubvARB(index, v);
}

inline void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4NuivARB(index, v);
}

inline void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4NusvARB(index, v);
}

inline void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4bvARB(index, v);
}

inline void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4dARB(index, x, y, z, w);
}

inline void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4dNV(index, x, y, z, w);
}

inline void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dvARB(index, v);
}

inline void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dvNV(index, v);
}

inline void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4fARB(index, x, y, z, w);
}

inline void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4fNV(index, x, y, z, w);
}

inline void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fvARB(index, v);
}

inline void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fvNV(index, v);
}

inline void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return gl::glVertexAttrib4hNV(index, x, y, z, w);
}

inline void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib4hvNV(index, v);
}

inline void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4ivARB(index, v);
}

inline void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4sARB(index, x, y, z, w);
}

inline void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4sNV(index, x, y, z, w);
}

inline void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4svARB(index, v);
}

inline void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4svNV(index, v);
}

inline void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4ubNV(index, x, y, z, w);
}

inline void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubvARB(index, v);
}

inline void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubvNV(index, v);
}

inline void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4uivARB(index, v);
}

inline void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4usvARB(index, v);
}

inline void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return gl::glVertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return gl::glVertexAttribDivisor(index, divisor);
}

inline void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return gl::glVertexAttribDivisorARB(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gl::glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return gl::glVertexAttribFormatNV(index, size, type, normalized, stride);
}

inline void glVertexAttribI1i(GLuint index, GLint x)
{
    return gl::glVertexAttribI1i(index, x);
}

inline void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return gl::glVertexAttribI1iEXT(index, x);
}

inline void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI1iv(index, v);
}

inline void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI1ivEXT(index, v);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return gl::glVertexAttribI1ui(index, x);
}

inline void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return gl::glVertexAttribI1uiEXT(index, x);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI1uiv(index, v);
}

inline void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI1uivEXT(index, v);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return gl::glVertexAttribI2i(index, x, y);
}

inline void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return gl::glVertexAttribI2iEXT(index, x, y);
}

inline void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI2iv(index, v);
}

inline void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI2ivEXT(index, v);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return gl::glVertexAttribI2ui(index, x, y);
}

inline void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return gl::glVertexAttribI2uiEXT(index, x, y);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI2uiv(index, v);
}

inline void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI2uivEXT(index, v);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return gl::glVertexAttribI3i(index, x, y, z);
}

inline void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return gl::glVertexAttribI3iEXT(index, x, y, z);
}

inline void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI3iv(index, v);
}

inline void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI3ivEXT(index, v);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return gl::glVertexAttribI3ui(index, x, y, z);
}

inline void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return gl::glVertexAttribI3uiEXT(index, x, y, z);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI3uiv(index, v);
}

inline void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI3uivEXT(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttribI4bv(index, v);
}

inline void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttribI4bvEXT(index, v);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexAttribI4i(index, x, y, z, w);
}

inline void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexAttribI4iEXT(index, x, y, z, w);
}

inline void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI4iv(index, v);
}

inline void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI4ivEXT(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return gl::glVertexAttribI4sv(index, v);
}

inline void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return gl::glVertexAttribI4svEXT(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttribI4ubv(index, v);
}

inline void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttribI4ubvEXT(index, v);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glVertexAttribI4ui(index, x, y, z, w);
}

inline void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glVertexAttribI4uiEXT(index, x, y, z, w);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI4uiv(index, v);
}

inline void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI4uivEXT(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return gl::glVertexAttribI4usv(index, v);
}

inline void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return gl::glVertexAttribI4usvEXT(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexAttribIFormatNV(index, size, type, stride);
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribIPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribIPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return gl::glVertexAttribL1d(index, x);
}

inline void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return gl::glVertexAttribL1dEXT(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL1dv(index, v);
}

inline void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL1dvEXT(index, v);
}

inline void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return gl::glVertexAttribL1i64NV(index, x);
}

inline void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL1i64vNV(index, v);
}

inline void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return gl::glVertexAttribL1ui64ARB(index, x);
}

inline void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return gl::glVertexAttribL1ui64NV(index, x);
}

inline void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL1ui64vARB(index, v);
}

inline void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL1ui64vNV(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttribL2dEXT(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL2dv(index, v);
}

inline void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL2dvEXT(index, v);
}

inline void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return gl::glVertexAttribL2i64NV(index, x, y);
}

inline void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL2i64vNV(index, v);
}

inline void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glVertexAttribL2ui64NV(index, x, y);
}

inline void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL2ui64vNV(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttribL3dEXT(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL3dv(index, v);
}

inline void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL3dvEXT(index, v);
}

inline void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glVertexAttribL3i64NV(index, x, y, z);
}

inline void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL3i64vNV(index, v);
}

inline void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glVertexAttribL3ui64NV(index, x, y, z);
}

inline void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL3ui64vNV(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttribL4dEXT(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL4dv(index, v);
}

inline void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL4dvEXT(index, v);
}

inline void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glVertexAttribL4i64NV(index, x, y, z, w);
}

inline void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL4i64vNV(index, v);
}

inline void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glVertexAttribL4ui64NV(index, x, y, z, w);
}

inline void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL4ui64vNV(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexAttribLFormatNV(index, size, type, stride);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP1ui(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP1uiv(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP2ui(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP2uiv(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP3ui(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP3uiv(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP4ui(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP4uiv(index, type, normalized, value);
}

inline void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return gl::glVertexAttribParameteriAMD(index, pname, param);
}

inline void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

inline void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

inline void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs1dvNV(index, count, v);
}

inline void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs1fvNV(index, count, v);
}

inline void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs1hvNV(index, n, v);
}

inline void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs1svNV(index, count, v);
}

inline void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs2dvNV(index, count, v);
}

inline void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs2fvNV(index, count, v);
}

inline void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs2hvNV(index, n, v);
}

inline void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs2svNV(index, count, v);
}

inline void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs3dvNV(index, count, v);
}

inline void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs3fvNV(index, count, v);
}

inline void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs3hvNV(index, n, v);
}

inline void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs3svNV(index, count, v);
}

inline void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs4dvNV(index, count, v);
}

inline void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs4fvNV(index, count, v);
}

inline void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs4hvNV(index, n, v);
}

inline void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs4svNV(index, count, v);
}

inline void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return gl::glVertexAttribs4ubvNV(index, count, v);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return gl::glVertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexBlendARB(GLint count)
{
    return gl::glVertexBlendARB(count);
}

inline void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return gl::glVertexBlendEnvfATI(pname, param);
}

inline void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return gl::glVertexBlendEnviATI(pname, param);
}

inline void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexFormatNV(size, type, stride);
}

inline void glVertexP2ui(GLenum type, GLuint value)
{
    return gl::glVertexP2ui(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP2uiv(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value)
{
    return gl::glVertexP3ui(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP3uiv(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value)
{
    return gl::glVertexP4ui(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP4uiv(type, value);
}

inline void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glVertexPointerEXT(size, type, stride, count, pointer);
}

inline void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glVertexPointervINTEL(size, type, pointer);
}

inline void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return gl::glVertexStream1dATI(stream, x);
}

inline void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream1dvATI(stream, coords);
}

inline void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return gl::glVertexStream1fATI(stream, x);
}

inline void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream1fvATI(stream, coords);
}

inline void glVertexStream1iATI(GLenum stream, GLint x)
{
    return gl::glVertexStream1iATI(stream, x);
}

inline void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream1ivATI(stream, coords);
}

inline void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return gl::glVertexStream1sATI(stream, x);
}

inline void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream1svATI(stream, coords);
}

inline void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return gl::glVertexStream2dATI(stream, x, y);
}

inline void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream2dvATI(stream, coords);
}

inline void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return gl::glVertexStream2fATI(stream, x, y);
}

inline void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream2fvATI(stream, coords);
}

inline void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return gl::glVertexStream2iATI(stream, x, y);
}

inline void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream2ivATI(stream, coords);
}

inline void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return gl::glVertexStream2sATI(stream, x, y);
}

inline void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream2svATI(stream, coords);
}

inline void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexStream3dATI(stream, x, y, z);
}

inline void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream3dvATI(stream, coords);
}

inline void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexStream3fATI(stream, x, y, z);
}

inline void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream3fvATI(stream, coords);
}

inline void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return gl::glVertexStream3iATI(stream, x, y, z);
}

inline void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream3ivATI(stream, coords);
}

inline void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexStream3sATI(stream, x, y, z);
}

inline void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream3svATI(stream, coords);
}

inline void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexStream4dATI(stream, x, y, z, w);
}

inline void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream4dvATI(stream, coords);
}

inline void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexStream4fATI(stream, x, y, z, w);
}

inline void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream4fvATI(stream, coords);
}

inline void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexStream4iATI(stream, x, y, z, w);
}

inline void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream4ivATI(stream, coords);
}

inline void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexStream4sATI(stream, x, y, z, w);
}

inline void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream4svATI(stream, coords);
}

inline void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexWeightPointerEXT(size, type, stride, pointer);
}

inline void glVertexWeightfEXT(GLfloat weight)
{
    return gl::glVertexWeightfEXT(weight);
}

inline void glVertexWeightfvEXT(const GLfloat * weight)
{
    return gl::glVertexWeightfvEXT(weight);
}

inline void glVertexWeighthNV(GLhalfNV weight)
{
    return gl::glVertexWeighthNV(weight);
}

inline void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return gl::glVertexWeighthvNV(weight);
}

inline GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return gl::glVideoCaptureNV(video_capture_slot, sequence_num, capture_time);
}

inline void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return gl::glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return gl::glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return gl::glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return gl::glViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return gl::glViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return gl::glViewportIndexedfv(index, v);
}

inline void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return gl::glWaitSync(sync, flags, timeout);
}

inline void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return gl::glWeightPathsNV(resultPath, numPaths, paths, weights);
}

inline void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glWeightPointerARB(size, type, stride, pointer);
}

inline void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return gl::glWeightbvARB(size, weights);
}

inline void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return gl::glWeightdvARB(size, weights);
}

inline void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return gl::glWeightfvARB(size, weights);
}

inline void glWeightivARB(GLint size, const GLint * weights)
{
    return gl::glWeightivARB(size, weights);
}

inline void glWeightsvARB(GLint size, const GLshort * weights)
{
    return gl::glWeightsvARB(size, weights);
}

inline void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return gl::glWeightubvARB(size, weights);
}

inline void glWeightuivARB(GLint size, const GLuint * weights)
{
    return gl::glWeightuivARB(size, weights);
}

inline void glWeightusvARB(GLint size, const GLushort * weights)
{
    return gl::glWeightusvARB(size, weights);
}

inline void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2dARB(x, y);
}

inline void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2dMESA(x, y);
}

inline void glWindowPos2dvARB(const GLdouble * v)
{
    return gl::glWindowPos2dvARB(v);
}

inline void glWindowPos2dvMESA(const GLdouble * v)
{
    return gl::glWindowPos2dvMESA(v);
}

inline void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2fARB(x, y);
}

inline void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2fMESA(x, y);
}

inline void glWindowPos2fvARB(const GLfloat * v)
{
    return gl::glWindowPos2fvARB(v);
}

inline void glWindowPos2fvMESA(const GLfloat * v)
{
    return gl::glWindowPos2fvMESA(v);
}

inline void glWindowPos2iARB(GLint x, GLint y)
{
    return gl::glWindowPos2iARB(x, y);
}

inline void glWindowPos2iMESA(GLint x, GLint y)
{
    return gl::glWindowPos2iMESA(x, y);
}

inline void glWindowPos2ivARB(const GLint * v)
{
    return gl::glWindowPos2ivARB(v);
}

inline void glWindowPos2ivMESA(const GLint * v)
{
    return gl::glWindowPos2ivMESA(v);
}

inline void glWindowPos2sARB(GLshort x, GLshort y)
{
    return gl::glWindowPos2sARB(x, y);
}

inline void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return gl::glWindowPos2sMESA(x, y);
}

inline void glWindowPos2svARB(const GLshort * v)
{
    return gl::glWindowPos2svARB(v);
}

inline void glWindowPos2svMESA(const GLshort * v)
{
    return gl::glWindowPos2svMESA(v);
}

inline void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3dARB(x, y, z);
}

inline void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3dMESA(x, y, z);
}

inline void glWindowPos3dvARB(const GLdouble * v)
{
    return gl::glWindowPos3dvARB(v);
}

inline void glWindowPos3dvMESA(const GLdouble * v)
{
    return gl::glWindowPos3dvMESA(v);
}

inline void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3fARB(x, y, z);
}

inline void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3fMESA(x, y, z);
}

inline void glWindowPos3fvARB(const GLfloat * v)
{
    return gl::glWindowPos3fvARB(v);
}

inline void glWindowPos3fvMESA(const GLfloat * v)
{
    return gl::glWindowPos3fvMESA(v);
}

inline void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3iARB(x, y, z);
}

inline void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3iMESA(x, y, z);
}

inline void glWindowPos3ivARB(const GLint * v)
{
    return gl::glWindowPos3ivARB(v);
}

inline void glWindowPos3ivMESA(const GLint * v)
{
    return gl::glWindowPos3ivMESA(v);
}

inline void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3sARB(x, y, z);
}

inline void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3sMESA(x, y, z);
}

inline void glWindowPos3svARB(const GLshort * v)
{
    return gl::glWindowPos3svARB(v);
}

inline void glWindowPos3svMESA(const GLshort * v)
{
    return gl::glWindowPos3svMESA(v);
}

inline void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glWindowPos4dMESA(x, y, z, w);
}

inline void glWindowPos4dvMESA(const GLdouble * v)
{
    return gl::glWindowPos4dvMESA(v);
}

inline void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glWindowPos4fMESA(x, y, z, w);
}

inline void glWindowPos4fvMESA(const GLfloat * v)
{
    return gl::glWindowPos4fvMESA(v);
}

inline void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glWindowPos4iMESA(x, y, z, w);
}

inline void glWindowPos4ivMESA(const GLint * v)
{
    return gl::glWindowPos4ivMESA(v);
}

inline void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glWindowPos4sMESA(x, y, z, w);
}

inline void glWindowPos4svMESA(const GLshort * v)
{
    return gl::glWindowPos4svMESA(v);
}

inline void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return gl::glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl20ext
