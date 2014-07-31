
#include <glbinding/gl/functions40ext.h>

#include <glbinding/gl/values.h>
#include <glbinding/gl/boolean.h>

namespace gl40ext
{

#include <glbinding/gl/values.inl>
#include <glbinding/gl/boolean.inl>

} // namespace gl40ext


#include <glbinding/Binding.h>


namespace gl40ext
{

void glAccumxOES(GLenum op, GLfixed value)
{
    return glbinding::currentBinding().glAccumxOES(op, value);
}

void glActiveProgramEXT(GLuint program)
{
    return glbinding::currentBinding().glActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::currentBinding().glActiveShaderProgram(pipeline, program);
}

void glActiveStencilFaceEXT(GLenum face)
{
    return glbinding::currentBinding().glActiveStencilFaceEXT(face);
}

void glActiveTextureARB(GLenum texture)
{
    return glbinding::currentBinding().glActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::currentBinding().glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::currentBinding().glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::currentBinding().glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return glbinding::currentBinding().glAlphaFuncxOES(func, ref);
}

void glApplyTextureEXT(GLenum mode)
{
    return glbinding::currentBinding().glApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return glbinding::currentBinding().glAreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::currentBinding().glAreTexturesResidentEXT(n, textures, residences);
}

void glArrayElementEXT(GLint i)
{
    return glbinding::currentBinding().glArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::currentBinding().glArrayObjectATI(array, size, type, stride, buffer, offset);
}

void glAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::currentBinding().glAsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return glbinding::currentBinding().glAttachObjectARB(containerObj, obj);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glbinding::currentBinding().glBeginConditionalRenderNV(id, mode);
}

void glBeginConditionalRenderNVX(GLuint id)
{
    return glbinding::currentBinding().glBeginConditionalRenderNVX(id);
}

void glBeginFragmentShaderATI()
{
    return glbinding::currentBinding().glBeginFragmentShaderATI();
}

void glBeginOcclusionQueryNV(GLuint id)
{
    return glbinding::currentBinding().glBeginOcclusionQueryNV(id);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glbinding::currentBinding().glBeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::currentBinding().glBeginPerfQueryINTEL(queryHandle);
}

void glBeginQueryARB(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBeginQueryARB(target, id);
}

void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return glbinding::currentBinding().glBeginTransformFeedbackEXT(primitiveMode);
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return glbinding::currentBinding().glBeginTransformFeedbackNV(primitiveMode);
}

void glBeginVertexShaderEXT()
{
    return glbinding::currentBinding().glBeginVertexShaderEXT();
}

void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::currentBinding().glBeginVideoCaptureNV(video_capture_slot);
}

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return glbinding::currentBinding().glBindAttribLocationARB(programObj, index, name);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
    return glbinding::currentBinding().glBindBufferARB(target, buffer);
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::currentBinding().glBindBufferBaseEXT(target, index, buffer);
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::currentBinding().glBindBufferBaseNV(target, index, buffer);
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::currentBinding().glBindBufferOffsetEXT(target, index, buffer, offset);
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return glbinding::currentBinding().glBindBufferOffsetNV(target, index, buffer, offset);
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glBindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glBindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::currentBinding().glBindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::currentBinding().glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::currentBinding().glBindFragDataLocationEXT(program, color, name);
}

void glBindFragmentShaderATI(GLuint id)
{
    return glbinding::currentBinding().glBindFragmentShaderATI(id);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return glbinding::currentBinding().glBindFramebufferEXT(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::currentBinding().glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return glbinding::currentBinding().glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::currentBinding().glBindImageTextures(first, count, textures);
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return glbinding::currentBinding().glBindLightParameterEXT(light, value);
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return glbinding::currentBinding().glBindMaterialParameterEXT(face, value);
}

void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindMultiTextureEXT(texunit, target, texture);
}

GLuint glBindParameterEXT(GLenum value)
{
    return glbinding::currentBinding().glBindParameterEXT(value);
}

void glBindProgramARB(GLenum target, GLuint program)
{
    return glbinding::currentBinding().glBindProgramARB(target, program);
}

void glBindProgramNV(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBindProgramNV(target, id);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glBindProgramPipeline(pipeline);
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glBindRenderbufferEXT(target, renderbuffer);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::currentBinding().glBindSamplers(first, count, samplers);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return glbinding::currentBinding().glBindTexGenParameterEXT(unit, coord, value);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindTextureEXT(target, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return glbinding::currentBinding().glBindTextureUnitParameterEXT(unit, value);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::currentBinding().glBindTextures(first, count, textures);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return glbinding::currentBinding().glBindTransformFeedbackNV(target, id);
}

void glBindVertexArrayAPPLE(GLuint array)
{
    return glbinding::currentBinding().glBindVertexArrayAPPLE(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::currentBinding().glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::currentBinding().glBindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBindVertexShaderEXT(GLuint id)
{
    return glbinding::currentBinding().glBindVertexShaderEXT(id);
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return glbinding::currentBinding().glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return glbinding::currentBinding().glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return glbinding::currentBinding().glBinormal3bEXT(bx, by, bz);
}

void glBinormal3bvEXT(const GLbyte * v)
{
    return glbinding::currentBinding().glBinormal3bvEXT(v);
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return glbinding::currentBinding().glBinormal3dEXT(bx, by, bz);
}

void glBinormal3dvEXT(const GLdouble * v)
{
    return glbinding::currentBinding().glBinormal3dvEXT(v);
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return glbinding::currentBinding().glBinormal3fEXT(bx, by, bz);
}

void glBinormal3fvEXT(const GLfloat * v)
{
    return glbinding::currentBinding().glBinormal3fvEXT(v);
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return glbinding::currentBinding().glBinormal3iEXT(bx, by, bz);
}

void glBinormal3ivEXT(const GLint * v)
{
    return glbinding::currentBinding().glBinormal3ivEXT(v);
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return glbinding::currentBinding().glBinormal3sEXT(bx, by, bz);
}

void glBinormal3svEXT(const GLshort * v)
{
    return glbinding::currentBinding().glBinormal3svEXT(v);
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glBinormalPointerEXT(type, stride, pointer);
}

void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return glbinding::currentBinding().glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendBarrierNV()
{
    return glbinding::currentBinding().glBlendBarrierNV();
}

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::currentBinding().glBlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::currentBinding().glBlendColorxOES(red, green, blue, alpha);
}

void glBlendEquationEXT(GLenum mode)
{
    return glbinding::currentBinding().glBlendEquationEXT(mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return glbinding::currentBinding().glBlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::currentBinding().glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return glbinding::currentBinding().glBlendEquationiARB(buf, mode);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::currentBinding().glBlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::currentBinding().glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::currentBinding().glBlendFunciARB(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glbinding::currentBinding().glBlendParameteriNV(pname, value);
}

void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::currentBinding().glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return glbinding::currentBinding().glBufferAddressRangeNV(pname, index, address, length);
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return glbinding::currentBinding().glBufferDataARB(target, size, data, usage);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glBufferParameteriAPPLE(target, pname, param);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::currentBinding().glBufferStorage(target, size, data, flags);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return glbinding::currentBinding().glBufferSubDataARB(target, offset, size, data);
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glCheckFramebufferStatusEXT(target));
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glCheckNamedFramebufferStatusEXT(framebuffer, target));
}

void glClampColorARB(GLenum target, GLenum clamp)
{
    return glbinding::currentBinding().glClampColorARB(target, clamp);
}

void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::currentBinding().glClearAccumxOES(red, green, blue, alpha);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::currentBinding().glClearColorIiEXT(red, green, blue, alpha);
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::currentBinding().glClearColorIuiEXT(red, green, blue, alpha);
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::currentBinding().glClearColorxOES(red, green, blue, alpha);
}

void glClearDepthdNV(GLdouble depth)
{
    return glbinding::currentBinding().glClearDepthdNV(depth);
}

void glClearDepthf(GLfloat d)
{
    return glbinding::currentBinding().glClearDepthf(d);
}

void glClearDepthfOES(GLclampf depth)
{
    return glbinding::currentBinding().glClearDepthfOES(depth);
}

void glClearDepthxOES(GLfixed depth)
{
    return glbinding::currentBinding().glClearDepthxOES(depth);
}

void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glClientActiveTextureARB(GLenum texture)
{
    return glbinding::currentBinding().glClientActiveTextureARB(texture);
}

void glClientActiveVertexStreamATI(GLenum stream)
{
    return glbinding::currentBinding().glClientActiveVertexStreamATI(stream);
}

void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::currentBinding().glClientAttribDefaultEXT(mask);
}

void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return glbinding::currentBinding().glClipPlanefOES(plane, equation);
}

void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return glbinding::currentBinding().glClipPlanexOES(plane, equation);
}

void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glColor3fVertex3fSUN(r, g, b, x, y, z);
}

void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return glbinding::currentBinding().glColor3fVertex3fvSUN(c, v);
}

void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::currentBinding().glColor3hNV(red, green, blue);
}

void glColor3hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glColor3hvNV(v);
}

void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return glbinding::currentBinding().glColor3xOES(red, green, blue);
}

void glColor3xvOES(const GLfixed * components)
{
    return glbinding::currentBinding().glColor3xvOES(components);
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glColor4fNormal3fVertex3fvSUN(c, n, v);
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return glbinding::currentBinding().glColor4hNV(red, green, blue, alpha);
}

void glColor4hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glColor4hvNV(v);
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::currentBinding().glColor4ubVertex2fvSUN(c, v);
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return glbinding::currentBinding().glColor4ubVertex3fvSUN(c, v);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return glbinding::currentBinding().glColor4xOES(red, green, blue, alpha);
}

void glColor4xvOES(const GLfixed * components)
{
    return glbinding::currentBinding().glColor4xvOES(components);
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glColorFormatNV(size, type, stride);
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return glbinding::currentBinding().glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return glbinding::currentBinding().glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return glbinding::currentBinding().glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::currentBinding().glColorMaskIndexedEXT(index, r, g, b, a);
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::currentBinding().glColorPointerEXT(size, type, stride, count, pointer);
}

void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::currentBinding().glColorPointervINTEL(size, type, pointer);
}

void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glColorSubTable(target, start, count, format, type, data);
}

void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return glbinding::currentBinding().glColorSubTableEXT(target, start, count, format, type, data);
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::currentBinding().glColorTable(target, internalformat, width, format, type, table);
}

void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::currentBinding().glColorTableEXT(target, internalFormat, width, format, type, table);
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glColorTableParameterfv(target, pname, params);
}

void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glColorTableParameterfvSGI(target, pname, params);
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glColorTableParameteriv(target, pname, params);
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glColorTableParameterivSGI(target, pname, params);
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return glbinding::currentBinding().glColorTableSGI(target, internalformat, width, format, type, table);
}

void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::currentBinding().glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return glbinding::currentBinding().glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glCombinerParameterfNV(pname, param);
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glCombinerParameterfvNV(pname, params);
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glCombinerParameteriNV(pname, param);
}

void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glCombinerParameterivNV(pname, params);
}

void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glCombinerStageParameterfvNV(stage, pname, params);
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
    return glbinding::currentBinding().glCompileShaderARB(shaderObj);
}

void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return glbinding::currentBinding().glCompileShaderIncludeARB(shader, count, path, length);
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::currentBinding().glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return glbinding::currentBinding().glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::currentBinding().glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return glbinding::currentBinding().glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::currentBinding().glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return glbinding::currentBinding().glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::currentBinding().glConvolutionParameterf(target, pname, params);
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return glbinding::currentBinding().glConvolutionParameterfEXT(target, pname, params);
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glConvolutionParameterfv(target, pname, params);
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glConvolutionParameterfvEXT(target, pname, params);
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return glbinding::currentBinding().glConvolutionParameteri(target, pname, params);
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return glbinding::currentBinding().glConvolutionParameteriEXT(target, pname, params);
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glConvolutionParameteriv(target, pname, params);
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glConvolutionParameterivEXT(target, pname, params);
}

void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glConvolutionParameterxOES(target, pname, param);
}

void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glConvolutionParameterxvOES(target, pname, params);
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyColorSubTable(target, start, x, y, width);
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyColorSubTableEXT(target, start, x, y, width);
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyColorTable(target, internalformat, x, y, width);
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyColorTableSGI(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::currentBinding().glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glbinding::currentBinding().glCopyPathNV(resultPath, srcPath);
}

void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::currentBinding().glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::currentBinding().glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::currentBinding().glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glbinding::currentBinding().glCoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glbinding::currentBinding().glCoverStrokePathNV(path, coverMode);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glbinding::currentBinding().glCreatePerfQueryINTEL(queryId, queryHandle);
}

GLhandleARB glCreateProgramObjectARB()
{
    return glbinding::currentBinding().glCreateProgramObjectARB();
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return glbinding::currentBinding().glCreateShaderObjectARB(shaderType);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glbinding::currentBinding().glCreateShaderProgramEXT(type, string);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::currentBinding().glCreateShaderProgramv(type, count, strings);
}

GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return glbinding::currentBinding().glCreateSyncFromCLeventARB(context, event, flags);
}

void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glCullParameterdvEXT(pname, params);
}

void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glCullParameterfvEXT(pname, params);
}

void glCurrentPaletteMatrixARB(GLint index)
{
    return glbinding::currentBinding().glCurrentPaletteMatrixARB(index);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::currentBinding().glDebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return glbinding::currentBinding().glDebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return glbinding::currentBinding().glDebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::currentBinding().glDebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::currentBinding().glDebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::currentBinding().glDebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::currentBinding().glDebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return glbinding::currentBinding().glDebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::currentBinding().glDebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDeformSGIX(FfdMaskSGIX mask)
{
    return glbinding::currentBinding().glDeformSGIX(mask);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return glbinding::currentBinding().glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return glbinding::currentBinding().glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return glbinding::currentBinding().glDeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return glbinding::currentBinding().glDeleteBuffersARB(n, buffers);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return glbinding::currentBinding().glDeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glbinding::currentBinding().glDeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id)
{
    return glbinding::currentBinding().glDeleteFragmentShaderATI(id);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::currentBinding().glDeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::currentBinding().glDeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return glbinding::currentBinding().glDeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj)
{
    return glbinding::currentBinding().glDeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteOcclusionQueriesNV(n, ids);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glbinding::currentBinding().glDeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::currentBinding().glDeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::currentBinding().glDeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::currentBinding().glDeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return glbinding::currentBinding().glDeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::currentBinding().glDeleteProgramsNV(n, programs);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteQueriesARB(n, ids);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::currentBinding().glDeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return glbinding::currentBinding().glDeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return glbinding::currentBinding().glDeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return glbinding::currentBinding().glDeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id)
{
    return glbinding::currentBinding().glDeleteVertexShaderEXT(id);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return glbinding::currentBinding().glDepthBoundsEXT(zmin, zmax);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return glbinding::currentBinding().glDepthBoundsdNV(zmin, zmax);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glDepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::currentBinding().glDepthRangeIndexed(index, n, f);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glDepthRangedNV(zNear, zFar);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::currentBinding().glDepthRangef(n, f);
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return glbinding::currentBinding().glDepthRangefOES(n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return glbinding::currentBinding().glDepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return glbinding::currentBinding().glDetachObjectARB(containerObj, attachedObj);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::currentBinding().glDetailTexFuncSGIS(target, n, points);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::currentBinding().glDisableClientStateIndexedEXT(array, index);
}

void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::currentBinding().glDisableClientStateiEXT(array, index);
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glDisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id)
{
    return glbinding::currentBinding().glDisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::currentBinding().glDisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::currentBinding().glDisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::currentBinding().glDisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArrayARB(GLuint index)
{
    return glbinding::currentBinding().glDisableVertexAttribArrayARB(index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::currentBinding().glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return glbinding::currentBinding().glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::currentBinding().glDispatchComputeIndirect(indirect);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawArraysEXT(mode, first, count);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glbinding::currentBinding().glDrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glbinding::currentBinding().glDrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return glbinding::currentBinding().glDrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return glbinding::currentBinding().glDrawBuffersATI(n, bufs);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return glbinding::currentBinding().glDrawElementArrayATI(mode, count);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::currentBinding().glDrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::currentBinding().glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glbinding::currentBinding().glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return glbinding::currentBinding().glDrawMeshArraysSUN(mode, first, count, width);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return glbinding::currentBinding().glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return glbinding::currentBinding().glDrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::currentBinding().glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return glbinding::currentBinding().glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return glbinding::currentBinding().glDrawTransformFeedbackNV(mode, id);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::currentBinding().glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glEdgeFlagFormatNV(GLsizei stride)
{
    return glbinding::currentBinding().glEdgeFlagFormatNV(stride);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return glbinding::currentBinding().glEdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return glbinding::currentBinding().glElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer)
{
    return glbinding::currentBinding().glElementPointerATI(type, pointer);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return glbinding::currentBinding().glEnableClientStateIndexedEXT(array, index);
}

void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return glbinding::currentBinding().glEnableClientStateiEXT(array, index);
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glEnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id)
{
    return glbinding::currentBinding().glEnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return glbinding::currentBinding().glEnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return glbinding::currentBinding().glEnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return glbinding::currentBinding().glEnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArrayARB(GLuint index)
{
    return glbinding::currentBinding().glEnableVertexAttribArrayARB(index);
}

void glEndConditionalRenderNV()
{
    return glbinding::currentBinding().glEndConditionalRenderNV();
}

void glEndConditionalRenderNVX()
{
    return glbinding::currentBinding().glEndConditionalRenderNVX();
}

void glEndFragmentShaderATI()
{
    return glbinding::currentBinding().glEndFragmentShaderATI();
}

void glEndOcclusionQueryNV()
{
    return glbinding::currentBinding().glEndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return glbinding::currentBinding().glEndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glbinding::currentBinding().glEndPerfQueryINTEL(queryHandle);
}

void glEndQueryARB(GLenum target)
{
    return glbinding::currentBinding().glEndQueryARB(target);
}

void glEndTransformFeedbackEXT()
{
    return glbinding::currentBinding().glEndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV()
{
    return glbinding::currentBinding().glEndTransformFeedbackNV();
}

void glEndVertexShaderEXT()
{
    return glbinding::currentBinding().glEndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return glbinding::currentBinding().glEndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1xOES(GLfixed u)
{
    return glbinding::currentBinding().glEvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glEvalCoord1xvOES(coords);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return glbinding::currentBinding().glEvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glEvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode)
{
    return glbinding::currentBinding().glEvalMapsNV(target, mode);
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return glbinding::currentBinding().glExecuteProgramNV(target, id, params);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::currentBinding().glExtractComponentEXT(res, src, num);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return glbinding::currentBinding().glFeedbackBufferxOES(n, type, buffer);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return glbinding::currentBinding().glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return glbinding::currentBinding().glFinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence)
{
    return glbinding::currentBinding().glFinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence)
{
    return glbinding::currentBinding().glFinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return glbinding::currentBinding().glFinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX()
{
    return glbinding::currentBinding().glFinishTextureSUNX();
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glFlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::currentBinding().glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target)
{
    return glbinding::currentBinding().glFlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX()
{
    return glbinding::currentBinding().glFlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target)
{
    return glbinding::currentBinding().glFlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::currentBinding().glFlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV()
{
    return glbinding::currentBinding().glFlushVertexArrayRangeNV();
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glFogCoordFormatNV(type, stride);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glFogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogCoorddEXT(GLdouble coord)
{
    return glbinding::currentBinding().glFogCoorddEXT(coord);
}

void glFogCoorddvEXT(const GLdouble * coord)
{
    return glbinding::currentBinding().glFogCoorddvEXT(coord);
}

void glFogCoordfEXT(GLfloat coord)
{
    return glbinding::currentBinding().glFogCoordfEXT(coord);
}

void glFogCoordfvEXT(const GLfloat * coord)
{
    return glbinding::currentBinding().glFogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog)
{
    return glbinding::currentBinding().glFogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog)
{
    return glbinding::currentBinding().glFogCoordhvNV(fog);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return glbinding::currentBinding().glFogFuncSGIS(n, points);
}

void glFogxOES(GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glFogxOES(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::currentBinding().glFogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glFragmentColorMaterialSGIX(face, mode);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glFragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glFragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glFragmentLightModelivSGIX(pname, params);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glFragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glFragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glFragmentLightivSGIX(light, pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glFragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glFragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glFragmentMaterialivSGIX(face, pname, params);
}

void glFrameTerminatorGREMEDY()
{
    return glbinding::currentBinding().glFrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor)
{
    return glbinding::currentBinding().glFrameZoomSGIX(factor);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::currentBinding().glFramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::currentBinding().glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glFramebufferParameteri(target, pname, param);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return glbinding::currentBinding().glFramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::currentBinding().glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::currentBinding().glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glFramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::currentBinding().glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::currentBinding().glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::currentBinding().glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::currentBinding().glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFreeObjectBufferATI(GLuint buffer)
{
    return glbinding::currentBinding().glFreeObjectBufferATI(buffer);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::currentBinding().glFrustumfOES(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::currentBinding().glFrustumxOES(l, r, b, t, n, f);
}

GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return glbinding::currentBinding().glGenAsyncMarkersSGIX(range);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return glbinding::currentBinding().glGenBuffersARB(n, buffers);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return glbinding::currentBinding().glGenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glbinding::currentBinding().glGenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
    return glbinding::currentBinding().glGenFragmentShadersATI(range);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return glbinding::currentBinding().glGenFramebuffersEXT(n, framebuffers);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return glbinding::currentBinding().glGenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenOcclusionQueriesNV(n, ids);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glbinding::currentBinding().glGenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glbinding::currentBinding().glGenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::currentBinding().glGenProgramPipelines(n, pipelines);
}

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return glbinding::currentBinding().glGenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return glbinding::currentBinding().glGenProgramsNV(n, programs);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenQueriesARB(n, ids);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::currentBinding().glGenRenderbuffersEXT(n, renderbuffers);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return glbinding::currentBinding().glGenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return glbinding::currentBinding().glGenTexturesEXT(n, textures);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return glbinding::currentBinding().glGenTransformFeedbacksNV(n, ids);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return glbinding::currentBinding().glGenVertexArraysAPPLE(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
    return glbinding::currentBinding().glGenVertexShadersEXT(range);
}

void glGenerateMipmapEXT(GLenum target)
{
    return glbinding::currentBinding().glGenerateMipmapEXT(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return glbinding::currentBinding().glGenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return glbinding::currentBinding().glGenerateTextureMipmapEXT(texture, target);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::currentBinding().glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return glbinding::currentBinding().glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return glbinding::currentBinding().glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::currentBinding().glGetAttribLocationARB(programObj, name);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::currentBinding().glGetBooleanIndexedvEXT(target, index, data);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetBufferPointervARB(target, pname, params);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return glbinding::currentBinding().glGetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return glbinding::currentBinding().glGetClipPlanefOES(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return glbinding::currentBinding().glGetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::currentBinding().glGetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return glbinding::currentBinding().glGetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return glbinding::currentBinding().glGetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetCombinerStageParameterfvNV(stage, pname, params);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return glbinding::currentBinding().glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return glbinding::currentBinding().glGetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return glbinding::currentBinding().glGetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::currentBinding().glGetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return glbinding::currentBinding().glGetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetConvolutionParameterxvOES(target, pname, params);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::currentBinding().glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return glbinding::currentBinding().glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::currentBinding().glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::currentBinding().glGetDetailTexFuncSGIS(target, points);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::currentBinding().glGetDoublei_v(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return glbinding::currentBinding().glGetDoublei_vEXT(pname, index, params);
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glbinding::currentBinding().glGetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetFixedvOES(pname, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloatIndexedvEXT(target, index, data);
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::currentBinding().glGetFloati_v(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return glbinding::currentBinding().glGetFloati_vEXT(pname, index, params);
}

void glGetFogFuncSGIS(GLfloat * points)
{
    return glbinding::currentBinding().glGetFogFuncSGIS(points);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glGetGraphicsResetStatusARB());
}

GLhandleARB glGetHandleARB(GLenum pname)
{
    return glbinding::currentBinding().glGetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::currentBinding().glGetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::currentBinding().glGetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::currentBinding().glGetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glbinding::currentBinding().glGetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return glbinding::currentBinding().glGetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
    return glbinding::currentBinding().glGetInstrumentsSGIX();
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return glbinding::currentBinding().glGetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return glbinding::currentBinding().glGetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return glbinding::currentBinding().glGetIntegerui64vNV(value, result);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::currentBinding().glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::currentBinding().glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::currentBinding().glGetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::currentBinding().glGetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::currentBinding().glGetInvariantIntegervEXT(id, value, data);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetLightxOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::currentBinding().glGetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::currentBinding().glGetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::currentBinding().glGetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return glbinding::currentBinding().glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMapParameterivNV(target, pname, params);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return glbinding::currentBinding().glGetMapxvOES(target, query, v);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glGetMaterialxOES(face, pname, param);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::currentBinding().glGetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return glbinding::currentBinding().glGetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::currentBinding().glGetMultisamplefvNV(pname, index, val);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::currentBinding().glGetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return glbinding::currentBinding().glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return glbinding::currentBinding().glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::currentBinding().glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::currentBinding().glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return glbinding::currentBinding().glGetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return glbinding::currentBinding().glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetNamedStringivARB(namelen, name, pname, params);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glbinding::currentBinding().glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::currentBinding().glGetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::currentBinding().glGetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetObjectParameterivARB(obj, pname, params);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::currentBinding().glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glbinding::currentBinding().glGetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glbinding::currentBinding().glGetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glbinding::currentBinding().glGetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glbinding::currentBinding().glGetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glbinding::currentBinding().glGetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glbinding::currentBinding().glGetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glbinding::currentBinding().glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glbinding::currentBinding().glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glbinding::currentBinding().glGetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glbinding::currentBinding().glGetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glbinding::currentBinding().glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glbinding::currentBinding().glGetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glbinding::currentBinding().glGetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glbinding::currentBinding().glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glbinding::currentBinding().glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glbinding::currentBinding().glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glbinding::currentBinding().glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glbinding::currentBinding().glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glbinding::currentBinding().glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glbinding::currentBinding().glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return glbinding::currentBinding().glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glbinding::currentBinding().glGetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return glbinding::currentBinding().glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return glbinding::currentBinding().glGetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return glbinding::currentBinding().glGetPointerIndexedvEXT(target, index, data);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return glbinding::currentBinding().glGetPointeri_vEXT(pname, index, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetPointervEXT(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::currentBinding().glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::currentBinding().glGetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::currentBinding().glGetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::currentBinding().glGetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::currentBinding().glGetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return glbinding::currentBinding().glGetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return glbinding::currentBinding().glGetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return glbinding::currentBinding().glGetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return glbinding::currentBinding().glGetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return glbinding::currentBinding().glGetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return glbinding::currentBinding().glGetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetProgramParameterfvNV(target, index, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::currentBinding().glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramPipelineiv(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::currentBinding().glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return glbinding::currentBinding().glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::currentBinding().glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return glbinding::currentBinding().glGetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return glbinding::currentBinding().glGetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return glbinding::currentBinding().glGetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetProgramivNV(id, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::currentBinding().glGetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::currentBinding().glGetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetQueryObjectuivARB(id, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetQueryivARB(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetRenderbufferParameterivEXT(target, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::currentBinding().glGetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return glbinding::currentBinding().glGetSeparableFilterEXT(target, format, type, row, column, span);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::currentBinding().glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return glbinding::currentBinding().glGetShaderSourceARB(obj, maxLength, length, source);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return glbinding::currentBinding().glGetSharpenTexFuncSGIS(target, points);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return glbinding::currentBinding().glGetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return glbinding::currentBinding().glGetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return glbinding::currentBinding().glGetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetTexGenxvOES(coord, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return glbinding::currentBinding().glGetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return glbinding::currentBinding().glGetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return glbinding::currentBinding().glGetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glbinding::currentBinding().glGetTextureHandleNV(texture);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::currentBinding().glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return glbinding::currentBinding().glGetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glbinding::currentBinding().glGetTextureSamplerHandleNV(texture, sampler);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::currentBinding().glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return glbinding::currentBinding().glGetTransformFeedbackVaryingNV(program, index, location);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return glbinding::currentBinding().glGetUniformBufferSizeEXT(program, location);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return glbinding::currentBinding().glGetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return glbinding::currentBinding().glGetUniformOffsetEXT(program, location);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return glbinding::currentBinding().glGetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glbinding::currentBinding().glGetUniformi64vNV(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return glbinding::currentBinding().glGetUniformivARB(programObj, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetUniformui64vNV(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return glbinding::currentBinding().glGetUniformuivEXT(program, location, params);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return glbinding::currentBinding().glGetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return glbinding::currentBinding().glGetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return glbinding::currentBinding().glGetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return glbinding::currentBinding().glGetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return glbinding::currentBinding().glGetVaryingLocationNV(program, name);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::currentBinding().glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::currentBinding().glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return glbinding::currentBinding().glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return glbinding::currentBinding().glGetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return glbinding::currentBinding().glGetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::currentBinding().glGetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::currentBinding().glGetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVertexAttribivNV(index, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return glbinding::currentBinding().glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return glbinding::currentBinding().glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return glbinding::currentBinding().glGetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return glbinding::currentBinding().glGetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return glbinding::currentBinding().glGetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return glbinding::currentBinding().glGetVideouivNV(video_slot, pname, params);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::currentBinding().glGetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return glbinding::currentBinding().glGetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::currentBinding().glGetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::currentBinding().glGetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::currentBinding().glGetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::currentBinding().glGetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::currentBinding().glGetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::currentBinding().glGetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::currentBinding().glGetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::currentBinding().glGetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::currentBinding().glGetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::currentBinding().glGetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::currentBinding().glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return glbinding::currentBinding().glGetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::currentBinding().glGetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::currentBinding().glGetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::currentBinding().glGetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::currentBinding().glGetnUniformuivARB(program, location, bufSize, params);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return glbinding::currentBinding().glGlobalAlphaFactorusSUN(factor);
}

void glHintPGI(GLenum target, GLint mode)
{
    return glbinding::currentBinding().glHintPGI(target, mode);
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::currentBinding().glHistogram(target, width, internalformat, sink);
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return glbinding::currentBinding().glHistogramEXT(target, width, internalformat, sink);
}

void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return glbinding::currentBinding().glIglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glImageTransformParameterivHP(target, pname, params);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return glbinding::currentBinding().glImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glIndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return glbinding::currentBinding().glIndexFuncEXT(func, ref);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glIndexMaterialEXT(face, mode);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::currentBinding().glIndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexxOES(GLfixed component)
{
    return glbinding::currentBinding().glIndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
    return glbinding::currentBinding().glIndexxvOES(component);
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return glbinding::currentBinding().glInsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::currentBinding().glInsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return glbinding::currentBinding().glInstrumentsBufferSGIX(size, buffer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glbinding::currentBinding().glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::currentBinding().glInvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::currentBinding().glInvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::currentBinding().glInvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::currentBinding().glInvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return glbinding::currentBinding().glIsAsyncMarkerSGIX(marker);
}

GLboolean glIsBufferARB(GLuint buffer)
{
    return glbinding::currentBinding().glIsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
    return glbinding::currentBinding().glIsBufferResidentNV(target);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return glbinding::currentBinding().glIsEnabledIndexedEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
    return glbinding::currentBinding().glIsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glbinding::currentBinding().glIsFenceNV(fence);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return glbinding::currentBinding().glIsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return glbinding::currentBinding().glIsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glbinding::currentBinding().glIsImageHandleResidentNV(handle);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return glbinding::currentBinding().glIsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return glbinding::currentBinding().glIsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return glbinding::currentBinding().glIsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return glbinding::currentBinding().glIsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return glbinding::currentBinding().glIsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path)
{
    return glbinding::currentBinding().glIsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glIsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glIsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgramARB(GLuint program)
{
    return glbinding::currentBinding().glIsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
    return glbinding::currentBinding().glIsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glIsProgramPipeline(pipeline);
}

GLboolean glIsQueryARB(GLuint id)
{
    return glbinding::currentBinding().glIsQueryARB(id);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return glbinding::currentBinding().glIsRenderbufferEXT(renderbuffer);
}

GLboolean glIsTextureEXT(GLuint texture)
{
    return glbinding::currentBinding().glIsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::currentBinding().glIsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::currentBinding().glIsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return glbinding::currentBinding().glIsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return glbinding::currentBinding().glIsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return glbinding::currentBinding().glIsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return glbinding::currentBinding().glIsVertexAttribEnabledAPPLE(index, pname);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glbinding::currentBinding().glLabelObjectEXT(type, object, length, label);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glLightEnviSGIX(pname, param);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glLightModelxOES(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return glbinding::currentBinding().glLightModelxvOES(pname, param);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glLightxOES(light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glLightxvOES(light, pname, params);
}

void glLineWidthxOES(GLfixed width)
{
    return glbinding::currentBinding().glLineWidthxOES(width);
}

void glLinkProgramARB(GLhandleARB programObj)
{
    return glbinding::currentBinding().glLinkProgramARB(programObj);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glListParameterivSGIX(list, pname, params);
}

void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return glbinding::currentBinding().glLoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixxOES(const GLfixed * m)
{
    return glbinding::currentBinding().glLoadMatrixxOES(m);
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return glbinding::currentBinding().glLoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::currentBinding().glLoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
    return glbinding::currentBinding().glLockArraysEXT(first, count);
}

void glMakeBufferNonResidentNV(GLenum target)
{
    return glbinding::currentBinding().glMakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return glbinding::currentBinding().glMakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return glbinding::currentBinding().glMakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glbinding::currentBinding().glMakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return glbinding::currentBinding().glMakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return glbinding::currentBinding().glMakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glbinding::currentBinding().glMakeTextureHandleResidentNV(handle);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return glbinding::currentBinding().glMap1xOES(target, u1, u2, stride, order, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return glbinding::currentBinding().glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
    return glbinding::currentBinding().glMapBufferARB(target, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return glbinding::currentBinding().glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return glbinding::currentBinding().glMapGrid1xOES(n, u1, u2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return glbinding::currentBinding().glMapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return glbinding::currentBinding().glMapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::currentBinding().glMapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
    return glbinding::currentBinding().glMapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return glbinding::currentBinding().glMapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::currentBinding().glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::currentBinding().glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::currentBinding().glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::currentBinding().glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glMaterialxOES(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return glbinding::currentBinding().glMaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glMatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return glbinding::currentBinding().glMatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return glbinding::currentBinding().glMatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return glbinding::currentBinding().glMatrixIndexusvARB(size, indices);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glbinding::currentBinding().glMatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::currentBinding().glMatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixLoadTransposefEXT(mode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::currentBinding().glMatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixLoadfEXT(mode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::currentBinding().glMatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixMultTransposefEXT(mode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glbinding::currentBinding().glMatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glbinding::currentBinding().glMatrixMultfEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::currentBinding().glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return glbinding::currentBinding().glMatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return glbinding::currentBinding().glMatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glMatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glMatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glMatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glMatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glMatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glMatrixTranslatefEXT(mode, x, y, z);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::currentBinding().glMemoryBarrier(barriers);
}

void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return glbinding::currentBinding().glMemoryBarrierEXT(barriers);
}

void glMinSampleShadingARB(GLfloat value)
{
    return glbinding::currentBinding().glMinSampleShadingARB(value);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::currentBinding().glMinmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return glbinding::currentBinding().glMinmaxEXT(target, internalformat, sink);
}

void glMultMatrixxOES(const GLfixed * m)
{
    return glbinding::currentBinding().glMultMatrixxOES(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return glbinding::currentBinding().glMultTransposeMatrixxOES(m);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::currentBinding().glMultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::currentBinding().glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glbinding::currentBinding().glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glbinding::currentBinding().glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glbinding::currentBinding().glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return glbinding::currentBinding().glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return glbinding::currentBinding().glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return glbinding::currentBinding().glMultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::currentBinding().glMultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return glbinding::currentBinding().glMultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return glbinding::currentBinding().glMultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return glbinding::currentBinding().glMultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::currentBinding().glMultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return glbinding::currentBinding().glMultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return glbinding::currentBinding().glMultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return glbinding::currentBinding().glMultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::currentBinding().glMultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return glbinding::currentBinding().glMultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::currentBinding().glMultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::currentBinding().glMultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::currentBinding().glMultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return glbinding::currentBinding().glMultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::currentBinding().glMultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return glbinding::currentBinding().glMultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return glbinding::currentBinding().glMultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return glbinding::currentBinding().glMultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::currentBinding().glMultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::currentBinding().glMultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::currentBinding().glMultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::currentBinding().glMultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::currentBinding().glMultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::currentBinding().glMultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::currentBinding().glMultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::currentBinding().glMultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::currentBinding().glMultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::currentBinding().glMultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::currentBinding().glMultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::currentBinding().glMultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return glbinding::currentBinding().glMultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::currentBinding().glMultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return glbinding::currentBinding().glMultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::currentBinding().glMultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return glbinding::currentBinding().glMultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::currentBinding().glMultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return glbinding::currentBinding().glMultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::currentBinding().glMultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return glbinding::currentBinding().glMultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::currentBinding().glMultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return glbinding::currentBinding().glMultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::currentBinding().glMultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return glbinding::currentBinding().glMultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glMultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glMultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::currentBinding().glMultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::currentBinding().glMultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glMultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glMultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::currentBinding().glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glMultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glMultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glMultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::currentBinding().glNamedBufferDataEXT(buffer, size, data, usage);
}

void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, MapBufferUsageMask flags)
{
    return glbinding::currentBinding().glNamedBufferStorageEXT(buffer, size, data, flags);
}

void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::currentBinding().glNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::currentBinding().glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::currentBinding().glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::currentBinding().glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::currentBinding().glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return glbinding::currentBinding().glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::currentBinding().glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::currentBinding().glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::currentBinding().glNamedProgramStringEXT(program, target, format, len, string);
}

void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return glbinding::currentBinding().glNamedStringARB(type, namelen, name, stringlen, string);
}

GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return glbinding::currentBinding().glNewObjectBufferATI(size, pointer, usage);
}

void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glNormal3fVertex3fvSUN(n, v);
}

void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return glbinding::currentBinding().glNormal3hNV(nx, ny, nz);
}

void glNormal3hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glNormal3hvNV(v);
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return glbinding::currentBinding().glNormal3xOES(nx, ny, nz);
}

void glNormal3xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glNormal3xvOES(coords);
}

void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glNormalFormatNV(type, stride);
}

void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::currentBinding().glNormalPointerEXT(type, stride, count, pointer);
}

void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return glbinding::currentBinding().glNormalPointervINTEL(type, pointer);
}

void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::currentBinding().glNormalStream3bATI(stream, nx, ny, nz);
}

void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return glbinding::currentBinding().glNormalStream3bvATI(stream, coords);
}

void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::currentBinding().glNormalStream3dATI(stream, nx, ny, nz);
}

void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::currentBinding().glNormalStream3dvATI(stream, coords);
}

void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::currentBinding().glNormalStream3fATI(stream, nx, ny, nz);
}

void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::currentBinding().glNormalStream3fvATI(stream, coords);
}

void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return glbinding::currentBinding().glNormalStream3iATI(stream, nx, ny, nz);
}

void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::currentBinding().glNormalStream3ivATI(stream, coords);
}

void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::currentBinding().glNormalStream3sATI(stream, nx, ny, nz);
}

void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::currentBinding().glNormalStream3svATI(stream, coords);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::currentBinding().glObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::currentBinding().glObjectPtrLabel(ptr, length, label);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glObjectPurgeableAPPLE(objectType, name, option));
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glObjectUnpurgeableAPPLE(objectType, name, option));
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return glbinding::currentBinding().glOrthofOES(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return glbinding::currentBinding().glOrthoxOES(l, r, b, t, n, f);
}

void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPNTrianglesfATI(pname, param);
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPNTrianglesiATI(pname, param);
}

void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return glbinding::currentBinding().glPassTexCoordATI(dst, coord, swizzle);
}

void glPassThroughxOES(GLfixed token)
{
    return glbinding::currentBinding().glPassThroughxOES(token);
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return glbinding::currentBinding().glPathColorGenNV(color, genMode, colorFormat, coeffs);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::currentBinding().glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::currentBinding().glPathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return glbinding::currentBinding().glPathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return glbinding::currentBinding().glPathDashArrayNV(path, dashCount, dashArray);
}

void glPathFogGenNV(GLenum genMode)
{
    return glbinding::currentBinding().glPathFogGenNV(genMode);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount));
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::currentBinding().glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return glbinding::currentBinding().glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return glbinding::currentBinding().glPathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return glbinding::currentBinding().glPathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return glbinding::currentBinding().glPathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return glbinding::currentBinding().glPathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return glbinding::currentBinding().glPathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glPathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return glbinding::currentBinding().glPathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::currentBinding().glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return glbinding::currentBinding().glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::currentBinding().glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void glPauseTransformFeedbackNV()
{
    return glbinding::currentBinding().glPauseTransformFeedbackNV();
}

void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::currentBinding().glPixelDataRangeNV(target, length, pointer);
}

void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return glbinding::currentBinding().glPixelMapx(map, size, values);
}

void glPixelStorex(GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glPixelStorex(pname, param);
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelTexGenParameterfSGIS(pname, param);
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPixelTexGenParameterfvSGIS(pname, params);
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelTexGenParameteriSGIS(pname, param);
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPixelTexGenParameterivSGIS(pname, params);
}

void glPixelTexGenSGIX(GLenum mode)
{
    return glbinding::currentBinding().glPixelTexGenSGIX(mode);
}

void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glPixelTransferxOES(pname, param);
}

void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPixelTransformParameterfEXT(target, pname, param);
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPixelTransformParameterfvEXT(target, pname, params);
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPixelTransformParameteriEXT(target, pname, param);
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPixelTransformParameterivEXT(target, pname, params);
}

void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return glbinding::currentBinding().glPixelZoomxOES(xfactor, yfactor);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return glbinding::currentBinding().glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterfARB(pname, param);
}

void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterfEXT(pname, param);
}

void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glPointParameterfSGIS(pname, param);
}

void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfvARB(pname, params);
}

void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfvEXT(pname, params);
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glPointParameterfvSGIS(pname, params);
}

void glPointParameteriNV(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glPointParameteriNV(pname, param);
}

void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glPointParameterivNV(pname, params);
}

void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glPointParameterxvOES(pname, params);
}

void glPointSizexOES(GLfixed size)
{
    return glbinding::currentBinding().glPointSizexOES(size);
}

GLint glPollAsyncSGIX(GLuint * markerp)
{
    return glbinding::currentBinding().glPollAsyncSGIX(markerp);
}

GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return glbinding::currentBinding().glPollInstrumentsSGIX(marker_p);
}

void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return glbinding::currentBinding().glPolygonOffsetEXT(factor, bias);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return glbinding::currentBinding().glPolygonOffsetxOES(factor, units);
}

void glPopDebugGroup()
{
    return glbinding::currentBinding().glPopDebugGroup();
}

void glPopGroupMarkerEXT()
{
    return glbinding::currentBinding().glPopGroupMarkerEXT();
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return glbinding::currentBinding().glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return glbinding::currentBinding().glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void glPrimitiveRestartIndexNV(GLuint index)
{
    return glbinding::currentBinding().glPrimitiveRestartIndexNV(index);
}

void glPrimitiveRestartNV()
{
    return glbinding::currentBinding().glPrimitiveRestartNV();
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return glbinding::currentBinding().glPrioritizeTexturesEXT(n, textures, priorities);
}

void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return glbinding::currentBinding().glPrioritizeTexturesxOES(n, textures, priorities);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::currentBinding().glProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return glbinding::currentBinding().glProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return glbinding::currentBinding().glProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return glbinding::currentBinding().glProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::currentBinding().glProgramEnvParameter4dvARB(target, index, params);
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::currentBinding().glProgramEnvParameter4fvARB(target, index, params);
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::currentBinding().glProgramEnvParameterI4ivNV(target, index, params);
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::currentBinding().glProgramEnvParameterI4uivNV(target, index, params);
}

void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::currentBinding().glProgramEnvParameters4fvEXT(target, index, count, params);
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::currentBinding().glProgramEnvParametersI4ivNV(target, index, count, params);
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::currentBinding().glProgramEnvParametersI4uivNV(target, index, count, params);
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return glbinding::currentBinding().glProgramLocalParameter4dvARB(target, index, params);
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return glbinding::currentBinding().glProgramLocalParameter4fvARB(target, index, params);
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return glbinding::currentBinding().glProgramLocalParameterI4ivNV(target, index, params);
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return glbinding::currentBinding().glProgramLocalParameterI4uivNV(target, index, params);
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return glbinding::currentBinding().glProgramLocalParameters4fvEXT(target, index, count, params);
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return glbinding::currentBinding().glProgramLocalParametersI4ivNV(target, index, count, params);
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return glbinding::currentBinding().glProgramLocalParametersI4uivNV(target, index, count, params);
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return glbinding::currentBinding().glProgramNamedParameter4dvNV(id, len, name, v);
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return glbinding::currentBinding().glProgramNamedParameter4fvNV(id, len, name, v);
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glProgramParameter4dNV(target, index, x, y, z, w);
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glProgramParameter4dvNV(target, index, v);
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glProgramParameter4fNV(target, index, x, y, z, w);
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glProgramParameter4fvNV(target, index, v);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::currentBinding().glProgramParameteri(program, pname, value);
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return glbinding::currentBinding().glProgramParameteriARB(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return glbinding::currentBinding().glProgramParameteriEXT(program, pname, value);
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glProgramParameters4dvNV(target, index, count, v);
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glProgramParameters4fvNV(target, index, count, v);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return glbinding::currentBinding().glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return glbinding::currentBinding().glProgramStringARB(target, format, len, string);
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return glbinding::currentBinding().glProgramSubroutineParametersuivNV(target, count, params);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::currentBinding().glProgramUniform1d(program, location, v0);
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return glbinding::currentBinding().glProgramUniform1dEXT(program, location, x);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform1dvEXT(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::currentBinding().glProgramUniform1i(program, location, v0);
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return glbinding::currentBinding().glProgramUniform1i64NV(program, location, x);
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform1i64vNV(program, location, count, value);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return glbinding::currentBinding().glProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::currentBinding().glProgramUniform1ui(program, location, v0);
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return glbinding::currentBinding().glProgramUniform1ui64NV(program, location, x);
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform1ui64vNV(program, location, count, value);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return glbinding::currentBinding().glProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::currentBinding().glProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glProgramUniform2dEXT(program, location, x, y);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform2dvEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::currentBinding().glProgramUniform2i64NV(program, location, x, y);
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform2i64vNV(program, location, count, value);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::currentBinding().glProgramUniform2ui64NV(program, location, x, y);
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform2ui64vNV(program, location, count, value);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::currentBinding().glProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glProgramUniform3dEXT(program, location, x, y, z);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform3dvEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::currentBinding().glProgramUniform3i64NV(program, location, x, y, z);
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform3i64vNV(program, location, count, value);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::currentBinding().glProgramUniform3ui64NV(program, location, x, y, z);
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform3ui64vNV(program, location, count, value);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::currentBinding().glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glProgramUniform4dEXT(program, location, x, y, z, w);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniform4dvEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::currentBinding().glProgramUniform4i64NV(program, location, x, y, z, w);
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform4i64vNV(program, location, count, value);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::currentBinding().glProgramUniform4ui64NV(program, location, x, y, z, w);
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniform4ui64vNV(program, location, count, value);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::currentBinding().glProgramUniformHandleui64ARB(program, location, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return glbinding::currentBinding().glProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::currentBinding().glProgramUniformHandleui64vARB(program, location, count, values);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return glbinding::currentBinding().glProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return glbinding::currentBinding().glProgramUniformui64NV(program, location, value);
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glProgramUniformui64vNV(program, location, count, value);
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return glbinding::currentBinding().glProgramVertexLimitNV(target, limit);
}

void glProvokingVertexEXT(GLenum mode)
{
    return glbinding::currentBinding().glProvokingVertexEXT(mode);
}

void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return glbinding::currentBinding().glPushClientAttribDefaultEXT(mask);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::currentBinding().glPushDebugGroup(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glbinding::currentBinding().glPushGroupMarkerEXT(length, marker);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl40ext::GLbitfield>(glbinding::currentBinding().glQueryMatrixxOES(mantissa, exponent));
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return glbinding::currentBinding().glQueryObjectParameteruiAMD(target, id, pname, param);
}

void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return glbinding::currentBinding().glRasterPos2xOES(x, y);
}

void glRasterPos2xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glRasterPos2xvOES(coords);
}

void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::currentBinding().glRasterPos3xOES(x, y, z);
}

void glRasterPos3xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glRasterPos3xvOES(coords);
}

void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return glbinding::currentBinding().glRasterPos4xOES(x, y, z, w);
}

void glRasterPos4xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glRasterPos4xvOES(coords);
}

void glReadInstrumentsSGIX(GLint marker)
{
    return glbinding::currentBinding().glReadInstrumentsSGIX(marker);
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::currentBinding().glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return glbinding::currentBinding().glRectxOES(x1, y1, x2, y2);
}

void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return glbinding::currentBinding().glRectxvOES(v1, v2);
}

void glReferencePlaneSGIX(const GLdouble * equation)
{
    return glbinding::currentBinding().glReferencePlaneSGIX(equation);
}

void glReleaseShaderCompiler()
{
    return glbinding::currentBinding().glReleaseShaderCompiler();
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorageEXT(target, internalformat, width, height);
}

void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return glbinding::currentBinding().glReplacementCodePointerSUN(type, stride, pointer);
}

void glReplacementCodeubSUN(GLubyte code)
{
    return glbinding::currentBinding().glReplacementCodeubSUN(code);
}

void glReplacementCodeubvSUN(const GLubyte * code)
{
    return glbinding::currentBinding().glReplacementCodeubvSUN(code);
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void glReplacementCodeuiSUN(GLuint code)
{
    return glbinding::currentBinding().glReplacementCodeuiSUN(code);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return glbinding::currentBinding().glReplacementCodeuiVertex3fvSUN(rc, v);
}

void glReplacementCodeuivSUN(const GLuint * code)
{
    return glbinding::currentBinding().glReplacementCodeuivSUN(code);
}

void glReplacementCodeusSUN(GLushort code)
{
    return glbinding::currentBinding().glReplacementCodeusSUN(code);
}

void glReplacementCodeusvSUN(const GLushort * code)
{
    return glbinding::currentBinding().glReplacementCodeusvSUN(code);
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return glbinding::currentBinding().glRequestResidentProgramsNV(n, programs);
}

void glResetHistogram(GLenum target)
{
    return glbinding::currentBinding().glResetHistogram(target);
}

void glResetHistogramEXT(GLenum target)
{
    return glbinding::currentBinding().glResetHistogramEXT(target);
}

void glResetMinmax(GLenum target)
{
    return glbinding::currentBinding().glResetMinmax(target);
}

void glResetMinmaxEXT(GLenum target)
{
    return glbinding::currentBinding().glResetMinmaxEXT(target);
}

void glResizeBuffersMESA()
{
    return glbinding::currentBinding().glResizeBuffersMESA();
}

void glResumeTransformFeedbackNV()
{
    return glbinding::currentBinding().glResumeTransformFeedbackNV();
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::currentBinding().glRotatexOES(angle, x, y, z);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleCoverageARB(value, invert);
}

void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleCoverageOES(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return glbinding::currentBinding().glSampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleMaskEXT(value, invert);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return glbinding::currentBinding().glSampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return glbinding::currentBinding().glSampleMaskSGIS(value, invert);
}

void glSamplePatternEXT(GLenum pattern)
{
    return glbinding::currentBinding().glSamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
    return glbinding::currentBinding().glSamplePatternSGIS(pattern);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::currentBinding().glScalexOES(x, y, z);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::currentBinding().glScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glScissorIndexedv(index, v);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3bvEXT(v);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::currentBinding().glSecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return glbinding::currentBinding().glSecondaryColor3dvEXT(v);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::currentBinding().glSecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return glbinding::currentBinding().glSecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return glbinding::currentBinding().glSecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glSecondaryColor3hvNV(v);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return glbinding::currentBinding().glSecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
    return glbinding::currentBinding().glSecondaryColor3ivEXT(v);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::currentBinding().glSecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
    return glbinding::currentBinding().glSecondaryColor3svEXT(v);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::currentBinding().glSecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return glbinding::currentBinding().glSecondaryColor3ubvEXT(v);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::currentBinding().glSecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
    return glbinding::currentBinding().glSecondaryColor3uivEXT(v);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::currentBinding().glSecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
    return glbinding::currentBinding().glSecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glSecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glSecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glbinding::currentBinding().glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::currentBinding().glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return glbinding::currentBinding().glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
    return glbinding::currentBinding().glSetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glbinding::currentBinding().glSetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return glbinding::currentBinding().glSetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::currentBinding().glSetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return glbinding::currentBinding().glSetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return glbinding::currentBinding().glSetMultisamplefvAMD(pname, index, val);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::currentBinding().glShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return glbinding::currentBinding().glShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return glbinding::currentBinding().glShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return glbinding::currentBinding().glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return glbinding::currentBinding().glShaderSourceARB(shaderObj, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::currentBinding().glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return glbinding::currentBinding().glSharpenTexFuncSGIS(target, n, points);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glSpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glSpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glSpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glSpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
    return glbinding::currentBinding().glStartInstrumentsSGIX();
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return glbinding::currentBinding().glStencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glbinding::currentBinding().glStencilFillPathNV(path, fillMode, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return glbinding::currentBinding().glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::currentBinding().glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return glbinding::currentBinding().glStencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glbinding::currentBinding().glStencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glbinding::currentBinding().glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glbinding::currentBinding().glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glStopInstrumentsSGIX(GLint marker)
{
    return glbinding::currentBinding().glStopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return glbinding::currentBinding().glStringMarkerGREMEDY(len, string);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::currentBinding().glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
    return glbinding::currentBinding().glSyncTextureINTEL(texture);
}

void glTagSampleBufferSGIX()
{
    return glbinding::currentBinding().glTagSampleBufferSGIX();
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return glbinding::currentBinding().glTangent3bEXT(tx, ty, tz);
}

void glTangent3bvEXT(const GLbyte * v)
{
    return glbinding::currentBinding().glTangent3bvEXT(v);
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return glbinding::currentBinding().glTangent3dEXT(tx, ty, tz);
}

void glTangent3dvEXT(const GLdouble * v)
{
    return glbinding::currentBinding().glTangent3dvEXT(v);
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return glbinding::currentBinding().glTangent3fEXT(tx, ty, tz);
}

void glTangent3fvEXT(const GLfloat * v)
{
    return glbinding::currentBinding().glTangent3fvEXT(v);
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return glbinding::currentBinding().glTangent3iEXT(tx, ty, tz);
}

void glTangent3ivEXT(const GLint * v)
{
    return glbinding::currentBinding().glTangent3ivEXT(v);
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return glbinding::currentBinding().glTangent3sEXT(tx, ty, tz);
}

void glTangent3svEXT(const GLshort * v)
{
    return glbinding::currentBinding().glTangent3svEXT(v);
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glTangentPointerEXT(type, stride, pointer);
}

void glTbufferMask3DFX(GLuint mask)
{
    return glbinding::currentBinding().glTbufferMask3DFX(mask);
}

void glTessellationFactorAMD(GLfloat factor)
{
    return glbinding::currentBinding().glTessellationFactorAMD(factor);
}

void glTessellationModeAMD(GLenum mode)
{
    return glbinding::currentBinding().glTessellationModeAMD(mode);
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
    return glbinding::currentBinding().glTestFenceAPPLE(fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return glbinding::currentBinding().glTestFenceNV(fence);
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return glbinding::currentBinding().glTestObjectAPPLE(object, name);
}

void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glTexBufferARB(target, internalformat, buffer);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glTexBufferEXT(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glTexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return glbinding::currentBinding().glTexBumpParameterfvATI(pname, param);
}

void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return glbinding::currentBinding().glTexBumpParameterivATI(pname, param);
}

void glTexCoord1bOES(GLbyte s)
{
    return glbinding::currentBinding().glTexCoord1bOES(s);
}

void glTexCoord1bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glTexCoord1bvOES(coords);
}

void glTexCoord1hNV(GLhalfNV s)
{
    return glbinding::currentBinding().glTexCoord1hNV(s);
}

void glTexCoord1hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glTexCoord1hvNV(v);
}

void glTexCoord1xOES(GLfixed s)
{
    return glbinding::currentBinding().glTexCoord1xOES(s);
}

void glTexCoord1xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glTexCoord1xvOES(coords);
}

void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return glbinding::currentBinding().glTexCoord2bOES(s, t);
}

void glTexCoord2bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glTexCoord2bvOES(coords);
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord2fVertex3fvSUN(tc, v);
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return glbinding::currentBinding().glTexCoord2hNV(s, t);
}

void glTexCoord2hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glTexCoord2hvNV(v);
}

void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return glbinding::currentBinding().glTexCoord2xOES(s, t);
}

void glTexCoord2xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glTexCoord2xvOES(coords);
}

void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return glbinding::currentBinding().glTexCoord3bOES(s, t, r);
}

void glTexCoord3bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glTexCoord3bvOES(coords);
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return glbinding::currentBinding().glTexCoord3hNV(s, t, r);
}

void glTexCoord3hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glTexCoord3hvNV(v);
}

void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return glbinding::currentBinding().glTexCoord3xOES(s, t, r);
}

void glTexCoord3xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glTexCoord3xvOES(coords);
}

void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return glbinding::currentBinding().glTexCoord4bOES(s, t, r, q);
}

void glTexCoord4bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glTexCoord4bvOES(coords);
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return glbinding::currentBinding().glTexCoord4fVertex4fvSUN(tc, v);
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return glbinding::currentBinding().glTexCoord4hNV(s, t, r, q);
}

void glTexCoord4hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glTexCoord4hvNV(v);
}

void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return glbinding::currentBinding().glTexCoord4xOES(s, t, r, q);
}

void glTexCoord4xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glTexCoord4xvOES(coords);
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glTexCoordFormatNV(size, type, stride);
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::currentBinding().glTexCoordPointerEXT(size, type, stride, count, pointer);
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::currentBinding().glTexCoordPointervINTEL(size, type, pointer);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glTexEnvxOES(target, pname, param);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glTexEnvxvOES(target, pname, params);
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return glbinding::currentBinding().glTexFilterFuncSGIS(target, filter, n, weights);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glTexGenxOES(coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glTexGenxvOES(coord, pname, params);
}

void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::currentBinding().glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTexParameterIivEXT(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::currentBinding().glTexParameterIuivEXT(target, pname, params);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return glbinding::currentBinding().glTexParameterxOES(target, pname, param);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return glbinding::currentBinding().glTexParameterxvOES(target, pname, params);
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glTexRenderbufferNV(target, renderbuffer);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::currentBinding().glTexStorage1D(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glTexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::currentBinding().glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void glTextureBarrierNV()
{
    return glbinding::currentBinding().glTextureBarrierNV();
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::currentBinding().glTextureBufferEXT(texture, target, internalformat, buffer);
}

void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::currentBinding().glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::currentBinding().glTextureColorMaskSGIS(red, green, blue, alpha);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return glbinding::currentBinding().glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureLightEXT(GLenum pname)
{
    return glbinding::currentBinding().glTextureLightEXT(pname);
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return glbinding::currentBinding().glTextureMaterialEXT(face, mode);
}

void glTextureNormalEXT(GLenum mode)
{
    return glbinding::currentBinding().glTextureNormalEXT(mode);
}

void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return glbinding::currentBinding().glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTextureParameterIivEXT(texture, target, pname, params);
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::currentBinding().glTextureParameterIuivEXT(texture, target, pname, params);
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glTextureParameterfEXT(texture, target, pname, param);
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glTextureParameterfvEXT(texture, target, pname, params);
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glTextureParameteriEXT(texture, target, pname, param);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glTextureParameterivEXT(texture, target, pname, params);
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return glbinding::currentBinding().glTextureRangeAPPLE(target, length, pointer);
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return glbinding::currentBinding().glTextureRenderbufferEXT(texture, target, renderbuffer);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::currentBinding().glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::currentBinding().glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::currentBinding().glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::currentBinding().glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return glbinding::currentBinding().glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::currentBinding().glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::currentBinding().glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return glbinding::currentBinding().glTrackMatrixNV(target, address, matrix, transform);
}

void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return glbinding::currentBinding().glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return glbinding::currentBinding().glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::currentBinding().glTranslatexOES(x, y, z);
}

void glUniform1fARB(GLint location, GLfloat v0)
{
    return glbinding::currentBinding().glUniform1fARB(location, v0);
}

void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform1fvARB(location, count, value);
}

void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return glbinding::currentBinding().glUniform1i64NV(location, x);
}

void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glUniform1i64vNV(location, count, value);
}

void glUniform1iARB(GLint location, GLint v0)
{
    return glbinding::currentBinding().glUniform1iARB(location, v0);
}

void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform1ivARB(location, count, value);
}

void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return glbinding::currentBinding().glUniform1ui64NV(location, x);
}

void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glUniform1ui64vNV(location, count, value);
}

void glUniform1uiEXT(GLint location, GLuint v0)
{
    return glbinding::currentBinding().glUniform1uiEXT(location, v0);
}

void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform1uivEXT(location, count, value);
}

void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::currentBinding().glUniform2fARB(location, v0, v1);
}

void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform2fvARB(location, count, value);
}

void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return glbinding::currentBinding().glUniform2i64NV(location, x, y);
}

void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glUniform2i64vNV(location, count, value);
}

void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return glbinding::currentBinding().glUniform2iARB(location, v0, v1);
}

void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform2ivARB(location, count, value);
}

void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::currentBinding().glUniform2ui64NV(location, x, y);
}

void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glUniform2ui64vNV(location, count, value);
}

void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::currentBinding().glUniform2uiEXT(location, v0, v1);
}

void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform2uivEXT(location, count, value);
}

void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::currentBinding().glUniform3fARB(location, v0, v1, v2);
}

void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform3fvARB(location, count, value);
}

void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::currentBinding().glUniform3i64NV(location, x, y, z);
}

void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glUniform3i64vNV(location, count, value);
}

void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::currentBinding().glUniform3iARB(location, v0, v1, v2);
}

void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform3ivARB(location, count, value);
}

void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::currentBinding().glUniform3ui64NV(location, x, y, z);
}

void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glUniform3ui64vNV(location, count, value);
}

void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::currentBinding().glUniform3uiEXT(location, v0, v1, v2);
}

void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform3uivEXT(location, count, value);
}

void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::currentBinding().glUniform4fARB(location, v0, v1, v2, v3);
}

void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::currentBinding().glUniform4fvARB(location, count, value);
}

void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::currentBinding().glUniform4i64NV(location, x, y, z, w);
}

void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return glbinding::currentBinding().glUniform4i64vNV(location, count, value);
}

void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::currentBinding().glUniform4iARB(location, v0, v1, v2, v3);
}

void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::currentBinding().glUniform4ivARB(location, count, value);
}

void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::currentBinding().glUniform4ui64NV(location, x, y, z, w);
}

void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glUniform4ui64vNV(location, count, value);
}

void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::currentBinding().glUniform4uiEXT(location, v0, v1, v2, v3);
}

void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::currentBinding().glUniform4uivEXT(location, count, value);
}

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return glbinding::currentBinding().glUniformBufferEXT(program, location, buffer);
}

void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return glbinding::currentBinding().glUniformHandleui64ARB(location, value);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return glbinding::currentBinding().glUniformHandleui64NV(location, value);
}

void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::currentBinding().glUniformHandleui64vARB(location, count, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return glbinding::currentBinding().glUniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix2fvARB(location, count, transpose, value);
}

void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix3fvARB(location, count, transpose, value);
}

void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::currentBinding().glUniformMatrix4fvARB(location, count, transpose, value);
}

void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return glbinding::currentBinding().glUniformui64NV(location, value);
}

void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return glbinding::currentBinding().glUniformui64vNV(location, count, value);
}

void glUnlockArraysEXT()
{
    return glbinding::currentBinding().glUnlockArraysEXT();
}

GLboolean glUnmapBufferARB(GLenum target)
{
    return glbinding::currentBinding().glUnmapBufferARB(target);
}

GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return glbinding::currentBinding().glUnmapNamedBufferEXT(buffer);
}

void glUnmapObjectBufferATI(GLuint buffer)
{
    return glbinding::currentBinding().glUnmapObjectBufferATI(buffer);
}

void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return glbinding::currentBinding().glUnmapTexture2DINTEL(texture, level);
}

void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return glbinding::currentBinding().glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

void glUseProgramObjectARB(GLhandleARB programObj)
{
    return glbinding::currentBinding().glUseProgramObjectARB(programObj);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::currentBinding().glUseProgramStages(pipeline, stages, program);
}

void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return glbinding::currentBinding().glUseShaderProgramEXT(type, program);
}

void glVDPAUFiniNV()
{
    return glbinding::currentBinding().glVDPAUFiniNV();
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::currentBinding().glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return glbinding::currentBinding().glVDPAUInitNV(vdpDevice, getProcAddress);
}

GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::currentBinding().glVDPAUIsSurfaceNV(surface);
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::currentBinding().glVDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::currentBinding().glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return glbinding::currentBinding().glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return glbinding::currentBinding().glVDPAUSurfaceAccessNV(surface, access);
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return glbinding::currentBinding().glVDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return glbinding::currentBinding().glVDPAUUnregisterSurfaceNV(surface);
}

void glValidateProgramARB(GLhandleARB programObj)
{
    return glbinding::currentBinding().glValidateProgramARB(programObj);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::currentBinding().glValidateProgramPipeline(pipeline);
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::currentBinding().glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return glbinding::currentBinding().glVariantPointerEXT(id, type, stride, addr);
}

void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return glbinding::currentBinding().glVariantbvEXT(id, addr);
}

void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return glbinding::currentBinding().glVariantdvEXT(id, addr);
}

void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return glbinding::currentBinding().glVariantfvEXT(id, addr);
}

void glVariantivEXT(GLuint id, const GLint * addr)
{
    return glbinding::currentBinding().glVariantivEXT(id, addr);
}

void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return glbinding::currentBinding().glVariantsvEXT(id, addr);
}

void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return glbinding::currentBinding().glVariantubvEXT(id, addr);
}

void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return glbinding::currentBinding().glVariantuivEXT(id, addr);
}

void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return glbinding::currentBinding().glVariantusvEXT(id, addr);
}

void glVertex2bOES(GLbyte x, GLbyte y)
{
    return glbinding::currentBinding().glVertex2bOES(x, y);
}

void glVertex2bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glVertex2bvOES(coords);
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return glbinding::currentBinding().glVertex2hNV(x, y);
}

void glVertex2hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertex2hvNV(v);
}

void glVertex2xOES(GLfixed x)
{
    return glbinding::currentBinding().glVertex2xOES(x);
}

void glVertex2xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glVertex2xvOES(coords);
}

void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return glbinding::currentBinding().glVertex3bOES(x, y, z);
}

void glVertex3bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glVertex3bvOES(coords);
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::currentBinding().glVertex3hNV(x, y, z);
}

void glVertex3hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertex3hvNV(v);
}

void glVertex3xOES(GLfixed x, GLfixed y)
{
    return glbinding::currentBinding().glVertex3xOES(x, y);
}

void glVertex3xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glVertex3xvOES(coords);
}

void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return glbinding::currentBinding().glVertex4bOES(x, y, z, w);
}

void glVertex4bvOES(const GLbyte * coords)
{
    return glbinding::currentBinding().glVertex4bvOES(coords);
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::currentBinding().glVertex4hNV(x, y, z, w);
}

void glVertex4hvNV(const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertex4hvNV(v);
}

void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return glbinding::currentBinding().glVertex4xOES(x, y, z);
}

void glVertex4xvOES(const GLfixed * coords)
{
    return glbinding::currentBinding().glVertex4xvOES(coords);
}

void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::currentBinding().glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glVertexArrayParameteriAPPLE(pname, param);
}

void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return glbinding::currentBinding().glVertexArrayRangeAPPLE(length, pointer);
}

void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return glbinding::currentBinding().glVertexArrayRangeNV(length, pointer);
}

void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::currentBinding().glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return glbinding::currentBinding().glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttrib1dARB(index, x);
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttrib1dNV(index, x);
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib1dvARB(index, v);
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib1dvNV(index, v);
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return glbinding::currentBinding().glVertexAttrib1fARB(index, x);
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return glbinding::currentBinding().glVertexAttrib1fNV(index, x);
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib1fvARB(index, v);
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib1fvNV(index, v);
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return glbinding::currentBinding().glVertexAttrib1hNV(index, x);
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttrib1hvNV(index, v);
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return glbinding::currentBinding().glVertexAttrib1sARB(index, x);
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return glbinding::currentBinding().glVertexAttrib1sNV(index, x);
}

void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib1svARB(index, v);
}

void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib1svNV(index, v);
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttrib2dARB(index, x, y);
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttrib2dNV(index, x, y);
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib2dvARB(index, v);
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib2dvNV(index, v);
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertexAttrib2fARB(index, x, y);
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertexAttrib2fNV(index, x, y);
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib2fvARB(index, v);
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib2fvNV(index, v);
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return glbinding::currentBinding().glVertexAttrib2hNV(index, x, y);
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttrib2hvNV(index, v);
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertexAttrib2sARB(index, x, y);
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertexAttrib2sNV(index, x, y);
}

void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib2svARB(index, v);
}

void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib2svNV(index, v);
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttrib3dARB(index, x, y, z);
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttrib3dNV(index, x, y, z);
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib3dvARB(index, v);
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib3dvNV(index, v);
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertexAttrib3fARB(index, x, y, z);
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertexAttrib3fNV(index, x, y, z);
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib3fvARB(index, v);
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib3fvNV(index, v);
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return glbinding::currentBinding().glVertexAttrib3hNV(index, x, y, z);
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttrib3hvNV(index, v);
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertexAttrib3sARB(index, x, y, z);
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertexAttrib3sNV(index, x, y, z);
}

void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib3svARB(index, v);
}

void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib3svNV(index, v);
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4NbvARB(index, v);
}

void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4NivARB(index, v);
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4NsvARB(index, v);
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::currentBinding().glVertexAttrib4NubARB(index, x, y, z, w);
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4NubvARB(index, v);
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4NuivARB(index, v);
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4NusvARB(index, v);
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4bvARB(index, v);
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttrib4dARB(index, x, y, z, w);
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttrib4dNV(index, x, y, z, w);
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib4dvARB(index, v);
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttrib4dvNV(index, v);
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertexAttrib4fARB(index, x, y, z, w);
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertexAttrib4fNV(index, x, y, z, w);
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib4fvARB(index, v);
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttrib4fvNV(index, v);
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return glbinding::currentBinding().glVertexAttrib4hNV(index, x, y, z, w);
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttrib4hvNV(index, v);
}

void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttrib4ivARB(index, v);
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertexAttrib4sARB(index, x, y, z, w);
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertexAttrib4sNV(index, x, y, z, w);
}

void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4svARB(index, v);
}

void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttrib4svNV(index, v);
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::currentBinding().glVertexAttrib4ubNV(index, x, y, z, w);
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4ubvARB(index, v);
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttrib4ubvNV(index, v);
}

void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttrib4uivARB(index, v);
}

void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttrib4usvARB(index, v);
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return glbinding::currentBinding().glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::currentBinding().glVertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return glbinding::currentBinding().glVertexAttribDivisorARB(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return glbinding::currentBinding().glVertexAttribFormatNV(index, size, type, normalized, stride);
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return glbinding::currentBinding().glVertexAttribI1iEXT(index, x);
}

void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI1ivEXT(index, v);
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return glbinding::currentBinding().glVertexAttribI1uiEXT(index, x);
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI1uivEXT(index, v);
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return glbinding::currentBinding().glVertexAttribI2iEXT(index, x, y);
}

void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI2ivEXT(index, v);
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return glbinding::currentBinding().glVertexAttribI2uiEXT(index, x, y);
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI2uivEXT(index, v);
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertexAttribI3iEXT(index, x, y, z);
}

void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI3ivEXT(index, v);
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::currentBinding().glVertexAttribI3uiEXT(index, x, y, z);
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI3uivEXT(index, v);
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4bvEXT(index, v);
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertexAttribI4iEXT(index, x, y, z, w);
}

void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return glbinding::currentBinding().glVertexAttribI4ivEXT(index, v);
}

void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribI4svEXT(index, v);
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttribI4ubvEXT(index, v);
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::currentBinding().glVertexAttribI4uiEXT(index, x, y, z, w);
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return glbinding::currentBinding().glVertexAttribI4uivEXT(index, v);
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return glbinding::currentBinding().glVertexAttribI4usvEXT(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glVertexAttribIFormatNV(index, size, type, stride);
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttribL1d(index, x);
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return glbinding::currentBinding().glVertexAttribL1dEXT(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL1dv(index, v);
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL1dvEXT(index, v);
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return glbinding::currentBinding().glVertexAttribL1i64NV(index, x);
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL1i64vNV(index, v);
}

void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return glbinding::currentBinding().glVertexAttribL1ui64ARB(index, x);
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return glbinding::currentBinding().glVertexAttribL1ui64NV(index, x);
}

void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL1ui64vARB(index, v);
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL1ui64vNV(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttribL2d(index, x, y);
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexAttribL2dEXT(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL2dv(index, v);
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL2dvEXT(index, v);
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return glbinding::currentBinding().glVertexAttribL2i64NV(index, x, y);
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL2i64vNV(index, v);
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return glbinding::currentBinding().glVertexAttribL2ui64NV(index, x, y);
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL2ui64vNV(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexAttribL3dEXT(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL3dv(index, v);
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL3dvEXT(index, v);
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return glbinding::currentBinding().glVertexAttribL3i64NV(index, x, y, z);
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL3i64vNV(index, v);
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return glbinding::currentBinding().glVertexAttribL3ui64NV(index, x, y, z);
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL3ui64vNV(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexAttribL4dEXT(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL4dv(index, v);
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribL4dvEXT(index, v);
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return glbinding::currentBinding().glVertexAttribL4i64NV(index, x, y, z, w);
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL4i64vNV(index, v);
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return glbinding::currentBinding().glVertexAttribL4ui64NV(index, x, y, z, w);
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return glbinding::currentBinding().glVertexAttribL4ui64vNV(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::currentBinding().glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glVertexAttribLFormatNV(index, size, type, stride);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return glbinding::currentBinding().glVertexAttribParameteriAMD(index, pname, param);
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribs1dvNV(index, count, v);
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttribs1fvNV(index, count, v);
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttribs1hvNV(index, n, v);
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribs1svNV(index, count, v);
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribs2dvNV(index, count, v);
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttribs2fvNV(index, count, v);
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttribs2hvNV(index, n, v);
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribs2svNV(index, count, v);
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribs3dvNV(index, count, v);
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttribs3fvNV(index, count, v);
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttribs3hvNV(index, n, v);
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribs3svNV(index, count, v);
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return glbinding::currentBinding().glVertexAttribs4dvNV(index, count, v);
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glVertexAttribs4fvNV(index, count, v);
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return glbinding::currentBinding().glVertexAttribs4hvNV(index, n, v);
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return glbinding::currentBinding().glVertexAttribs4svNV(index, count, v);
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return glbinding::currentBinding().glVertexAttribs4ubvNV(index, count, v);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::currentBinding().glVertexBindingDivisor(bindingindex, divisor);
}

void glVertexBlendARB(GLint count)
{
    return glbinding::currentBinding().glVertexBlendARB(count);
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return glbinding::currentBinding().glVertexBlendEnvfATI(pname, param);
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return glbinding::currentBinding().glVertexBlendEnviATI(pname, param);
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return glbinding::currentBinding().glVertexFormatNV(size, type, stride);
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return glbinding::currentBinding().glVertexPointerEXT(size, type, stride, count, pointer);
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return glbinding::currentBinding().glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return glbinding::currentBinding().glVertexPointervINTEL(size, type, pointer);
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return glbinding::currentBinding().glVertexStream1dATI(stream, x);
}

void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::currentBinding().glVertexStream1dvATI(stream, coords);
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return glbinding::currentBinding().glVertexStream1fATI(stream, x);
}

void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::currentBinding().glVertexStream1fvATI(stream, coords);
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
    return glbinding::currentBinding().glVertexStream1iATI(stream, x);
}

void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::currentBinding().glVertexStream1ivATI(stream, coords);
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return glbinding::currentBinding().glVertexStream1sATI(stream, x);
}

void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::currentBinding().glVertexStream1svATI(stream, coords);
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glVertexStream2dATI(stream, x, y);
}

void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::currentBinding().glVertexStream2dvATI(stream, coords);
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glVertexStream2fATI(stream, x, y);
}

void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::currentBinding().glVertexStream2fvATI(stream, coords);
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return glbinding::currentBinding().glVertexStream2iATI(stream, x, y);
}

void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::currentBinding().glVertexStream2ivATI(stream, coords);
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return glbinding::currentBinding().glVertexStream2sATI(stream, x, y);
}

void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::currentBinding().glVertexStream2svATI(stream, coords);
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glVertexStream3dATI(stream, x, y, z);
}

void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::currentBinding().glVertexStream3dvATI(stream, coords);
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glVertexStream3fATI(stream, x, y, z);
}

void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::currentBinding().glVertexStream3fvATI(stream, coords);
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glVertexStream3iATI(stream, x, y, z);
}

void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::currentBinding().glVertexStream3ivATI(stream, coords);
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glVertexStream3sATI(stream, x, y, z);
}

void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::currentBinding().glVertexStream3svATI(stream, coords);
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glVertexStream4dATI(stream, x, y, z, w);
}

void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return glbinding::currentBinding().glVertexStream4dvATI(stream, coords);
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glVertexStream4fATI(stream, x, y, z, w);
}

void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return glbinding::currentBinding().glVertexStream4fvATI(stream, coords);
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glVertexStream4iATI(stream, x, y, z, w);
}

void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return glbinding::currentBinding().glVertexStream4ivATI(stream, coords);
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glVertexStream4sATI(stream, x, y, z, w);
}

void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return glbinding::currentBinding().glVertexStream4svATI(stream, coords);
}

void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glVertexWeightPointerEXT(size, type, stride, pointer);
}

void glVertexWeightfEXT(GLfloat weight)
{
    return glbinding::currentBinding().glVertexWeightfEXT(weight);
}

void glVertexWeightfvEXT(const GLfloat * weight)
{
    return glbinding::currentBinding().glVertexWeightfvEXT(weight);
}

void glVertexWeighthNV(GLhalfNV weight)
{
    return glbinding::currentBinding().glVertexWeighthNV(weight);
}

void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return glbinding::currentBinding().glVertexWeighthvNV(weight);
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl40ext::GLenum>(glbinding::currentBinding().glVideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return glbinding::currentBinding().glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return glbinding::currentBinding().glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return glbinding::currentBinding().glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::currentBinding().glViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::currentBinding().glViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::currentBinding().glViewportIndexedfv(index, v);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glbinding::currentBinding().glWeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::currentBinding().glWeightPointerARB(size, type, stride, pointer);
}

void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return glbinding::currentBinding().glWeightbvARB(size, weights);
}

void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return glbinding::currentBinding().glWeightdvARB(size, weights);
}

void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return glbinding::currentBinding().glWeightfvARB(size, weights);
}

void glWeightivARB(GLint size, const GLint * weights)
{
    return glbinding::currentBinding().glWeightivARB(size, weights);
}

void glWeightsvARB(GLint size, const GLshort * weights)
{
    return glbinding::currentBinding().glWeightsvARB(size, weights);
}

void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return glbinding::currentBinding().glWeightubvARB(size, weights);
}

void glWeightuivARB(GLint size, const GLuint * weights)
{
    return glbinding::currentBinding().glWeightuivARB(size, weights);
}

void glWeightusvARB(GLint size, const GLushort * weights)
{
    return glbinding::currentBinding().glWeightusvARB(size, weights);
}

void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glWindowPos2dARB(x, y);
}

void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return glbinding::currentBinding().glWindowPos2dMESA(x, y);
}

void glWindowPos2dvARB(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos2dvARB(v);
}

void glWindowPos2dvMESA(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos2dvMESA(v);
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glWindowPos2fARB(x, y);
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return glbinding::currentBinding().glWindowPos2fMESA(x, y);
}

void glWindowPos2fvARB(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos2fvARB(v);
}

void glWindowPos2fvMESA(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos2fvMESA(v);
}

void glWindowPos2iARB(GLint x, GLint y)
{
    return glbinding::currentBinding().glWindowPos2iARB(x, y);
}

void glWindowPos2iMESA(GLint x, GLint y)
{
    return glbinding::currentBinding().glWindowPos2iMESA(x, y);
}

void glWindowPos2ivARB(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos2ivARB(v);
}

void glWindowPos2ivMESA(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos2ivMESA(v);
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glWindowPos2sARB(x, y);
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return glbinding::currentBinding().glWindowPos2sMESA(x, y);
}

void glWindowPos2svARB(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos2svARB(v);
}

void glWindowPos2svMESA(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos2svMESA(v);
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glWindowPos3dARB(x, y, z);
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::currentBinding().glWindowPos3dMESA(x, y, z);
}

void glWindowPos3dvARB(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos3dvARB(v);
}

void glWindowPos3dvMESA(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos3dvMESA(v);
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glWindowPos3fARB(x, y, z);
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::currentBinding().glWindowPos3fMESA(x, y, z);
}

void glWindowPos3fvARB(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos3fvARB(v);
}

void glWindowPos3fvMESA(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos3fvMESA(v);
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glWindowPos3iARB(x, y, z);
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return glbinding::currentBinding().glWindowPos3iMESA(x, y, z);
}

void glWindowPos3ivARB(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos3ivARB(v);
}

void glWindowPos3ivMESA(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos3ivMESA(v);
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glWindowPos3sARB(x, y, z);
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return glbinding::currentBinding().glWindowPos3sMESA(x, y, z);
}

void glWindowPos3svARB(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos3svARB(v);
}

void glWindowPos3svMESA(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos3svMESA(v);
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::currentBinding().glWindowPos4dMESA(x, y, z, w);
}

void glWindowPos4dvMESA(const GLdouble * v)
{
    return glbinding::currentBinding().glWindowPos4dvMESA(v);
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::currentBinding().glWindowPos4fMESA(x, y, z, w);
}

void glWindowPos4fvMESA(const GLfloat * v)
{
    return glbinding::currentBinding().glWindowPos4fvMESA(v);
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::currentBinding().glWindowPos4iMESA(x, y, z, w);
}

void glWindowPos4ivMESA(const GLint * v)
{
    return glbinding::currentBinding().glWindowPos4ivMESA(v);
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::currentBinding().glWindowPos4sMESA(x, y, z, w);
}

void glWindowPos4svMESA(const GLshort * v)
{
    return glbinding::currentBinding().glWindowPos4svMESA(v);
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return glbinding::currentBinding().glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl40ext
