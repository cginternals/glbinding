#include <glbinding/gl/functions32ext.h>

#include <glbinding/gl/gl.h>


namespace gl32ext
{

void glAccumxOES(GLenum op, GLfixed value)
{
    return gl::glAccumxOES(op, value);
}

void glActiveProgramEXT(GLuint program)
{
    return gl::glActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return gl::glActiveShaderProgram(pipeline, program);
}

void glActiveStencilFaceEXT(GLenum face)
{
    return gl::glActiveStencilFaceEXT(face);
}

void glActiveTextureARB(GLenum texture)
{
    return gl::glActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
    return gl::glActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return gl::glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return gl::glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return gl::glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
    return gl::glAlphaFuncxOES(func, ref);
}

void glApplyTextureEXT(GLenum mode)
{
    return gl::glApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
    return gl::glAreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return gl::glAreTexturesResidentEXT(n, textures, residences);
}

void glArrayElementEXT(GLint i)
{
    return gl::glArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glArrayObjectATI(array, size, type, stride, buffer, offset);
}

void glAsyncMarkerSGIX(GLuint marker)
{
    return gl::glAsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
    return gl::glAttachObjectARB(containerObj, obj);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return gl::glBeginConditionalRenderNV(id, mode);
}

void glBeginConditionalRenderNVX(GLuint id)
{
    return gl::glBeginConditionalRenderNVX(id);
}

void glBeginFragmentShaderATI()
{
    return gl::glBeginFragmentShaderATI();
}

void glBeginOcclusionQueryNV(GLuint id)
{
    return gl::glBeginOcclusionQueryNV(id);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return gl::glBeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return gl::glBeginPerfQueryINTEL(queryHandle);
}

void glBeginQueryARB(GLenum target, GLuint id)
{
    return gl::glBeginQueryARB(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return gl::glBeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedbackEXT(primitiveMode);
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
    return gl::glBeginTransformFeedbackNV(primitiveMode);
}

void glBeginVertexShaderEXT()
{
    return gl::glBeginVertexShaderEXT();
}

void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
    return gl::glBeginVideoCaptureNV(video_capture_slot);
}

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
    return gl::glBindAttribLocationARB(programObj, index, name);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
    return gl::glBindBufferARB(target, buffer);
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBaseEXT(target, index, buffer);
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
    return gl::glBindBufferBaseNV(target, index, buffer);
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return gl::glBindBufferOffsetEXT(target, index, buffer, offset);
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
    return gl::glBindBufferOffsetNV(target, index, buffer, offset);
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glBindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return gl::glBindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return gl::glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return gl::glBindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return gl::glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFragmentShaderATI(GLuint id)
{
    return gl::glBindFragmentShaderATI(id);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
    return gl::glBindFramebufferEXT(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return gl::glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
    return gl::glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return gl::glBindImageTextures(first, count, textures);
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
    return gl::glBindLightParameterEXT(light, value);
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
    return gl::glBindMaterialParameterEXT(face, value);
}

void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
    return gl::glBindMultiTextureEXT(texunit, target, texture);
}

GLuint glBindParameterEXT(GLenum value)
{
    return gl::glBindParameterEXT(value);
}

void glBindProgramARB(GLenum target, GLuint program)
{
    return gl::glBindProgramARB(target, program);
}

void glBindProgramNV(GLenum target, GLuint id)
{
    return gl::glBindProgramNV(target, id);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return gl::glBindProgramPipeline(pipeline);
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
    return gl::glBindRenderbufferEXT(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return gl::glBindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return gl::glBindSamplers(first, count, samplers);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
    return gl::glBindTexGenParameterEXT(unit, coord, value);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
    return gl::glBindTextureEXT(target, texture);
}

void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return gl::glBindTextureUnit(unit, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
    return gl::glBindTextureUnitParameterEXT(unit, value);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return gl::glBindTextures(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return gl::glBindTransformFeedback(target, id);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
    return gl::glBindTransformFeedbackNV(target, id);
}

void glBindVertexArrayAPPLE(GLuint array)
{
    return gl::glBindVertexArrayAPPLE(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gl::glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return gl::glBindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBindVertexShaderEXT(GLuint id)
{
    return gl::glBindVertexShaderEXT(id);
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
    return gl::glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
    return gl::glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
    return gl::glBinormal3bEXT(bx, by, bz);
}

void glBinormal3bvEXT(const GLbyte * v)
{
    return gl::glBinormal3bvEXT(v);
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
    return gl::glBinormal3dEXT(bx, by, bz);
}

void glBinormal3dvEXT(const GLdouble * v)
{
    return gl::glBinormal3dvEXT(v);
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
    return gl::glBinormal3fEXT(bx, by, bz);
}

void glBinormal3fvEXT(const GLfloat * v)
{
    return gl::glBinormal3fvEXT(v);
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
    return gl::glBinormal3iEXT(bx, by, bz);
}

void glBinormal3ivEXT(const GLint * v)
{
    return gl::glBinormal3ivEXT(v);
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
    return gl::glBinormal3sEXT(bx, by, bz);
}

void glBinormal3svEXT(const GLshort * v)
{
    return gl::glBinormal3svEXT(v);
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glBinormalPointerEXT(type, stride, pointer);
}

void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
    return gl::glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendBarrierKHR()
{
    return gl::glBlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return gl::glBlendBarrierNV();
}

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return gl::glBlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glBlendColorxOES(red, green, blue, alpha);
}

void glBlendEquationEXT(GLenum mode)
{
    return gl::glBlendEquationEXT(mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return gl::glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationi(buf, mode);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
    return gl::glBlendEquationiARB(buf, mode);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return gl::glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return gl::glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFunci(buf, src, dst);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
    return gl::glBlendFunciARB(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return gl::glBlendParameteriNV(pname, value);
}

void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return gl::glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
    return gl::glBufferAddressRangeNV(pname, index, address, length);
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
    return gl::glBufferDataARB(target, size, data, usage);
}

void glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return gl::glBufferPageCommitmentARB(target, offset, size, commit);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
    return gl::glBufferParameteriAPPLE(target, pname, param);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return gl::glBufferStorage(target, size, data, flags);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
    return gl::glBufferSubDataARB(target, offset, size, data);
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
    return static_cast<gl32ext::GLenum>(gl::glCheckFramebufferStatusEXT(target));
}

GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
    return static_cast<gl32ext::GLenum>(gl::glCheckNamedFramebufferStatus(framebuffer, target));
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
    return static_cast<gl32ext::GLenum>(gl::glCheckNamedFramebufferStatusEXT(framebuffer, target));
}

void glClampColorARB(GLenum target, GLenum clamp)
{
    return gl::glClampColorARB(target, clamp);
}

void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glClearAccumxOES(red, green, blue, alpha);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return gl::glClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return gl::glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
    return gl::glClearColorIiEXT(red, green, blue, alpha);
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return gl::glClearColorIuiEXT(red, green, blue, alpha);
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glClearColorxOES(red, green, blue, alpha);
}

void glClearDepthdNV(GLdouble depth)
{
    return gl::glClearDepthdNV(depth);
}

void glClearDepthf(GLfloat d)
{
    return gl::glClearDepthf(d);
}

void glClearDepthfOES(GLclampf depth)
{
    return gl::glClearDepthfOES(depth);
}

void glClearDepthxOES(GLfixed depth)
{
    return gl::glClearDepthxOES(depth);
}

void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferData(buffer, internalformat, format, type, data);
}

void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return gl::glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil)
{
    return gl::glClearNamedFramebufferfi(framebuffer, buffer, depth, stencil);
}

void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return gl::glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return gl::glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return gl::glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return gl::glClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return gl::glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glClientActiveTextureARB(GLenum texture)
{
    return gl::glClientActiveTextureARB(texture);
}

void glClientActiveVertexStreamATI(GLenum stream)
{
    return gl::glClientActiveVertexStreamATI(stream);
}

void glClientAttribDefaultEXT(ClientAttribMask mask)
{
    return gl::glClientAttribDefaultEXT(mask);
}

void glClipControl(GLenum origin, GLenum depth)
{
    return gl::glClipControl(origin, depth);
}

void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
    return gl::glClipPlanefOES(plane, equation);
}

void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
    return gl::glClipPlanexOES(plane, equation);
}

void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor3fVertex3fSUN(r, g, b, x, y, z);
}

void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
    return gl::glColor3fVertex3fvSUN(c, v);
}

void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return gl::glColor3hNV(red, green, blue);
}

void glColor3hvNV(const GLhalfNV * v)
{
    return gl::glColor3hvNV(v);
}

void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
    return gl::glColor3xOES(red, green, blue);
}

void glColor3xvOES(const GLfixed * components)
{
    return gl::glColor3xvOES(components);
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glColor4fNormal3fVertex3fvSUN(c, n, v);
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
    return gl::glColor4hNV(red, green, blue, alpha);
}

void glColor4hvNV(const GLhalfNV * v)
{
    return gl::glColor4hvNV(v);
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
    return gl::glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
    return gl::glColor4ubVertex2fvSUN(c, v);
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
    return gl::glColor4ubVertex3fvSUN(c, v);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
    return gl::glColor4xOES(red, green, blue, alpha);
}

void glColor4xvOES(const GLfixed * components)
{
    return gl::glColor4xvOES(components);
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glColorFormatNV(size, type, stride);
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
    return gl::glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
    return gl::glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
    return gl::glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return gl::glColorMaskIndexedEXT(index, r, g, b, a);
}

void glColorP3ui(GLenum type, GLuint color)
{
    return gl::glColorP3ui(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP3uiv(type, color);
}

void glColorP4ui(GLenum type, GLuint color)
{
    return gl::glColorP4ui(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color)
{
    return gl::glColorP4uiv(type, color);
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glColorPointerEXT(size, type, stride, count, pointer);
}

void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glColorPointervINTEL(size, type, pointer);
}

void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return gl::glColorSubTable(target, start, count, format, type, data);
}

void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
    return gl::glColorSubTableEXT(target, start, count, format, type, data);
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTable(target, internalformat, width, format, type, table);
}

void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTableEXT(target, internalFormat, width, format, type, table);
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glColorTableParameterfv(target, pname, params);
}

void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glColorTableParameterfvSGI(target, pname, params);
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glColorTableParameteriv(target, pname, params);
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glColorTableParameterivSGI(target, pname, params);
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
    return gl::glColorTableSGI(target, internalformat, width, format, type, table);
}

void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return gl::glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
    return gl::glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
    return gl::glCombinerParameterfNV(pname, param);
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
    return gl::glCombinerParameterfvNV(pname, params);
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
    return gl::glCombinerParameteriNV(pname, param);
}

void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
    return gl::glCombinerParameterivNV(pname, params);
}

void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
    return gl::glCombinerStageParameterfvNV(stage, pname, params);
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
    return gl::glCompileShaderARB(shaderObj);
}

void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
    return gl::glCompileShaderIncludeARB(shader, count, path, length);
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return gl::glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
    return gl::glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
    return gl::glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
    return gl::glConvolutionParameterf(target, pname, params);
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
    return gl::glConvolutionParameterfEXT(target, pname, params);
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glConvolutionParameterfv(target, pname, params);
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glConvolutionParameterfvEXT(target, pname, params);
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
    return gl::glConvolutionParameteri(target, pname, params);
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
    return gl::glConvolutionParameteriEXT(target, pname, params);
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glConvolutionParameteriv(target, pname, params);
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glConvolutionParameterivEXT(target, pname, params);
}

void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glConvolutionParameterxOES(target, pname, param);
}

void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glConvolutionParameterxvOES(target, pname, params);
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorSubTable(target, start, x, y, width);
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorSubTableEXT(target, start, x, y, width);
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorTable(target, internalformat, x, y, width);
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyColorTableSGI(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return gl::glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return gl::glCopyPathNV(resultPath, srcPath);
}

void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return gl::glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return gl::glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return gl::glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return gl::glCoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return gl::glCoverStrokePathNV(path, coverMode);
}

void glCoverageModulationNV(GLenum components)
{
    return gl::glCoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return gl::glCoverageModulationTableNV(n, v);
}

void glCreateBuffers(GLsizei n, GLuint * buffers)
{
    return gl::glCreateBuffers(n, buffers);
}

void glCreateFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return gl::glCreateFramebuffers(n, framebuffers);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return gl::glCreatePerfQueryINTEL(queryId, queryHandle);
}

GLhandleARB glCreateProgramObjectARB()
{
    return gl::glCreateProgramObjectARB();
}

void glCreateProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return gl::glCreateProgramPipelines(n, pipelines);
}

void glCreateQueries(GLenum target, GLsizei n, GLuint * ids)
{
    return gl::glCreateQueries(target, n, ids);
}

void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return gl::glCreateRenderbuffers(n, renderbuffers);
}

void glCreateSamplers(GLsizei n, GLuint * samplers)
{
    return gl::glCreateSamplers(n, samplers);
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
    return gl::glCreateShaderObjectARB(shaderType);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return gl::glCreateShaderProgramEXT(type, string);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return gl::glCreateShaderProgramv(type, count, strings);
}

GLsync glCreateSyncFromCLeventARB(_cl_context * context, _cl_event * event, UnusedMask flags)
{
    return gl::glCreateSyncFromCLeventARB(context, event, flags);
}

void glCreateTextures(GLenum target, GLsizei n, GLuint * textures)
{
    return gl::glCreateTextures(target, n, textures);
}

void glCreateTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return gl::glCreateTransformFeedbacks(n, ids);
}

void glCreateVertexArrays(GLsizei n, GLuint * arrays)
{
    return gl::glCreateVertexArrays(n, arrays);
}

void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
    return gl::glCullParameterdvEXT(pname, params);
}

void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
    return gl::glCullParameterfvEXT(pname, params);
}

void glCurrentPaletteMatrixARB(GLint index)
{
    return gl::glCurrentPaletteMatrixARB(index);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return gl::glDebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
    return gl::glDebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
    return gl::glDebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return gl::glDebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return gl::glDebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDeformSGIX(FfdMaskSGIX mask)
{
    return gl::glDeformSGIX(mask);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
    return gl::glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
    return gl::glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
    return gl::glDeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
    return gl::glDeleteBuffersARB(n, buffers);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
    return gl::glDeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return gl::glDeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id)
{
    return gl::glDeleteFragmentShaderATI(id);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
    return gl::glDeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
    return gl::glDeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
    return gl::glDeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj)
{
    return gl::glDeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteOcclusionQueriesNV(n, ids);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return gl::glDeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gl::glDeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return gl::glDeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return gl::glDeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
    return gl::glDeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
    return gl::glDeleteProgramsNV(n, programs);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteQueriesARB(n, ids);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
    return gl::glDeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return gl::glDeleteSamplers(count, samplers);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
    return gl::glDeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteTransformFeedbacks(n, ids);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
    return gl::glDeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
    return gl::glDeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id)
{
    return gl::glDeleteVertexShaderEXT(id);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
    return gl::glDepthBoundsEXT(zmin, zmax);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
    return gl::glDepthBoundsdNV(zmin, zmax);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return gl::glDepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return gl::glDepthRangeIndexed(index, n, f);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
    return gl::glDepthRangedNV(zNear, zFar);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return gl::glDepthRangef(n, f);
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
    return gl::glDepthRangefOES(n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
    return gl::glDepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
    return gl::glDetachObjectARB(containerObj, attachedObj);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return gl::glDetailTexFuncSGIS(target, n, points);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return gl::glDisableClientStateIndexedEXT(array, index);
}

void glDisableClientStateiEXT(GLenum array, GLuint index)
{
    return gl::glDisableClientStateiEXT(array, index);
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
    return gl::glDisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id)
{
    return gl::glDisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return gl::glDisableVertexArrayAttrib(vaobj, index);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return gl::glDisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return gl::glDisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return gl::glDisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArrayARB(GLuint index)
{
    return gl::glDisableVertexAttribArrayARB(index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return gl::glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
    return gl::glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return gl::glDispatchComputeIndirect(indirect);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawArraysEXT(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return gl::glDrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return gl::glDrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return gl::glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return gl::glDrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
    return gl::glDrawBuffersATI(n, bufs);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
    return gl::glDrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
    return gl::glDrawElementArrayATI(mode, count);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return gl::glDrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gl::glDrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return gl::glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return gl::glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return gl::glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
    return gl::glDrawMeshArraysSUN(mode, first, count, width);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
    return gl::glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
    return gl::glDrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return gl::glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return gl::glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return gl::glDrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return gl::glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
    return gl::glDrawTransformFeedbackNV(mode, id);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return gl::glDrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return gl::glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glEdgeFlagFormatNV(GLsizei stride)
{
    return gl::glEdgeFlagFormatNV(stride);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
    return gl::glEdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
    return gl::glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glElementPointerAPPLE(GLenum type, const void * pointer)
{
    return gl::glElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer)
{
    return gl::glElementPointerATI(type, pointer);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
    return gl::glEnableClientStateIndexedEXT(array, index);
}

void glEnableClientStateiEXT(GLenum array, GLuint index)
{
    return gl::glEnableClientStateiEXT(array, index);
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
    return gl::glEnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id)
{
    return gl::glEnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return gl::glEnableVertexArrayAttrib(vaobj, index);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
    return gl::glEnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
    return gl::glEnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
    return gl::glEnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArrayARB(GLuint index)
{
    return gl::glEnableVertexAttribArrayARB(index);
}

void glEndConditionalRenderNV()
{
    return gl::glEndConditionalRenderNV();
}

void glEndConditionalRenderNVX()
{
    return gl::glEndConditionalRenderNVX();
}

void glEndFragmentShaderATI()
{
    return gl::glEndFragmentShaderATI();
}

void glEndOcclusionQueryNV()
{
    return gl::glEndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return gl::glEndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return gl::glEndPerfQueryINTEL(queryHandle);
}

void glEndQueryARB(GLenum target)
{
    return gl::glEndQueryARB(target);
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
    return gl::glEndQueryIndexed(target, index);
}

void glEndTransformFeedbackEXT()
{
    return gl::glEndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV()
{
    return gl::glEndTransformFeedbackNV();
}

void glEndVertexShaderEXT()
{
    return gl::glEndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
    return gl::glEndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1xOES(GLfixed u)
{
    return gl::glEvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords)
{
    return gl::glEvalCoord1xvOES(coords);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
    return gl::glEvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords)
{
    return gl::glEvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode)
{
    return gl::glEvalMapsNV(target, mode);
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
    return gl::glExecuteProgramNV(target, id, params);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return gl::glExtractComponentEXT(res, src, num);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
    return gl::glFeedbackBufferxOES(n, type, buffer);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
    return gl::glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

GLint glFinishAsyncSGIX(GLuint * markerp)
{
    return gl::glFinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence)
{
    return gl::glFinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence)
{
    return gl::glFinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
    return gl::glFinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX()
{
    return gl::glFinishTextureSUNX();
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
    return gl::glFlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedNamedBufferRange(buffer, offset, length);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return gl::glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target)
{
    return gl::glFlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX()
{
    return gl::glFlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target)
{
    return gl::glFlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return gl::glFlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV()
{
    return gl::glFlushVertexArrayRangeNV();
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
    return gl::glFogCoordFormatNV(type, stride);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glFogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogCoorddEXT(GLdouble coord)
{
    return gl::glFogCoorddEXT(coord);
}

void glFogCoorddvEXT(const GLdouble * coord)
{
    return gl::glFogCoorddvEXT(coord);
}

void glFogCoordfEXT(GLfloat coord)
{
    return gl::glFogCoordfEXT(coord);
}

void glFogCoordfvEXT(const GLfloat * coord)
{
    return gl::glFogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog)
{
    return gl::glFogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog)
{
    return gl::glFogCoordhvNV(fog);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
    return gl::glFogFuncSGIS(n, points);
}

void glFogxOES(GLenum pname, GLfixed param)
{
    return gl::glFogxOES(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param)
{
    return gl::glFogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
    return gl::glFragmentColorMaterialSGIX(face, mode);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return gl::glFragmentCoverageColorNV(color);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
    return gl::glFragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
    return gl::glFragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
    return gl::glFragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
    return gl::glFragmentLightModelivSGIX(pname, params);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
    return gl::glFragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
    return gl::glFragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
    return gl::glFragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
    return gl::glFragmentLightivSGIX(light, pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
    return gl::glFragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
    return gl::glFragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
    return gl::glFragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
    return gl::glFragmentMaterialivSGIX(face, pname, params);
}

void glFrameTerminatorGREMEDY()
{
    return gl::glFrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor)
{
    return gl::glFrameZoomSGIX(factor);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
    return gl::glFramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return gl::glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return gl::glFramebufferParameteri(target, pname, param);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
    return gl::glFramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return gl::glFramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glFramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFreeObjectBufferATI(GLuint buffer)
{
    return gl::glFreeObjectBufferATI(buffer);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return gl::glFrustumfOES(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return gl::glFrustumxOES(l, r, b, t, n, f);
}

GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
    return gl::glGenAsyncMarkersSGIX(range);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
    return gl::glGenBuffersARB(n, buffers);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
    return gl::glGenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return gl::glGenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
    return gl::glGenFragmentShadersATI(range);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
    return gl::glGenFramebuffersEXT(n, framebuffers);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
    return gl::glGenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
    return gl::glGenOcclusionQueriesNV(n, ids);
}

GLuint glGenPathsNV(GLsizei range)
{
    return gl::glGenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return gl::glGenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return gl::glGenProgramPipelines(n, pipelines);
}

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
    return gl::glGenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
    return gl::glGenProgramsNV(n, programs);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
    return gl::glGenQueriesARB(n, ids);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
    return gl::glGenRenderbuffersEXT(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return gl::glGenSamplers(count, samplers);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
    return gl::glGenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
    return gl::glGenTexturesEXT(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return gl::glGenTransformFeedbacks(n, ids);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
    return gl::glGenTransformFeedbacksNV(n, ids);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
    return gl::glGenVertexArraysAPPLE(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
    return gl::glGenVertexShadersEXT(range);
}

void glGenerateMipmapEXT(GLenum target)
{
    return gl::glGenerateMipmapEXT(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
    return gl::glGenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmap(GLuint texture)
{
    return gl::glGenerateTextureMipmap(texture);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
    return gl::glGenerateTextureMipmapEXT(texture, target);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return gl::glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return gl::glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return gl::glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return gl::glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return gl::glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
    return gl::glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
    return gl::glGetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
    return gl::glGetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
    return gl::glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return gl::glGetAttribLocationARB(programObj, name);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
    return gl::glGetBooleanIndexedvEXT(target, index, data);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetBufferPointervARB(target, pname, params);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
    return gl::glGetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
    return gl::glGetClipPlanefOES(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
    return gl::glGetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
    return gl::glGetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
    return gl::glGetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
    return gl::glGetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
    return gl::glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
    return gl::glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
    return gl::glGetCombinerStageParameterfvNV(stage, pname, params);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
    return gl::glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
    return gl::glGetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return gl::glGetCompressedTextureImage(texture, level, bufSize, pixels);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
    return gl::glGetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return gl::glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
    return gl::glGetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
    return gl::glGetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetConvolutionParameterxvOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat * v)
{
    return gl::glGetCoverageModulationTableNV(bufsize, v);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return gl::glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
    return gl::glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return gl::glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
    return gl::glGetDetailTexFuncSGIS(target, points);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
    return gl::glGetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return gl::glGetDoublei_v(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
    return gl::glGetDoublei_vEXT(pname, index, params);
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return gl::glGetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
    return gl::glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
    return gl::glGetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return gl::glGetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
    return gl::glGetFixedvOES(pname, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
    return gl::glGetFloatIndexedvEXT(target, index, data);
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return gl::glGetFloati_v(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
    return gl::glGetFloati_vEXT(pname, index, params);
}

void glGetFogFuncSGIS(GLfloat * points)
{
    return gl::glGetFogFuncSGIS(points);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataIndex(program, name);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
    return gl::glGetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
    return gl::glGetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
    return gl::glGetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
    return gl::glGetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
    return gl::glGetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return gl::glGetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return static_cast<gl32ext::GLenum>(gl::glGetGraphicsResetStatus());
}

GLenum glGetGraphicsResetStatusARB()
{
    return static_cast<gl32ext::GLenum>(gl::glGetGraphicsResetStatusARB());
}

GLhandleARB glGetHandleARB(GLenum pname)
{
    return gl::glGetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return gl::glGetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return gl::glGetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
    return gl::glGetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
    return gl::glGetInstrumentsSGIX();
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
    return gl::glGetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
    return gl::glGetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
    return gl::glGetIntegerui64vNV(value, result);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params)
{
    return gl::glGetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return gl::glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return gl::glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetInvariantIntegervEXT(id, value, data);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
    return gl::glGetLightxOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
    return gl::glGetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
    return gl::glGetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
    return gl::glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMapParameterivNV(target, pname, params);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
    return gl::glGetMapxvOES(target, query, v);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return gl::glGetMaterialxOES(face, pname, param);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
    return gl::glGetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
    return gl::glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
    return gl::glGetMultisamplefvNV(pname, index, val);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return gl::glGetNamedBufferParameteri64v(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedBufferParameteriv(buffer, pname, params);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return gl::glGetNamedBufferPointerv(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
    return gl::glGetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return gl::glGetNamedBufferSubData(buffer, offset, size, data);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return gl::glGetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return gl::glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return gl::glGetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
    return gl::glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
    return gl::glGetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return gl::glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
    return gl::glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
    return gl::glGetNamedStringivARB(namelen, name, pname, params);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return gl::glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
    return gl::glGetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
    return gl::glGetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
    return gl::glGetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
    return gl::glGetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
    return gl::glGetObjectParameterivARB(obj, pname, params);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return gl::glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return gl::glGetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return gl::glGetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return gl::glGetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return gl::glGetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return gl::glGetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return gl::glGetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathRenderingMaskNV metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return gl::glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathRenderingMaskNV metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return gl::glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return gl::glGetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return gl::glGetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return gl::glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return gl::glGetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return gl::glGetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return gl::glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return gl::glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return gl::glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return gl::glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return gl::glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return gl::glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return gl::glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
    return gl::glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return gl::glGetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
    return gl::glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
    return gl::glGetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
    return gl::glGetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
    return gl::glGetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
    return gl::glGetPointerIndexedvEXT(target, index, data);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
    return gl::glGetPointeri_vEXT(pname, index, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
    return gl::glGetPointervEXT(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return gl::glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return gl::glGetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return gl::glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
    return gl::glGetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
    return gl::glGetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
    return gl::glGetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
    return gl::glGetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
    return gl::glGetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
    return gl::glGetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetProgramParameterfvNV(target, index, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return gl::glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return gl::glGetProgramPipelineiv(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return gl::glGetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return gl::glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params)
{
    return gl::glGetProgramResourcefvNV(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return gl::glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return gl::glGetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
    return gl::glGetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
    return gl::glGetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
    return gl::glGetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetProgramivNV(id, pname, params);
}

void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return gl::glGetQueryBufferObjecti64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return gl::glGetQueryBufferObjectiv(id, buffer, pname, offset);
}

void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return gl::glGetQueryBufferObjectui64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return gl::glGetQueryBufferObjectuiv(id, buffer, pname, offset);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetQueryIndexediv(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return gl::glGetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return gl::glGetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return gl::glGetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return gl::glGetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
    return gl::glGetQueryObjectuivARB(id, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetQueryivARB(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetRenderbufferParameterivEXT(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return gl::glGetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return gl::glGetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return gl::glGetSamplerParameteriv(sampler, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return gl::glGetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
    return gl::glGetSeparableFilterEXT(target, format, type, row, column, span);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return gl::glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
    return gl::glGetShaderSourceARB(obj, maxLength, length, source);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
    return gl::glGetSharpenTexFuncSGIS(target, points);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return gl::glGetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return gl::glGetSubroutineUniformLocation(program, shadertype, name);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
    return gl::glGetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
    return gl::glGetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
    return gl::glGetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
    return gl::glGetTexGenxvOES(coord, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
    return gl::glGetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
    return gl::glGetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
    return gl::glGetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
    return gl::glGetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return gl::glGetTextureHandleNV(texture);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return gl::glGetTextureImage(texture, level, format, type, bufSize, pixels);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return gl::glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureLevelParameterfv(texture, level, pname, params);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetTextureLevelParameteriv(texture, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
    return gl::glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameterIiv(texture, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return gl::glGetTextureParameterIuiv(texture, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
    return gl::glGetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureParameterfv(texture, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
    return gl::glGetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameteriv(texture, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
    return gl::glGetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
    return gl::glGetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return gl::glGetTextureSamplerHandleNV(texture, sampler);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return gl::glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
    return gl::glGetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return gl::glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
    return gl::glGetTransformFeedbackVaryingNV(program, index, location);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return gl::glGetTransformFeedbacki64_v(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return gl::glGetTransformFeedbacki_v(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return gl::glGetTransformFeedbackiv(xfb, pname, param);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
    return gl::glGetUniformBufferSizeEXT(program, location);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
    return gl::glGetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
    return gl::glGetUniformOffsetEXT(program, location);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return gl::glGetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return gl::glGetUniformdv(program, location, params);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
    return gl::glGetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return gl::glGetUniformi64vNV(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
    return gl::glGetUniformivARB(programObj, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
    return gl::glGetUniformui64vNV(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
    return gl::glGetUniformuivEXT(program, location, params);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
    return gl::glGetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
    return gl::glGetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
    return gl::glGetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
    return gl::glGetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
    return gl::glGetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
    return gl::glGetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
    return gl::glGetVaryingLocationNV(program, name);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return gl::glGetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayIndexediv(vaobj, index, pname, param);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
    return gl::glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
    return gl::glGetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return gl::glGetVertexArrayiv(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
    return gl::glGetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
    return gl::glGetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
    return gl::glGetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
    return gl::glGetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
    return gl::glGetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
    return gl::glGetVertexAttribivNV(index, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
    return gl::glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
    return gl::glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
    return gl::glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
    return gl::glGetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
    return gl::glGetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
    return gl::glGetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
    return gl::glGetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
    return gl::glGetVideouivNV(video_slot, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return gl::glGetnColorTable(target, format, type, bufSize, table);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return gl::glGetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return gl::glGetnCompressedTexImage(target, lod, bufSize, pixels);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
    return gl::glGetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return gl::glGetnConvolutionFilter(target, format, type, bufSize, image);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return gl::glGetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnHistogram(target, reset, format, type, bufSize, values);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return gl::glGetnMapdv(target, query, bufSize, v);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return gl::glGetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return gl::glGetnMapfv(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return gl::glGetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return gl::glGetnMapiv(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return gl::glGetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnMinmax(target, reset, format, type, bufSize, values);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return gl::glGetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return gl::glGetnPixelMapfv(map, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return gl::glGetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return gl::glGetnPixelMapuiv(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
    return gl::glGetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return gl::glGetnPixelMapusv(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
    return gl::glGetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return gl::glGetnPolygonStipple(bufSize, pattern);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
    return gl::glGetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return gl::glGetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return gl::glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return gl::glGetnTexImage(target, level, format, type, bufSize, pixels);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
    return gl::glGetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return gl::glGetnUniformdv(program, location, bufSize, params);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return gl::glGetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return gl::glGetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return gl::glGetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return gl::glGetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return gl::glGetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return gl::glGetnUniformuiv(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return gl::glGetnUniformuivARB(program, location, bufSize, params);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
    return gl::glGlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
    return gl::glGlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
    return gl::glGlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
    return gl::glGlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
    return gl::glGlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
    return gl::glGlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
    return gl::glGlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
    return gl::glGlobalAlphaFactorusSUN(factor);
}

void glHintPGI(GLenum target, GLint mode)
{
    return gl::glHintPGI(target, mode);
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return gl::glHistogram(target, width, internalformat, sink);
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return gl::glHistogramEXT(target, width, internalformat, sink);
}

void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
    return gl::glIglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
    return gl::glImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glImageTransformParameterivHP(target, pname, params);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, UnusedMask flags)
{
    return gl::glImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
    return gl::glIndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
    return gl::glIndexFuncEXT(func, ref);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
    return gl::glIndexMaterialEXT(face, mode);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glIndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexxOES(GLfixed component)
{
    return gl::glIndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
    return gl::glIndexxvOES(component);
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
    return gl::glInsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gl::glInsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
    return gl::glInstrumentsBufferSGIX(size, buffer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return gl::glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer)
{
    return gl::glInvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return gl::glInvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return gl::glInvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return gl::glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return gl::glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return gl::glInvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
    return gl::glIsAsyncMarkerSGIX(marker);
}

GLboolean glIsBufferARB(GLuint buffer)
{
    return gl::glIsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
    return gl::glIsBufferResidentNV(target);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
    return gl::glIsEnabledIndexedEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
    return gl::glIsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return gl::glIsFenceNV(fence);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
    return gl::glIsFramebufferEXT(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
    return gl::glIsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return gl::glIsImageHandleResidentNV(handle);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
    return gl::glIsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
    return gl::glIsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
    return gl::glIsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
    return gl::glIsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
    return gl::glIsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path)
{
    return gl::glIsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return gl::glIsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return gl::glIsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgramARB(GLuint program)
{
    return gl::glIsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
    return gl::glIsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return gl::glIsProgramPipeline(pipeline);
}

GLboolean glIsQueryARB(GLuint id)
{
    return gl::glIsQueryARB(id);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
    return gl::glIsRenderbufferEXT(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return gl::glIsSampler(sampler);
}

GLboolean glIsTextureEXT(GLuint texture)
{
    return gl::glIsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
    return gl::glIsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return gl::glIsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return gl::glIsTransformFeedback(id);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
    return gl::glIsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
    return gl::glIsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
    return gl::glIsVertexArrayAPPLE(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
    return gl::glIsVertexAttribEnabledAPPLE(index, pname);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return gl::glLabelObjectEXT(type, object, length, label);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
    return gl::glLightEnviSGIX(pname, param);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
    return gl::glLightModelxOES(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
    return gl::glLightModelxvOES(pname, param);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
    return gl::glLightxOES(light, pname, param);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
    return gl::glLightxvOES(light, pname, params);
}

void glLineWidthxOES(GLfixed width)
{
    return gl::glLineWidthxOES(width);
}

void glLinkProgramARB(GLhandleARB programObj)
{
    return gl::glLinkProgramARB(programObj);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
    return gl::glListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
    return gl::glListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
    return gl::glListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
    return gl::glListParameterivSGIX(list, pname, params);
}

void glLoadIdentityDeformationMapSGIX(FfdMaskSGIX mask)
{
    return gl::glLoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixxOES(const GLfixed * m)
{
    return gl::glLoadMatrixxOES(m);
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
    return gl::glLoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
    return gl::glLoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
    return gl::glLoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
    return gl::glLoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
    return gl::glLockArraysEXT(first, count);
}

void glMakeBufferNonResidentNV(GLenum target)
{
    return gl::glMakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
    return gl::glMakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
    return gl::glMakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return gl::glMakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
    return gl::glMakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return gl::glMakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
    return gl::glMakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
    return gl::glMakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
    return gl::glMakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return gl::glMakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
    return gl::glMakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return gl::glMakeTextureHandleResidentNV(handle);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
    return gl::glMap1xOES(target, u1, u2, stride, order, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
    return gl::glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
    return gl::glMapBufferARB(target, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
    return gl::glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
    return gl::glMapGrid1xOES(n, u1, u2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
    return gl::glMapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return gl::glMapNamedBuffer(buffer, access);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
    return gl::glMapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapNamedBufferRange(buffer, offset, length, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return gl::glMapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
    return gl::glMapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, MapBufferUsageMask access, GLint * stride, GLenum * layout)
{
    return gl::glMapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return gl::glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return gl::glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return gl::glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return gl::glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
    return gl::glMaterialxOES(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
    return gl::glMaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glMatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
    return gl::glMatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
    return gl::glMatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
    return gl::glMatrixIndexusvARB(size, indices);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return gl::glMatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixLoadTransposefEXT(mode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixLoadfEXT(mode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return gl::glMatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixMultTransposefEXT(mode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return gl::glMatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return gl::glMatrixMultfEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return gl::glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return gl::glMatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return gl::glMatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glMatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glMatrixTranslatefEXT(mode, x, y, z);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return gl::glMemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return gl::glMemoryBarrierByRegion(barriers);
}

void glMemoryBarrierEXT(MemoryBarrierMask barriers)
{
    return gl::glMemoryBarrierEXT(barriers);
}

void glMinSampleShading(GLfloat value)
{
    return gl::glMinSampleShading(value);
}

void glMinSampleShadingARB(GLfloat value)
{
    return gl::glMinSampleShadingARB(value);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
    return gl::glMinmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
    return gl::glMinmaxEXT(target, internalformat, sink);
}

void glMultMatrixxOES(const GLfixed * m)
{
    return gl::glMultMatrixxOES(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
    return gl::glMultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
    return gl::glMultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
    return gl::glMultTransposeMatrixxOES(m);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawArraysIndirectBindlessCountNV(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return gl::glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return gl::glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawElementsIndirectBindlessCountNV(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
    return gl::glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return gl::glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return gl::glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
    return gl::glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
    return gl::glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
    return gl::glMultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
    return gl::glMultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
    return gl::glMultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
    return gl::glMultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
    return gl::glMultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
    return gl::glMultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
    return gl::glMultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
    return gl::glMultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
    return gl::glMultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    return gl::glMultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
    return gl::glMultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
    return gl::glMultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
    return gl::glMultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
    return gl::glMultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
    return gl::glMultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return gl::glMultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return gl::glMultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return gl::glMultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
    return gl::glMultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return gl::glMultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
    return gl::glMultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return gl::glMultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
    return gl::glMultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return gl::glMultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
    return gl::glMultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return gl::glMultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
    return gl::glMultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return gl::glMultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
    return gl::glMultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return gl::glMultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
    return gl::glMultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return gl::glMultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
    return gl::glMultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return gl::glMultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
    return gl::glMultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return gl::glMultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return gl::glMultiTexCoordP4uiv(texture, type, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glMultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return gl::glMultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
    return gl::glMultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
    return gl::glMultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
    return gl::glMultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
    return gl::glMultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
    return gl::glMultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glMultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
    return gl::glMultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glMultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
    return gl::glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glNamedBufferData(buffer, size, data, usage);
}

void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return gl::glNamedBufferDataEXT(buffer, size, data, usage);
}

void glNamedBufferPageCommitmentARB(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return gl::glNamedBufferPageCommitmentARB(buffer, offset, size, commit);
}

void glNamedBufferPageCommitmentEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
    return gl::glNamedBufferPageCommitmentEXT(buffer, offset, size, commit);
}

void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return gl::glNamedBufferStorage(buffer, size, data, flags);
}

void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return gl::glNamedBufferStorageEXT(buffer, size, data, flags);
}

void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glNamedBufferSubData(buffer, offset, size, data);
}

void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return gl::glNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return gl::glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf)
{
    return gl::glNamedFramebufferDrawBuffer(framebuffer, buf);
}

void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return gl::glNamedFramebufferDrawBuffers(framebuffer, n, bufs);
}

void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param)
{
    return gl::glNamedFramebufferParameteri(framebuffer, pname, param);
}

void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
    return gl::glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src)
{
    return gl::glNamedFramebufferReadBuffer(framebuffer, src);
}

void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return gl::glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return gl::glNamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTexture(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return gl::glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return gl::glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
    return gl::glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return gl::glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
    return gl::glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
    return gl::glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
    return gl::glNamedProgramStringEXT(program, target, format, len, string);
}

void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
    return gl::glNamedStringARB(type, namelen, name, stringlen, string);
}

GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
    return gl::glNewObjectBufferATI(size, pointer, usage);
}

void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
    return gl::glNormal3fVertex3fvSUN(n, v);
}

void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
    return gl::glNormal3hNV(nx, ny, nz);
}

void glNormal3hvNV(const GLhalfNV * v)
{
    return gl::glNormal3hvNV(v);
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
    return gl::glNormal3xOES(nx, ny, nz);
}

void glNormal3xvOES(const GLfixed * coords)
{
    return gl::glNormal3xvOES(coords);
}

void glNormalFormatNV(GLenum type, GLsizei stride)
{
    return gl::glNormalFormatNV(type, stride);
}

void glNormalP3ui(GLenum type, GLuint coords)
{
    return gl::glNormalP3ui(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glNormalP3uiv(type, coords);
}

void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glNormalPointerEXT(type, stride, count, pointer);
}

void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
    return gl::glNormalPointervINTEL(type, pointer);
}

void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
    return gl::glNormalStream3bATI(stream, nx, ny, nz);
}

void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
    return gl::glNormalStream3bvATI(stream, coords);
}

void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
    return gl::glNormalStream3dATI(stream, nx, ny, nz);
}

void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glNormalStream3dvATI(stream, coords);
}

void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
    return gl::glNormalStream3fATI(stream, nx, ny, nz);
}

void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glNormalStream3fvATI(stream, coords);
}

void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
    return gl::glNormalStream3iATI(stream, nx, ny, nz);
}

void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
    return gl::glNormalStream3ivATI(stream, coords);
}

void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
    return gl::glNormalStream3sATI(stream, nx, ny, nz);
}

void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
    return gl::glNormalStream3svATI(stream, coords);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return gl::glObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return gl::glObjectPtrLabel(ptr, length, label);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl32ext::GLenum>(gl::glObjectPurgeableAPPLE(objectType, name, option));
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
    return static_cast<gl32ext::GLenum>(gl::glObjectUnpurgeableAPPLE(objectType, name, option));
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
    return gl::glOrthofOES(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
    return gl::glOrthoxOES(l, r, b, t, n, f);
}

void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
    return gl::glPNTrianglesfATI(pname, param);
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
    return gl::glPNTrianglesiATI(pname, param);
}

void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
    return gl::glPassTexCoordATI(dst, coord, swizzle);
}

void glPassThroughxOES(GLfixed token)
{
    return gl::glPassThroughxOES(token);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return gl::glPatchParameterfv(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value)
{
    return gl::glPatchParameteri(pname, value);
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
    return gl::glPathColorGenNV(color, genMode, colorFormat, coeffs);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
    return gl::glPathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
    return gl::glPathDashArrayNV(path, dashCount, dashArray);
}

void glPathFogGenNV(GLenum genMode)
{
    return gl::glPathFogGenNV(genMode);
}

GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl32ext::GLenum>(gl::glPathGlyphIndexArrayNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint_array_2 baseAndCount)
{
    return static_cast<gl32ext::GLenum>(gl::glPathGlyphIndexRangeNV(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount));
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, PathFontStyle fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return gl::glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
    return static_cast<gl32ext::GLenum>(gl::glPathMemoryGlyphIndexArrayNV(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale));
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
    return gl::glPathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
    return gl::glPathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
    return gl::glPathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
    return gl::glPathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
    return gl::glPathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
    return gl::glPathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
    return gl::glPathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
    return gl::glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return gl::glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void glPauseTransformFeedback()
{
    return gl::glPauseTransformFeedback();
}

void glPauseTransformFeedbackNV()
{
    return gl::glPauseTransformFeedbackNV();
}

void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
    return gl::glPixelDataRangeNV(target, length, pointer);
}

void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
    return gl::glPixelMapx(map, size, values);
}

void glPixelStorex(GLenum pname, GLfixed param)
{
    return gl::glPixelStorex(pname, param);
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
    return gl::glPixelTexGenParameterfSGIS(pname, param);
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return gl::glPixelTexGenParameterfvSGIS(pname, params);
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
    return gl::glPixelTexGenParameteriSGIS(pname, param);
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
    return gl::glPixelTexGenParameterivSGIS(pname, params);
}

void glPixelTexGenSGIX(GLenum mode)
{
    return gl::glPixelTexGenSGIX(mode);
}

void glPixelTransferxOES(GLenum pname, GLfixed param)
{
    return gl::glPixelTransferxOES(pname, param);
}

void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
    return gl::glPixelTransformParameterfEXT(target, pname, param);
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glPixelTransformParameterfvEXT(target, pname, params);
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
    return gl::glPixelTransformParameteriEXT(target, pname, param);
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glPixelTransformParameterivEXT(target, pname, params);
}

void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
    return gl::glPixelZoomxOES(xfactor, yfactor);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
    return gl::glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPointParameterfARB(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfARB(pname, param);
}

void glPointParameterfEXT(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfEXT(pname, param);
}

void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
    return gl::glPointParameterfSGIS(pname, param);
}

void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvARB(pname, params);
}

void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvEXT(pname, params);
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
    return gl::glPointParameterfvSGIS(pname, params);
}

void glPointParameteriNV(GLenum pname, GLint param)
{
    return gl::glPointParameteriNV(pname, param);
}

void glPointParameterivNV(GLenum pname, const GLint * params)
{
    return gl::glPointParameterivNV(pname, params);
}

void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
    return gl::glPointParameterxvOES(pname, params);
}

void glPointSizexOES(GLfixed size)
{
    return gl::glPointSizexOES(size);
}

GLint glPollAsyncSGIX(GLuint * markerp)
{
    return gl::glPollAsyncSGIX(markerp);
}

GLint glPollInstrumentsSGIX(GLint * marker_p)
{
    return gl::glPollInstrumentsSGIX(marker_p);
}

void glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp)
{
    return gl::glPolygonOffsetClampEXT(factor, units, clamp);
}

void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
    return gl::glPolygonOffsetEXT(factor, bias);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
    return gl::glPolygonOffsetxOES(factor, units);
}

void glPopDebugGroup()
{
    return gl::glPopDebugGroup();
}

void glPopGroupMarkerEXT()
{
    return gl::glPopGroupMarkerEXT();
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
    return gl::glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
    return gl::glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void glPrimitiveRestartIndexNV(GLuint index)
{
    return gl::glPrimitiveRestartIndexNV(index);
}

void glPrimitiveRestartNV()
{
    return gl::glPrimitiveRestartNV();
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
    return gl::glPrioritizeTexturesEXT(n, textures, priorities);
}

void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
    return gl::glPrioritizeTexturesxOES(n, textures, priorities);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return gl::glProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
    return gl::glProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
    return gl::glProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
    return gl::glProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glProgramEnvParameter4dvARB(target, index, params);
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glProgramEnvParameter4fvARB(target, index, params);
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return gl::glProgramEnvParameterI4ivNV(target, index, params);
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return gl::glProgramEnvParameterI4uivNV(target, index, params);
}

void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glProgramEnvParameters4fvEXT(target, index, count, params);
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glProgramEnvParametersI4ivNV(target, index, count, params);
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glProgramEnvParametersI4uivNV(target, index, count, params);
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
    return gl::glProgramLocalParameter4dvARB(target, index, params);
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
    return gl::glProgramLocalParameter4fvARB(target, index, params);
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
    return gl::glProgramLocalParameterI4ivNV(target, index, params);
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
    return gl::glProgramLocalParameterI4uivNV(target, index, params);
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
    return gl::glProgramLocalParameters4fvEXT(target, index, count, params);
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
    return gl::glProgramLocalParametersI4ivNV(target, index, count, params);
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
    return gl::glProgramLocalParametersI4uivNV(target, index, count, params);
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
    return gl::glProgramNamedParameter4dvNV(id, len, name, v);
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
    return gl::glProgramNamedParameter4fvNV(id, len, name, v);
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramParameter4dNV(target, index, x, y, z, w);
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
    return gl::glProgramParameter4dvNV(target, index, v);
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glProgramParameter4fNV(target, index, x, y, z, w);
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
    return gl::glProgramParameter4fvNV(target, index, v);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteri(program, pname, value);
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteriARB(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
    return gl::glProgramParameteriEXT(program, pname, value);
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glProgramParameters4dvNV(target, index, count, v);
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glProgramParameters4fvNV(target, index, count, v);
}

void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
    return gl::glProgramPathFragmentInputGenNV(program, location, genMode, components, coeffs);
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
    return gl::glProgramStringARB(target, format, len, string);
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
    return gl::glProgramSubroutineParametersuivNV(target, count, params);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return gl::glProgramUniform1d(program, location, v0);
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
    return gl::glProgramUniform1dEXT(program, location, x);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform1dvEXT(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return gl::glProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
    return gl::glProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return gl::glProgramUniform1i(program, location, v0);
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
    return gl::glProgramUniform1i64NV(program, location, x);
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform1i64vNV(program, location, count, value);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
    return gl::glProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return gl::glProgramUniform1ui(program, location, v0);
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
    return gl::glProgramUniform1ui64NV(program, location, x);
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform1ui64vNV(program, location, count, value);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
    return gl::glProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return gl::glProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
    return gl::glProgramUniform2dEXT(program, location, x, y);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform2dvEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gl::glProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
    return gl::glProgramUniform2i64NV(program, location, x, y);
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform2i64vNV(program, location, count, value);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
    return gl::glProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gl::glProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glProgramUniform2ui64NV(program, location, x, y);
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform2ui64vNV(program, location, count, value);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return gl::glProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return gl::glProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glProgramUniform3dEXT(program, location, x, y, z);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform3dvEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glProgramUniform3i64NV(program, location, x, y, z);
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform3i64vNV(program, location, count, value);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glProgramUniform3ui64NV(program, location, x, y, z);
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform3ui64vNV(program, location, count, value);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return gl::glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glProgramUniform4dEXT(program, location, x, y, z, w);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glProgramUniform4dvEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glProgramUniform4i64NV(program, location, x, y, z, w);
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glProgramUniform4i64vNV(program, location, count, value);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return gl::glProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glProgramUniform4ui64NV(program, location, x, y, z, w);
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniform4ui64vNV(program, location, count, value);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return gl::glProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
    return gl::glProgramUniformHandleui64ARB(program, location, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
    return gl::glProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return gl::glProgramUniformHandleui64vARB(program, location, count, values);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
    return gl::glProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
    return gl::glProgramUniformui64NV(program, location, value);
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glProgramUniformui64vNV(program, location, count, value);
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
    return gl::glProgramVertexLimitNV(target, limit);
}

void glProvokingVertexEXT(GLenum mode)
{
    return gl::glProvokingVertexEXT(mode);
}

void glPushClientAttribDefaultEXT(ClientAttribMask mask)
{
    return gl::glPushClientAttribDefaultEXT(mask);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return gl::glPushDebugGroup(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
    return gl::glPushGroupMarkerEXT(length, marker);
}

void glQueryCounter(GLuint id, GLenum target)
{
    return gl::glQueryCounter(id, target);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
    return static_cast<gl32ext::GLbitfield>(gl::glQueryMatrixxOES(mantissa, exponent));
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
    return gl::glQueryObjectParameteruiAMD(target, id, pname, param);
}

void glRasterPos2xOES(GLfixed x, GLfixed y)
{
    return gl::glRasterPos2xOES(x, y);
}

void glRasterPos2xvOES(const GLfixed * coords)
{
    return gl::glRasterPos2xvOES(coords);
}

void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glRasterPos3xOES(x, y, z);
}

void glRasterPos3xvOES(const GLfixed * coords)
{
    return gl::glRasterPos3xvOES(coords);
}

void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
    return gl::glRasterPos4xOES(x, y, z, w);
}

void glRasterPos4xvOES(const GLfixed * coords)
{
    return gl::glRasterPos4xvOES(coords);
}

void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return gl::glRasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadInstrumentsSGIX(GLint marker)
{
    return gl::glReadInstrumentsSGIX(marker);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return gl::glReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return gl::glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
    return gl::glRectxOES(x1, y1, x2, y2);
}

void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
    return gl::glRectxvOES(v1, v2);
}

void glReferencePlaneSGIX(const GLdouble * equation)
{
    return gl::glReferencePlaneSGIX(equation);
}

void glReleaseShaderCompiler()
{
    return gl::glReleaseShaderCompiler();
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageEXT(target, internalformat, width, height);
}

void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
    return gl::glReplacementCodePointerSUN(type, stride, pointer);
}

void glReplacementCodeubSUN(GLubyte code)
{
    return gl::glReplacementCodeubSUN(code);
}

void glReplacementCodeubvSUN(const GLubyte * code)
{
    return gl::glReplacementCodeubvSUN(code);
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
    return gl::glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void glReplacementCodeuiSUN(GLuint code)
{
    return gl::glReplacementCodeuiSUN(code);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
    return gl::glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
    return gl::glReplacementCodeuiVertex3fvSUN(rc, v);
}

void glReplacementCodeuivSUN(const GLuint * code)
{
    return gl::glReplacementCodeuivSUN(code);
}

void glReplacementCodeusSUN(GLushort code)
{
    return gl::glReplacementCodeusSUN(code);
}

void glReplacementCodeusvSUN(const GLushort * code)
{
    return gl::glReplacementCodeusvSUN(code);
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
    return gl::glRequestResidentProgramsNV(n, programs);
}

void glResetHistogram(GLenum target)
{
    return gl::glResetHistogram(target);
}

void glResetHistogramEXT(GLenum target)
{
    return gl::glResetHistogramEXT(target);
}

void glResetMinmax(GLenum target)
{
    return gl::glResetMinmax(target);
}

void glResetMinmaxEXT(GLenum target)
{
    return gl::glResetMinmaxEXT(target);
}

void glResizeBuffersMESA()
{
    return gl::glResizeBuffersMESA();
}

void glResolveDepthValuesNV()
{
    return gl::glResolveDepthValuesNV();
}

void glResumeTransformFeedback()
{
    return gl::glResumeTransformFeedback();
}

void glResumeTransformFeedbackNV()
{
    return gl::glResumeTransformFeedbackNV();
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glRotatexOES(angle, x, y, z);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
    return gl::glSampleCoverageARB(value, invert);
}

void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
    return gl::glSampleCoverageOES(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
    return gl::glSampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
    return gl::glSampleMaskEXT(value, invert);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
    return gl::glSampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
    return gl::glSampleMaskSGIS(value, invert);
}

void glSamplePatternEXT(GLenum pattern)
{
    return gl::glSamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
    return gl::glSamplePatternSGIS(pattern);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return gl::glSamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return gl::glSamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return gl::glSamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return gl::glSamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return gl::glSamplerParameteriv(sampler, pname, param);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glScalexOES(x, y, z);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return gl::glScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return gl::glScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return gl::glScissorIndexedv(index, v);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
    return gl::glSecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
    return gl::glSecondaryColor3bvEXT(v);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
    return gl::glSecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
    return gl::glSecondaryColor3dvEXT(v);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
    return gl::glSecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
    return gl::glSecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
    return gl::glSecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
    return gl::glSecondaryColor3hvNV(v);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
    return gl::glSecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
    return gl::glSecondaryColor3ivEXT(v);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
    return gl::glSecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
    return gl::glSecondaryColor3svEXT(v);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
    return gl::glSecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
    return gl::glSecondaryColor3ubvEXT(v);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
    return gl::glSecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
    return gl::glSecondaryColor3uivEXT(v);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
    return gl::glSecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
    return gl::glSecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glSecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return gl::glSecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return gl::glSecondaryColorP3uiv(type, color);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glSecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return gl::glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return gl::glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
    return gl::glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
    return gl::glSetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return gl::glSetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
    return gl::glSetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
    return gl::glSetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
    return gl::glSetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
    return gl::glSetMultisamplefvAMD(pname, index, val);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return gl::glShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
    return gl::glShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
    return gl::glShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
    return gl::glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
    return gl::glShaderSourceARB(shaderObj, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return gl::glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
    return gl::glSharpenTexFuncSGIS(target, n, points);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
    return gl::glSpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
    return gl::glSpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
    return gl::glSpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
    return gl::glSpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
    return gl::glStartInstrumentsSGIX();
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
    return gl::glStencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return gl::glStencilFillPathNV(path, fillMode, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
    return gl::glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return gl::glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
    return gl::glStencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return gl::glStencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return gl::glStencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glStencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return gl::glStencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glStopInstrumentsSGIX(GLint marker)
{
    return gl::glStopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
    return gl::glStringMarkerGREMEDY(len, string);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return gl::glSubpixelPrecisionBiasNV(xbits, ybits);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return gl::glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
    return gl::glSyncTextureINTEL(texture);
}

void glTagSampleBufferSGIX()
{
    return gl::glTagSampleBufferSGIX();
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
    return gl::glTangent3bEXT(tx, ty, tz);
}

void glTangent3bvEXT(const GLbyte * v)
{
    return gl::glTangent3bvEXT(v);
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
    return gl::glTangent3dEXT(tx, ty, tz);
}

void glTangent3dvEXT(const GLdouble * v)
{
    return gl::glTangent3dvEXT(v);
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
    return gl::glTangent3fEXT(tx, ty, tz);
}

void glTangent3fvEXT(const GLfloat * v)
{
    return gl::glTangent3fvEXT(v);
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
    return gl::glTangent3iEXT(tx, ty, tz);
}

void glTangent3ivEXT(const GLint * v)
{
    return gl::glTangent3ivEXT(v);
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
    return gl::glTangent3sEXT(tx, ty, tz);
}

void glTangent3svEXT(const GLshort * v)
{
    return gl::glTangent3svEXT(v);
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glTangentPointerEXT(type, stride, pointer);
}

void glTbufferMask3DFX(GLuint mask)
{
    return gl::glTbufferMask3DFX(mask);
}

void glTessellationFactorAMD(GLfloat factor)
{
    return gl::glTessellationFactorAMD(factor);
}

void glTessellationModeAMD(GLenum mode)
{
    return gl::glTessellationModeAMD(mode);
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
    return gl::glTestFenceAPPLE(fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
    return gl::glTestFenceNV(fence);
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
    return gl::glTestObjectAPPLE(object, name);
}

void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBufferARB(target, internalformat, buffer);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTexBufferEXT(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
    return gl::glTexBumpParameterfvATI(pname, param);
}

void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
    return gl::glTexBumpParameterivATI(pname, param);
}

void glTexCoord1bOES(GLbyte s)
{
    return gl::glTexCoord1bOES(s);
}

void glTexCoord1bvOES(const GLbyte * coords)
{
    return gl::glTexCoord1bvOES(coords);
}

void glTexCoord1hNV(GLhalfNV s)
{
    return gl::glTexCoord1hNV(s);
}

void glTexCoord1hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord1hvNV(v);
}

void glTexCoord1xOES(GLfixed s)
{
    return gl::glTexCoord1xOES(s);
}

void glTexCoord1xvOES(const GLfixed * coords)
{
    return gl::glTexCoord1xvOES(coords);
}

void glTexCoord2bOES(GLbyte s, GLbyte t)
{
    return gl::glTexCoord2bOES(s, t);
}

void glTexCoord2bvOES(const GLbyte * coords)
{
    return gl::glTexCoord2bvOES(coords);
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
    return gl::glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
    return gl::glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return gl::glTexCoord2fVertex3fvSUN(tc, v);
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
    return gl::glTexCoord2hNV(s, t);
}

void glTexCoord2hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord2hvNV(v);
}

void glTexCoord2xOES(GLfixed s, GLfixed t)
{
    return gl::glTexCoord2xOES(s, t);
}

void glTexCoord2xvOES(const GLfixed * coords)
{
    return gl::glTexCoord2xvOES(coords);
}

void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
    return gl::glTexCoord3bOES(s, t, r);
}

void glTexCoord3bvOES(const GLbyte * coords)
{
    return gl::glTexCoord3bvOES(coords);
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
    return gl::glTexCoord3hNV(s, t, r);
}

void glTexCoord3hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord3hvNV(v);
}

void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
    return gl::glTexCoord3xOES(s, t, r);
}

void glTexCoord3xvOES(const GLfixed * coords)
{
    return gl::glTexCoord3xvOES(coords);
}

void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
    return gl::glTexCoord4bOES(s, t, r, q);
}

void glTexCoord4bvOES(const GLbyte * coords)
{
    return gl::glTexCoord4bvOES(coords);
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
    return gl::glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
    return gl::glTexCoord4fVertex4fvSUN(tc, v);
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
    return gl::glTexCoord4hNV(s, t, r, q);
}

void glTexCoord4hvNV(const GLhalfNV * v)
{
    return gl::glTexCoord4hvNV(v);
}

void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
    return gl::glTexCoord4xOES(s, t, r, q);
}

void glTexCoord4xvOES(const GLfixed * coords)
{
    return gl::glTexCoord4xvOES(coords);
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glTexCoordFormatNV(size, type, stride);
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP1ui(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP1uiv(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP2ui(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP2uiv(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP3ui(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP3uiv(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return gl::glTexCoordP4ui(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return gl::glTexCoordP4uiv(type, coords);
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glTexCoordPointerEXT(size, type, stride, count, pointer);
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glTexCoordPointervINTEL(size, type, pointer);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glTexEnvxOES(target, pname, param);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glTexEnvxvOES(target, pname, params);
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
    return gl::glTexFilterFuncSGIS(target, filter, n, weights);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
    return gl::glTexGenxOES(coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
    return gl::glTexGenxvOES(coord, pname, params);
}

void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return gl::glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTexParameterIivEXT(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTexParameterIuivEXT(target, pname, params);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
    return gl::glTexParameterxOES(target, pname, param);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
    return gl::glTexParameterxvOES(target, pname, params);
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
    return gl::glTexRenderbufferNV(target, renderbuffer);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gl::glTexStorage1D(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glTexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return gl::glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void glTextureBarrier()
{
    return gl::glTextureBarrier();
}

void glTextureBarrierNV()
{
    return gl::glTextureBarrierNV();
}

void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
    return gl::glTextureBuffer(texture, internalformat, buffer);
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
    return gl::glTextureBufferEXT(texture, target, internalformat, buffer);
}

void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTextureBufferRange(texture, internalformat, buffer, offset, size);
}

void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return gl::glTextureColorMaskSGIS(red, green, blue, alpha);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
    return gl::glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureLightEXT(GLenum pname)
{
    return gl::glTextureLightEXT(pname);
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
    return gl::glTextureMaterialEXT(face, mode);
}

void glTextureNormalEXT(GLenum mode)
{
    return gl::glTextureNormalEXT(mode);
}

void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
    return gl::glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params)
{
    return gl::glTextureParameterIiv(texture, pname, params);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTextureParameterIivEXT(texture, target, pname, params);
}

void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params)
{
    return gl::glTextureParameterIuiv(texture, pname, params);
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
    return gl::glTextureParameterIuivEXT(texture, target, pname, params);
}

void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
    return gl::glTextureParameterf(texture, pname, param);
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
    return gl::glTextureParameterfEXT(texture, target, pname, param);
}

void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param)
{
    return gl::glTextureParameterfv(texture, pname, param);
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
    return gl::glTextureParameterfvEXT(texture, target, pname, params);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
    return gl::glTextureParameteri(texture, pname, param);
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
    return gl::glTextureParameteriEXT(texture, target, pname, param);
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param)
{
    return gl::glTextureParameteriv(texture, pname, param);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
    return gl::glTextureParameterivEXT(texture, target, pname, params);
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
    return gl::glTextureRangeAPPLE(target, length, pointer);
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
    return gl::glTextureRenderbufferEXT(texture, target, renderbuffer);
}

void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gl::glTextureStorage1D(texture, levels, internalformat, width);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return gl::glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glTextureStorage2D(texture, levels, internalformat, width, height);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return gl::glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glTextureStorage3D(texture, levels, internalformat, width, height, depth);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return gl::glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return gl::glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, TextureStorageMaskAMD flags)
{
    return gl::glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return gl::glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return gl::glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
    return gl::glTrackMatrixNV(target, address, matrix, transform);
}

void glTransformFeedbackAttribsNV(GLsizei count, const GLint * attribs, GLenum bufferMode)
{
    return gl::glTransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
    return gl::glTransformFeedbackBufferBase(xfb, index, buffer);
}

void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return gl::glTransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
    return gl::glTransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
    return gl::glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
    return gl::glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glTranslatexOES(x, y, z);
}

void glUniform1d(GLint location, GLdouble x)
{
    return gl::glUniform1d(location, x);
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform1dv(location, count, value);
}

void glUniform1fARB(GLint location, GLfloat v0)
{
    return gl::glUniform1fARB(location, v0);
}

void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform1fvARB(location, count, value);
}

void glUniform1i64NV(GLint location, GLint64EXT x)
{
    return gl::glUniform1i64NV(location, x);
}

void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform1i64vNV(location, count, value);
}

void glUniform1iARB(GLint location, GLint v0)
{
    return gl::glUniform1iARB(location, v0);
}

void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform1ivARB(location, count, value);
}

void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
    return gl::glUniform1ui64NV(location, x);
}

void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform1ui64vNV(location, count, value);
}

void glUniform1uiEXT(GLint location, GLuint v0)
{
    return gl::glUniform1uiEXT(location, v0);
}

void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform1uivEXT(location, count, value);
}

void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return gl::glUniform2d(location, x, y);
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform2dv(location, count, value);
}

void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
    return gl::glUniform2fARB(location, v0, v1);
}

void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform2fvARB(location, count, value);
}

void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
    return gl::glUniform2i64NV(location, x, y);
}

void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform2i64vNV(location, count, value);
}

void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
    return gl::glUniform2iARB(location, v0, v1);
}

void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform2ivARB(location, count, value);
}

void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glUniform2ui64NV(location, x, y);
}

void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform2ui64vNV(location, count, value);
}

void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
    return gl::glUniform2uiEXT(location, v0, v1);
}

void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform2uivEXT(location, count, value);
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glUniform3d(location, x, y, z);
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform3dv(location, count, value);
}

void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return gl::glUniform3fARB(location, v0, v1, v2);
}

void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform3fvARB(location, count, value);
}

void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glUniform3i64NV(location, x, y, z);
}

void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform3i64vNV(location, count, value);
}

void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
    return gl::glUniform3iARB(location, v0, v1, v2);
}

void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform3ivARB(location, count, value);
}

void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glUniform3ui64NV(location, x, y, z);
}

void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform3ui64vNV(location, count, value);
}

void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return gl::glUniform3uiEXT(location, v0, v1, v2);
}

void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform3uivEXT(location, count, value);
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glUniform4d(location, x, y, z, w);
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return gl::glUniform4dv(location, count, value);
}

void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return gl::glUniform4fARB(location, v0, v1, v2, v3);
}

void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
    return gl::glUniform4fvARB(location, count, value);
}

void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glUniform4i64NV(location, x, y, z, w);
}

void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
    return gl::glUniform4i64vNV(location, count, value);
}

void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return gl::glUniform4iARB(location, v0, v1, v2, v3);
}

void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
    return gl::glUniform4ivARB(location, count, value);
}

void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glUniform4ui64NV(location, x, y, z, w);
}

void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniform4ui64vNV(location, count, value);
}

void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return gl::glUniform4uiEXT(location, v0, v1, v2, v3);
}

void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
    return gl::glUniform4uivEXT(location, count, value);
}

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
    return gl::glUniformBufferEXT(program, location, buffer);
}

void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
    return gl::glUniformHandleui64ARB(location, value);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
    return gl::glUniformHandleui64NV(location, value);
}

void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
    return gl::glUniformHandleui64vARB(location, count, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
    return gl::glUniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2dv(location, count, transpose, value);
}

void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix2fvARB(location, count, transpose, value);
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2x3dv(location, count, transpose, value);
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix2x4dv(location, count, transpose, value);
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3dv(location, count, transpose, value);
}

void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix3fvARB(location, count, transpose, value);
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3x2dv(location, count, transpose, value);
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix3x4dv(location, count, transpose, value);
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4dv(location, count, transpose, value);
}

void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return gl::glUniformMatrix4fvARB(location, count, transpose, value);
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4x2dv(location, count, transpose, value);
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return gl::glUniformMatrix4x3dv(location, count, transpose, value);
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return gl::glUniformSubroutinesuiv(shadertype, count, indices);
}

void glUniformui64NV(GLint location, GLuint64EXT value)
{
    return gl::glUniformui64NV(location, value);
}

void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
    return gl::glUniformui64vNV(location, count, value);
}

void glUnlockArraysEXT()
{
    return gl::glUnlockArraysEXT();
}

GLboolean glUnmapBufferARB(GLenum target)
{
    return gl::glUnmapBufferARB(target);
}

GLboolean glUnmapNamedBuffer(GLuint buffer)
{
    return gl::glUnmapNamedBuffer(buffer);
}

GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
    return gl::glUnmapNamedBufferEXT(buffer);
}

void glUnmapObjectBufferATI(GLuint buffer)
{
    return gl::glUnmapObjectBufferATI(buffer);
}

void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
    return gl::glUnmapTexture2DINTEL(texture, level);
}

void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
    return gl::glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

void glUseProgramObjectARB(GLhandleARB programObj)
{
    return gl::glUseProgramObjectARB(programObj);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return gl::glUseProgramStages(pipeline, stages, program);
}

void glUseShaderProgramEXT(GLenum type, GLuint program)
{
    return gl::glUseShaderProgramEXT(type, program);
}

void glVDPAUFiniNV()
{
    return gl::glVDPAUFiniNV();
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return gl::glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress)
{
    return gl::glVDPAUInitNV(vdpDevice, getProcAddress);
}

GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
    return gl::glVDPAUIsSurfaceNV(surface);
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
    return gl::glVDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return gl::glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
    return gl::glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
    return gl::glVDPAUSurfaceAccessNV(surface, access);
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
    return gl::glVDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
    return gl::glVDPAUUnregisterSurfaceNV(surface);
}

void glValidateProgramARB(GLhandleARB programObj)
{
    return gl::glValidateProgramARB(programObj);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return gl::glValidateProgramPipeline(pipeline);
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
    return gl::glVariantPointerEXT(id, type, stride, addr);
}

void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
    return gl::glVariantbvEXT(id, addr);
}

void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
    return gl::glVariantdvEXT(id, addr);
}

void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
    return gl::glVariantfvEXT(id, addr);
}

void glVariantivEXT(GLuint id, const GLint * addr)
{
    return gl::glVariantivEXT(id, addr);
}

void glVariantsvEXT(GLuint id, const GLshort * addr)
{
    return gl::glVariantsvEXT(id, addr);
}

void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
    return gl::glVariantubvEXT(id, addr);
}

void glVariantuivEXT(GLuint id, const GLuint * addr)
{
    return gl::glVariantuivEXT(id, addr);
}

void glVariantusvEXT(GLuint id, const GLushort * addr)
{
    return gl::glVariantusvEXT(id, addr);
}

void glVertex2bOES(GLbyte x, GLbyte y)
{
    return gl::glVertex2bOES(x, y);
}

void glVertex2bvOES(const GLbyte * coords)
{
    return gl::glVertex2bvOES(coords);
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
    return gl::glVertex2hNV(x, y);
}

void glVertex2hvNV(const GLhalfNV * v)
{
    return gl::glVertex2hvNV(v);
}

void glVertex2xOES(GLfixed x)
{
    return gl::glVertex2xOES(x);
}

void glVertex2xvOES(const GLfixed * coords)
{
    return gl::glVertex2xvOES(coords);
}

void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
    return gl::glVertex3bOES(x, y, z);
}

void glVertex3bvOES(const GLbyte * coords)
{
    return gl::glVertex3bvOES(coords);
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return gl::glVertex3hNV(x, y, z);
}

void glVertex3hvNV(const GLhalfNV * v)
{
    return gl::glVertex3hvNV(v);
}

void glVertex3xOES(GLfixed x, GLfixed y)
{
    return gl::glVertex3xOES(x, y);
}

void glVertex3xvOES(const GLfixed * coords)
{
    return gl::glVertex3xvOES(coords);
}

void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
    return gl::glVertex4bOES(x, y, z, w);
}

void glVertex4bvOES(const GLbyte * coords)
{
    return gl::glVertex4bvOES(coords);
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return gl::glVertex4hNV(x, y, z, w);
}

void glVertex4hvNV(const GLhalfNV * v)
{
    return gl::glVertex4hvNV(v);
}

void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
    return gl::glVertex4xOES(x, y, z);
}

void glVertex4xvOES(const GLfixed * coords)
{
    return gl::glVertex4xvOES(coords);
}

void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return gl::glVertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gl::glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gl::glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return gl::glVertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
    return gl::glVertexArrayElementBuffer(vaobj, buffer);
}

void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
    return gl::glVertexArrayParameteriAPPLE(pname, param);
}

void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
    return gl::glVertexArrayRangeAPPLE(length, pointer);
}

void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
    return gl::glVertexArrayRangeNV(length, pointer);
}

void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return gl::glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
    return gl::glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return gl::glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return gl::glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return gl::glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
    return gl::glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1dARB(index, x);
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
    return gl::glVertexAttrib1dNV(index, x);
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dvARB(index, v);
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib1dvNV(index, v);
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1fARB(index, x);
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
    return gl::glVertexAttrib1fNV(index, x);
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fvARB(index, v);
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib1fvNV(index, v);
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
    return gl::glVertexAttrib1hNV(index, x);
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib1hvNV(index, v);
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1sARB(index, x);
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
    return gl::glVertexAttrib1sNV(index, x);
}

void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1svARB(index, v);
}

void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib1svNV(index, v);
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2dARB(index, x, y);
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttrib2dNV(index, x, y);
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dvARB(index, v);
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib2dvNV(index, v);
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2fARB(index, x, y);
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
    return gl::glVertexAttrib2fNV(index, x, y);
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fvARB(index, v);
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib2fvNV(index, v);
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
    return gl::glVertexAttrib2hNV(index, x, y);
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib2hvNV(index, v);
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2sARB(index, x, y);
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
    return gl::glVertexAttrib2sNV(index, x, y);
}

void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2svARB(index, v);
}

void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib2svNV(index, v);
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3dARB(index, x, y, z);
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttrib3dNV(index, x, y, z);
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dvARB(index, v);
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib3dvNV(index, v);
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3fARB(index, x, y, z);
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexAttrib3fNV(index, x, y, z);
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fvARB(index, v);
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib3fvNV(index, v);
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
    return gl::glVertexAttrib3hNV(index, x, y, z);
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib3hvNV(index, v);
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3sARB(index, x, y, z);
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexAttrib3sNV(index, x, y, z);
}

void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3svARB(index, v);
}

void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib3svNV(index, v);
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4NbvARB(index, v);
}

void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4NivARB(index, v);
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4NsvARB(index, v);
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4NubARB(index, x, y, z, w);
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4NubvARB(index, v);
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4NuivARB(index, v);
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4NusvARB(index, v);
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttrib4bvARB(index, v);
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4dARB(index, x, y, z, w);
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttrib4dNV(index, x, y, z, w);
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dvARB(index, v);
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttrib4dvNV(index, v);
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4fARB(index, x, y, z, w);
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexAttrib4fNV(index, x, y, z, w);
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fvARB(index, v);
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
    return gl::glVertexAttrib4fvNV(index, v);
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
    return gl::glVertexAttrib4hNV(index, x, y, z, w);
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
    return gl::glVertexAttrib4hvNV(index, v);
}

void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
    return gl::glVertexAttrib4ivARB(index, v);
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4sARB(index, x, y, z, w);
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexAttrib4sNV(index, x, y, z, w);
}

void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4svARB(index, v);
}

void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
    return gl::glVertexAttrib4svNV(index, v);
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return gl::glVertexAttrib4ubNV(index, x, y, z, w);
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubvARB(index, v);
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttrib4ubvNV(index, v);
}

void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
    return gl::glVertexAttrib4uivARB(index, v);
}

void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
    return gl::glVertexAttrib4usvARB(index, v);
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
    return gl::glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return gl::glVertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return gl::glVertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
    return gl::glVertexAttribDivisorARB(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return gl::glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
    return gl::glVertexAttribFormatNV(index, size, type, normalized, stride);
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
    return gl::glVertexAttribI1iEXT(index, x);
}

void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI1ivEXT(index, v);
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
    return gl::glVertexAttribI1uiEXT(index, x);
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI1uivEXT(index, v);
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
    return gl::glVertexAttribI2iEXT(index, x, y);
}

void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI2ivEXT(index, v);
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
    return gl::glVertexAttribI2uiEXT(index, x, y);
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI2uivEXT(index, v);
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
    return gl::glVertexAttribI3iEXT(index, x, y, z);
}

void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI3ivEXT(index, v);
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return gl::glVertexAttribI3uiEXT(index, x, y, z);
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI3uivEXT(index, v);
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
    return gl::glVertexAttribI4bvEXT(index, v);
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexAttribI4iEXT(index, x, y, z, w);
}

void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
    return gl::glVertexAttribI4ivEXT(index, v);
}

void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
    return gl::glVertexAttribI4svEXT(index, v);
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
    return gl::glVertexAttribI4ubvEXT(index, v);
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return gl::glVertexAttribI4uiEXT(index, x, y, z, w);
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
    return gl::glVertexAttribI4uivEXT(index, v);
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
    return gl::glVertexAttribI4usvEXT(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexAttribIFormatNV(index, size, type, stride);
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return gl::glVertexAttribL1d(index, x);
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
    return gl::glVertexAttribL1dEXT(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL1dv(index, v);
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL1dvEXT(index, v);
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
    return gl::glVertexAttribL1i64NV(index, x);
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL1i64vNV(index, v);
}

void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
    return gl::glVertexAttribL1ui64ARB(index, x);
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
    return gl::glVertexAttribL1ui64NV(index, x);
}

void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL1ui64vARB(index, v);
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL1ui64vNV(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttribL2d(index, x, y);
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
    return gl::glVertexAttribL2dEXT(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL2dv(index, v);
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL2dvEXT(index, v);
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
    return gl::glVertexAttribL2i64NV(index, x, y);
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL2i64vNV(index, v);
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
    return gl::glVertexAttribL2ui64NV(index, x, y);
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL2ui64vNV(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexAttribL3dEXT(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL3dv(index, v);
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL3dvEXT(index, v);
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
    return gl::glVertexAttribL3i64NV(index, x, y, z);
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL3i64vNV(index, v);
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
    return gl::glVertexAttribL3ui64NV(index, x, y, z);
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL3ui64vNV(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexAttribL4dEXT(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL4dv(index, v);
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
    return gl::glVertexAttribL4dvEXT(index, v);
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
    return gl::glVertexAttribL4i64NV(index, x, y, z, w);
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
    return gl::glVertexAttribL4i64vNV(index, v);
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
    return gl::glVertexAttribL4ui64NV(index, x, y, z, w);
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
    return gl::glVertexAttribL4ui64vNV(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return gl::glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexAttribLFormatNV(index, size, type, stride);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP1ui(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP1uiv(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP2ui(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP2uiv(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP3ui(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP3uiv(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return gl::glVertexAttribP4ui(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return gl::glVertexAttribP4uiv(index, type, normalized, value);
}

void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
    return gl::glVertexAttribParameteriAMD(index, pname, param);
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs1dvNV(index, count, v);
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs1fvNV(index, count, v);
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs1hvNV(index, n, v);
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs1svNV(index, count, v);
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs2dvNV(index, count, v);
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs2fvNV(index, count, v);
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs2hvNV(index, n, v);
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs2svNV(index, count, v);
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs3dvNV(index, count, v);
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs3fvNV(index, count, v);
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs3hvNV(index, n, v);
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs3svNV(index, count, v);
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
    return gl::glVertexAttribs4dvNV(index, count, v);
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
    return gl::glVertexAttribs4fvNV(index, count, v);
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
    return gl::glVertexAttribs4hvNV(index, n, v);
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
    return gl::glVertexAttribs4svNV(index, count, v);
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
    return gl::glVertexAttribs4ubvNV(index, count, v);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return gl::glVertexBindingDivisor(bindingindex, divisor);
}

void glVertexBlendARB(GLint count)
{
    return gl::glVertexBlendARB(count);
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
    return gl::glVertexBlendEnvfATI(pname, param);
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
    return gl::glVertexBlendEnviATI(pname, param);
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
    return gl::glVertexFormatNV(size, type, stride);
}

void glVertexP2ui(GLenum type, GLuint value)
{
    return gl::glVertexP2ui(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP2uiv(type, value);
}

void glVertexP3ui(GLenum type, GLuint value)
{
    return gl::glVertexP3ui(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP3uiv(type, value);
}

void glVertexP4ui(GLenum type, GLuint value)
{
    return gl::glVertexP4ui(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return gl::glVertexP4uiv(type, value);
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
    return gl::glVertexPointerEXT(size, type, stride, count, pointer);
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
    return gl::glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
    return gl::glVertexPointervINTEL(size, type, pointer);
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
    return gl::glVertexStream1dATI(stream, x);
}

void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream1dvATI(stream, coords);
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
    return gl::glVertexStream1fATI(stream, x);
}

void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream1fvATI(stream, coords);
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
    return gl::glVertexStream1iATI(stream, x);
}

void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream1ivATI(stream, coords);
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
    return gl::glVertexStream1sATI(stream, x);
}

void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream1svATI(stream, coords);
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
    return gl::glVertexStream2dATI(stream, x, y);
}

void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream2dvATI(stream, coords);
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
    return gl::glVertexStream2fATI(stream, x, y);
}

void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream2fvATI(stream, coords);
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
    return gl::glVertexStream2iATI(stream, x, y);
}

void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream2ivATI(stream, coords);
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
    return gl::glVertexStream2sATI(stream, x, y);
}

void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream2svATI(stream, coords);
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glVertexStream3dATI(stream, x, y, z);
}

void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream3dvATI(stream, coords);
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glVertexStream3fATI(stream, x, y, z);
}

void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream3fvATI(stream, coords);
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
    return gl::glVertexStream3iATI(stream, x, y, z);
}

void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream3ivATI(stream, coords);
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
    return gl::glVertexStream3sATI(stream, x, y, z);
}

void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream3svATI(stream, coords);
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glVertexStream4dATI(stream, x, y, z, w);
}

void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
    return gl::glVertexStream4dvATI(stream, coords);
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glVertexStream4fATI(stream, x, y, z, w);
}

void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
    return gl::glVertexStream4fvATI(stream, coords);
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
    return gl::glVertexStream4iATI(stream, x, y, z, w);
}

void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
    return gl::glVertexStream4ivATI(stream, coords);
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glVertexStream4sATI(stream, x, y, z, w);
}

void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
    return gl::glVertexStream4svATI(stream, coords);
}

void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glVertexWeightPointerEXT(size, type, stride, pointer);
}

void glVertexWeightfEXT(GLfloat weight)
{
    return gl::glVertexWeightfEXT(weight);
}

void glVertexWeightfvEXT(const GLfloat * weight)
{
    return gl::glVertexWeightfvEXT(weight);
}

void glVertexWeighthNV(GLhalfNV weight)
{
    return gl::glVertexWeighthNV(weight);
}

void glVertexWeighthvNV(const GLhalfNV * weight)
{
    return gl::glVertexWeighthvNV(weight);
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
    return static_cast<gl32ext::GLenum>(gl::glVideoCaptureNV(video_capture_slot, sequence_num, capture_time));
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
    return gl::glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
    return gl::glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
    return gl::glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return gl::glViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return gl::glViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return gl::glViewportIndexedfv(index, v);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return gl::glWeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return gl::glWeightPointerARB(size, type, stride, pointer);
}

void glWeightbvARB(GLint size, const GLbyte * weights)
{
    return gl::glWeightbvARB(size, weights);
}

void glWeightdvARB(GLint size, const GLdouble * weights)
{
    return gl::glWeightdvARB(size, weights);
}

void glWeightfvARB(GLint size, const GLfloat * weights)
{
    return gl::glWeightfvARB(size, weights);
}

void glWeightivARB(GLint size, const GLint * weights)
{
    return gl::glWeightivARB(size, weights);
}

void glWeightsvARB(GLint size, const GLshort * weights)
{
    return gl::glWeightsvARB(size, weights);
}

void glWeightubvARB(GLint size, const GLubyte * weights)
{
    return gl::glWeightubvARB(size, weights);
}

void glWeightuivARB(GLint size, const GLuint * weights)
{
    return gl::glWeightuivARB(size, weights);
}

void glWeightusvARB(GLint size, const GLushort * weights)
{
    return gl::glWeightusvARB(size, weights);
}

void glWindowPos2dARB(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2dARB(x, y);
}

void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
    return gl::glWindowPos2dMESA(x, y);
}

void glWindowPos2dvARB(const GLdouble * v)
{
    return gl::glWindowPos2dvARB(v);
}

void glWindowPos2dvMESA(const GLdouble * v)
{
    return gl::glWindowPos2dvMESA(v);
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2fARB(x, y);
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
    return gl::glWindowPos2fMESA(x, y);
}

void glWindowPos2fvARB(const GLfloat * v)
{
    return gl::glWindowPos2fvARB(v);
}

void glWindowPos2fvMESA(const GLfloat * v)
{
    return gl::glWindowPos2fvMESA(v);
}

void glWindowPos2iARB(GLint x, GLint y)
{
    return gl::glWindowPos2iARB(x, y);
}

void glWindowPos2iMESA(GLint x, GLint y)
{
    return gl::glWindowPos2iMESA(x, y);
}

void glWindowPos2ivARB(const GLint * v)
{
    return gl::glWindowPos2ivARB(v);
}

void glWindowPos2ivMESA(const GLint * v)
{
    return gl::glWindowPos2ivMESA(v);
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
    return gl::glWindowPos2sARB(x, y);
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
    return gl::glWindowPos2sMESA(x, y);
}

void glWindowPos2svARB(const GLshort * v)
{
    return gl::glWindowPos2svARB(v);
}

void glWindowPos2svMESA(const GLshort * v)
{
    return gl::glWindowPos2svMESA(v);
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3dARB(x, y, z);
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
    return gl::glWindowPos3dMESA(x, y, z);
}

void glWindowPos3dvARB(const GLdouble * v)
{
    return gl::glWindowPos3dvARB(v);
}

void glWindowPos3dvMESA(const GLdouble * v)
{
    return gl::glWindowPos3dvMESA(v);
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3fARB(x, y, z);
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
    return gl::glWindowPos3fMESA(x, y, z);
}

void glWindowPos3fvARB(const GLfloat * v)
{
    return gl::glWindowPos3fvARB(v);
}

void glWindowPos3fvMESA(const GLfloat * v)
{
    return gl::glWindowPos3fvMESA(v);
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3iARB(x, y, z);
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
    return gl::glWindowPos3iMESA(x, y, z);
}

void glWindowPos3ivARB(const GLint * v)
{
    return gl::glWindowPos3ivARB(v);
}

void glWindowPos3ivMESA(const GLint * v)
{
    return gl::glWindowPos3ivMESA(v);
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3sARB(x, y, z);
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
    return gl::glWindowPos3sMESA(x, y, z);
}

void glWindowPos3svARB(const GLshort * v)
{
    return gl::glWindowPos3svARB(v);
}

void glWindowPos3svMESA(const GLshort * v)
{
    return gl::glWindowPos3svMESA(v);
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return gl::glWindowPos4dMESA(x, y, z, w);
}

void glWindowPos4dvMESA(const GLdouble * v)
{
    return gl::glWindowPos4dvMESA(v);
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return gl::glWindowPos4fMESA(x, y, z, w);
}

void glWindowPos4fvMESA(const GLfloat * v)
{
    return gl::glWindowPos4fvMESA(v);
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
    return gl::glWindowPos4iMESA(x, y, z, w);
}

void glWindowPos4ivMESA(const GLint * v)
{
    return gl::glWindowPos4ivMESA(v);
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return gl::glWindowPos4sMESA(x, y, z, w);
}

void glWindowPos4svMESA(const GLshort * v)
{
    return gl::glWindowPos4svMESA(v);
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
    return gl::glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl32ext
