#pragma once

#include <glbinding/gl/nogl.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl33ext
{

#include <glbinding/gl/types.inl>

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl33ext


#include <glbinding/FunctionObjects.h>

namespace gl33ext
{

inline void glAccumxOES(GLenum op, GLfixed value)
{
    return glbinding::FunctionObjects::current().AccumxOES(op, value);
}

inline void glActiveProgramEXT(GLuint program)
{
    return glbinding::FunctionObjects::current().ActiveProgramEXT(program);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::FunctionObjects::current().ActiveShaderProgram(pipeline, program);
}

inline void glActiveStencilFaceEXT(GLenum face)
{
    return glbinding::FunctionObjects::current().ActiveStencilFaceEXT(face);
}

inline void glActiveTextureARB(GLenum texture)
{
    return glbinding::FunctionObjects::current().ActiveTextureARB(texture);
}

inline void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().ActiveVaryingNV(program, name);
}

inline void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::FunctionObjects::current().AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::FunctionObjects::current().AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::FunctionObjects::current().AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return glbinding::FunctionObjects::current().AlphaFuncxOES(func, ref);
}

inline void glApplyTextureEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().ApplyTextureEXT(mode);
}

inline GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().AreProgramsResidentNV(n, programs, residences);
}

inline GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::FunctionObjects::current().AreTexturesResidentEXT(n, textures, residences);
}

inline void glArrayElementEXT(GLint i)
{
    return glbinding::FunctionObjects::current().ArrayElementEXT(i);
}

inline void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().ArrayObjectATI(array, size, type, stride, buffer, offset);
}

inline void glAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::FunctionObjects::current().AsyncMarkerSGIX(marker);
}

inline void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return glbinding::FunctionObjects::current().AttachObjectARB(containerObj, obj);
}

inline void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glbinding::FunctionObjects::current().BeginConditionalRenderNV(id, mode);
}

inline void glBeginConditionalRenderNVX(GLuint id)
{
    return glbinding::FunctionObjects::current().BeginConditionalRenderNVX(id);
}

inline void glBeginFragmentShaderATI()
{
    return glbinding::FunctionObjects::current().BeginFragmentShaderATI();
}

inline void glBeginOcclusionQueryNV(GLuint id)
{
    return glbinding::FunctionObjects::current().BeginOcclusionQueryNV(id);
}

inline void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glbinding::FunctionObjects::current().BeginPerfMonitorAMD(monitor);
}

inline void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().BeginPerfQueryINTEL(queryHandle);
}

inline void glBeginQueryARB(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BeginQueryARB(target, id);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::FunctionObjects::current().BeginQueryIndexed(target, index, id);
}

inline void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().BeginTransformFeedbackEXT(primitiveMode);
}

inline void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return glbinding::FunctionObjects::current().BeginTransformFeedbackNV(primitiveMode);
}

inline void glBeginVertexShaderEXT()
{
    return glbinding::FunctionObjects::current().BeginVertexShaderEXT();
}

inline void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::FunctionObjects::current().BeginVideoCaptureNV(video_capture_slot);
}

inline void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().BindAttribLocationARB(programObj, index, name);
}

inline void glBindBufferARB(GLenum target, GLuint buffer)
{
    return glbinding::FunctionObjects::current().BindBufferARB(target, buffer);
}

inline void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().BindBufferBaseEXT(target, index, buffer);
}

inline void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::FunctionObjects::current().BindBufferBaseNV(target, index, buffer);
}

inline void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::FunctionObjects::current().BindBufferOffsetEXT(target, index, buffer, offset);
}

inline void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::FunctionObjects::current().BindBufferOffsetNV(target, index, buffer, offset);
}

inline void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().BindBufferRangeEXT(target, index, buffer, offset, size);
}

inline void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().BindBufferRangeNV(target, index, buffer, offset, size);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().BindBuffersBase(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::FunctionObjects::current().BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

inline void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::FunctionObjects::current().BindFragDataLocationEXT(program, color, name);
}

inline void glBindFragmentShaderATI(GLuint id)
{
    return glbinding::FunctionObjects::current().BindFragmentShaderATI(id);
}

inline void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().BindFramebufferEXT(target, framebuffer);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::FunctionObjects::current().BindImageTexture(unit, texture, level, layered, layer, access, format);
}

inline void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return glbinding::FunctionObjects::current().BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().BindImageTextures(first, count, textures);
}

inline GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return glbinding::FunctionObjects::current().BindLightParameterEXT(light, value);
}

inline GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return glbinding::FunctionObjects::current().BindMaterialParameterEXT(face, value);
}

inline void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().BindMultiTextureEXT(texunit, target, texture);
}

inline GLuint glBindParameterEXT(GLenum value)
{
    return glbinding::FunctionObjects::current().BindParameterEXT(value);
}

inline void glBindProgramARB(GLenum target, GLuint program)
{
    return glbinding::FunctionObjects::current().BindProgramARB(target, program);
}

inline void glBindProgramNV(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BindProgramNV(target, id);
}

inline void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().BindProgramPipeline(pipeline);
}

inline void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().BindRenderbufferEXT(target, renderbuffer);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::FunctionObjects::current().BindSamplers(first, count, samplers);
}

inline GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return glbinding::FunctionObjects::current().BindTexGenParameterEXT(unit, coord, value);
}

inline void glBindTextureEXT(GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().BindTextureEXT(target, texture);
}

inline GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return glbinding::FunctionObjects::current().BindTextureUnitParameterEXT(unit, value);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().BindTextures(first, count, textures);
}

inline void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BindTransformFeedback(target, id);
}

inline void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return glbinding::FunctionObjects::current().BindTransformFeedbackNV(target, id);
}

inline void glBindVertexArrayAPPLE(GLuint array)
{
    return glbinding::FunctionObjects::current().BindVertexArrayAPPLE(array);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::FunctionObjects::current().BindVertexBuffer(bindingindex, buffer, offset, stride);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::FunctionObjects::current().BindVertexBuffers(first, count, buffers, offsets, strides);
}

inline void glBindVertexShaderEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().BindVertexShaderEXT(id);
}

inline void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return glbinding::FunctionObjects::current().BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

inline void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return glbinding::FunctionObjects::current().BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

inline void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return glbinding::FunctionObjects::current().Binormal3bEXT(bx, by, bz);
}

inline void glBinormal3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().Binormal3bvEXT(v);
}

inline void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return glbinding::FunctionObjects::current().Binormal3dEXT(bx, by, bz);
}

inline void glBinormal3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Binormal3dvEXT(v);
}

inline void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return glbinding::FunctionObjects::current().Binormal3fEXT(bx, by, bz);
}

inline void glBinormal3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Binormal3fvEXT(v);
}

inline void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return glbinding::FunctionObjects::current().Binormal3iEXT(bx, by, bz);
}

inline void glBinormal3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().Binormal3ivEXT(v);
}

inline void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return glbinding::FunctionObjects::current().Binormal3sEXT(bx, by, bz);
}

inline void glBinormal3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Binormal3svEXT(v);
}

inline void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().BinormalPointerEXT(type, stride, pointer);
}

inline void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return glbinding::FunctionObjects::current().BitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendBarrierNV()
{
    return glbinding::FunctionObjects::current().BlendBarrierNV();
}

inline void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::FunctionObjects::current().BlendColorEXT(red, green, blue, alpha);
}

inline void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().BlendColorxOES(red, green, blue, alpha);
}

inline void glBlendEquationEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquationEXT(mode);
}

inline void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquationIndexedAMD(buf, mode);
}

inline void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::FunctionObjects::current().BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

inline void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquationi(buf, mode);
}

inline void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return glbinding::FunctionObjects::current().BlendEquationiARB(buf, mode);
}

inline void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().BlendFuncIndexedAMD(buf, src, dst);
}

inline void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::FunctionObjects::current().BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().BlendFunci(buf, src, dst);
}

inline void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::FunctionObjects::current().BlendFunciARB(buf, src, dst);
}

inline void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().BlendParameteriNV(pname, value);
}

inline void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::FunctionObjects::current().BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().BufferAddressRangeNV(pname, index, address, length);
}

inline void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().BufferDataARB(target, size, data, usage);
}

inline void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().BufferParameteriAPPLE(target, pname, param);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::FunctionObjects::current().BufferStorage(target, size, data, flags);
}

inline void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return glbinding::FunctionObjects::current().BufferSubDataARB(target, offset, size, data);
}

inline GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().CheckFramebufferStatusEXT(target));
}

inline GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().CheckNamedFramebufferStatusEXT(framebuffer, target));
}

inline void glClampColorARB(GLenum target, GLenum clamp)
{
    return glbinding::FunctionObjects::current().ClampColorARB(target, clamp);
}

inline void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().ClearAccumxOES(red, green, blue, alpha);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearBufferData(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

inline void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::FunctionObjects::current().ClearColorIiEXT(red, green, blue, alpha);
}

inline void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::FunctionObjects::current().ClearColorIuiEXT(red, green, blue, alpha);
}

inline void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().ClearColorxOES(red, green, blue, alpha);
}

inline void glClearDepthdNV(GLdouble depth)
{
    return glbinding::FunctionObjects::current().ClearDepthdNV(depth);
}

inline void glClearDepthf(GLfloat d)
{
    return glbinding::FunctionObjects::current().ClearDepthf(d);
}

inline void glClearDepthfOES(GLclampf depth)
{
    return glbinding::FunctionObjects::current().ClearDepthfOES(depth);
}

inline void glClearDepthxOES(GLfixed depth)
{
    return glbinding::FunctionObjects::current().ClearDepthxOES(depth);
}

inline void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearTexImage(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline void glClientActiveTextureARB(GLenum texture)
{
    return glbinding::FunctionObjects::current().ClientActiveTextureARB(texture);
}

inline void glClientActiveVertexStreamATI(GLenum stream)
{
    return glbinding::FunctionObjects::current().ClientActiveVertexStreamATI(stream);
}

inline void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().ClientAttribDefaultEXT(mask);
}

inline void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return glbinding::FunctionObjects::current().ClipPlanefOES(plane, equation);
}

inline void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return glbinding::FunctionObjects::current().ClipPlanexOES(plane, equation);
}

inline void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Color3fVertex3fSUN(r, g, b, x, y, z);
}

inline void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color3fVertex3fvSUN(c, v);
}

inline void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::FunctionObjects::current().Color3hNV(red, green, blue);
}

inline void glColor3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Color3hvNV(v);
}

inline void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return glbinding::FunctionObjects::current().Color3xOES(red, green, blue);
}

inline void glColor3xvOES(const GLfixed * components)
{
    return glbinding::FunctionObjects::current().Color3xvOES(components);
}

inline void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color4fNormal3fVertex3fvSUN(c, n, v);
}

inline void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return glbinding::FunctionObjects::current().Color4hNV(red, green, blue, alpha);
}

inline void glColor4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Color4hvNV(v);
}

inline void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().Color4ubVertex2fSUN(r, g, b, a, x, y);
}

inline void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color4ubVertex2fvSUN(c, v);
}

inline void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}

inline void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Color4ubVertex3fvSUN(c, v);
}

inline void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::FunctionObjects::current().Color4xOES(red, green, blue, alpha);
}

inline void glColor4xvOES(const GLfixed * components)
{
    return glbinding::FunctionObjects::current().Color4xvOES(components);
}

inline void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().ColorFormatNV(size, type, stride);
}

inline void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::FunctionObjects::current().ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::FunctionObjects::current().ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::FunctionObjects::current().ColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::FunctionObjects::current().ColorMaskIndexedEXT(index, r, g, b, a);
}

inline void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().ColorPointerEXT(size, type, stride, count, pointer);
}

inline void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().ColorPointervINTEL(size, type, pointer);
}

inline void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ColorSubTable(target, start, count, format, type, data);
}

inline void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::FunctionObjects::current().ColorSubTableEXT(target, start, count, format, type, data);
}

inline void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().ColorTable(target, internalformat, width, format, type, table);
}

inline void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().ColorTableEXT(target, internalFormat, width, format, type, table);
}

inline void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ColorTableParameterfv(target, pname, params);
}

inline void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ColorTableParameterfvSGI(target, pname, params);
}

inline void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ColorTableParameteriv(target, pname, params);
}

inline void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ColorTableParameterivSGI(target, pname, params);
}

inline void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::FunctionObjects::current().ColorTableSGI(target, internalformat, width, format, type, table);
}

inline void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::FunctionObjects::current().CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

inline void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return glbinding::FunctionObjects::current().CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

inline void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().CombinerParameterfNV(pname, param);
}

inline void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().CombinerParameterfvNV(pname, params);
}

inline void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().CombinerParameteriNV(pname, param);
}

inline void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().CombinerParameterivNV(pname, params);
}

inline void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().CombinerStageParameterfvNV(stage, pname, params);
}

inline void glCompileShaderARB(GLhandleARB shaderObj)
{
    return glbinding::FunctionObjects::current().CompileShaderARB(shaderObj);
}

inline void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return glbinding::FunctionObjects::current().CompileShaderIncludeARB(shader, count, path, length);
}

inline void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::FunctionObjects::current().CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

inline void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::FunctionObjects::current().CompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().ConvolutionFilter1D(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::FunctionObjects::current().ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterf(target, pname, params);
}

inline void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterfEXT(target, pname, params);
}

inline void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterfv(target, pname, params);
}

inline void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterfvEXT(target, pname, params);
}

inline void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameteri(target, pname, params);
}

inline void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameteriEXT(target, pname, params);
}

inline void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameteriv(target, pname, params);
}

inline void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterivEXT(target, pname, params);
}

inline void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterxOES(target, pname, param);
}

inline void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().ConvolutionParameterxvOES(target, pname, params);
}

inline void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyColorSubTable(target, start, x, y, width);
}

inline void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyColorSubTableEXT(target, start, x, y, width);
}

inline void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyColorTable(target, internalformat, x, y, width);
}

inline void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyColorTableSGI(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyConvolutionFilter1D(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

inline void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::FunctionObjects::current().CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().CopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

inline void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

inline void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

inline void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glbinding::FunctionObjects::current().CopyPathNV(resultPath, srcPath);
}

inline void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

inline void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::FunctionObjects::current().CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::FunctionObjects::current().CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().CoverFillPathNV(path, coverMode);
}

inline void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glbinding::FunctionObjects::current().CoverStrokePathNV(path, coverMode);
}

inline void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glbinding::FunctionObjects::current().CreatePerfQueryINTEL(queryId, queryHandle);
}

inline GLhandleARB glCreateProgramObjectARB()
{
    return glbinding::FunctionObjects::current().CreateProgramObjectARB();
}

inline GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return glbinding::FunctionObjects::current().CreateShaderObjectARB(shaderType);
}

inline GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glbinding::FunctionObjects::current().CreateShaderProgramEXT(type, string);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::FunctionObjects::current().CreateShaderProgramv(type, count, strings);
}

inline GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().CreateSyncFromCLeventARB(context, event, flags);
}

inline void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().CullParameterdvEXT(pname, params);
}

inline void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().CullParameterfvEXT(pname, params);
}

inline void glCurrentPaletteMatrixARB(GLint index)
{
    return glbinding::FunctionObjects::current().CurrentPaletteMatrixARB(index);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::FunctionObjects::current().DebugMessageCallback(callback, userParam);
}

inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return glbinding::FunctionObjects::current().DebugMessageCallbackAMD(callback, userParam);
}

inline void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return glbinding::FunctionObjects::current().DebugMessageCallbackARB(callback, userParam);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().DebugMessageControl(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::FunctionObjects::current().DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().DebugMessageInsert(source, type, id, severity, length, buf);
}

inline void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().DebugMessageInsertAMD(category, severity, id, length, buf);
}

inline void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::FunctionObjects::current().DebugMessageInsertARB(source, type, id, severity, length, buf);
}

inline void glDeformSGIX(FfdMaskSGIX mask)
{
    return glbinding::FunctionObjects::current().DeformSGIX(mask);
}

inline void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return glbinding::FunctionObjects::current().DeleteAsyncMarkersSGIX(marker, range);
}

inline void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return glbinding::FunctionObjects::current().DeleteBuffersARB(n, buffers);
}

inline void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return glbinding::FunctionObjects::current().DeleteFencesAPPLE(n, fences);
}

inline void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glbinding::FunctionObjects::current().DeleteFencesNV(n, fences);
}

inline void glDeleteFragmentShaderATI(GLuint id)
{
    return glbinding::FunctionObjects::current().DeleteFragmentShaderATI(id);
}

inline void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().DeleteFramebuffersEXT(n, framebuffers);
}

inline void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::FunctionObjects::current().DeleteNamedStringARB(namelen, name);
}

inline void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return glbinding::FunctionObjects::current().DeleteNamesAMD(identifier, num, names);
}

inline void glDeleteObjectARB(GLhandleARB obj)
{
    return glbinding::FunctionObjects::current().DeleteObjectARB(obj);
}

inline void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteOcclusionQueriesNV(n, ids);
}

inline void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glbinding::FunctionObjects::current().DeletePathsNV(path, range);
}

inline void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::FunctionObjects::current().DeletePerfMonitorsAMD(n, monitors);
}

inline void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().DeletePerfQueryINTEL(queryHandle);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::FunctionObjects::current().DeleteProgramPipelines(n, pipelines);
}

inline void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().DeleteProgramsARB(n, programs);
}

inline void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().DeleteProgramsNV(n, programs);
}

inline void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteQueriesARB(n, ids);
}

inline void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().DeleteRenderbuffersEXT(n, renderbuffers);
}

inline void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return glbinding::FunctionObjects::current().DeleteTexturesEXT(n, textures);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteTransformFeedbacks(n, ids);
}

inline void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return glbinding::FunctionObjects::current().DeleteTransformFeedbacksNV(n, ids);
}

inline void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return glbinding::FunctionObjects::current().DeleteVertexArraysAPPLE(n, arrays);
}

inline void glDeleteVertexShaderEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().DeleteVertexShaderEXT(id);
}

inline void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return glbinding::FunctionObjects::current().DepthBoundsEXT(zmin, zmax);
}

inline void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return glbinding::FunctionObjects::current().DepthBoundsdNV(zmin, zmax);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().DepthRangeArrayv(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::FunctionObjects::current().DepthRangeIndexed(index, n, f);
}

inline void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().DepthRangedNV(zNear, zFar);
}

inline void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().DepthRangef(n, f);
}

inline void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return glbinding::FunctionObjects::current().DepthRangefOES(n, f);
}

inline void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().DepthRangexOES(n, f);
}

inline void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return glbinding::FunctionObjects::current().DetachObjectARB(containerObj, attachedObj);
}

inline void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().DetailTexFuncSGIS(target, n, points);
}

inline void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().DisableClientStateIndexedEXT(array, index);
}

inline void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().DisableClientStateiEXT(array, index);
}

inline void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().DisableIndexedEXT(target, index);
}

inline void glDisableVariantClientStateEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().DisableVariantClientStateEXT(id);
}

inline void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::FunctionObjects::current().DisableVertexArrayAttribEXT(vaobj, index);
}

inline void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::FunctionObjects::current().DisableVertexArrayEXT(vaobj, array);
}

inline void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().DisableVertexAttribAPPLE(index, pname);
}

inline void glDisableVertexAttribArrayARB(GLuint index)
{
    return glbinding::FunctionObjects::current().DisableVertexAttribArrayARB(index);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::FunctionObjects::current().DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return glbinding::FunctionObjects::current().DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::FunctionObjects::current().DispatchComputeIndirect(indirect);
}

inline void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawArraysEXT(mode, first, count);
}

inline void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::FunctionObjects::current().DrawArraysIndirect(mode, indirect);
}

inline void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().DrawArraysInstancedARB(mode, first, count, primcount);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

inline void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().DrawArraysInstancedEXT(mode, start, count, primcount);
}

inline void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().DrawBuffersARB(n, bufs);
}

inline void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().DrawBuffersATI(n, bufs);
}

inline void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawElementArrayAPPLE(mode, first, count);
}

inline void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawElementArrayATI(mode, count);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::FunctionObjects::current().DrawElementsIndirect(mode, type, indirect);
}

inline void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::FunctionObjects::current().DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

inline void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return glbinding::FunctionObjects::current().DrawMeshArraysSUN(mode, first, count, width);
}

inline void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

inline void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return glbinding::FunctionObjects::current().DrawRangeElementArrayATI(mode, start, end, count);
}

inline void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::FunctionObjects::current().DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

inline void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return glbinding::FunctionObjects::current().DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedback(mode, id);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedbackInstanced(mode, id, instancecount);
}

inline void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedbackNV(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedbackStream(mode, id, stream);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::FunctionObjects::current().DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

inline void glEdgeFlagFormatNV(GLsizei stride)
{
    return glbinding::FunctionObjects::current().EdgeFlagFormatNV(stride);
}

inline void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return glbinding::FunctionObjects::current().EdgeFlagPointerEXT(stride, count, pointer);
}

inline void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

inline void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return glbinding::FunctionObjects::current().ElementPointerAPPLE(type, pointer);
}

inline void glElementPointerATI(GLenum type, const void * pointer)
{
    return glbinding::FunctionObjects::current().ElementPointerATI(type, pointer);
}

inline void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().EnableClientStateIndexedEXT(array, index);
}

inline void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::FunctionObjects::current().EnableClientStateiEXT(array, index);
}

inline void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().EnableIndexedEXT(target, index);
}

inline void glEnableVariantClientStateEXT(GLuint id)
{
    return glbinding::FunctionObjects::current().EnableVariantClientStateEXT(id);
}

inline void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::FunctionObjects::current().EnableVertexArrayAttribEXT(vaobj, index);
}

inline void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::FunctionObjects::current().EnableVertexArrayEXT(vaobj, array);
}

inline void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().EnableVertexAttribAPPLE(index, pname);
}

inline void glEnableVertexAttribArrayARB(GLuint index)
{
    return glbinding::FunctionObjects::current().EnableVertexAttribArrayARB(index);
}

inline void glEndConditionalRenderNV()
{
    return glbinding::FunctionObjects::current().EndConditionalRenderNV();
}

inline void glEndConditionalRenderNVX()
{
    return glbinding::FunctionObjects::current().EndConditionalRenderNVX();
}

inline void glEndFragmentShaderATI()
{
    return glbinding::FunctionObjects::current().EndFragmentShaderATI();
}

inline void glEndOcclusionQueryNV()
{
    return glbinding::FunctionObjects::current().EndOcclusionQueryNV();
}

inline void glEndPerfMonitorAMD(GLuint monitor)
{
    return glbinding::FunctionObjects::current().EndPerfMonitorAMD(monitor);
}

inline void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::FunctionObjects::current().EndPerfQueryINTEL(queryHandle);
}

inline void glEndQueryARB(GLenum target)
{
    return glbinding::FunctionObjects::current().EndQueryARB(target);
}

inline void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().EndQueryIndexed(target, index);
}

inline void glEndTransformFeedbackEXT()
{
    return glbinding::FunctionObjects::current().EndTransformFeedbackEXT();
}

inline void glEndTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().EndTransformFeedbackNV();
}

inline void glEndVertexShaderEXT()
{
    return glbinding::FunctionObjects::current().EndVertexShaderEXT();
}

inline void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::FunctionObjects::current().EndVideoCaptureNV(video_capture_slot);
}

inline void glEvalCoord1xOES(GLfixed u)
{
    return glbinding::FunctionObjects::current().EvalCoord1xOES(u);
}

inline void glEvalCoord1xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().EvalCoord1xvOES(coords);
}

inline void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return glbinding::FunctionObjects::current().EvalCoord2xOES(u, v);
}

inline void glEvalCoord2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().EvalCoord2xvOES(coords);
}

inline void glEvalMapsNV(GLenum target, GLenum mode)
{
    return glbinding::FunctionObjects::current().EvalMapsNV(target, mode);
}

inline void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ExecuteProgramNV(target, id, params);
}

inline void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::FunctionObjects::current().ExtractComponentEXT(res, src, num);
}

inline void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return glbinding::FunctionObjects::current().FeedbackBufferxOES(n, type, buffer);
}

inline void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::FunctionObjects::current().FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

inline GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return glbinding::FunctionObjects::current().FinishAsyncSGIX(markerp);
}

inline void glFinishFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().FinishFenceAPPLE(fence);
}

inline void glFinishFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().FinishFenceNV(fence);
}

inline void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return glbinding::FunctionObjects::current().FinishObjectAPPLE(object, name);
}

inline void glFinishTextureSUNX()
{
    return glbinding::FunctionObjects::current().FinishTextureSUNX();
}

inline void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().FlushMappedBufferRangeAPPLE(target, offset, size);
}

inline void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

inline void glFlushPixelDataRangeNV(GLenum target)
{
    return glbinding::FunctionObjects::current().FlushPixelDataRangeNV(target);
}

inline void glFlushRasterSGIX()
{
    return glbinding::FunctionObjects::current().FlushRasterSGIX();
}

inline void glFlushStaticDataIBM(GLenum target)
{
    return glbinding::FunctionObjects::current().FlushStaticDataIBM(target);
}

inline void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::FunctionObjects::current().FlushVertexArrayRangeAPPLE(length, pointer);
}

inline void glFlushVertexArrayRangeNV()
{
    return glbinding::FunctionObjects::current().FlushVertexArrayRangeNV();
}

inline void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().FogCoordFormatNV(type, stride);
}

inline void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().FogCoordPointerEXT(type, stride, pointer);
}

inline void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glFogCoorddEXT(GLdouble coord)
{
    return glbinding::FunctionObjects::current().FogCoorddEXT(coord);
}

inline void glFogCoorddvEXT(const GLdouble * coord)
{
    return glbinding::FunctionObjects::current().FogCoorddvEXT(coord);
}

inline void glFogCoordfEXT(GLfloat coord)
{
    return glbinding::FunctionObjects::current().FogCoordfEXT(coord);
}

inline void glFogCoordfvEXT(const GLfloat * coord)
{
    return glbinding::FunctionObjects::current().FogCoordfvEXT(coord);
}

inline void glFogCoordhNV(GLhalfNV fog)
{
    return glbinding::FunctionObjects::current().FogCoordhNV(fog);
}

inline void glFogCoordhvNV(const GLhalfNV * fog)
{
    return glbinding::FunctionObjects::current().FogCoordhvNV(fog);
}

inline void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().FogFuncSGIS(n, points);
}

inline void glFogxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().FogxOES(pname, param);
}

inline void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().FogxvOES(pname, param);
}

inline void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().FragmentColorMaterialSGIX(face, mode);
}

inline void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().FragmentLightModelfSGIX(pname, param);
}

inline void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().FragmentLightModelfvSGIX(pname, params);
}

inline void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().FragmentLightModeliSGIX(pname, param);
}

inline void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().FragmentLightModelivSGIX(pname, params);
}

inline void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().FragmentLightfSGIX(light, pname, param);
}

inline void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().FragmentLightfvSGIX(light, pname, params);
}

inline void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().FragmentLightiSGIX(light, pname, param);
}

inline void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().FragmentLightivSGIX(light, pname, params);
}

inline void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().FragmentMaterialfSGIX(face, pname, param);
}

inline void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().FragmentMaterialfvSGIX(face, pname, params);
}

inline void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().FragmentMaterialiSGIX(face, pname, param);
}

inline void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().FragmentMaterialivSGIX(face, pname, params);
}

inline void glFrameTerminatorGREMEDY()
{
    return glbinding::FunctionObjects::current().FrameTerminatorGREMEDY();
}

inline void glFrameZoomSGIX(GLint factor)
{
    return glbinding::FunctionObjects::current().FrameZoomSGIX(factor);
}

inline void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::FunctionObjects::current().FramebufferDrawBufferEXT(framebuffer, mode);
}

inline void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::FunctionObjects::current().FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().FramebufferParameteri(target, pname, param);
}

inline void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::FunctionObjects::current().FramebufferReadBufferEXT(framebuffer, mode);
}

inline void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTextureARB(target, attachment, texture, level);
}

inline void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().FramebufferTextureEXT(target, attachment, texture, level);
}

inline void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

inline void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

inline void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

inline void glFreeObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().FreeObjectBufferATI(buffer);
}

inline void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().FrustumfOES(l, r, b, t, n, f);
}

inline void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().FrustumxOES(l, r, b, t, n, f);
}

inline GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return glbinding::FunctionObjects::current().GenAsyncMarkersSGIX(range);
}

inline void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return glbinding::FunctionObjects::current().GenBuffersARB(n, buffers);
}

inline void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return glbinding::FunctionObjects::current().GenFencesAPPLE(n, fences);
}

inline void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glbinding::FunctionObjects::current().GenFencesNV(n, fences);
}

inline GLuint glGenFragmentShadersATI(GLuint range)
{
    return glbinding::FunctionObjects::current().GenFragmentShadersATI(range);
}

inline void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return glbinding::FunctionObjects::current().GenFramebuffersEXT(n, framebuffers);
}

inline void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return glbinding::FunctionObjects::current().GenNamesAMD(identifier, num, names);
}

inline void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenOcclusionQueriesNV(n, ids);
}

inline GLuint glGenPathsNV(GLsizei range)
{
    return glbinding::FunctionObjects::current().GenPathsNV(range);
}

inline void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::FunctionObjects::current().GenPerfMonitorsAMD(n, monitors);
}

inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::FunctionObjects::current().GenProgramPipelines(n, pipelines);
}

inline void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return glbinding::FunctionObjects::current().GenProgramsARB(n, programs);
}

inline void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return glbinding::FunctionObjects::current().GenProgramsNV(n, programs);
}

inline void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenQueriesARB(n, ids);
}

inline void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::FunctionObjects::current().GenRenderbuffersEXT(n, renderbuffers);
}

inline GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return glbinding::FunctionObjects::current().GenSymbolsEXT(datatype, storagetype, range, components);
}

inline void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return glbinding::FunctionObjects::current().GenTexturesEXT(n, textures);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenTransformFeedbacks(n, ids);
}

inline void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return glbinding::FunctionObjects::current().GenTransformFeedbacksNV(n, ids);
}

inline void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return glbinding::FunctionObjects::current().GenVertexArraysAPPLE(n, arrays);
}

inline GLuint glGenVertexShadersEXT(GLuint range)
{
    return glbinding::FunctionObjects::current().GenVertexShadersEXT(range);
}

inline void glGenerateMipmapEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().GenerateMipmapEXT(target);
}

inline void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return glbinding::FunctionObjects::current().GenerateMultiTexMipmapEXT(texunit, target);
}

inline void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return glbinding::FunctionObjects::current().GenerateTextureMipmapEXT(texture, target);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

inline void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::FunctionObjects::current().GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

inline void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::FunctionObjects::current().GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

inline void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

inline void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetArrayObjectfvATI(array, pname, params);
}

inline void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetArrayObjectivATI(array, pname, params);
}

inline void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return glbinding::FunctionObjects::current().GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

inline GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().GetAttribLocationARB(programObj, name);
}

inline void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetBooleanIndexedvEXT(target, index, data);
}

inline void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetBufferParameterivARB(target, pname, params);
}

inline void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetBufferParameterui64vNV(target, pname, params);
}

inline void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetBufferPointervARB(target, pname, params);
}

inline void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return glbinding::FunctionObjects::current().GetBufferSubDataARB(target, offset, size, data);
}

inline void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return glbinding::FunctionObjects::current().GetClipPlanefOES(plane, equation);
}

inline void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return glbinding::FunctionObjects::current().GetClipPlanexOES(plane, equation);
}

inline void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::FunctionObjects::current().GetColorTable(target, format, type, table);
}

inline void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return glbinding::FunctionObjects::current().GetColorTableEXT(target, format, type, data);
}

inline void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameterfv(target, pname, params);
}

inline void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameterfvEXT(target, pname, params);
}

inline void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameterfvSGI(target, pname, params);
}

inline void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameteriv(target, pname, params);
}

inline void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameterivEXT(target, pname, params);
}

inline void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetColorTableParameterivSGI(target, pname, params);
}

inline void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::FunctionObjects::current().GetColorTableSGI(target, format, type, table);
}

inline void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

inline void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

inline void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

inline void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetCombinerStageParameterfvNV(stage, pname, params);
}

inline void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return glbinding::FunctionObjects::current().GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

inline void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return glbinding::FunctionObjects::current().GetCompressedTexImageARB(target, level, img);
}

inline void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return glbinding::FunctionObjects::current().GetCompressedTextureImageEXT(texture, target, lod, img);
}

inline void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::FunctionObjects::current().GetConvolutionFilter(target, format, type, image);
}

inline void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::FunctionObjects::current().GetConvolutionFilterEXT(target, format, type, image);
}

inline void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetConvolutionParameterfv(target, pname, params);
}

inline void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetConvolutionParameterfvEXT(target, pname, params);
}

inline void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetConvolutionParameteriv(target, pname, params);
}

inline void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetConvolutionParameterivEXT(target, pname, params);
}

inline void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetConvolutionParameterxvOES(target, pname, params);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::FunctionObjects::current().GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return glbinding::FunctionObjects::current().GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

inline GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::FunctionObjects::current().GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::FunctionObjects::current().GetDetailTexFuncSGIS(target, points);
}

inline void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::FunctionObjects::current().GetDoubleIndexedvEXT(target, index, data);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::FunctionObjects::current().GetDoublei_v(target, index, data);
}

inline void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetDoublei_vEXT(pname, index, params);
}

inline void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFenceivNV(fence, pname, params);
}

inline void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

inline void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFinalCombinerInputParameterivNV(variable, pname, params);
}

inline void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glbinding::FunctionObjects::current().GetFirstPerfQueryIdINTEL(queryId);
}

inline void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetFixedvOES(pname, params);
}

inline void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetFloatIndexedvEXT(target, index, data);
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetFloati_v(target, index, data);
}

inline void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetFloati_vEXT(pname, index, params);
}

inline void glGetFogFuncSGIS(GLfloat * points)
{
    return glbinding::FunctionObjects::current().GetFogFuncSGIS(points);
}

inline GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetFragDataLocationEXT(program, name);
}

inline void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetFragmentLightfvSGIX(light, pname, params);
}

inline void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFragmentLightivSGIX(light, pname, params);
}

inline void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetFragmentMaterialfvSGIX(face, pname, params);
}

inline void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFragmentMaterialivSGIX(face, pname, params);
}

inline void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFramebufferParameteriv(target, pname, params);
}

inline void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetFramebufferParameterivEXT(framebuffer, pname, params);
}

inline GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().GetGraphicsResetStatusARB());
}

inline GLhandleARB glGetHandleARB(GLenum pname)
{
    return glbinding::FunctionObjects::current().GetHandleARB(pname);
}

inline void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().GetHistogram(target, reset, format, type, values);
}

inline void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().GetHistogramEXT(target, reset, format, type, values);
}

inline void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetHistogramParameterfv(target, pname, params);
}

inline void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetHistogramParameterfvEXT(target, pname, params);
}

inline void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetHistogramParameteriv(target, pname, params);
}

inline void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetHistogramParameterivEXT(target, pname, params);
}

inline void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetHistogramParameterxvOES(target, pname, params);
}

inline GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::FunctionObjects::current().GetImageHandleARB(texture, level, layered, layer, format);
}

inline GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::FunctionObjects::current().GetImageHandleNV(texture, level, layered, layer, format);
}

inline void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetImageTransformParameterfvHP(target, pname, params);
}

inline void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetImageTransformParameterivHP(target, pname, params);
}

inline void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return glbinding::FunctionObjects::current().GetInfoLogARB(obj, maxLength, length, infoLog);
}

inline GLint glGetInstrumentsSGIX()
{
    return glbinding::FunctionObjects::current().GetInstrumentsSGIX();
}

inline void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return glbinding::FunctionObjects::current().GetIntegerIndexedvEXT(target, index, data);
}

inline void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return glbinding::FunctionObjects::current().GetIntegerui64i_vNV(value, index, result);
}

inline void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return glbinding::FunctionObjects::current().GetIntegerui64vNV(value, result);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::FunctionObjects::current().GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::FunctionObjects::current().GetInternalformativ(target, internalformat, pname, bufSize, params);
}

inline void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetInvariantBooleanvEXT(id, value, data);
}

inline void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetInvariantFloatvEXT(id, value, data);
}

inline void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().GetInvariantIntegervEXT(id, value, data);
}

inline void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetLightxOES(light, pname, params);
}

inline void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetListParameterfvSGIX(list, pname, params);
}

inline void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetListParameterivSGIX(list, pname, params);
}

inline void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetLocalConstantBooleanvEXT(id, value, data);
}

inline void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetLocalConstantFloatvEXT(id, value, data);
}

inline void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().GetLocalConstantIntegervEXT(id, value, data);
}

inline void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMapAttribParameterfvNV(target, index, pname, params);
}

inline void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMapAttribParameterivNV(target, index, pname, params);
}

inline void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return glbinding::FunctionObjects::current().GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

inline void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMapParameterfvNV(target, pname, params);
}

inline void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMapParameterivNV(target, pname, params);
}

inline void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return glbinding::FunctionObjects::current().GetMapxvOES(target, query, v);
}

inline void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().GetMaterialxOES(face, pname, param);
}

inline void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().GetMinmax(target, reset, format, type, values);
}

inline void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::FunctionObjects::current().GetMinmaxEXT(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMinmaxParameterfv(target, pname, params);
}

inline void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMinmaxParameterfvEXT(target, pname, params);
}

inline void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMinmaxParameteriv(target, pname, params);
}

inline void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMinmaxParameterivEXT(target, pname, params);
}

inline void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

inline void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

inline void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetMultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::FunctionObjects::current().GetMultisamplefvNV(pname, index, val);
}

inline void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedBufferParameterivEXT(buffer, pname, params);
}

inline void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetNamedBufferParameterui64vNV(buffer, pname, params);
}

inline void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetNamedBufferPointervEXT(buffer, pname, params);
}

inline void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::FunctionObjects::current().GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

inline void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

inline void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

inline void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return glbinding::FunctionObjects::current().GetNamedProgramStringEXT(program, target, pname, string);
}

inline void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedProgramivEXT(program, target, pname, params);
}

inline void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

inline void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return glbinding::FunctionObjects::current().GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

inline void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetNamedStringivARB(namelen, name, pname, params);
}

inline void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glbinding::FunctionObjects::current().GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

inline void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetObjectBufferfvATI(buffer, pname, params);
}

inline void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetObjectBufferivATI(buffer, pname, params);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().GetObjectLabel(identifier, name, bufSize, length, label);
}

inline void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().GetObjectLabelEXT(type, object, bufSize, length, label);
}

inline void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetObjectParameterfvARB(obj, pname, params);
}

inline void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetObjectParameterivAPPLE(objectType, name, pname, params);
}

inline void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetObjectParameterivARB(obj, pname, params);
}

inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::FunctionObjects::current().GetObjectPtrLabel(ptr, bufSize, length, label);
}

inline void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetOcclusionQueryivNV(id, pname, params);
}

inline void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetOcclusionQueryuivNV(id, pname, params);
}

inline void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().GetPathColorGenfvNV(color, pname, value);
}

inline void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().GetPathColorGenivNV(color, pname, value);
}

inline void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glbinding::FunctionObjects::current().GetPathCommandsNV(path, commands);
}

inline void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glbinding::FunctionObjects::current().GetPathCoordsNV(path, coords);
}

inline void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glbinding::FunctionObjects::current().GetPathDashArrayNV(path, dashArray);
}

inline GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glbinding::FunctionObjects::current().GetPathLengthNV(path, startSegment, numSegments);
}

inline void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glbinding::FunctionObjects::current().GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

inline void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glbinding::FunctionObjects::current().GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

inline void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().GetPathParameterfvNV(path, pname, value);
}

inline void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().GetPathParameterivNV(path, pname, value);
}

inline void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glbinding::FunctionObjects::current().GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

inline void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glbinding::FunctionObjects::current().GetPathTexGenfvNV(texCoordSet, pname, value);
}

inline void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glbinding::FunctionObjects::current().GetPathTexGenivNV(texCoordSet, pname, value);
}

inline void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glbinding::FunctionObjects::current().GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

inline void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

inline void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

inline void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

inline void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

inline void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

inline void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glbinding::FunctionObjects::current().GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

inline void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glbinding::FunctionObjects::current().GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

inline void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glbinding::FunctionObjects::current().GetPerfQueryIdByNameINTEL(queryName, queryId);
}

inline void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glbinding::FunctionObjects::current().GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

inline void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return glbinding::FunctionObjects::current().GetPixelMapxv(map, size, values);
}

inline void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetPixelTexGenParameterfvSGIS(pname, params);
}

inline void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetPixelTexGenParameterivSGIS(pname, params);
}

inline void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetPixelTransformParameterfvEXT(target, pname, params);
}

inline void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetPixelTransformParameterivEXT(target, pname, params);
}

inline void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return glbinding::FunctionObjects::current().GetPointerIndexedvEXT(target, index, data);
}

inline void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return glbinding::FunctionObjects::current().GetPointeri_vEXT(pname, index, params);
}

inline void glGetPointervEXT(GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetPointervEXT(pname, params);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::FunctionObjects::current().GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

inline void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramEnvParameterIivNV(target, index, params);
}

inline void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetProgramEnvParameterIuivNV(target, index, params);
}

inline void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetProgramEnvParameterdvARB(target, index, params);
}

inline void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetProgramEnvParameterfvARB(target, index, params);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramInterfaceiv(program, programInterface, pname, params);
}

inline void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramLocalParameterIivNV(target, index, params);
}

inline void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetProgramLocalParameterIuivNV(target, index, params);
}

inline void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetProgramLocalParameterdvARB(target, index, params);
}

inline void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetProgramLocalParameterfvARB(target, index, params);
}

inline void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetProgramNamedParameterdvNV(id, len, name, params);
}

inline void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetProgramNamedParameterfvNV(id, len, name, params);
}

inline void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetProgramParameterdvNV(target, index, pname, params);
}

inline void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetProgramParameterfvNV(target, index, pname, params);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::FunctionObjects::current().GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramPipelineiv(pipeline, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetProgramResourceIndex(program, programInterface, name);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetProgramResourceLocation(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetProgramResourceLocationIndex(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::FunctionObjects::current().GetProgramStageiv(program, shadertype, pname, values);
}

inline void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return glbinding::FunctionObjects::current().GetProgramStringARB(target, pname, string);
}

inline void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return glbinding::FunctionObjects::current().GetProgramStringNV(id, pname, program);
}

inline void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return glbinding::FunctionObjects::current().GetProgramSubroutineParameteruivNV(target, index, param);
}

inline void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramivARB(target, pname, params);
}

inline void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetProgramivNV(id, pname, params);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryIndexediv(target, index, pname, params);
}

inline void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjecti64vEXT(id, pname, params);
}

inline void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectivARB(id, pname, params);
}

inline void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectui64vEXT(id, pname, params);
}

inline void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetQueryObjectuivARB(id, pname, params);
}

inline void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetQueryivARB(target, pname, params);
}

inline void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetRenderbufferParameterivEXT(target, pname, params);
}

inline void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::FunctionObjects::current().GetSeparableFilter(target, format, type, row, column, span);
}

inline void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::FunctionObjects::current().GetSeparableFilterEXT(target, format, type, row, column, span);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::FunctionObjects::current().GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

inline void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return glbinding::FunctionObjects::current().GetShaderSourceARB(obj, maxLength, length, source);
}

inline void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::FunctionObjects::current().GetSharpenTexFuncSGIS(target, points);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetSubroutineIndex(program, shadertype, name);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetSubroutineUniformLocation(program, shadertype, name);
}

inline void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return glbinding::FunctionObjects::current().GetTexBumpParameterfvATI(pname, param);
}

inline void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().GetTexBumpParameterivATI(pname, param);
}

inline void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetTexEnvxvOES(target, pname, params);
}

inline void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return glbinding::FunctionObjects::current().GetTexFilterFuncSGIS(target, filter, weights);
}

inline void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetTexGenxvOES(coord, pname, params);
}

inline void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetTexLevelParameterxvOES(target, level, pname, params);
}

inline void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterIivEXT(target, pname, params);
}

inline void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterIuivEXT(target, pname, params);
}

inline void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return glbinding::FunctionObjects::current().GetTexParameterPointervAPPLE(target, pname, params);
}

inline void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::FunctionObjects::current().GetTexParameterxvOES(target, pname, params);
}

inline GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return glbinding::FunctionObjects::current().GetTextureHandleARB(texture);
}

inline GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glbinding::FunctionObjects::current().GetTextureHandleNV(texture);
}

inline void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::FunctionObjects::current().GetTextureImageEXT(texture, target, level, format, type, pixels);
}

inline void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

inline void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

inline void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTextureParameterIivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetTextureParameterIuivEXT(texture, target, pname, params);
}

inline void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetTextureParameterfvEXT(texture, target, pname, params);
}

inline void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTextureParameterivEXT(texture, target, pname, params);
}

inline GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return glbinding::FunctionObjects::current().GetTextureSamplerHandleARB(texture, sampler);
}

inline GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glbinding::FunctionObjects::current().GetTextureSamplerHandleNV(texture, sampler);
}

inline void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetTrackMatrixivNV(target, address, pname, params);
}

inline void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::FunctionObjects::current().GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return glbinding::FunctionObjects::current().GetTransformFeedbackVaryingNV(program, index, location);
}

inline GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return glbinding::FunctionObjects::current().GetUniformBufferSizeEXT(program, location);
}

inline GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::FunctionObjects::current().GetUniformLocationARB(programObj, name);
}

inline GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return glbinding::FunctionObjects::current().GetUniformOffsetEXT(program, location);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetUniformSubroutineuiv(shadertype, location, params);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetUniformdv(program, location, params);
}

inline void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetUniformfvARB(programObj, location, params);
}

inline void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetUniformi64vNV(program, location, params);
}

inline void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return glbinding::FunctionObjects::current().GetUniformivARB(programObj, location, params);
}

inline void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetUniformui64vNV(program, location, params);
}

inline void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetUniformuivEXT(program, location, params);
}

inline void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVariantArrayObjectfvATI(id, pname, params);
}

inline void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVariantArrayObjectivATI(id, pname, params);
}

inline void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::FunctionObjects::current().GetVariantBooleanvEXT(id, value, data);
}

inline void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::FunctionObjects::current().GetVariantFloatvEXT(id, value, data);
}

inline void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::FunctionObjects::current().GetVariantIntegervEXT(id, value, data);
}

inline void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return glbinding::FunctionObjects::current().GetVariantPointervEXT(id, value, data);
}

inline GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return glbinding::FunctionObjects::current().GetVaryingLocationNV(program, name);
}

inline void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::FunctionObjects::current().GetVertexArrayIntegervEXT(vaobj, pname, param);
}

inline void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return glbinding::FunctionObjects::current().GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

inline void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return glbinding::FunctionObjects::current().GetVertexArrayPointervEXT(vaobj, pname, param);
}

inline void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribArrayObjectfvATI(index, pname, params);
}

inline void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribArrayObjectivATI(index, pname, params);
}

inline void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribIivEXT(index, pname, params);
}

inline void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribIuivEXT(index, pname, params);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribLdv(index, pname, params);
}

inline void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribLdvEXT(index, pname, params);
}

inline void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribLi64vNV(index, pname, params);
}

inline void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribLui64vARB(index, pname, params);
}

inline void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribLui64vNV(index, pname, params);
}

inline void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().GetVertexAttribPointervARB(index, pname, pointer);
}

inline void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::FunctionObjects::current().GetVertexAttribPointervNV(index, pname, pointer);
}

inline void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribdvARB(index, pname, params);
}

inline void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribdvNV(index, pname, params);
}

inline void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribfvARB(index, pname, params);
}

inline void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribfvNV(index, pname, params);
}

inline void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribivARB(index, pname, params);
}

inline void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVertexAttribivNV(index, pname, params);
}

inline void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVideoCaptureivNV(video_capture_slot, pname, params);
}

inline void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetVideoi64vNV(video_slot, pname, params);
}

inline void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return glbinding::FunctionObjects::current().GetVideoivNV(video_slot, pname, params);
}

inline void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return glbinding::FunctionObjects::current().GetVideoui64vNV(video_slot, pname, params);
}

inline void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetVideouivNV(video_slot, pname, params);
}

inline void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::FunctionObjects::current().GetnColorTableARB(target, format, type, bufSize, table);
}

inline void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return glbinding::FunctionObjects::current().GetnCompressedTexImageARB(target, lod, bufSize, img);
}

inline void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::FunctionObjects::current().GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

inline void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::FunctionObjects::current().GetnHistogramARB(target, reset, format, type, bufSize, values);
}

inline void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::FunctionObjects::current().GetnMapdvARB(target, query, bufSize, v);
}

inline void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::FunctionObjects::current().GetnMapfvARB(target, query, bufSize, v);
}

inline void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::FunctionObjects::current().GetnMapivARB(target, query, bufSize, v);
}

inline void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::FunctionObjects::current().GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

inline void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::FunctionObjects::current().GetnPixelMapfvARB(map, bufSize, values);
}

inline void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::FunctionObjects::current().GetnPixelMapuivARB(map, bufSize, values);
}

inline void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::FunctionObjects::current().GetnPixelMapusvARB(map, bufSize, values);
}

inline void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::FunctionObjects::current().GetnPolygonStippleARB(bufSize, pattern);
}

inline void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::FunctionObjects::current().GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return glbinding::FunctionObjects::current().GetnTexImageARB(target, level, format, type, bufSize, img);
}

inline void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::FunctionObjects::current().GetnUniformdvARB(program, location, bufSize, params);
}

inline void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::FunctionObjects::current().GetnUniformfvARB(program, location, bufSize, params);
}

inline void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::FunctionObjects::current().GetnUniformivARB(program, location, bufSize, params);
}

inline void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::FunctionObjects::current().GetnUniformuivARB(program, location, bufSize, params);
}

inline void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactorbSUN(factor);
}

inline void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactordSUN(factor);
}

inline void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactorfSUN(factor);
}

inline void glGlobalAlphaFactoriSUN(GLint factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactoriSUN(factor);
}

inline void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactorsSUN(factor);
}

inline void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactorubSUN(factor);
}

inline void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactoruiSUN(factor);
}

inline void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return glbinding::FunctionObjects::current().GlobalAlphaFactorusSUN(factor);
}

inline void glHintPGI(GLenum target, GLint mode)
{
    return glbinding::FunctionObjects::current().HintPGI(target, mode);
}

inline void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().Histogram(target, width, internalformat, sink);
}

inline void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().HistogramEXT(target, width, internalformat, sink);
}

inline void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return glbinding::FunctionObjects::current().IglooInterfaceSGIX(pname, params);
}

inline void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().ImageTransformParameterfHP(target, pname, param);
}

inline void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ImageTransformParameterfvHP(target, pname, params);
}

inline void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().ImageTransformParameteriHP(target, pname, param);
}

inline void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ImageTransformParameterivHP(target, pname, params);
}

inline GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return glbinding::FunctionObjects::current().ImportSyncEXT(external_sync_type, external_sync, flags);
}

inline void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().IndexFormatNV(type, stride);
}

inline void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return glbinding::FunctionObjects::current().IndexFuncEXT(func, ref);
}

inline void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().IndexMaterialEXT(face, mode);
}

inline void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().IndexPointerEXT(type, stride, count, pointer);
}

inline void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().IndexPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glIndexxOES(GLfixed component)
{
    return glbinding::FunctionObjects::current().IndexxOES(component);
}

inline void glIndexxvOES(const GLfixed * component)
{
    return glbinding::FunctionObjects::current().IndexxvOES(component);
}

inline void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::FunctionObjects::current().InsertComponentEXT(res, src, num);
}

inline void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::FunctionObjects::current().InsertEventMarkerEXT(length, marker);
}

inline void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return glbinding::FunctionObjects::current().InstrumentsBufferSGIX(size, buffer);
}

inline void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glbinding::FunctionObjects::current().InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

inline void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::FunctionObjects::current().InvalidateBufferData(buffer);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::FunctionObjects::current().InvalidateBufferSubData(buffer, offset, length);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::FunctionObjects::current().InvalidateFramebuffer(target, numAttachments, attachments);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

inline void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().InvalidateTexImage(texture, level);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::FunctionObjects::current().IsAsyncMarkerSGIX(marker);
}

inline GLboolean glIsBufferARB(GLuint buffer)
{
    return glbinding::FunctionObjects::current().IsBufferARB(buffer);
}

inline GLboolean glIsBufferResidentNV(GLenum target)
{
    return glbinding::FunctionObjects::current().IsBufferResidentNV(target);
}

inline GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::FunctionObjects::current().IsEnabledIndexedEXT(target, index);
}

inline GLboolean glIsFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().IsFenceAPPLE(fence);
}

inline GLboolean glIsFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().IsFenceNV(fence);
}

inline GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return glbinding::FunctionObjects::current().IsFramebufferEXT(framebuffer);
}

inline GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().IsImageHandleResidentARB(handle);
}

inline GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().IsImageHandleResidentNV(handle);
}

inline GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return glbinding::FunctionObjects::current().IsNameAMD(identifier, name);
}

inline GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return glbinding::FunctionObjects::current().IsNamedBufferResidentNV(buffer);
}

inline GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::FunctionObjects::current().IsNamedStringARB(namelen, name);
}

inline GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().IsObjectBufferATI(buffer);
}

inline GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return glbinding::FunctionObjects::current().IsOcclusionQueryNV(id);
}

inline GLboolean glIsPathNV(GLuint path)
{
    return glbinding::FunctionObjects::current().IsPathNV(path);
}

inline GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().IsPointInFillPathNV(path, mask, x, y);
}

inline GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().IsPointInStrokePathNV(path, x, y);
}

inline GLboolean glIsProgramARB(GLuint program)
{
    return glbinding::FunctionObjects::current().IsProgramARB(program);
}

inline GLboolean glIsProgramNV(GLuint id)
{
    return glbinding::FunctionObjects::current().IsProgramNV(id);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().IsProgramPipeline(pipeline);
}

inline GLboolean glIsQueryARB(GLuint id)
{
    return glbinding::FunctionObjects::current().IsQueryARB(id);
}

inline GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().IsRenderbufferEXT(renderbuffer);
}

inline GLboolean glIsTextureEXT(GLuint texture)
{
    return glbinding::FunctionObjects::current().IsTextureEXT(texture);
}

inline GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().IsTextureHandleResidentARB(handle);
}

inline GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().IsTextureHandleResidentNV(handle);
}

inline GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::FunctionObjects::current().IsTransformFeedback(id);
}

inline GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return glbinding::FunctionObjects::current().IsTransformFeedbackNV(id);
}

inline GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return glbinding::FunctionObjects::current().IsVariantEnabledEXT(id, cap);
}

inline GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return glbinding::FunctionObjects::current().IsVertexArrayAPPLE(array);
}

inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return glbinding::FunctionObjects::current().IsVertexAttribEnabledAPPLE(index, pname);
}

inline void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().LabelObjectEXT(type, object, length, label);
}

inline void glLightEnviSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().LightEnviSGIX(pname, param);
}

inline void glLightModelxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().LightModelxOES(pname, param);
}

inline void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().LightModelxvOES(pname, param);
}

inline void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().LightxOES(light, pname, param);
}

inline void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().LightxvOES(light, pname, params);
}

inline void glLineWidthxOES(GLfixed width)
{
    return glbinding::FunctionObjects::current().LineWidthxOES(width);
}

inline void glLinkProgramARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().LinkProgramARB(programObj);
}

inline void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().ListParameterfSGIX(list, pname, param);
}

inline void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ListParameterfvSGIX(list, pname, params);
}

inline void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().ListParameteriSGIX(list, pname, param);
}

inline void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().ListParameterivSGIX(list, pname, params);
}

inline void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return glbinding::FunctionObjects::current().LoadIdentityDeformationMapSGIX(mask);
}

inline void glLoadMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().LoadMatrixxOES(m);
}

inline void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return glbinding::FunctionObjects::current().LoadProgramNV(target, id, len, program);
}

inline void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().LoadTransposeMatrixdARB(m);
}

inline void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().LoadTransposeMatrixfARB(m);
}

inline void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().LoadTransposeMatrixxOES(m);
}

inline void glLockArraysEXT(GLint first, GLsizei count)
{
    return glbinding::FunctionObjects::current().LockArraysEXT(first, count);
}

inline void glMakeBufferNonResidentNV(GLenum target)
{
    return glbinding::FunctionObjects::current().MakeBufferNonResidentNV(target);
}

inline void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().MakeBufferResidentNV(target, access);
}

inline void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeImageHandleNonResidentARB(handle);
}

inline void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeImageHandleNonResidentNV(handle);
}

inline void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return glbinding::FunctionObjects::current().MakeImageHandleResidentARB(handle, access);
}

inline void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glbinding::FunctionObjects::current().MakeImageHandleResidentNV(handle, access);
}

inline void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return glbinding::FunctionObjects::current().MakeNamedBufferNonResidentNV(buffer);
}

inline void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return glbinding::FunctionObjects::current().MakeNamedBufferResidentNV(buffer, access);
}

inline void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeTextureHandleNonResidentARB(handle);
}

inline void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeTextureHandleNonResidentNV(handle);
}

inline void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeTextureHandleResidentARB(handle);
}

inline void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::FunctionObjects::current().MakeTextureHandleResidentNV(handle);
}

inline void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return glbinding::FunctionObjects::current().Map1xOES(target, u1, u2, stride, order, points);
}

inline void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return glbinding::FunctionObjects::current().Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void * glMapBufferARB(GLenum target, GLenum access)
{
    return glbinding::FunctionObjects::current().MapBufferARB(target, access);
}

inline void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return glbinding::FunctionObjects::current().MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

inline void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return glbinding::FunctionObjects::current().MapGrid1xOES(n, u1, u2);
}

inline void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return glbinding::FunctionObjects::current().MapGrid2xOES(n, u1, u2, v1, v2);
}

inline void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return glbinding::FunctionObjects::current().MapNamedBufferEXT(buffer, access);
}

inline void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::FunctionObjects::current().MapNamedBufferRangeEXT(buffer, offset, length, access);
}

inline void * glMapObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().MapObjectBufferATI(buffer);
}

inline void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().MapParameterfvNV(target, pname, params);
}

inline void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().MapParameterivNV(target, pname, params);
}

inline void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return glbinding::FunctionObjects::current().MapTexture2DINTEL(texture, level, access, stride, layout);
}

inline void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::FunctionObjects::current().MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().MaterialxOES(face, pname, param);
}

inline void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return glbinding::FunctionObjects::current().MaterialxvOES(face, pname, param);
}

inline void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().MatrixIndexPointerARB(size, type, stride, pointer);
}

inline void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return glbinding::FunctionObjects::current().MatrixIndexubvARB(size, indices);
}

inline void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return glbinding::FunctionObjects::current().MatrixIndexuivARB(size, indices);
}

inline void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return glbinding::FunctionObjects::current().MatrixIndexusvARB(size, indices);
}

inline void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().MatrixLoadIdentityEXT(mode);
}

inline void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MatrixLoadTransposedEXT(mode, m);
}

inline void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MatrixLoadTransposefEXT(mode, m);
}

inline void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MatrixLoaddEXT(mode, m);
}

inline void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MatrixLoadfEXT(mode, m);
}

inline void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MatrixMultTransposedEXT(mode, m);
}

inline void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MatrixMultTransposefEXT(mode, m);
}

inline void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MatrixMultdEXT(mode, m);
}

inline void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MatrixMultfEXT(mode, m);
}

inline void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::FunctionObjects::current().MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixPopEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().MatrixPopEXT(mode);
}

inline void glMatrixPushEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().MatrixPushEXT(mode);
}

inline void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().MatrixRotatedEXT(mode, angle, x, y, z);
}

inline void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().MatrixRotatefEXT(mode, angle, x, y, z);
}

inline void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().MatrixScaledEXT(mode, x, y, z);
}

inline void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().MatrixScalefEXT(mode, x, y, z);
}

inline void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().MatrixTranslatedEXT(mode, x, y, z);
}

inline void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().MatrixTranslatefEXT(mode, x, y, z);
}

inline void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::FunctionObjects::current().MemoryBarrier(barriers);
}

inline void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return glbinding::FunctionObjects::current().MemoryBarrierEXT(barriers);
}

inline void glMinSampleShading(GLfloat value)
{
    return glbinding::FunctionObjects::current().MinSampleShading(value);
}

inline void glMinSampleShadingARB(GLfloat value)
{
    return glbinding::FunctionObjects::current().MinSampleShadingARB(value);
}

inline void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().Minmax(target, internalformat, sink);
}

inline void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::FunctionObjects::current().MinmaxEXT(target, internalformat, sink);
}

inline void glMultMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().MultMatrixxOES(m);
}

inline void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::FunctionObjects::current().MultTransposeMatrixdARB(m);
}

inline void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::FunctionObjects::current().MultTransposeMatrixfARB(m);
}

inline void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::FunctionObjects::current().MultTransposeMatrixxOES(m);
}

inline void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().MultiDrawArraysEXT(mode, first, count, primcount);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

inline void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

inline void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

inline void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

inline void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

inline void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::FunctionObjects::current().MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::FunctionObjects::current().MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

inline void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return glbinding::FunctionObjects::current().MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

inline void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return glbinding::FunctionObjects::current().MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

inline void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

inline void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1bOES(texture, s);
}

inline void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1bvOES(texture, coords);
}

inline void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1dARB(target, s);
}

inline void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1dvARB(target, v);
}

inline void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1fARB(target, s);
}

inline void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1fvARB(target, v);
}

inline void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1hNV(target, s);
}

inline void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1hvNV(target, v);
}

inline void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1iARB(target, s);
}

inline void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1ivARB(target, v);
}

inline void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1sARB(target, s);
}

inline void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1svARB(target, v);
}

inline void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1xOES(texture, s);
}

inline void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord1xvOES(texture, coords);
}

inline void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2bOES(texture, s, t);
}

inline void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2bvOES(texture, coords);
}

inline void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2dARB(target, s, t);
}

inline void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2dvARB(target, v);
}

inline void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2fARB(target, s, t);
}

inline void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2fvARB(target, v);
}

inline void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2hNV(target, s, t);
}

inline void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2hvNV(target, v);
}

inline void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2iARB(target, s, t);
}

inline void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2ivARB(target, v);
}

inline void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2sARB(target, s, t);
}

inline void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2svARB(target, v);
}

inline void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2xOES(texture, s, t);
}

inline void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord2xvOES(texture, coords);
}

inline void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3bOES(texture, s, t, r);
}

inline void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3bvOES(texture, coords);
}

inline void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3dARB(target, s, t, r);
}

inline void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3dvARB(target, v);
}

inline void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3fARB(target, s, t, r);
}

inline void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3fvARB(target, v);
}

inline void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3hNV(target, s, t, r);
}

inline void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3hvNV(target, v);
}

inline void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3iARB(target, s, t, r);
}

inline void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3ivARB(target, v);
}

inline void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3sARB(target, s, t, r);
}

inline void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3svARB(target, v);
}

inline void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3xOES(texture, s, t, r);
}

inline void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord3xvOES(texture, coords);
}

inline void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4bOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4bvOES(texture, coords);
}

inline void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4dARB(target, s, t, r, q);
}

inline void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4dvARB(target, v);
}

inline void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4fARB(target, s, t, r, q);
}

inline void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4fvARB(target, v);
}

inline void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4hNV(target, s, t, r, q);
}

inline void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4hvNV(target, v);
}

inline void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4iARB(target, s, t, r, q);
}

inline void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4ivARB(target, v);
}

inline void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4sARB(target, s, t, r, q);
}

inline void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4svARB(target, v);
}

inline void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4xOES(texture, s, t, r, q);
}

inline void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().MultiTexCoord4xvOES(texture, coords);
}

inline void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

inline void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().MultiTexEnvfEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().MultiTexEnvfvEXT(texunit, target, pname, params);
}

inline void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().MultiTexEnviEXT(texunit, target, pname, param);
}

inline void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().MultiTexEnvivEXT(texunit, target, pname, params);
}

inline void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::FunctionObjects::current().MultiTexGendEXT(texunit, coord, pname, param);
}

inline void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().MultiTexGendvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().MultiTexGenfEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().MultiTexGenfvEXT(texunit, coord, pname, params);
}

inline void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().MultiTexGeniEXT(texunit, coord, pname, param);
}

inline void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().MultiTexGenivEXT(texunit, coord, pname, params);
}

inline void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

inline void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().MultiTexParameterIivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().MultiTexParameterIuivEXT(texunit, target, pname, params);
}

inline void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().MultiTexParameterfEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().MultiTexParameterfvEXT(texunit, target, pname, params);
}

inline void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().MultiTexParameteriEXT(texunit, target, pname, param);
}

inline void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().MultiTexParameterivEXT(texunit, target, pname, params);
}

inline void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

inline void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

inline void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::FunctionObjects::current().NamedBufferDataEXT(buffer, size, data, usage);
}

inline void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::FunctionObjects::current().NamedBufferStorageEXT(buffer, size, data, flags);
}

inline void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::FunctionObjects::current().NamedBufferSubDataEXT(buffer, offset, size, data);
}

inline void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().NamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().NamedFramebufferParameteriEXT(framebuffer, pname, param);
}

inline void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().NamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

inline void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

inline void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::FunctionObjects::current().NamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

inline void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameter4dvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameter4fvEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

inline void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

inline void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().NamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

inline void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().NamedProgramStringEXT(program, target, format, len, string);
}

inline void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().NamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().NamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().NamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

inline void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return glbinding::FunctionObjects::current().NamedStringARB(type, namelen, name, stringlen, string);
}

inline GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return glbinding::FunctionObjects::current().NewObjectBufferATI(size, pointer, usage);
}

inline void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().Normal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

inline void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Normal3fVertex3fvSUN(n, v);
}

inline void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return glbinding::FunctionObjects::current().Normal3hNV(nx, ny, nz);
}

inline void glNormal3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Normal3hvNV(v);
}

inline void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return glbinding::FunctionObjects::current().Normal3xOES(nx, ny, nz);
}

inline void glNormal3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().Normal3xvOES(coords);
}

inline void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().NormalFormatNV(type, stride);
}

inline void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().NormalPointerEXT(type, stride, count, pointer);
}

inline void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().NormalPointerListIBM(type, stride, pointer, ptrstride);
}

inline void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().NormalPointervINTEL(type, pointer);
}

inline void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::FunctionObjects::current().NormalStream3bATI(stream, nx, ny, nz);
}

inline void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().NormalStream3bvATI(stream, coords);
}

inline void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::FunctionObjects::current().NormalStream3dATI(stream, nx, ny, nz);
}

inline void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().NormalStream3dvATI(stream, coords);
}

inline void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::FunctionObjects::current().NormalStream3fATI(stream, nx, ny, nz);
}

inline void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().NormalStream3fvATI(stream, coords);
}

inline void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return glbinding::FunctionObjects::current().NormalStream3iATI(stream, nx, ny, nz);
}

inline void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().NormalStream3ivATI(stream, coords);
}

inline void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::FunctionObjects::current().NormalStream3sATI(stream, nx, ny, nz);
}

inline void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().NormalStream3svATI(stream, coords);
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().ObjectLabel(identifier, name, length, label);
}

inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::FunctionObjects::current().ObjectPtrLabel(ptr, length, label);
}

inline GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().ObjectPurgeableAPPLE(objectType, name, option));
}

inline GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().ObjectUnpurgeableAPPLE(objectType, name, option));
}

inline void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::FunctionObjects::current().OrthofOES(l, r, b, t, n, f);
}

inline void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::FunctionObjects::current().OrthoxOES(l, r, b, t, n, f);
}

inline void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PNTrianglesfATI(pname, param);
}

inline void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PNTrianglesiATI(pname, param);
}

inline void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return glbinding::FunctionObjects::current().PassTexCoordATI(dst, coord, swizzle);
}

inline void glPassThroughxOES(GLfixed token)
{
    return glbinding::FunctionObjects::current().PassThroughxOES(token);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::FunctionObjects::current().PatchParameterfv(pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().PatchParameteri(pname, value);
}

inline void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return glbinding::FunctionObjects::current().PathColorGenNV(color, genMode, colorFormat, coeffs);
}

inline void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().PathCoordsNV(path, numCoords, coordType, coords);
}

inline void glPathCoverDepthFuncNV(GLenum func)
{
    return glbinding::FunctionObjects::current().PathCoverDepthFuncNV(func);
}

inline void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glbinding::FunctionObjects::current().PathDashArrayNV(path, dashCount, dashArray);
}

inline void glPathFogGenNV(GLenum genMode)
{
    return glbinding::FunctionObjects::current().PathFogGenNV(genMode);
}

inline void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::FunctionObjects::current().PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::FunctionObjects::current().PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glbinding::FunctionObjects::current().PathParameterfNV(path, pname, value);
}

inline void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().PathParameterfvNV(path, pname, value);
}

inline void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().PathParameteriNV(path, pname, value);
}

inline void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glbinding::FunctionObjects::current().PathParameterivNV(path, pname, value);
}

inline void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glbinding::FunctionObjects::current().PathStencilDepthOffsetNV(factor, units);
}

inline void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().PathStencilFuncNV(func, ref, mask);
}

inline void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glbinding::FunctionObjects::current().PathStringNV(path, format, length, pathString);
}

inline void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::FunctionObjects::current().PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

inline void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::FunctionObjects::current().PathTexGenNV(texCoordSet, genMode, components, coeffs);
}

inline void glPauseTransformFeedback()
{
    return glbinding::FunctionObjects::current().PauseTransformFeedback();
}

inline void glPauseTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().PauseTransformFeedbackNV();
}

inline void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().PixelDataRangeNV(target, length, pointer);
}

inline void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return glbinding::FunctionObjects::current().PixelMapx(map, size, values);
}

inline void glPixelStorex(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().PixelStorex(pname, param);
}

inline void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PixelTexGenParameterfSGIS(pname, param);
}

inline void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PixelTexGenParameterfvSGIS(pname, params);
}

inline void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PixelTexGenParameteriSGIS(pname, param);
}

inline void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().PixelTexGenParameterivSGIS(pname, params);
}

inline void glPixelTexGenSGIX(GLenum mode)
{
    return glbinding::FunctionObjects::current().PixelTexGenSGIX(mode);
}

inline void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().PixelTransferxOES(pname, param);
}

inline void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PixelTransformParameterfEXT(target, pname, param);
}

inline void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PixelTransformParameterfvEXT(target, pname, params);
}

inline void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PixelTransformParameteriEXT(target, pname, param);
}

inline void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().PixelTransformParameterivEXT(target, pname, params);
}

inline void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return glbinding::FunctionObjects::current().PixelZoomxOES(xfactor, yfactor);
}

inline GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glbinding::FunctionObjects::current().PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

inline void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PointParameterfARB(pname, param);
}

inline void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PointParameterfEXT(pname, param);
}

inline void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().PointParameterfSGIS(pname, param);
}

inline void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PointParameterfvARB(pname, params);
}

inline void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PointParameterfvEXT(pname, params);
}

inline void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().PointParameterfvSGIS(pname, params);
}

inline void glPointParameteriNV(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().PointParameteriNV(pname, param);
}

inline void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().PointParameterivNV(pname, params);
}

inline void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().PointParameterxvOES(pname, params);
}

inline void glPointSizexOES(GLfixed size)
{
    return glbinding::FunctionObjects::current().PointSizexOES(size);
}

inline GLint glPollAsyncSGIX(GLuint * markerp)
{
    return glbinding::FunctionObjects::current().PollAsyncSGIX(markerp);
}

inline GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return glbinding::FunctionObjects::current().PollInstrumentsSGIX(marker_p);
}

inline void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return glbinding::FunctionObjects::current().PolygonOffsetEXT(factor, bias);
}

inline void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return glbinding::FunctionObjects::current().PolygonOffsetxOES(factor, units);
}

inline void glPopDebugGroup()
{
    return glbinding::FunctionObjects::current().PopDebugGroup();
}

inline void glPopGroupMarkerEXT()
{
    return glbinding::FunctionObjects::current().PopGroupMarkerEXT();
}

inline void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return glbinding::FunctionObjects::current().PresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

inline void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return glbinding::FunctionObjects::current().PresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

inline void glPrimitiveRestartIndexNV(GLuint index)
{
    return glbinding::FunctionObjects::current().PrimitiveRestartIndexNV(index);
}

inline void glPrimitiveRestartNV()
{
    return glbinding::FunctionObjects::current().PrimitiveRestartNV();
}

inline void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return glbinding::FunctionObjects::current().PrioritizeTexturesEXT(n, textures, priorities);
}

inline void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return glbinding::FunctionObjects::current().PrioritizeTexturesxOES(n, textures, priorities);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::FunctionObjects::current().ProgramBinary(program, binaryFormat, binary, length);
}

inline void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().ProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameter4dvARB(target, index, params);
}

inline void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameter4fvARB(target, index, params);
}

inline void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameterI4ivNV(target, index, params);
}

inline void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameterI4uivNV(target, index, params);
}

inline void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParameters4fvEXT(target, index, count, params);
}

inline void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParametersI4ivNV(target, index, count, params);
}

inline void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramEnvParametersI4uivNV(target, index, count, params);
}

inline void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameter4dvARB(target, index, params);
}

inline void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameter4fvARB(target, index, params);
}

inline void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameterI4ivNV(target, index, params);
}

inline void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameterI4uivNV(target, index, params);
}

inline void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParameters4fvEXT(target, index, count, params);
}

inline void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParametersI4ivNV(target, index, count, params);
}

inline void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramLocalParametersI4uivNV(target, index, count, params);
}

inline void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().ProgramNamedParameter4dvNV(id, len, name, v);
}

inline void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ProgramNamedParameter4fvNV(id, len, name, v);
}

inline void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().ProgramParameter4dNV(target, index, x, y, z, w);
}

inline void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().ProgramParameter4dvNV(target, index, v);
}

inline void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().ProgramParameter4fNV(target, index, x, y, z, w);
}

inline void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ProgramParameter4fvNV(target, index, v);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().ProgramParameteri(program, pname, value);
}

inline void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().ProgramParameteriARB(program, pname, value);
}

inline void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glbinding::FunctionObjects::current().ProgramParameteriEXT(program, pname, value);
}

inline void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().ProgramParameters4dvNV(target, index, count, v);
}

inline void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ProgramParameters4fvNV(target, index, count, v);
}

inline void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().ProgramStringARB(target, format, len, string);
}

inline void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return glbinding::FunctionObjects::current().ProgramSubroutineParametersuivNV(target, count, params);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1d(program, location, v0);
}

inline void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return glbinding::FunctionObjects::current().ProgramUniform1dEXT(program, location, x);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1dv(program, location, count, value);
}

inline void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1dvEXT(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1f(program, location, v0);
}

inline void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1fEXT(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1fv(program, location, count, value);
}

inline void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1fvEXT(program, location, count, value);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1i(program, location, v0);
}

inline void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().ProgramUniform1i64NV(program, location, x);
}

inline void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1i64vNV(program, location, count, value);
}

inline void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1iEXT(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1iv(program, location, count, value);
}

inline void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1ivEXT(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1ui(program, location, v0);
}

inline void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().ProgramUniform1ui64NV(program, location, x);
}

inline void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1ui64vNV(program, location, count, value);
}

inline void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().ProgramUniform1uiEXT(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1uiv(program, location, count, value);
}

inline void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform1uivEXT(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2d(program, location, v0, v1);
}

inline void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().ProgramUniform2dEXT(program, location, x, y);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2dv(program, location, count, value);
}

inline void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2dvEXT(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2f(program, location, v0, v1);
}

inline void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2fEXT(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2fv(program, location, count, value);
}

inline void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2fvEXT(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2i(program, location, v0, v1);
}

inline void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().ProgramUniform2i64NV(program, location, x, y);
}

inline void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2i64vNV(program, location, count, value);
}

inline void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2iEXT(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2iv(program, location, count, value);
}

inline void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2ivEXT(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2ui(program, location, v0, v1);
}

inline void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().ProgramUniform2ui64NV(program, location, x, y);
}

inline void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2ui64vNV(program, location, count, value);
}

inline void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().ProgramUniform2uiEXT(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2uiv(program, location, count, value);
}

inline void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform2uivEXT(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3d(program, location, v0, v1, v2);
}

inline void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().ProgramUniform3dEXT(program, location, x, y, z);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3dv(program, location, count, value);
}

inline void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3dvEXT(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3f(program, location, v0, v1, v2);
}

inline void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3fEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3fv(program, location, count, value);
}

inline void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3fvEXT(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3i(program, location, v0, v1, v2);
}

inline void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().ProgramUniform3i64NV(program, location, x, y, z);
}

inline void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3i64vNV(program, location, count, value);
}

inline void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3iEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3iv(program, location, count, value);
}

inline void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3ivEXT(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3ui(program, location, v0, v1, v2);
}

inline void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().ProgramUniform3ui64NV(program, location, x, y, z);
}

inline void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3ui64vNV(program, location, count, value);
}

inline void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3uiv(program, location, count, value);
}

inline void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform3uivEXT(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4d(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().ProgramUniform4dEXT(program, location, x, y, z, w);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4dv(program, location, count, value);
}

inline void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4dvEXT(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4f(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4fv(program, location, count, value);
}

inline void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4fvEXT(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4i(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().ProgramUniform4i64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4i64vNV(program, location, count, value);
}

inline void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4iv(program, location, count, value);
}

inline void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4ivEXT(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().ProgramUniform4ui64NV(program, location, x, y, z, w);
}

inline void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4ui64vNV(program, location, count, value);
}

inline void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4uiv(program, location, count, value);
}

inline void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().ProgramUniform4uivEXT(program, location, count, value);
}

inline void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().ProgramUniformHandleui64ARB(program, location, value);
}

inline void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().ProgramUniformHandleui64NV(program, location, value);
}

inline void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::FunctionObjects::current().ProgramUniformHandleui64vARB(program, location, count, values);
}

inline void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::FunctionObjects::current().ProgramUniformHandleui64vNV(program, location, count, values);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

inline void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return glbinding::FunctionObjects::current().ProgramUniformui64NV(program, location, value);
}

inline void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().ProgramUniformui64vNV(program, location, count, value);
}

inline void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return glbinding::FunctionObjects::current().ProgramVertexLimitNV(target, limit);
}

inline void glProvokingVertexEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().ProvokingVertexEXT(mode);
}

inline void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::FunctionObjects::current().PushClientAttribDefaultEXT(mask);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::FunctionObjects::current().PushDebugGroup(source, id, length, message);
}

inline void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::FunctionObjects::current().PushGroupMarkerEXT(length, marker);
}

inline GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl33ext::GLbitfield>(glbinding::FunctionObjects::current().QueryMatrixxOES(mantissa, exponent));
}

inline void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return glbinding::FunctionObjects::current().QueryObjectParameteruiAMD(target, id, pname, param);
}

inline void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return glbinding::FunctionObjects::current().RasterPos2xOES(x, y);
}

inline void glRasterPos2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().RasterPos2xvOES(coords);
}

inline void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().RasterPos3xOES(x, y, z);
}

inline void glRasterPos3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().RasterPos3xvOES(coords);
}

inline void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return glbinding::FunctionObjects::current().RasterPos4xOES(x, y, z, w);
}

inline void glRasterPos4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().RasterPos4xvOES(coords);
}

inline void glReadInstrumentsSGIX(GLint marker)
{
    return glbinding::FunctionObjects::current().ReadInstrumentsSGIX(marker);
}

inline void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::FunctionObjects::current().ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

inline void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return glbinding::FunctionObjects::current().RectxOES(x1, y1, x2, y2);
}

inline void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return glbinding::FunctionObjects::current().RectxvOES(v1, v2);
}

inline void glReferencePlaneSGIX(const GLdouble * equation)
{
    return glbinding::FunctionObjects::current().ReferencePlaneSGIX(equation);
}

inline void glReleaseShaderCompiler()
{
    return glbinding::FunctionObjects::current().ReleaseShaderCompiler();
}

inline void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorageEXT(target, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

inline void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return glbinding::FunctionObjects::current().ReplacementCodePointerSUN(type, stride, pointer);
}

inline void glReplacementCodeubSUN(GLubyte code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeubSUN(code);
}

inline void glReplacementCodeubvSUN(const GLubyte * code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeubvSUN(code);
}

inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

inline void glReplacementCodeuiSUN(GLuint code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiSUN(code);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

inline void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

inline void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuiVertex3fvSUN(rc, v);
}

inline void glReplacementCodeuivSUN(const GLuint * code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeuivSUN(code);
}

inline void glReplacementCodeusSUN(GLushort code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeusSUN(code);
}

inline void glReplacementCodeusvSUN(const GLushort * code)
{
    return glbinding::FunctionObjects::current().ReplacementCodeusvSUN(code);
}

inline void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::FunctionObjects::current().RequestResidentProgramsNV(n, programs);
}

inline void glResetHistogram(GLenum target)
{
    return glbinding::FunctionObjects::current().ResetHistogram(target);
}

inline void glResetHistogramEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().ResetHistogramEXT(target);
}

inline void glResetMinmax(GLenum target)
{
    return glbinding::FunctionObjects::current().ResetMinmax(target);
}

inline void glResetMinmaxEXT(GLenum target)
{
    return glbinding::FunctionObjects::current().ResetMinmaxEXT(target);
}

inline void glResizeBuffersMESA()
{
    return glbinding::FunctionObjects::current().ResizeBuffersMESA();
}

inline void glResumeTransformFeedback()
{
    return glbinding::FunctionObjects::current().ResumeTransformFeedback();
}

inline void glResumeTransformFeedbackNV()
{
    return glbinding::FunctionObjects::current().ResumeTransformFeedbackNV();
}

inline void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().RotatexOES(angle, x, y, z);
}

inline void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleCoverageARB(value, invert);
}

inline void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleCoverageOES(value, invert);
}

inline void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return glbinding::FunctionObjects::current().SampleMapATI(dst, interp, swizzle);
}

inline void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleMaskEXT(value, invert);
}

inline void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return glbinding::FunctionObjects::current().SampleMaskIndexedNV(index, mask);
}

inline void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return glbinding::FunctionObjects::current().SampleMaskSGIS(value, invert);
}

inline void glSamplePatternEXT(GLenum pattern)
{
    return glbinding::FunctionObjects::current().SamplePatternEXT(pattern);
}

inline void glSamplePatternSGIS(GLenum pattern)
{
    return glbinding::FunctionObjects::current().SamplePatternSGIS(pattern);
}

inline void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().ScalexOES(x, y, z);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::FunctionObjects::current().ScissorArrayv(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().ScissorIndexed(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().ScissorIndexedv(index, v);
}

inline void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3bEXT(red, green, blue);
}

inline void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3bvEXT(v);
}

inline void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3dEXT(red, green, blue);
}

inline void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3dvEXT(v);
}

inline void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3fEXT(red, green, blue);
}

inline void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3fvEXT(v);
}

inline void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3hNV(red, green, blue);
}

inline void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3hvNV(v);
}

inline void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3iEXT(red, green, blue);
}

inline void glSecondaryColor3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ivEXT(v);
}

inline void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3sEXT(red, green, blue);
}

inline void glSecondaryColor3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3svEXT(v);
}

inline void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ubEXT(red, green, blue);
}

inline void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3ubvEXT(v);
}

inline void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3uiEXT(red, green, blue);
}

inline void glSecondaryColor3uivEXT(const GLuint * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3uivEXT(v);
}

inline void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::FunctionObjects::current().SecondaryColor3usEXT(red, green, blue);
}

inline void glSecondaryColor3usvEXT(const GLushort * v)
{
    return glbinding::FunctionObjects::current().SecondaryColor3usvEXT(v);
}

inline void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().SecondaryColorFormatNV(size, type, stride);
}

inline void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().SecondaryColorPointerEXT(size, type, stride, pointer);
}

inline void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glbinding::FunctionObjects::current().SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

inline void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::FunctionObjects::current().SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

inline void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::FunctionObjects::current().SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

inline void glSetFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().SetFenceAPPLE(fence);
}

inline void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glbinding::FunctionObjects::current().SetFenceNV(fence, condition);
}

inline void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().SetFragmentShaderConstantATI(dst, value);
}

inline void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::FunctionObjects::current().SetInvariantEXT(id, type, addr);
}

inline void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::FunctionObjects::current().SetLocalConstantEXT(id, type, addr);
}

inline void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return glbinding::FunctionObjects::current().SetMultisamplefvAMD(pname, index, val);
}

inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::FunctionObjects::current().ShaderBinary(count, shaders, binaryformat, binary, length);
}

inline void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return glbinding::FunctionObjects::current().ShaderOp1EXT(op, res, arg1);
}

inline void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return glbinding::FunctionObjects::current().ShaderOp2EXT(op, res, arg1, arg2);
}

inline void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return glbinding::FunctionObjects::current().ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

inline void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return glbinding::FunctionObjects::current().ShaderSourceARB(shaderObj, count, string, length);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::FunctionObjects::current().ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

inline void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::FunctionObjects::current().SharpenTexFuncSGIS(target, n, points);
}

inline void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().SpriteParameterfSGIX(pname, param);
}

inline void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().SpriteParameterfvSGIX(pname, params);
}

inline void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().SpriteParameteriSGIX(pname, param);
}

inline void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().SpriteParameterivSGIX(pname, params);
}

inline void glStartInstrumentsSGIX()
{
    return glbinding::FunctionObjects::current().StartInstrumentsSGIX();
}

inline void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return glbinding::FunctionObjects::current().StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

inline void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

inline void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilFillPathNV(path, fillMode, mask);
}

inline void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

inline void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::FunctionObjects::current().StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

inline void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return glbinding::FunctionObjects::current().StencilOpValueAMD(face, value);
}

inline void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

inline void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glbinding::FunctionObjects::current().StencilStrokePathNV(path, reference, mask);
}

inline void glStopInstrumentsSGIX(GLint marker)
{
    return glbinding::FunctionObjects::current().StopInstrumentsSGIX(marker);
}

inline void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return glbinding::FunctionObjects::current().StringMarkerGREMEDY(len, string);
}

inline void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::FunctionObjects::current().SwizzleEXT(res, in, outX, outY, outZ, outW);
}

inline void glSyncTextureINTEL(GLuint texture)
{
    return glbinding::FunctionObjects::current().SyncTextureINTEL(texture);
}

inline void glTagSampleBufferSGIX()
{
    return glbinding::FunctionObjects::current().TagSampleBufferSGIX();
}

inline void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return glbinding::FunctionObjects::current().Tangent3bEXT(tx, ty, tz);
}

inline void glTangent3bvEXT(const GLbyte * v)
{
    return glbinding::FunctionObjects::current().Tangent3bvEXT(v);
}

inline void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return glbinding::FunctionObjects::current().Tangent3dEXT(tx, ty, tz);
}

inline void glTangent3dvEXT(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().Tangent3dvEXT(v);
}

inline void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return glbinding::FunctionObjects::current().Tangent3fEXT(tx, ty, tz);
}

inline void glTangent3fvEXT(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().Tangent3fvEXT(v);
}

inline void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return glbinding::FunctionObjects::current().Tangent3iEXT(tx, ty, tz);
}

inline void glTangent3ivEXT(const GLint * v)
{
    return glbinding::FunctionObjects::current().Tangent3ivEXT(v);
}

inline void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return glbinding::FunctionObjects::current().Tangent3sEXT(tx, ty, tz);
}

inline void glTangent3svEXT(const GLshort * v)
{
    return glbinding::FunctionObjects::current().Tangent3svEXT(v);
}

inline void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().TangentPointerEXT(type, stride, pointer);
}

inline void glTbufferMask3DFX(GLuint mask)
{
    return glbinding::FunctionObjects::current().TbufferMask3DFX(mask);
}

inline void glTessellationFactorAMD(GLfloat factor)
{
    return glbinding::FunctionObjects::current().TessellationFactorAMD(factor);
}

inline void glTessellationModeAMD(GLenum mode)
{
    return glbinding::FunctionObjects::current().TessellationModeAMD(mode);
}

inline GLboolean glTestFenceAPPLE(GLuint fence)
{
    return glbinding::FunctionObjects::current().TestFenceAPPLE(fence);
}

inline GLboolean glTestFenceNV(GLuint fence)
{
    return glbinding::FunctionObjects::current().TestFenceNV(fence);
}

inline GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return glbinding::FunctionObjects::current().TestObjectAPPLE(object, name);
}

inline void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().TexBufferARB(target, internalformat, buffer);
}

inline void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().TexBufferEXT(target, internalformat, buffer);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().TexBufferRange(target, internalformat, buffer, offset, size);
}

inline void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return glbinding::FunctionObjects::current().TexBumpParameterfvATI(pname, param);
}

inline void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return glbinding::FunctionObjects::current().TexBumpParameterivATI(pname, param);
}

inline void glTexCoord1bOES(GLbyte s)
{
    return glbinding::FunctionObjects::current().TexCoord1bOES(s);
}

inline void glTexCoord1bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().TexCoord1bvOES(coords);
}

inline void glTexCoord1hNV(GLhalfNV s)
{
    return glbinding::FunctionObjects::current().TexCoord1hNV(s);
}

inline void glTexCoord1hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().TexCoord1hvNV(v);
}

inline void glTexCoord1xOES(GLfixed s)
{
    return glbinding::FunctionObjects::current().TexCoord1xOES(s);
}

inline void glTexCoord1xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().TexCoord1xvOES(coords);
}

inline void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return glbinding::FunctionObjects::current().TexCoord2bOES(s, t);
}

inline void glTexCoord2bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().TexCoord2bvOES(coords);
}

inline void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

inline void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().TexCoord2fVertex3fSUN(s, t, x, y, z);
}

inline void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord2fVertex3fvSUN(tc, v);
}

inline void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return glbinding::FunctionObjects::current().TexCoord2hNV(s, t);
}

inline void glTexCoord2hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().TexCoord2hvNV(v);
}

inline void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return glbinding::FunctionObjects::current().TexCoord2xOES(s, t);
}

inline void glTexCoord2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().TexCoord2xvOES(coords);
}

inline void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::FunctionObjects::current().TexCoord3bOES(s, t, r);
}

inline void glTexCoord3bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().TexCoord3bvOES(coords);
}

inline void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::FunctionObjects::current().TexCoord3hNV(s, t, r);
}

inline void glTexCoord3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().TexCoord3hvNV(v);
}

inline void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::FunctionObjects::current().TexCoord3xOES(s, t, r);
}

inline void glTexCoord3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().TexCoord3xvOES(coords);
}

inline void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::FunctionObjects::current().TexCoord4bOES(s, t, r, q);
}

inline void glTexCoord4bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().TexCoord4bvOES(coords);
}

inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().TexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

inline void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

inline void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().TexCoord4fVertex4fvSUN(tc, v);
}

inline void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::FunctionObjects::current().TexCoord4hNV(s, t, r, q);
}

inline void glTexCoord4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().TexCoord4hvNV(v);
}

inline void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::FunctionObjects::current().TexCoord4xOES(s, t, r, q);
}

inline void glTexCoord4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().TexCoord4xvOES(coords);
}

inline void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().TexCoordFormatNV(size, type, stride);
}

inline void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().TexCoordPointerEXT(size, type, stride, count, pointer);
}

inline void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().TexCoordPointervINTEL(size, type, pointer);
}

inline void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().TexEnvxOES(target, pname, param);
}

inline void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().TexEnvxvOES(target, pname, params);
}

inline void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().TexFilterFuncSGIS(target, filter, n, weights);
}

inline void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().TexGenxOES(coord, pname, param);
}

inline void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().TexGenxvOES(coord, pname, params);
}

inline void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

inline void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::FunctionObjects::current().TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TexParameterIivEXT(target, pname, params);
}

inline void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().TexParameterIuivEXT(target, pname, params);
}

inline void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::FunctionObjects::current().TexParameterxOES(target, pname, param);
}

inline void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::FunctionObjects::current().TexParameterxvOES(target, pname, params);
}

inline void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().TexRenderbufferNV(target, renderbuffer);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::FunctionObjects::current().TexStorage1D(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().TexStorage2D(target, levels, internalformat, width, height);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().TexStorage3D(target, levels, internalformat, width, height, depth);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::FunctionObjects::current().TexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

inline void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

inline void glTextureBarrierNV()
{
    return glbinding::FunctionObjects::current().TextureBarrierNV();
}

inline void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::FunctionObjects::current().TextureBufferEXT(texture, target, internalformat, buffer);
}

inline void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::FunctionObjects::current().TextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

inline void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::FunctionObjects::current().TextureColorMaskSGIS(red, green, blue, alpha);
}

inline void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

inline void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::FunctionObjects::current().TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureLightEXT(GLenum pname)
{
    return glbinding::FunctionObjects::current().TextureLightEXT(pname);
}

inline void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::FunctionObjects::current().TextureMaterialEXT(face, mode);
}

inline void glTextureNormalEXT(GLenum mode)
{
    return glbinding::FunctionObjects::current().TextureNormalEXT(mode);
}

inline void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::FunctionObjects::current().TexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

inline void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TextureParameterIivEXT(texture, target, pname, params);
}

inline void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::FunctionObjects::current().TextureParameterIuivEXT(texture, target, pname, params);
}

inline void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().TextureParameterfEXT(texture, target, pname, param);
}

inline void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().TextureParameterfvEXT(texture, target, pname, params);
}

inline void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().TextureParameteriEXT(texture, target, pname, param);
}

inline void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().TextureParameterivEXT(texture, target, pname, params);
}

inline void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().TextureRangeAPPLE(target, length, pointer);
}

inline void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return glbinding::FunctionObjects::current().TextureRenderbufferEXT(texture, target, renderbuffer);
}

inline void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::FunctionObjects::current().TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

inline void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::FunctionObjects::current().TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

inline void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::FunctionObjects::current().TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

inline void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::FunctionObjects::current().TextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::FunctionObjects::current().TextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

inline void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::FunctionObjects::current().TextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::FunctionObjects::current().TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return glbinding::FunctionObjects::current().TrackMatrixNV(target, address, matrix, transform);
}

inline void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().TransformFeedbackAttribsNV(count, attribs, bufferMode);
}

inline void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().TransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

inline void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

inline void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return glbinding::FunctionObjects::current().TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

inline void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::FunctionObjects::current().TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

inline void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().TranslatexOES(x, y, z);
}

inline void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::FunctionObjects::current().Uniform1d(location, x);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform1dv(location, count, value);
}

inline void glUniform1fARB(GLint location, GLfloat v0)
{
    return glbinding::FunctionObjects::current().Uniform1fARB(location, v0);
}

inline void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform1fvARB(location, count, value);
}

inline void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().Uniform1i64NV(location, x);
}

inline void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform1i64vNV(location, count, value);
}

inline void glUniform1iARB(GLint location, GLint v0)
{
    return glbinding::FunctionObjects::current().Uniform1iARB(location, v0);
}

inline void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform1ivARB(location, count, value);
}

inline void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().Uniform1ui64NV(location, x);
}

inline void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform1ui64vNV(location, count, value);
}

inline void glUniform1uiEXT(GLint location, GLuint v0)
{
    return glbinding::FunctionObjects::current().Uniform1uiEXT(location, v0);
}

inline void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform1uivEXT(location, count, value);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().Uniform2d(location, x, y);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform2dv(location, count, value);
}

inline void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::FunctionObjects::current().Uniform2fARB(location, v0, v1);
}

inline void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform2fvARB(location, count, value);
}

inline void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().Uniform2i64NV(location, x, y);
}

inline void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform2i64vNV(location, count, value);
}

inline void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return glbinding::FunctionObjects::current().Uniform2iARB(location, v0, v1);
}

inline void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform2ivARB(location, count, value);
}

inline void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().Uniform2ui64NV(location, x, y);
}

inline void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform2ui64vNV(location, count, value);
}

inline void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::FunctionObjects::current().Uniform2uiEXT(location, v0, v1);
}

inline void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform2uivEXT(location, count, value);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().Uniform3d(location, x, y, z);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform3dv(location, count, value);
}

inline void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::FunctionObjects::current().Uniform3fARB(location, v0, v1, v2);
}

inline void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform3fvARB(location, count, value);
}

inline void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().Uniform3i64NV(location, x, y, z);
}

inline void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform3i64vNV(location, count, value);
}

inline void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::FunctionObjects::current().Uniform3iARB(location, v0, v1, v2);
}

inline void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform3ivARB(location, count, value);
}

inline void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().Uniform3ui64NV(location, x, y, z);
}

inline void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform3ui64vNV(location, count, value);
}

inline void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::FunctionObjects::current().Uniform3uiEXT(location, v0, v1, v2);
}

inline void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform3uivEXT(location, count, value);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().Uniform4d(location, x, y, z, w);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().Uniform4dv(location, count, value);
}

inline void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::FunctionObjects::current().Uniform4fARB(location, v0, v1, v2, v3);
}

inline void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().Uniform4fvARB(location, count, value);
}

inline void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().Uniform4i64NV(location, x, y, z, w);
}

inline void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform4i64vNV(location, count, value);
}

inline void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::FunctionObjects::current().Uniform4iARB(location, v0, v1, v2, v3);
}

inline void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::FunctionObjects::current().Uniform4ivARB(location, count, value);
}

inline void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().Uniform4ui64NV(location, x, y, z, w);
}

inline void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniform4ui64vNV(location, count, value);
}

inline void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::FunctionObjects::current().Uniform4uiEXT(location, v0, v1, v2, v3);
}

inline void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::FunctionObjects::current().Uniform4uivEXT(location, count, value);
}

inline void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return glbinding::FunctionObjects::current().UniformBufferEXT(program, location, buffer);
}

inline void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().UniformHandleui64ARB(location, value);
}

inline void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glbinding::FunctionObjects::current().UniformHandleui64NV(location, value);
}

inline void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::FunctionObjects::current().UniformHandleui64vARB(location, count, value);
}

inline void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::FunctionObjects::current().UniformHandleui64vNV(location, count, value);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2dv(location, count, transpose, value);
}

inline void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2fvARB(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x3dv(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix2x4dv(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3dv(location, count, transpose, value);
}

inline void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3fvARB(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x2dv(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix3x4dv(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4dv(location, count, transpose, value);
}

inline void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4fvARB(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x2dv(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::FunctionObjects::current().UniformMatrix4x3dv(location, count, transpose, value);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::FunctionObjects::current().UniformSubroutinesuiv(shadertype, count, indices);
}

inline void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return glbinding::FunctionObjects::current().Uniformui64NV(location, value);
}

inline void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::FunctionObjects::current().Uniformui64vNV(location, count, value);
}

inline void glUnlockArraysEXT()
{
    return glbinding::FunctionObjects::current().UnlockArraysEXT();
}

inline GLboolean glUnmapBufferARB(GLenum target)
{
    return glbinding::FunctionObjects::current().UnmapBufferARB(target);
}

inline GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return glbinding::FunctionObjects::current().UnmapNamedBufferEXT(buffer);
}

inline void glUnmapObjectBufferATI(GLuint buffer)
{
    return glbinding::FunctionObjects::current().UnmapObjectBufferATI(buffer);
}

inline void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return glbinding::FunctionObjects::current().UnmapTexture2DINTEL(texture, level);
}

inline void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return glbinding::FunctionObjects::current().UpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

inline void glUseProgramObjectARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().UseProgramObjectARB(programObj);
}

inline void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::FunctionObjects::current().UseProgramStages(pipeline, stages, program);
}

inline void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return glbinding::FunctionObjects::current().UseShaderProgramEXT(type, program);
}

inline void glVDPAUFiniNV()
{
    return glbinding::FunctionObjects::current().VDPAUFiniNV();
}

inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::FunctionObjects::current().VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

inline void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return glbinding::FunctionObjects::current().VDPAUInitNV(vdpDevice, getProcAddress);
}

inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::FunctionObjects::current().VDPAUIsSurfaceNV(surface);
}

inline void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::FunctionObjects::current().VDPAUMapSurfacesNV(numSurfaces, surfaces);
}

inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::FunctionObjects::current().VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::FunctionObjects::current().VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return glbinding::FunctionObjects::current().VDPAUSurfaceAccessNV(surface, access);
}

inline void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::FunctionObjects::current().VDPAUUnmapSurfacesNV(numSurface, surfaces);
}

inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::FunctionObjects::current().VDPAUUnregisterSurfaceNV(surface);
}

inline void glValidateProgramARB(GLhandleARB programObj)
{
    return glbinding::FunctionObjects::current().ValidateProgramARB(programObj);
}

inline void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::FunctionObjects::current().ValidateProgramPipeline(pipeline);
}

inline void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().VariantArrayObjectATI(id, type, stride, buffer, offset);
}

inline void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return glbinding::FunctionObjects::current().VariantPointerEXT(id, type, stride, addr);
}

inline void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return glbinding::FunctionObjects::current().VariantbvEXT(id, addr);
}

inline void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return glbinding::FunctionObjects::current().VariantdvEXT(id, addr);
}

inline void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return glbinding::FunctionObjects::current().VariantfvEXT(id, addr);
}

inline void glVariantivEXT(GLuint id, const GLint * addr)
{
    return glbinding::FunctionObjects::current().VariantivEXT(id, addr);
}

inline void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return glbinding::FunctionObjects::current().VariantsvEXT(id, addr);
}

inline void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return glbinding::FunctionObjects::current().VariantubvEXT(id, addr);
}

inline void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return glbinding::FunctionObjects::current().VariantuivEXT(id, addr);
}

inline void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return glbinding::FunctionObjects::current().VariantusvEXT(id, addr);
}

inline void glVertex2bOES(GLbyte x)
{
    return glbinding::FunctionObjects::current().Vertex2bOES(x);
}

inline void glVertex2bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().Vertex2bvOES(coords);
}

inline void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return glbinding::FunctionObjects::current().Vertex2hNV(x, y);
}

inline void glVertex2hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Vertex2hvNV(v);
}

inline void glVertex2xOES(GLfixed x)
{
    return glbinding::FunctionObjects::current().Vertex2xOES(x);
}

inline void glVertex2xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().Vertex2xvOES(coords);
}

inline void glVertex3bOES(GLbyte x, GLbyte y)
{
    return glbinding::FunctionObjects::current().Vertex3bOES(x, y);
}

inline void glVertex3bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().Vertex3bvOES(coords);
}

inline void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::FunctionObjects::current().Vertex3hNV(x, y, z);
}

inline void glVertex3hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Vertex3hvNV(v);
}

inline void glVertex3xOES(GLfixed x, GLfixed y)
{
    return glbinding::FunctionObjects::current().Vertex3xOES(x, y);
}

inline void glVertex3xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().Vertex3xvOES(coords);
}

inline void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return glbinding::FunctionObjects::current().Vertex4bOES(x, y, z);
}

inline void glVertex4bvOES(const GLbyte * coords)
{
    return glbinding::FunctionObjects::current().Vertex4bvOES(coords);
}

inline void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::FunctionObjects::current().Vertex4hNV(x, y, z, w);
}

inline void glVertex4hvNV(const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().Vertex4hvNV(v);
}

inline void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::FunctionObjects::current().Vertex4xOES(x, y, z);
}

inline void glVertex4xvOES(const GLfixed * coords)
{
    return glbinding::FunctionObjects::current().Vertex4xvOES(coords);
}

inline void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::FunctionObjects::current().VertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

inline void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

inline void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().VertexArrayParameteriAPPLE(pname, param);
}

inline void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::FunctionObjects::current().VertexArrayRangeAPPLE(length, pointer);
}

inline void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexArrayRangeNV(length, pointer);
}

inline void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

inline void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

inline void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

inline void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::FunctionObjects::current().VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1dARB(index, x);
}

inline void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1dNV(index, x);
}

inline void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1dvARB(index, v);
}

inline void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1dvNV(index, v);
}

inline void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1fARB(index, x);
}

inline void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1fNV(index, x);
}

inline void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1fvARB(index, v);
}

inline void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1fvNV(index, v);
}

inline void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1hNV(index, x);
}

inline void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1hvNV(index, v);
}

inline void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1sARB(index, x);
}

inline void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return glbinding::FunctionObjects::current().VertexAttrib1sNV(index, x);
}

inline void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1svARB(index, v);
}

inline void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib1svNV(index, v);
}

inline void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2dARB(index, x, y);
}

inline void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2dNV(index, x, y);
}

inline void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2dvARB(index, v);
}

inline void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2dvNV(index, v);
}

inline void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2fARB(index, x, y);
}

inline void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2fNV(index, x, y);
}

inline void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2fvARB(index, v);
}

inline void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2fvNV(index, v);
}

inline void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2hNV(index, x, y);
}

inline void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2hvNV(index, v);
}

inline void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2sARB(index, x, y);
}

inline void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().VertexAttrib2sNV(index, x, y);
}

inline void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2svARB(index, v);
}

inline void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib2svNV(index, v);
}

inline void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3dARB(index, x, y, z);
}

inline void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3dNV(index, x, y, z);
}

inline void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3dvARB(index, v);
}

inline void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3dvNV(index, v);
}

inline void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3fARB(index, x, y, z);
}

inline void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3fNV(index, x, y, z);
}

inline void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3fvARB(index, v);
}

inline void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3fvNV(index, v);
}

inline void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3hNV(index, x, y, z);
}

inline void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3hvNV(index, v);
}

inline void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3sARB(index, x, y, z);
}

inline void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().VertexAttrib3sNV(index, x, y, z);
}

inline void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3svARB(index, v);
}

inline void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib3svNV(index, v);
}

inline void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NbvARB(index, v);
}

inline void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NivARB(index, v);
}

inline void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NsvARB(index, v);
}

inline void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NubARB(index, x, y, z, w);
}

inline void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NubvARB(index, v);
}

inline void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NuivARB(index, v);
}

inline void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4NusvARB(index, v);
}

inline void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4bvARB(index, v);
}

inline void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4dARB(index, x, y, z, w);
}

inline void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4dNV(index, x, y, z, w);
}

inline void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4dvARB(index, v);
}

inline void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4dvNV(index, v);
}

inline void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4fARB(index, x, y, z, w);
}

inline void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4fNV(index, x, y, z, w);
}

inline void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4fvARB(index, v);
}

inline void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4fvNV(index, v);
}

inline void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4hNV(index, x, y, z, w);
}

inline void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4hvNV(index, v);
}

inline void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4ivARB(index, v);
}

inline void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4sARB(index, x, y, z, w);
}

inline void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4sNV(index, x, y, z, w);
}

inline void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4svARB(index, v);
}

inline void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4svNV(index, v);
}

inline void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::FunctionObjects::current().VertexAttrib4ubNV(index, x, y, z, w);
}

inline void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4ubvARB(index, v);
}

inline void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4ubvNV(index, v);
}

inline void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4uivARB(index, v);
}

inline void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttrib4usvARB(index, v);
}

inline void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::FunctionObjects::current().VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::FunctionObjects::current().VertexAttribBinding(attribindex, bindingindex);
}

inline void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return glbinding::FunctionObjects::current().VertexAttribDivisorARB(index, divisor);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return glbinding::FunctionObjects::current().VertexAttribFormatNV(index, size, type, normalized, stride);
}

inline void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return glbinding::FunctionObjects::current().VertexAttribI1iEXT(index, x);
}

inline void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI1ivEXT(index, v);
}

inline void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return glbinding::FunctionObjects::current().VertexAttribI1uiEXT(index, x);
}

inline void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI1uivEXT(index, v);
}

inline void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().VertexAttribI2iEXT(index, x, y);
}

inline void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI2ivEXT(index, v);
}

inline void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return glbinding::FunctionObjects::current().VertexAttribI2uiEXT(index, x, y);
}

inline void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI2uivEXT(index, v);
}

inline void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().VertexAttribI3iEXT(index, x, y, z);
}

inline void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI3ivEXT(index, v);
}

inline void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::FunctionObjects::current().VertexAttribI3uiEXT(index, x, y, z);
}

inline void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI3uivEXT(index, v);
}

inline void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4bvEXT(index, v);
}

inline void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().VertexAttribI4iEXT(index, x, y, z, w);
}

inline void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4ivEXT(index, v);
}

inline void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4svEXT(index, v);
}

inline void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4ubvEXT(index, v);
}

inline void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::FunctionObjects::current().VertexAttribI4uiEXT(index, x, y, z, w);
}

inline void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4uivEXT(index, v);
}

inline void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribI4usvEXT(index, v);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().VertexAttribIFormatNV(index, size, type, stride);
}

inline void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribIPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexAttribL1d(index, x);
}

inline void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexAttribL1dEXT(index, x);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL1dv(index, v);
}

inline void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL1dvEXT(index, v);
}

inline void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return glbinding::FunctionObjects::current().VertexAttribL1i64NV(index, x);
}

inline void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL1i64vNV(index, v);
}

inline void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().VertexAttribL1ui64ARB(index, x);
}

inline void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return glbinding::FunctionObjects::current().VertexAttribL1ui64NV(index, x);
}

inline void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL1ui64vARB(index, v);
}

inline void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL1ui64vNV(index, v);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexAttribL2d(index, x, y);
}

inline void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexAttribL2dEXT(index, x, y);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL2dv(index, v);
}

inline void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL2dvEXT(index, v);
}

inline void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return glbinding::FunctionObjects::current().VertexAttribL2i64NV(index, x, y);
}

inline void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL2i64vNV(index, v);
}

inline void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::FunctionObjects::current().VertexAttribL2ui64NV(index, x, y);
}

inline void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL2ui64vNV(index, v);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexAttribL3d(index, x, y, z);
}

inline void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexAttribL3dEXT(index, x, y, z);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL3dv(index, v);
}

inline void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL3dvEXT(index, v);
}

inline void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::FunctionObjects::current().VertexAttribL3i64NV(index, x, y, z);
}

inline void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL3i64vNV(index, v);
}

inline void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::FunctionObjects::current().VertexAttribL3ui64NV(index, x, y, z);
}

inline void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL3ui64vNV(index, v);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexAttribL4d(index, x, y, z, w);
}

inline void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexAttribL4dEXT(index, x, y, z, w);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL4dv(index, v);
}

inline void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL4dvEXT(index, v);
}

inline void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::FunctionObjects::current().VertexAttribL4i64NV(index, x, y, z, w);
}

inline void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL4i64vNV(index, v);
}

inline void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::FunctionObjects::current().VertexAttribL4ui64NV(index, x, y, z, w);
}

inline void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::FunctionObjects::current().VertexAttribL4ui64vNV(index, v);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::FunctionObjects::current().VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().VertexAttribLFormatNV(index, size, type, stride);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribLPointer(index, size, type, stride, pointer);
}

inline void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribLPointerEXT(index, size, type, stride, pointer);
}

inline void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().VertexAttribParameteriAMD(index, pname, param);
}

inline void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

inline void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexAttribPointerNV(index, fsize, type, stride, pointer);
}

inline void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs1dvNV(index, count, v);
}

inline void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs1fvNV(index, count, v);
}

inline void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs1hvNV(index, n, v);
}

inline void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs1svNV(index, count, v);
}

inline void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs2dvNV(index, count, v);
}

inline void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs2fvNV(index, count, v);
}

inline void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs2hvNV(index, n, v);
}

inline void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs2svNV(index, count, v);
}

inline void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs3dvNV(index, count, v);
}

inline void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs3fvNV(index, count, v);
}

inline void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs3hvNV(index, n, v);
}

inline void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs3svNV(index, count, v);
}

inline void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs4dvNV(index, count, v);
}

inline void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs4fvNV(index, count, v);
}

inline void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs4hvNV(index, n, v);
}

inline void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs4svNV(index, count, v);
}

inline void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return glbinding::FunctionObjects::current().VertexAttribs4ubvNV(index, count, v);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::FunctionObjects::current().VertexBindingDivisor(bindingindex, divisor);
}

inline void glVertexBlendARB(GLint count)
{
    return glbinding::FunctionObjects::current().VertexBlendARB(count);
}

inline void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return glbinding::FunctionObjects::current().VertexBlendEnvfATI(pname, param);
}

inline void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return glbinding::FunctionObjects::current().VertexBlendEnviATI(pname, param);
}

inline void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::FunctionObjects::current().VertexFormatNV(size, type, stride);
}

inline void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexPointerEXT(size, type, stride, count, pointer);
}

inline void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::FunctionObjects::current().VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

inline void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::FunctionObjects::current().VertexPointervINTEL(size, type, pointer);
}

inline void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return glbinding::FunctionObjects::current().VertexStream1dATI(stream, x);
}

inline void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().VertexStream1dvATI(stream, coords);
}

inline void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return glbinding::FunctionObjects::current().VertexStream1fATI(stream, x);
}

inline void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().VertexStream1fvATI(stream, coords);
}

inline void glVertexStream1iATI(GLenum stream, GLint x)
{
    return glbinding::FunctionObjects::current().VertexStream1iATI(stream, x);
}

inline void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().VertexStream1ivATI(stream, coords);
}

inline void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return glbinding::FunctionObjects::current().VertexStream1sATI(stream, x);
}

inline void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().VertexStream1svATI(stream, coords);
}

inline void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().VertexStream2dATI(stream, x, y);
}

inline void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().VertexStream2dvATI(stream, coords);
}

inline void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().VertexStream2fATI(stream, x, y);
}

inline void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().VertexStream2fvATI(stream, coords);
}

inline void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().VertexStream2iATI(stream, x, y);
}

inline void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().VertexStream2ivATI(stream, coords);
}

inline void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().VertexStream2sATI(stream, x, y);
}

inline void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().VertexStream2svATI(stream, coords);
}

inline void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().VertexStream3dATI(stream, x, y, z);
}

inline void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().VertexStream3dvATI(stream, coords);
}

inline void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().VertexStream3fATI(stream, x, y, z);
}

inline void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().VertexStream3fvATI(stream, coords);
}

inline void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().VertexStream3iATI(stream, x, y, z);
}

inline void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().VertexStream3ivATI(stream, coords);
}

inline void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().VertexStream3sATI(stream, x, y, z);
}

inline void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().VertexStream3svATI(stream, coords);
}

inline void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().VertexStream4dATI(stream, x, y, z, w);
}

inline void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::FunctionObjects::current().VertexStream4dvATI(stream, coords);
}

inline void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().VertexStream4fATI(stream, x, y, z, w);
}

inline void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::FunctionObjects::current().VertexStream4fvATI(stream, coords);
}

inline void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().VertexStream4iATI(stream, x, y, z, w);
}

inline void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::FunctionObjects::current().VertexStream4ivATI(stream, coords);
}

inline void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().VertexStream4sATI(stream, x, y, z, w);
}

inline void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::FunctionObjects::current().VertexStream4svATI(stream, coords);
}

inline void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().VertexWeightPointerEXT(size, type, stride, pointer);
}

inline void glVertexWeightfEXT(GLfloat weight)
{
    return glbinding::FunctionObjects::current().VertexWeightfEXT(weight);
}

inline void glVertexWeightfvEXT(const GLfloat * weight)
{
    return glbinding::FunctionObjects::current().VertexWeightfvEXT(weight);
}

inline void glVertexWeighthNV(GLhalfNV weight)
{
    return glbinding::FunctionObjects::current().VertexWeighthNV(weight);
}

inline void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return glbinding::FunctionObjects::current().VertexWeighthvNV(weight);
}

inline GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl33ext::GLenum>(glbinding::FunctionObjects::current().VideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

inline void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return glbinding::FunctionObjects::current().VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return glbinding::FunctionObjects::current().VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return glbinding::FunctionObjects::current().VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ViewportArrayv(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::FunctionObjects::current().ViewportIndexedf(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::FunctionObjects::current().ViewportIndexedfv(index, v);
}

inline void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().WeightPathsNV(resultPath, numPaths, paths, weights);
}

inline void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::FunctionObjects::current().WeightPointerARB(size, type, stride, pointer);
}

inline void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return glbinding::FunctionObjects::current().WeightbvARB(size, weights);
}

inline void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return glbinding::FunctionObjects::current().WeightdvARB(size, weights);
}

inline void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return glbinding::FunctionObjects::current().WeightfvARB(size, weights);
}

inline void glWeightivARB(GLint size, const GLint * weights)
{
    return glbinding::FunctionObjects::current().WeightivARB(size, weights);
}

inline void glWeightsvARB(GLint size, const GLshort * weights)
{
    return glbinding::FunctionObjects::current().WeightsvARB(size, weights);
}

inline void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return glbinding::FunctionObjects::current().WeightubvARB(size, weights);
}

inline void glWeightuivARB(GLint size, const GLuint * weights)
{
    return glbinding::FunctionObjects::current().WeightuivARB(size, weights);
}

inline void glWeightusvARB(GLint size, const GLushort * weights)
{
    return glbinding::FunctionObjects::current().WeightusvARB(size, weights);
}

inline void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().WindowPos2dARB(x, y);
}

inline void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return glbinding::FunctionObjects::current().WindowPos2dMESA(x, y);
}

inline void glWindowPos2dvARB(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos2dvARB(v);
}

inline void glWindowPos2dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos2dvMESA(v);
}

inline void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().WindowPos2fARB(x, y);
}

inline void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return glbinding::FunctionObjects::current().WindowPos2fMESA(x, y);
}

inline void glWindowPos2fvARB(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos2fvARB(v);
}

inline void glWindowPos2fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos2fvMESA(v);
}

inline void glWindowPos2iARB(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().WindowPos2iARB(x, y);
}

inline void glWindowPos2iMESA(GLint x, GLint y)
{
    return glbinding::FunctionObjects::current().WindowPos2iMESA(x, y);
}

inline void glWindowPos2ivARB(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos2ivARB(v);
}

inline void glWindowPos2ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos2ivMESA(v);
}

inline void glWindowPos2sARB(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().WindowPos2sARB(x, y);
}

inline void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return glbinding::FunctionObjects::current().WindowPos2sMESA(x, y);
}

inline void glWindowPos2svARB(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos2svARB(v);
}

inline void glWindowPos2svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos2svMESA(v);
}

inline void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().WindowPos3dARB(x, y, z);
}

inline void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::FunctionObjects::current().WindowPos3dMESA(x, y, z);
}

inline void glWindowPos3dvARB(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos3dvARB(v);
}

inline void glWindowPos3dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos3dvMESA(v);
}

inline void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().WindowPos3fARB(x, y, z);
}

inline void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::FunctionObjects::current().WindowPos3fMESA(x, y, z);
}

inline void glWindowPos3fvARB(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos3fvARB(v);
}

inline void glWindowPos3fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos3fvMESA(v);
}

inline void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().WindowPos3iARB(x, y, z);
}

inline void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return glbinding::FunctionObjects::current().WindowPos3iMESA(x, y, z);
}

inline void glWindowPos3ivARB(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos3ivARB(v);
}

inline void glWindowPos3ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos3ivMESA(v);
}

inline void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().WindowPos3sARB(x, y, z);
}

inline void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return glbinding::FunctionObjects::current().WindowPos3sMESA(x, y, z);
}

inline void glWindowPos3svARB(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos3svARB(v);
}

inline void glWindowPos3svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos3svMESA(v);
}

inline void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::FunctionObjects::current().WindowPos4dMESA(x, y, z, w);
}

inline void glWindowPos4dvMESA(const GLdouble * v)
{
    return glbinding::FunctionObjects::current().WindowPos4dvMESA(v);
}

inline void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::FunctionObjects::current().WindowPos4fMESA(x, y, z, w);
}

inline void glWindowPos4fvMESA(const GLfloat * v)
{
    return glbinding::FunctionObjects::current().WindowPos4fvMESA(v);
}

inline void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::FunctionObjects::current().WindowPos4iMESA(x, y, z, w);
}

inline void glWindowPos4ivMESA(const GLint * v)
{
    return glbinding::FunctionObjects::current().WindowPos4ivMESA(v);
}

inline void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::FunctionObjects::current().WindowPos4sMESA(x, y, z, w);
}

inline void glWindowPos4svMESA(const GLshort * v)
{
    return glbinding::FunctionObjects::current().WindowPos4svMESA(v);
}

inline void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::FunctionObjects::current().WriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl33ext
