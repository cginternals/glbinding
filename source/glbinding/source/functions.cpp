#include <glbinding/functions.h>
#include <glbinding/FunctionObjects.h>

namespace gl {

void glAccum(GLenum op, GLfloat value)
{
	return functions::glAccum(op, value);
}

void glAccumxOES(GLenum op, GLfixed value)
{
	return functions::glAccumxOES(op, value);
}

void glActiveProgramEXT(GLuint program)
{
	return functions::glActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
	return functions::glActiveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
	return functions::glActiveShaderProgramEXT(pipeline, program);
}

void glActiveStencilFaceEXT(GLenum face)
{
	return functions::glActiveStencilFaceEXT(face);
}

void glActiveTexture(GLenum texture)
{
	return functions::glActiveTexture(texture);
}

void glActiveTextureARB(GLenum texture)
{
	return functions::glActiveTextureARB(texture);
}

void glActiveVaryingNV(GLuint program, const GLchar * name)
{
	return functions::glActiveVaryingNV(program, name);
}

void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	return functions::glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	return functions::glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	return functions::glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
	return functions::glAlphaFunc(func, ref);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
	return functions::glAlphaFuncQCOM(func, ref);
}

void glAlphaFuncx(GLenum func, GLfixed ref)
{
	return functions::glAlphaFuncx(func, ref);
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
	return functions::glAlphaFuncxOES(func, ref);
}

void glApplyTextureEXT(GLenum mode)
{
	return functions::glApplyTextureEXT(mode);
}

GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
	return functions::glAreProgramsResidentNV(n, programs, residences);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
	return functions::glAreTexturesResident(n, textures, residences);
}

GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
	return functions::glAreTexturesResidentEXT(n, textures, residences);
}

void glArrayElement(GLint i)
{
	return functions::glArrayElement(i);
}

void glArrayElementEXT(GLint i)
{
	return functions::glArrayElementEXT(i);
}

void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::glArrayObjectATI(array, size, type, stride, buffer, offset);
}

void glAsyncMarkerSGIX(GLuint marker)
{
	return functions::glAsyncMarkerSGIX(marker);
}

void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
	return functions::glAttachObjectARB(containerObj, obj);
}

void glAttachShader(GLuint program, GLuint shader)
{
	return functions::glAttachShader(program, shader);
}

void glBegin(GLenum mode)
{
	return functions::glBegin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
	return functions::glBeginConditionalRender(id, mode);
}

void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
	return functions::glBeginConditionalRenderNV(id, mode);
}

void glBeginConditionalRenderNVX(GLuint id)
{
	return functions::glBeginConditionalRenderNVX(id);
}

void glBeginFragmentShaderATI()
{
	return functions::glBeginFragmentShaderATI();
}

void glBeginOcclusionQueryNV(GLuint id)
{
	return functions::glBeginOcclusionQueryNV(id);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
	return functions::glBeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
	return functions::glBeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
	return functions::glBeginQuery(target, id);
}

void glBeginQueryARB(GLenum target, GLuint id)
{
	return functions::glBeginQueryARB(target, id);
}

void glBeginQueryEXT(GLenum target, GLuint id)
{
	return functions::glBeginQueryEXT(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
	return functions::glBeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
	return functions::glBeginTransformFeedback(primitiveMode);
}

void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
	return functions::glBeginTransformFeedbackEXT(primitiveMode);
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
	return functions::glBeginTransformFeedbackNV(primitiveMode);
}

void glBeginVertexShaderEXT()
{
	return functions::glBeginVertexShaderEXT();
}

void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
	return functions::glBeginVideoCaptureNV(video_capture_slot);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
	return functions::glBindAttribLocation(program, index, name);
}

void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
	return functions::glBindAttribLocationARB(programObj, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
	return functions::glBindBuffer(target, buffer);
}

void glBindBufferARB(GLenum target, GLuint buffer)
{
	return functions::glBindBufferARB(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
	return functions::glBindBufferBase(target, index, buffer);
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
	return functions::glBindBufferBaseEXT(target, index, buffer);
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
	return functions::glBindBufferBaseNV(target, index, buffer);
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	return functions::glBindBufferOffsetEXT(target, index, buffer, offset);
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	return functions::glBindBufferOffsetNV(target, index, buffer, offset);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glBindBufferRange(target, index, buffer, offset, size);
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glBindBufferRangeEXT(target, index, buffer, offset, size);
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glBindBufferRangeNV(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
	return functions::glBindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
	return functions::glBindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
	return functions::glBindFragDataLocation(program, color, name);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
	return functions::glBindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
	return functions::glBindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFragmentShaderATI(GLuint id)
{
	return functions::glBindFragmentShaderATI(id);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
	return functions::glBindFramebuffer(target, framebuffer);
}

void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
	return functions::glBindFramebufferEXT(target, framebuffer);
}

void glBindFramebufferOES(GLenum target, GLuint framebuffer)
{
	return functions::glBindFramebufferOES(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
	return functions::glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
	return functions::glBindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
	return functions::glBindImageTextures(first, count, textures);
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
	return functions::glBindLightParameterEXT(light, value);
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
	return functions::glBindMaterialParameterEXT(face, value);
}

void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
	return functions::glBindMultiTextureEXT(texunit, target, texture);
}

GLuint glBindParameterEXT(GLenum value)
{
	return functions::glBindParameterEXT(value);
}

void glBindProgramARB(GLenum target, GLuint program)
{
	return functions::glBindProgramARB(target, program);
}

void glBindProgramNV(GLenum target, GLuint id)
{
	return functions::glBindProgramNV(target, id);
}

void glBindProgramPipeline(GLuint pipeline)
{
	return functions::glBindProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
	return functions::glBindProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
	return functions::glBindRenderbuffer(target, renderbuffer);
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
	return functions::glBindRenderbufferEXT(target, renderbuffer);
}

void glBindRenderbufferOES(GLenum target, GLuint renderbuffer)
{
	return functions::glBindRenderbufferOES(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
	return functions::glBindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
	return functions::glBindSamplers(first, count, samplers);
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
	return functions::glBindTexGenParameterEXT(unit, coord, value);
}

void glBindTexture(GLenum target, GLuint texture)
{
	return functions::glBindTexture(target, texture);
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
	return functions::glBindTextureEXT(target, texture);
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
	return functions::glBindTextureUnitParameterEXT(unit, value);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
	return functions::glBindTextures(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
	return functions::glBindTransformFeedback(target, id);
}

void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
	return functions::glBindTransformFeedbackNV(target, id);
}

void glBindVertexArray(GLuint array)
{
	return functions::glBindVertexArray(array);
}

void glBindVertexArrayAPPLE(GLuint array)
{
	return functions::glBindVertexArrayAPPLE(array);
}

void glBindVertexArrayOES(GLuint array)
{
	return functions::glBindVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
	return functions::glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
	return functions::glBindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBindVertexShaderEXT(GLuint id)
{
	return functions::glBindVertexShaderEXT(id);
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
	return functions::glBindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
	return functions::glBindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
	return functions::glBinormal3bEXT(bx, by, bz);
}

void glBinormal3bvEXT(const GLbyte * v)
{
	return functions::glBinormal3bvEXT(v);
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
	return functions::glBinormal3dEXT(bx, by, bz);
}

void glBinormal3dvEXT(const GLdouble * v)
{
	return functions::glBinormal3dvEXT(v);
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
	return functions::glBinormal3fEXT(bx, by, bz);
}

void glBinormal3fvEXT(const GLfloat * v)
{
	return functions::glBinormal3fvEXT(v);
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
	return functions::glBinormal3iEXT(bx, by, bz);
}

void glBinormal3ivEXT(const GLint * v)
{
	return functions::glBinormal3ivEXT(v);
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
	return functions::glBinormal3sEXT(bx, by, bz);
}

void glBinormal3svEXT(const GLshort * v)
{
	return functions::glBinormal3svEXT(v);
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glBinormalPointerEXT(type, stride, pointer);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
	return functions::glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
	return functions::glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendBarrierKHR()
{
	return functions::glBlendBarrierKHR();
}

void glBlendBarrierNV()
{
	return functions::glBlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::glBlendColor(red, green, blue, alpha);
}

void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::glBlendColorEXT(red, green, blue, alpha);
}

void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glBlendColorxOES(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
	return functions::glBlendEquation(mode);
}

void glBlendEquationEXT(GLenum mode)
{
	return functions::glBlendEquationEXT(mode);
}

void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
	return functions::glBlendEquationIndexedAMD(buf, mode);
}

void glBlendEquationOES(GLenum mode)
{
	return functions::glBlendEquationOES(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparateOES(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::glBlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
	return functions::glBlendEquationi(buf, mode);
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
	return functions::glBlendEquationiARB(buf, mode);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
	return functions::glBlendEquationiEXT(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	return functions::glBlendFunc(sfactor, dfactor);
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
	return functions::glBlendFuncIndexedAMD(buf, src, dst);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::glBlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::glBlendFuncSeparateOES(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::glBlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
	return functions::glBlendFunci(buf, src, dst);
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
	return functions::glBlendFunciARB(buf, src, dst);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
	return functions::glBlendFunciEXT(buf, src, dst);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
	return functions::glBlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::glBlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::glBlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
	return functions::glBufferAddressRangeNV(pname, index, address, length);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
	return functions::glBufferData(target, size, data, usage);
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
	return functions::glBufferDataARB(target, size, data, usage);
}

void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
	return functions::glBufferParameteriAPPLE(target, pname, param);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
	return functions::glBufferStorage(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
	return functions::glBufferSubData(target, offset, size, data);
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
	return functions::glBufferSubDataARB(target, offset, size, data);
}

void glCallList(GLuint list)
{
	return functions::glCallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
	return functions::glCallLists(n, type, lists);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
	return functions::glCheckFramebufferStatus(target);
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
	return functions::glCheckFramebufferStatusEXT(target);
}

GLenum glCheckFramebufferStatusOES(GLenum target)
{
	return functions::glCheckFramebufferStatusOES(target);
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
	return functions::glCheckNamedFramebufferStatusEXT(framebuffer, target);
}

void glClampColor(GLenum target, GLenum clamp)
{
	return functions::glClampColor(target, clamp);
}

void glClampColorARB(GLenum target, GLenum clamp)
{
	return functions::glClampColorARB(target, clamp);
}

void glClear(GLbitfield mask)
{
	return functions::glClear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::glClearAccum(red, green, blue, alpha);
}

void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glClearAccumxOES(red, green, blue, alpha);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
	return functions::glClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
	return functions::glClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
	return functions::glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
	return functions::glClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
	return functions::glClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
	return functions::glClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::glClearColor(red, green, blue, alpha);
}

void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
	return functions::glClearColorIiEXT(red, green, blue, alpha);
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	return functions::glClearColorIuiEXT(red, green, blue, alpha);
}

void glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glClearColorx(red, green, blue, alpha);
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glClearColorxOES(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
	return functions::glClearDepth(depth);
}

void glClearDepthdNV(GLdouble depth)
{
	return functions::glClearDepthdNV(depth);
}

void glClearDepthf(GLfloat d)
{
	return functions::glClearDepthf(d);
}

void glClearDepthfOES(GLclampf depth)
{
	return functions::glClearDepthfOES(depth);
}

void glClearDepthx(GLfixed depth)
{
	return functions::glClearDepthx(depth);
}

void glClearDepthxOES(GLfixed depth)
{
	return functions::glClearDepthxOES(depth);
}

void glClearIndex(GLfloat c)
{
	return functions::glClearIndex(c);
}

void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
	return functions::glClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
	return functions::glClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void glClearStencil(GLint s)
{
	return functions::glClearStencil(s);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
	return functions::glClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
	return functions::glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glClientActiveTexture(GLenum texture)
{
	return functions::glClientActiveTexture(texture);
}

void glClientActiveTextureARB(GLenum texture)
{
	return functions::glClientActiveTextureARB(texture);
}

void glClientActiveVertexStreamATI(GLenum stream)
{
	return functions::glClientActiveVertexStreamATI(stream);
}

void glClientAttribDefaultEXT(GLbitfield mask)
{
	return functions::glClientAttribDefaultEXT(mask);
}

GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::glClientWaitSync(sync, flags, timeout);
}

GLenum glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::glClientWaitSyncAPPLE(sync, flags, timeout);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
	return functions::glClipPlane(plane, equation);
}

void glClipPlanef(GLenum p, const GLfloat * eqn)
{
	return functions::glClipPlanef(p, eqn);
}

void glClipPlanefIMG(GLenum p, const GLfloat * eqn)
{
	return functions::glClipPlanefIMG(p, eqn);
}

void glClipPlanefOES(GLenum plane, const GLfloat * equation)
{
	return functions::glClipPlanefOES(plane, equation);
}

void glClipPlanex(GLenum plane, const GLfixed * equation)
{
	return functions::glClipPlanex(plane, equation);
}

void glClipPlanexIMG(GLenum p, const GLfixed * eqn)
{
	return functions::glClipPlanexIMG(p, eqn);
}

void glClipPlanexOES(GLenum plane, const GLfixed * equation)
{
	return functions::glClipPlanexOES(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::glColor3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
	return functions::glColor3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::glColor3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
	return functions::glColor3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::glColor3f(red, green, blue);
}

void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glColor3fVertex3fSUN(r, g, b, x, y, z);
}

void glColor3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
	return functions::glColor3fVertex3fvSUN(c, v);
}

void glColor3fv(const GLfloat * v)
{
	return functions::glColor3fv(v);
}

void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	return functions::glColor3hNV(red, green, blue);
}

void glColor3hvNV(const GLhalfNV * v)
{
	return functions::glColor3hvNV(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
	return functions::glColor3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
	return functions::glColor3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
	return functions::glColor3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
	return functions::glColor3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::glColor3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
	return functions::glColor3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
	return functions::glColor3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
	return functions::glColor3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
	return functions::glColor3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
	return functions::glColor3usv(v);
}

void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
	return functions::glColor3xOES(red, green, blue);
}

void glColor3xvOES(const GLfixed * components)
{
	return functions::glColor3xvOES(components);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	return functions::glColor4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
	return functions::glColor4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	return functions::glColor4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
	return functions::glColor4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::glColor4f(red, green, blue, alpha);
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::glColor4fNormal3fVertex3fvSUN(c, n, v);
}

void glColor4fv(const GLfloat * v)
{
	return functions::glColor4fv(v);
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
	return functions::glColor4hNV(red, green, blue, alpha);
}

void glColor4hvNV(const GLhalfNV * v)
{
	return functions::glColor4hvNV(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	return functions::glColor4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
	return functions::glColor4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	return functions::glColor4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
	return functions::glColor4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	return functions::glColor4ub(red, green, blue, alpha);
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
	return functions::glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

void glColor4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
	return functions::glColor4ubVertex2fvSUN(c, v);
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void glColor4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
	return functions::glColor4ubVertex3fvSUN(c, v);
}

void glColor4ubv(const GLubyte * v)
{
	return functions::glColor4ubv(v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	return functions::glColor4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
	return functions::glColor4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	return functions::glColor4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
	return functions::glColor4usv(v);
}

void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glColor4x(red, green, blue, alpha);
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::glColor4xOES(red, green, blue, alpha);
}

void glColor4xvOES(const GLfixed * components)
{
	return functions::glColor4xvOES(components);
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::glColorFormatNV(size, type, stride);
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	return functions::glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	return functions::glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	return functions::glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	return functions::glColorMask(red, green, blue, alpha);
}

void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	return functions::glColorMaskIndexedEXT(index, r, g, b, a);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	return functions::glColorMaski(index, r, g, b, a);
}

void glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	return functions::glColorMaskiEXT(index, r, g, b, a);
}

void glColorMaterial(GLenum face, GLenum mode)
{
	return functions::glColorMaterial(face, mode);
}

void glColorP3ui(GLenum type, GLuint color)
{
	return functions::glColorP3ui(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color)
{
	return functions::glColorP3uiv(type, color);
}

void glColorP4ui(GLenum type, GLuint color)
{
	return functions::glColorP4ui(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color)
{
	return functions::glColorP4uiv(type, color);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glColorPointer(size, type, stride, pointer);
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::glColorPointerEXT(size, type, stride, count, pointer);
}

void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::glColorPointervINTEL(size, type, pointer);
}

void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
	return functions::glColorSubTable(target, start, count, format, type, data);
}

void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
	return functions::glColorSubTableEXT(target, start, count, format, type, data);
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::glColorTable(target, internalformat, width, format, type, table);
}

void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::glColorTableEXT(target, internalFormat, width, format, type, table);
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glColorTableParameterfv(target, pname, params);
}

void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glColorTableParameterfvSGI(target, pname, params);
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glColorTableParameteriv(target, pname, params);
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glColorTableParameterivSGI(target, pname, params);
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::glColorTableSGI(target, internalformat, width, format, type, table);
}

void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	return functions::glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
	return functions::glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
	return functions::glCombinerParameterfNV(pname, param);
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
	return functions::glCombinerParameterfvNV(pname, params);
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
	return functions::glCombinerParameteriNV(pname, param);
}

void glCombinerParameterivNV(GLenum pname, const GLint * params)
{
	return functions::glCombinerParameterivNV(pname, params);
}

void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
	return functions::glCombinerStageParameterfvNV(stage, pname, params);
}

void glCompileShader(GLuint shader)
{
	return functions::glCompileShader(shader);
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
	return functions::glCompileShaderARB(shaderObj);
}

void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
	return functions::glCompileShaderIncludeARB(shader, count, path, length);
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::glCompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::glCompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
	return functions::glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
	return functions::glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
	return functions::glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
	return functions::glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
	return functions::glConvolutionParameterf(target, pname, params);
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
	return functions::glConvolutionParameterfEXT(target, pname, params);
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glConvolutionParameterfv(target, pname, params);
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glConvolutionParameterfvEXT(target, pname, params);
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
	return functions::glConvolutionParameteri(target, pname, params);
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
	return functions::glConvolutionParameteriEXT(target, pname, params);
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glConvolutionParameteriv(target, pname, params);
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glConvolutionParameterivEXT(target, pname, params);
}

void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::glConvolutionParameterxOES(target, pname, param);
}

void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::glConvolutionParameterxvOES(target, pname, params);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::glCopyBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyColorSubTable(target, start, x, y, width);
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyColorSubTableEXT(target, start, x, y, width);
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyColorTable(target, internalformat, x, y, width);
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyColorTableSGI(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
	return functions::glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
	return functions::glCopyImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::glCopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::glCopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::glCopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
	return functions::glCopyPathNV(resultPath, srcPath);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	return functions::glCopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::glCopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::glCopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::glCopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
	return functions::glCopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::glCopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glCopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
	return functions::glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
	return functions::glCoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
	return functions::glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
	return functions::glCoverStrokePathNV(path, coverMode);
}

void glCoverageMaskNV(GLboolean mask)
{
	return functions::glCoverageMaskNV(mask);
}

void glCoverageOperationNV(GLenum operation)
{
	return functions::glCoverageOperationNV(operation);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
	return functions::glCreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
	return functions::glCreateProgram();
}

GLhandleARB glCreateProgramObjectARB()
{
	return functions::glCreateProgramObjectARB();
}

GLuint glCreateShader(GLenum type)
{
	return functions::glCreateShader(type);
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
	return functions::glCreateShaderObjectARB(shaderType);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
	return functions::glCreateShaderProgramEXT(type, string);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
	return functions::glCreateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
	return functions::glCreateShaderProgramvEXT(type, count, strings);
}

GLsync glCreateSyncFromCLeventARB(struct _cl_context * context, struct _cl_event * event, GLbitfield flags)
{
	return functions::glCreateSyncFromCLeventARB(context, event, flags);
}

void glCullFace(GLenum mode)
{
	return functions::glCullFace(mode);
}

void glCullParameterdvEXT(GLenum pname, GLdouble * params)
{
	return functions::glCullParameterdvEXT(pname, params);
}

void glCullParameterfvEXT(GLenum pname, GLfloat * params)
{
	return functions::glCullParameterfvEXT(pname, params);
}

void glCurrentPaletteMatrixARB(GLint index)
{
	return functions::glCurrentPaletteMatrixARB(index);
}

void glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
	return functions::glCurrentPaletteMatrixOES(matrixpaletteindex);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
	return functions::glDebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
	return functions::glDebugMessageCallbackAMD(callback, userParam);
}

void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
	return functions::glDebugMessageCallbackARB(callback, userParam);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
	return functions::glDebugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::glDebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::glDebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::glDebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::glDebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::glDebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
	return functions::glDebugMessageInsertAMD(category, severity, id, length, buf);
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::glDebugMessageInsertARB(source, type, id, severity, length, buf);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::glDebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeformSGIX(GLbitfield mask)
{
	return functions::glDeformSGIX(mask);
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
	return functions::glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
	return functions::glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
	return functions::glDeleteAsyncMarkersSGIX(marker, range);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
	return functions::glDeleteBuffers(n, buffers);
}

void glDeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
	return functions::glDeleteBuffersARB(n, buffers);
}

void glDeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
	return functions::glDeleteFencesAPPLE(n, fences);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
	return functions::glDeleteFencesNV(n, fences);
}

void glDeleteFragmentShaderATI(GLuint id)
{
	return functions::glDeleteFragmentShaderATI(id);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
	return functions::glDeleteFramebuffers(n, framebuffers);
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
	return functions::glDeleteFramebuffersEXT(n, framebuffers);
}

void glDeleteFramebuffersOES(GLsizei n, const GLuint * framebuffers)
{
	return functions::glDeleteFramebuffersOES(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range)
{
	return functions::glDeleteLists(list, range);
}

void glDeleteNamedStringARB(GLint namelen, const GLchar * name)
{
	return functions::glDeleteNamedStringARB(namelen, name);
}

void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
	return functions::glDeleteNamesAMD(identifier, num, names);
}

void glDeleteObjectARB(GLhandleARB obj)
{
	return functions::glDeleteObjectARB(obj);
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteOcclusionQueriesNV(n, ids);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
	return functions::glDeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
	return functions::glDeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
	return functions::glDeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
	return functions::glDeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
	return functions::glDeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
	return functions::glDeleteProgramPipelinesEXT(n, pipelines);
}

void glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
	return functions::glDeleteProgramsARB(n, programs);
}

void glDeleteProgramsNV(GLsizei n, const GLuint * programs)
{
	return functions::glDeleteProgramsNV(n, programs);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteQueries(n, ids);
}

void glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteQueriesARB(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
	return functions::glDeleteRenderbuffers(n, renderbuffers);
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
	return functions::glDeleteRenderbuffersEXT(n, renderbuffers);
}

void glDeleteRenderbuffersOES(GLsizei n, const GLuint * renderbuffers)
{
	return functions::glDeleteRenderbuffersOES(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
	return functions::glDeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
	return functions::glDeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
	return functions::glDeleteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
	return functions::glDeleteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
	return functions::glDeleteTextures(n, textures);
}

void glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
	return functions::glDeleteTexturesEXT(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteTransformFeedbacks(n, ids);
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
	return functions::glDeleteTransformFeedbacksNV(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
	return functions::glDeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
	return functions::glDeleteVertexArraysAPPLE(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
	return functions::glDeleteVertexArraysOES(n, arrays);
}

void glDeleteVertexShaderEXT(GLuint id)
{
	return functions::glDeleteVertexShaderEXT(id);
}

void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
	return functions::glDepthBoundsEXT(zmin, zmax);
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
	return functions::glDepthBoundsdNV(zmin, zmax);
}

void glDepthFunc(GLenum func)
{
	return functions::glDepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
	return functions::glDepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
	return functions::glDepthRange(near_, far_);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
	return functions::glDepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
	return functions::glDepthRangeIndexed(index, n, f);
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
	return functions::glDepthRangedNV(zNear, zFar);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
	return functions::glDepthRangef(n, f);
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
	return functions::glDepthRangefOES(n, f);
}

void glDepthRangex(GLfixed n, GLfixed f)
{
	return functions::glDepthRangex(n, f);
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
	return functions::glDepthRangexOES(n, f);
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
	return functions::glDetachObjectARB(containerObj, attachedObj);
}

void glDetachShader(GLuint program, GLuint shader)
{
	return functions::glDetachShader(program, shader);
}

void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
	return functions::glDetailTexFuncSGIS(target, n, points);
}

void glDisable(GLenum cap)
{
	return functions::glDisable(cap);
}

void glDisableClientState(GLenum array)
{
	return functions::glDisableClientState(array);
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
	return functions::glDisableClientStateIndexedEXT(array, index);
}

void glDisableClientStateiEXT(GLenum array, GLuint index)
{
	return functions::glDisableClientStateiEXT(array, index);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
	return functions::glDisableDriverControlQCOM(driverControl);
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
	return functions::glDisableIndexedEXT(target, index);
}

void glDisableVariantClientStateEXT(GLuint id)
{
	return functions::glDisableVariantClientStateEXT(id);
}

void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
	return functions::glDisableVertexArrayAttribEXT(vaobj, index);
}

void glDisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
	return functions::glDisableVertexArrayEXT(vaobj, array);
}

void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	return functions::glDisableVertexAttribAPPLE(index, pname);
}

void glDisableVertexAttribArray(GLuint index)
{
	return functions::glDisableVertexAttribArray(index);
}

void glDisableVertexAttribArrayARB(GLuint index)
{
	return functions::glDisableVertexAttribArrayARB(index);
}

void glDisablei(GLenum target, GLuint index)
{
	return functions::glDisablei(target, index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
	return functions::glDisableiEXT(target, index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
	return functions::glDiscardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
	return functions::glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
	return functions::glDispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
	return functions::glDispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	return functions::glDrawArrays(mode, first, count);
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
	return functions::glDrawArraysEXT(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
	return functions::glDrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
	return functions::glDrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::glDrawArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::glDrawArraysInstancedARB(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
	return functions::glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
	return functions::glDrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::glDrawArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffer(GLenum mode)
{
	return functions::glDrawBuffer(mode);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
	return functions::glDrawBuffers(n, bufs);
}

void glDrawBuffersARB(GLsizei n, const GLenum * bufs)
{
	return functions::glDrawBuffersARB(n, bufs);
}

void glDrawBuffersATI(GLsizei n, const GLenum * bufs)
{
	return functions::glDrawBuffersATI(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
	return functions::glDrawBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
	return functions::glDrawBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
	return functions::glDrawBuffersNV(n, bufs);
}

void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
	return functions::glDrawElementArrayAPPLE(mode, first, count);
}

void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
	return functions::glDrawElementArrayATI(mode, count);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
	return functions::glDrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
	return functions::glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
	return functions::glDrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
	return functions::glDrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::glDrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
	return functions::glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
	return functions::glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
	return functions::glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::glDrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
	return functions::glDrawMeshArraysSUN(mode, first, count, width);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::glDrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
	return functions::glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
	return functions::glDrawRangeElementArrayATI(mode, start, end, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
	return functions::glDrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
	return functions::glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
	return functions::glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
	return functions::glDrawTexfOES(x, y, z, width, height);
}

void glDrawTexfvOES(const GLfloat * coords)
{
	return functions::glDrawTexfvOES(coords);
}

void glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
{
	return functions::glDrawTexiOES(x, y, z, width, height);
}

void glDrawTexivOES(const GLint * coords)
{
	return functions::glDrawTexivOES(coords);
}

void glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
	return functions::glDrawTexsOES(x, y, z, width, height);
}

void glDrawTexsvOES(const GLshort * coords)
{
	return functions::glDrawTexsvOES(coords);
}

void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
	return functions::glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
	return functions::glDrawTexxOES(x, y, z, width, height);
}

void glDrawTexxvOES(const GLfixed * coords)
{
	return functions::glDrawTexxvOES(coords);
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
	return functions::glDrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
	return functions::glDrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
	return functions::glDrawTransformFeedbackNV(mode, id);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
	return functions::glDrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
	return functions::glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
	return functions::glEGLImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
	return functions::glEGLImageTargetTexture2DOES(target, image);
}

void glEdgeFlag(GLboolean flag)
{
	return functions::glEdgeFlag(flag);
}

void glEdgeFlagFormatNV(GLsizei stride)
{
	return functions::glEdgeFlagFormatNV(stride);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
	return functions::glEdgeFlagPointer(stride, pointer);
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
	return functions::glEdgeFlagPointerEXT(stride, count, pointer);
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
	return functions::glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void glEdgeFlagv(const GLboolean * flag)
{
	return functions::glEdgeFlagv(flag);
}

void glElementPointerAPPLE(GLenum type, const void * pointer)
{
	return functions::glElementPointerAPPLE(type, pointer);
}

void glElementPointerATI(GLenum type, const void * pointer)
{
	return functions::glElementPointerATI(type, pointer);
}

void glEnable(GLenum cap)
{
	return functions::glEnable(cap);
}

void glEnableClientState(GLenum array)
{
	return functions::glEnableClientState(array);
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
	return functions::glEnableClientStateIndexedEXT(array, index);
}

void glEnableClientStateiEXT(GLenum array, GLuint index)
{
	return functions::glEnableClientStateiEXT(array, index);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
	return functions::glEnableDriverControlQCOM(driverControl);
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
	return functions::glEnableIndexedEXT(target, index);
}

void glEnableVariantClientStateEXT(GLuint id)
{
	return functions::glEnableVariantClientStateEXT(id);
}

void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
	return functions::glEnableVertexArrayAttribEXT(vaobj, index);
}

void glEnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
	return functions::glEnableVertexArrayEXT(vaobj, array);
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	return functions::glEnableVertexAttribAPPLE(index, pname);
}

void glEnableVertexAttribArray(GLuint index)
{
	return functions::glEnableVertexAttribArray(index);
}

void glEnableVertexAttribArrayARB(GLuint index)
{
	return functions::glEnableVertexAttribArrayARB(index);
}

void glEnablei(GLenum target, GLuint index)
{
	return functions::glEnablei(target, index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
	return functions::glEnableiEXT(target, index);
}

void glEnd()
{
	return functions::glEnd();
}

void glEndConditionalRender()
{
	return functions::glEndConditionalRender();
}

void glEndConditionalRenderNV()
{
	return functions::glEndConditionalRenderNV();
}

void glEndConditionalRenderNVX()
{
	return functions::glEndConditionalRenderNVX();
}

void glEndFragmentShaderATI()
{
	return functions::glEndFragmentShaderATI();
}

void glEndList()
{
	return functions::glEndList();
}

void glEndOcclusionQueryNV()
{
	return functions::glEndOcclusionQueryNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
	return functions::glEndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
	return functions::glEndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
	return functions::glEndQuery(target);
}

void glEndQueryARB(GLenum target)
{
	return functions::glEndQueryARB(target);
}

void glEndQueryEXT(GLenum target)
{
	return functions::glEndQueryEXT(target);
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
	return functions::glEndQueryIndexed(target, index);
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
	return functions::glEndTilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
	return functions::glEndTransformFeedback();
}

void glEndTransformFeedbackEXT()
{
	return functions::glEndTransformFeedbackEXT();
}

void glEndTransformFeedbackNV()
{
	return functions::glEndTransformFeedbackNV();
}

void glEndVertexShaderEXT()
{
	return functions::glEndVertexShaderEXT();
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
	return functions::glEndVideoCaptureNV(video_capture_slot);
}

void glEvalCoord1d(GLdouble u)
{
	return functions::glEvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
	return functions::glEvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
	return functions::glEvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
	return functions::glEvalCoord1fv(u);
}

void glEvalCoord1xOES(GLfixed u)
{
	return functions::glEvalCoord1xOES(u);
}

void glEvalCoord1xvOES(const GLfixed * coords)
{
	return functions::glEvalCoord1xvOES(coords);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
	return functions::glEvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
	return functions::glEvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
	return functions::glEvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
	return functions::glEvalCoord2fv(u);
}

void glEvalCoord2xOES(GLfixed u, GLfixed v)
{
	return functions::glEvalCoord2xOES(u, v);
}

void glEvalCoord2xvOES(const GLfixed * coords)
{
	return functions::glEvalCoord2xvOES(coords);
}

void glEvalMapsNV(GLenum target, GLenum mode)
{
	return functions::glEvalMapsNV(target, mode);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	return functions::glEvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	return functions::glEvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
	return functions::glEvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
	return functions::glEvalPoint2(i, j);
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
	return functions::glExecuteProgramNV(target, id, params);
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
	return functions::glExtGetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
	return functions::glExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
	return functions::glExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
	return functions::glExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
	return functions::glExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
	return functions::glExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
	return functions::glExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
	return functions::glExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
	return functions::glExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
	return functions::glExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
	return functions::glExtIsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
	return functions::glExtTexObjectStateOverrideiQCOM(target, pname, param);
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
	return functions::glExtractComponentEXT(res, src, num);
}

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
	return functions::glFeedbackBuffer(size, type, buffer);
}

void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
	return functions::glFeedbackBufferxOES(n, type, buffer);
}

GLsync glFenceSync(GLenum condition, GLbitfield flags)
{
	return functions::glFenceSync(condition, flags);
}

GLsync glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
	return functions::glFenceSyncAPPLE(condition, flags);
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	return functions::glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

void glFinish()
{
	return functions::glFinish();
}

GLint glFinishAsyncSGIX(GLuint * markerp)
{
	return functions::glFinishAsyncSGIX(markerp);
}

void glFinishFenceAPPLE(GLuint fence)
{
	return functions::glFinishFenceAPPLE(fence);
}

void glFinishFenceNV(GLuint fence)
{
	return functions::glFinishFenceNV(fence);
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
	return functions::glFinishObjectAPPLE(object, name);
}

void glFinishTextureSUNX()
{
	return functions::glFinishTextureSUNX();
}

void glFlush()
{
	return functions::glFlush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
	return functions::glFlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
	return functions::glFlushMappedBufferRangeAPPLE(target, offset, size);
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
	return functions::glFlushMappedBufferRangeEXT(target, offset, length);
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
	return functions::glFlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void glFlushPixelDataRangeNV(GLenum target)
{
	return functions::glFlushPixelDataRangeNV(target);
}

void glFlushRasterSGIX()
{
	return functions::glFlushRasterSGIX();
}

void glFlushStaticDataIBM(GLenum target)
{
	return functions::glFlushStaticDataIBM(target);
}

void glFlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
	return functions::glFlushVertexArrayRangeAPPLE(length, pointer);
}

void glFlushVertexArrayRangeNV()
{
	return functions::glFlushVertexArrayRangeNV();
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
	return functions::glFogCoordFormatNV(type, stride);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glFogCoordPointer(type, stride, pointer);
}

void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glFogCoordPointerEXT(type, stride, pointer);
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void glFogCoordd(GLdouble coord)
{
	return functions::glFogCoordd(coord);
}

void glFogCoorddEXT(GLdouble coord)
{
	return functions::glFogCoorddEXT(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
	return functions::glFogCoorddv(coord);
}

void glFogCoorddvEXT(const GLdouble * coord)
{
	return functions::glFogCoorddvEXT(coord);
}

void glFogCoordf(GLfloat coord)
{
	return functions::glFogCoordf(coord);
}

void glFogCoordfEXT(GLfloat coord)
{
	return functions::glFogCoordfEXT(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
	return functions::glFogCoordfv(coord);
}

void glFogCoordfvEXT(const GLfloat * coord)
{
	return functions::glFogCoordfvEXT(coord);
}

void glFogCoordhNV(GLhalfNV fog)
{
	return functions::glFogCoordhNV(fog);
}

void glFogCoordhvNV(const GLhalfNV * fog)
{
	return functions::glFogCoordhvNV(fog);
}

void glFogFuncSGIS(GLsizei n, const GLfloat * points)
{
	return functions::glFogFuncSGIS(n, points);
}

void glFogf(GLenum pname, GLfloat param)
{
	return functions::glFogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
	return functions::glFogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
	return functions::glFogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
	return functions::glFogiv(pname, params);
}

void glFogx(GLenum pname, GLfixed param)
{
	return functions::glFogx(pname, param);
}

void glFogxOES(GLenum pname, GLfixed param)
{
	return functions::glFogxOES(pname, param);
}

void glFogxv(GLenum pname, const GLfixed * param)
{
	return functions::glFogxv(pname, param);
}

void glFogxvOES(GLenum pname, const GLfixed * param)
{
	return functions::glFogxvOES(pname, param);
}

void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
	return functions::glFragmentColorMaterialSGIX(face, mode);
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
	return functions::glFragmentLightModelfSGIX(pname, param);
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
	return functions::glFragmentLightModelfvSGIX(pname, params);
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
	return functions::glFragmentLightModeliSGIX(pname, param);
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
	return functions::glFragmentLightModelivSGIX(pname, params);
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
	return functions::glFragmentLightfSGIX(light, pname, param);
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
	return functions::glFragmentLightfvSGIX(light, pname, params);
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
	return functions::glFragmentLightiSGIX(light, pname, param);
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
	return functions::glFragmentLightivSGIX(light, pname, params);
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
	return functions::glFragmentMaterialfSGIX(face, pname, param);
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
	return functions::glFragmentMaterialfvSGIX(face, pname, params);
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
	return functions::glFragmentMaterialiSGIX(face, pname, param);
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
	return functions::glFragmentMaterialivSGIX(face, pname, params);
}

void glFrameTerminatorGREMEDY()
{
	return functions::glFrameTerminatorGREMEDY();
}

void glFrameZoomSGIX(GLint factor)
{
	return functions::glFrameZoomSGIX(factor);
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
	return functions::glFramebufferDrawBufferEXT(framebuffer, mode);
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
	return functions::glFramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
	return functions::glFramebufferParameteri(target, pname, param);
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
	return functions::glFramebufferReadBufferEXT(framebuffer, mode);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::glFramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::glFramebufferRenderbufferOES(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	return functions::glFramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	return functions::glFramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glFramebufferTexture2DOES(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::glFramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::glFramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::glFramebufferTextureARB(target, attachment, texture, level);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::glFramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::glFramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::glFramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::glFramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::glFramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void glFreeObjectBufferATI(GLuint buffer)
{
	return functions::glFreeObjectBufferATI(buffer);
}

void glFrontFace(GLenum mode)
{
	return functions::glFrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::glFrustum(left, right, bottom, top, zNear, zFar);
}

void glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::glFrustumf(l, r, b, t, n, f);
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::glFrustumfOES(l, r, b, t, n, f);
}

void glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::glFrustumx(l, r, b, t, n, f);
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::glFrustumxOES(l, r, b, t, n, f);
}

GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
	return functions::glGenAsyncMarkersSGIX(range);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
	return functions::glGenBuffers(n, buffers);
}

void glGenBuffersARB(GLsizei n, GLuint * buffers)
{
	return functions::glGenBuffersARB(n, buffers);
}

void glGenFencesAPPLE(GLsizei n, GLuint * fences)
{
	return functions::glGenFencesAPPLE(n, fences);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
	return functions::glGenFencesNV(n, fences);
}

GLuint glGenFragmentShadersATI(GLuint range)
{
	return functions::glGenFragmentShadersATI(range);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
	return functions::glGenFramebuffers(n, framebuffers);
}

void glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
	return functions::glGenFramebuffersEXT(n, framebuffers);
}

void glGenFramebuffersOES(GLsizei n, GLuint * framebuffers)
{
	return functions::glGenFramebuffersOES(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
	return functions::glGenLists(range);
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
	return functions::glGenNamesAMD(identifier, num, names);
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
	return functions::glGenOcclusionQueriesNV(n, ids);
}

GLuint glGenPathsNV(GLsizei range)
{
	return functions::glGenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
	return functions::glGenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
	return functions::glGenProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
	return functions::glGenProgramPipelinesEXT(n, pipelines);
}

void glGenProgramsARB(GLsizei n, GLuint * programs)
{
	return functions::glGenProgramsARB(n, programs);
}

void glGenProgramsNV(GLsizei n, GLuint * programs)
{
	return functions::glGenProgramsNV(n, programs);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
	return functions::glGenQueries(n, ids);
}

void glGenQueriesARB(GLsizei n, GLuint * ids)
{
	return functions::glGenQueriesARB(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
	return functions::glGenQueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
	return functions::glGenRenderbuffers(n, renderbuffers);
}

void glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
	return functions::glGenRenderbuffersEXT(n, renderbuffers);
}

void glGenRenderbuffersOES(GLsizei n, GLuint * renderbuffers)
{
	return functions::glGenRenderbuffersOES(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
	return functions::glGenSamplers(count, samplers);
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
	return functions::glGenSymbolsEXT(datatype, storagetype, range, components);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
	return functions::glGenTextures(n, textures);
}

void glGenTexturesEXT(GLsizei n, GLuint * textures)
{
	return functions::glGenTexturesEXT(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
	return functions::glGenTransformFeedbacks(n, ids);
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
	return functions::glGenTransformFeedbacksNV(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
	return functions::glGenVertexArrays(n, arrays);
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
	return functions::glGenVertexArraysAPPLE(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
	return functions::glGenVertexArraysOES(n, arrays);
}

GLuint glGenVertexShadersEXT(GLuint range)
{
	return functions::glGenVertexShadersEXT(range);
}

void glGenerateMipmap(GLenum target)
{
	return functions::glGenerateMipmap(target);
}

void glGenerateMipmapEXT(GLenum target)
{
	return functions::glGenerateMipmapEXT(target);
}

void glGenerateMipmapOES(GLenum target)
{
	return functions::glGenerateMipmapOES(target);
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
	return functions::glGenerateMultiTexMipmapEXT(texunit, target);
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
	return functions::glGenerateTextureMipmapEXT(texture, target);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
	return functions::glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
	return functions::glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
	return functions::glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
	return functions::glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
	return functions::glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
	return functions::glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
	return functions::glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
	return functions::glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
	return functions::glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
	return functions::glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
	return functions::glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
	return functions::glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::glGetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
	return functions::glGetArrayObjectfvATI(array, pname, params);
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
	return functions::glGetArrayObjectivATI(array, pname, params);
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
	return functions::glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
	return functions::glGetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
	return functions::glGetAttribLocation(program, name);
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
	return functions::glGetAttribLocationARB(programObj, name);
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
	return functions::glGetBooleanIndexedvEXT(target, index, data);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
	return functions::glGetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
	return functions::glGetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
	return functions::glGetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetBufferParameteriv(target, pname, params);
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetBufferParameterivARB(target, pname, params);
}

void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
	return functions::glGetBufferParameterui64vNV(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
	return functions::glGetBufferPointerv(target, pname, params);
}

void glGetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
	return functions::glGetBufferPointervARB(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
	return functions::glGetBufferPointervOES(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
	return functions::glGetBufferSubData(target, offset, size, data);
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
	return functions::glGetBufferSubDataARB(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
	return functions::glGetClipPlane(plane, equation);
}

void glGetClipPlanef(GLenum plane, GLfloat * equation)
{
	return functions::glGetClipPlanef(plane, equation);
}

void glGetClipPlanefOES(GLenum plane, GLfloat * equation)
{
	return functions::glGetClipPlanefOES(plane, equation);
}

void glGetClipPlanex(GLenum plane, GLfixed * equation)
{
	return functions::glGetClipPlanex(plane, equation);
}

void glGetClipPlanexOES(GLenum plane, GLfixed * equation)
{
	return functions::glGetClipPlanexOES(plane, equation);
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
	return functions::glGetColorTable(target, format, type, table);
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
	return functions::glGetColorTableEXT(target, format, type, data);
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetColorTableParameterfv(target, pname, params);
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetColorTableParameterfvEXT(target, pname, params);
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetColorTableParameterfvSGI(target, pname, params);
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetColorTableParameteriv(target, pname, params);
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetColorTableParameterivEXT(target, pname, params);
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetColorTableParameterivSGI(target, pname, params);
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
	return functions::glGetColorTableSGI(target, format, type, table);
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
	return functions::glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
	return functions::glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
	return functions::glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
	return functions::glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
	return functions::glGetCombinerStageParameterfvNV(stage, pname, params);
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
	return functions::glGetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
	return functions::glGetCompressedTexImage(target, level, img);
}

void glGetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
	return functions::glGetCompressedTexImageARB(target, level, img);
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
	return functions::glGetCompressedTextureImageEXT(texture, target, lod, img);
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
	return functions::glGetConvolutionFilter(target, format, type, image);
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
	return functions::glGetConvolutionFilterEXT(target, format, type, image);
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetConvolutionParameterfv(target, pname, params);
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetConvolutionParameterfvEXT(target, pname, params);
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetConvolutionParameteriv(target, pname, params);
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetConvolutionParameterivEXT(target, pname, params);
}

void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetConvolutionParameterxvOES(target, pname, params);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
	return functions::glGetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::glGetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::glGetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
	return functions::glGetDetailTexFuncSGIS(target, points);
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
	return functions::glGetDoubleIndexedvEXT(target, index, data);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
	return functions::glGetDoublei_v(target, index, data);
}

void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
	return functions::glGetDoublei_vEXT(pname, index, params);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
	return functions::glGetDoublev(pname, data);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
	return functions::glGetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
	return functions::glGetDriverControlsQCOM(num, size, driverControls);
}

GLenum glGetError()
{
	return functions::glGetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
	return functions::glGetFenceivNV(fence, pname, params);
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
	return functions::glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
	return functions::glGetFinalCombinerInputParameterivNV(variable, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
	return functions::glGetFirstPerfQueryIdINTEL(queryId);
}

void glGetFixedv(GLenum pname, GLfixed * params)
{
	return functions::glGetFixedv(pname, params);
}

void glGetFixedvOES(GLenum pname, GLfixed * params)
{
	return functions::glGetFixedvOES(pname, params);
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
	return functions::glGetFloatIndexedvEXT(target, index, data);
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
	return functions::glGetFloati_v(target, index, data);
}

void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
	return functions::glGetFloati_vEXT(pname, index, params);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
	return functions::glGetFloatv(pname, data);
}

void glGetFogFuncSGIS(GLfloat * points)
{
	return functions::glGetFogFuncSGIS(points);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
	return functions::glGetFragDataIndex(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
	return functions::glGetFragDataLocation(program, name);
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar * name)
{
	return functions::glGetFragDataLocationEXT(program, name);
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
	return functions::glGetFragmentLightfvSGIX(light, pname, params);
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
	return functions::glGetFragmentLightivSGIX(light, pname, params);
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
	return functions::glGetFragmentMaterialfvSGIX(face, pname, params);
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
	return functions::glGetFragmentMaterialivSGIX(face, pname, params);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::glGetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::glGetFramebufferAttachmentParameterivOES(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
	return functions::glGetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum glGetGraphicsResetStatusARB()
{
	return functions::glGetGraphicsResetStatusARB();
}

GLenum glGetGraphicsResetStatusEXT()
{
	return functions::glGetGraphicsResetStatusEXT();
}

GLhandleARB glGetHandleARB(GLenum pname)
{
	return functions::glGetHandleARB(pname);
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::glGetHistogram(target, reset, format, type, values);
}

void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::glGetHistogramEXT(target, reset, format, type, values);
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetHistogramParameterfv(target, pname, params);
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetHistogramParameterfvEXT(target, pname, params);
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetHistogramParameteriv(target, pname, params);
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetHistogramParameterivEXT(target, pname, params);
}

void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetHistogramParameterxvOES(target, pname, params);
}

GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
	return functions::glGetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
	return functions::glGetImageHandleNV(texture, level, layered, layer, format);
}

void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetImageTransformParameterfvHP(target, pname, params);
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetImageTransformParameterivHP(target, pname, params);
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
	return functions::glGetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint glGetInstrumentsSGIX()
{
	return functions::glGetInstrumentsSGIX();
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
	return functions::glGetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
	return functions::glGetInteger64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
	return functions::glGetInteger64vAPPLE(pname, params);
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
	return functions::glGetIntegerIndexedvEXT(target, index, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
	return functions::glGetIntegeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
	return functions::glGetIntegeri_vEXT(target, index, data);
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
	return functions::glGetIntegerui64i_vNV(value, index, result);
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
	return functions::glGetIntegerui64vNV(value, result);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
	return functions::glGetIntegerv(pname, data);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
	return functions::glGetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
	return functions::glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::glGetInvariantBooleanvEXT(id, value, data);
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::glGetInvariantFloatvEXT(id, value, data);
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::glGetInvariantIntegervEXT(id, value, data);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
	return functions::glGetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
	return functions::glGetLightiv(light, pname, params);
}

void glGetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::glGetLightxOES(light, pname, params);
}

void glGetLightxv(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::glGetLightxv(light, pname, params);
}

void glGetLightxvOES(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::glGetLightxvOES(light, pname, params);
}

void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
	return functions::glGetListParameterfvSGIX(list, pname, params);
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
	return functions::glGetListParameterivSGIX(list, pname, params);
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::glGetLocalConstantBooleanvEXT(id, value, data);
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::glGetLocalConstantFloatvEXT(id, value, data);
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::glGetLocalConstantIntegervEXT(id, value, data);
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetMapAttribParameterfvNV(target, index, pname, params);
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetMapAttribParameterivNV(target, index, pname, params);
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
	return functions::glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetMapParameterfvNV(target, pname, params);
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMapParameterivNV(target, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
	return functions::glGetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
	return functions::glGetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
	return functions::glGetMapiv(target, query, v);
}

void glGetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
	return functions::glGetMapxvOES(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
	return functions::glGetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
	return functions::glGetMaterialiv(face, pname, params);
}

void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	return functions::glGetMaterialxOES(face, pname, param);
}

void glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params)
{
	return functions::glGetMaterialxv(face, pname, params);
}

void glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed * params)
{
	return functions::glGetMaterialxvOES(face, pname, params);
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::glGetMinmax(target, reset, format, type, values);
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::glGetMinmaxEXT(target, reset, format, type, values);
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetMinmaxParameterfv(target, pname, params);
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetMinmaxParameterfvEXT(target, pname, params);
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMinmaxParameteriv(target, pname, params);
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMinmaxParameterivEXT(target, pname, params);
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMultiTexEnvivEXT(texunit, target, pname, params);
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
	return functions::glGetMultiTexGendvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::glGetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
	return functions::glGetMultiTexGenivEXT(texunit, coord, pname, params);
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::glGetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::glGetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::glGetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
	return functions::glGetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetMultiTexParameterivEXT(texunit, target, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
	return functions::glGetMultisamplefv(pname, index, val);
}

void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
	return functions::glGetMultisamplefvNV(pname, index, val);
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
	return functions::glGetNamedBufferParameterivEXT(buffer, pname, params);
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
	return functions::glGetNamedBufferParameterui64vNV(buffer, pname, params);
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
	return functions::glGetNamedBufferPointervEXT(buffer, pname, params);
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
	return functions::glGetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::glGetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
	return functions::glGetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
	return functions::glGetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
	return functions::glGetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
	return functions::glGetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
	return functions::glGetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
	return functions::glGetNamedProgramStringEXT(program, target, pname, string);
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetNamedProgramivEXT(program, target, pname, params);
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
	return functions::glGetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void glGetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
	return functions::glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void glGetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
	return functions::glGetNamedStringivARB(namelen, name, pname, params);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
	return functions::glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
	return functions::glGetObjectBufferfvATI(buffer, pname, params);
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
	return functions::glGetObjectBufferivATI(buffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::glGetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::glGetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::glGetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
	return functions::glGetObjectParameterfvARB(obj, pname, params);
}

void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
	return functions::glGetObjectParameterivAPPLE(objectType, name, pname, params);
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
	return functions::glGetObjectParameterivARB(obj, pname, params);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::glGetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::glGetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetOcclusionQueryivNV(id, pname, params);
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
	return functions::glGetOcclusionQueryuivNV(id, pname, params);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
	return functions::glGetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
	return functions::glGetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
	return functions::glGetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
	return functions::glGetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
	return functions::glGetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
	return functions::glGetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
	return functions::glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
	return functions::glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
	return functions::glGetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
	return functions::glGetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
	return functions::glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
	return functions::glGetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
	return functions::glGetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
	return functions::glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
	return functions::glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
	return functions::glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
	return functions::glGetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
	return functions::glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
	return functions::glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
	return functions::glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
	return functions::glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
	return functions::glGetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
	return functions::glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
	return functions::glGetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
	return functions::glGetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
	return functions::glGetPixelMapusv(map, values);
}

void glGetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
	return functions::glGetPixelMapxv(map, size, values);
}

void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
	return functions::glGetPixelTexGenParameterfvSGIS(pname, params);
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
	return functions::glGetPixelTexGenParameterivSGIS(pname, params);
}

void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetPixelTransformParameterfvEXT(target, pname, params);
}

void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetPixelTransformParameterivEXT(target, pname, params);
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
	return functions::glGetPointerIndexedvEXT(target, index, data);
}

void glGetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
	return functions::glGetPointeri_vEXT(pname, index, params);
}

void glGetPointerv(GLenum pname, void ** params)
{
	return functions::glGetPointerv(pname, params);
}

void glGetPointervEXT(GLenum pname, void ** params)
{
	return functions::glGetPointervEXT(pname, params);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
	return functions::glGetPointervKHR(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
	return functions::glGetPolygonStipple(mask);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
	return functions::glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
	return functions::glGetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
	return functions::glGetProgramEnvParameterIivNV(target, index, params);
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
	return functions::glGetProgramEnvParameterIuivNV(target, index, params);
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
	return functions::glGetProgramEnvParameterdvARB(target, index, params);
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
	return functions::glGetProgramEnvParameterfvARB(target, index, params);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::glGetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
	return functions::glGetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
	return functions::glGetProgramLocalParameterIivNV(target, index, params);
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
	return functions::glGetProgramLocalParameterIuivNV(target, index, params);
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
	return functions::glGetProgramLocalParameterdvARB(target, index, params);
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
	return functions::glGetProgramLocalParameterfvARB(target, index, params);
}

void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
	return functions::glGetProgramNamedParameterdvNV(id, len, name, params);
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
	return functions::glGetProgramNamedParameterfvNV(id, len, name, params);
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetProgramParameterdvNV(target, index, pname, params);
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetProgramParameterfvNV(target, index, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::glGetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
	return functions::glGetProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
	return functions::glGetProgramPipelineivEXT(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::glGetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::glGetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::glGetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
	return functions::glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
	return functions::glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
	return functions::glGetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramStringARB(GLenum target, GLenum pname, void * string)
{
	return functions::glGetProgramStringARB(target, pname, string);
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
	return functions::glGetProgramStringNV(id, pname, program);
}

void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
	return functions::glGetProgramSubroutineParameteruivNV(target, index, param);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
	return functions::glGetProgramiv(program, pname, params);
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetProgramivARB(target, pname, params);
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetProgramivNV(id, pname, params);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetQueryIndexediv(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
	return functions::glGetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
	return functions::glGetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetQueryObjectivARB(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetQueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
	return functions::glGetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
	return functions::glGetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
	return functions::glGetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
	return functions::glGetQueryObjectuivARB(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
	return functions::glGetQueryObjectuivEXT(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetQueryiv(target, pname, params);
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetQueryivARB(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetQueryivEXT(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetRenderbufferParameteriv(target, pname, params);
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetRenderbufferParameterivEXT(target, pname, params);
}

void glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetRenderbufferParameterivOES(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
	return functions::glGetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
	return functions::glGetSamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
	return functions::glGetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
	return functions::glGetSamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
	return functions::glGetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
	return functions::glGetSamplerParameteriv(sampler, pname, params);
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
	return functions::glGetSeparableFilter(target, format, type, row, column, span);
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
	return functions::glGetSeparableFilterEXT(target, format, type, row, column, span);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
	return functions::glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
	return functions::glGetShaderSource(shader, bufSize, length, source);
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
	return functions::glGetShaderSourceARB(obj, maxLength, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
	return functions::glGetShaderiv(shader, pname, params);
}

void glGetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
	return functions::glGetSharpenTexFuncSGIS(target, points);
}

const GLubyte * glGetString(GLenum name)
{
	return functions::glGetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
	return functions::glGetStringi(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
	return functions::glGetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
	return functions::glGetSubroutineUniformLocation(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::glGetSynciv(sync, pname, bufSize, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::glGetSyncivAPPLE(sync, pname, bufSize, length, values);
}

void glGetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
	return functions::glGetTexBumpParameterfvATI(pname, param);
}

void glGetTexBumpParameterivATI(GLenum pname, GLint * param)
{
	return functions::glGetTexBumpParameterivATI(pname, param);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTexEnviv(target, pname, params);
}

void glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetTexEnvxv(target, pname, params);
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetTexEnvxvOES(target, pname, params);
}

void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
	return functions::glGetTexFilterFuncSGIS(target, filter, weights);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
	return functions::glGetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::glGetTexGenfv(coord, pname, params);
}

void glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::glGetTexGenfvOES(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
	return functions::glGetTexGeniv(coord, pname, params);
}

void glGetTexGenivOES(GLenum coord, GLenum pname, GLint * params)
{
	return functions::glGetTexGenivOES(coord, pname, params);
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
	return functions::glGetTexGenxvOES(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::glGetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::glGetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::glGetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
	return functions::glGetTexLevelParameterxvOES(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
	return functions::glGetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
	return functions::glGetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
	return functions::glGetTexParameterPointervAPPLE(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTexParameteriv(target, pname, params);
}

void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetTexParameterxv(target, pname, params);
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::glGetTexParameterxvOES(target, pname, params);
}

GLuint64 glGetTextureHandleARB(GLuint texture)
{
	return functions::glGetTextureHandleARB(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
	return functions::glGetTextureHandleNV(texture);
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::glGetTextureImageEXT(texture, target, level, format, type, pixels);
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::glGetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::glGetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTextureParameterIivEXT(texture, target, pname, params);
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
	return functions::glGetTextureParameterIuivEXT(texture, target, pname, params);
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::glGetTextureParameterfvEXT(texture, target, pname, params);
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
	return functions::glGetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
	return functions::glGetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
	return functions::glGetTextureSamplerHandleNV(texture, sampler);
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
	return functions::glGetTrackMatrixivNV(target, address, pname, params);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::glGetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
	return functions::glGetTransformFeedbackVaryingNV(program, index, location);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
	return functions::glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
	return functions::glGetUniformBlockIndex(program, uniformBlockName);
}

GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
	return functions::glGetUniformBufferSizeEXT(program, location);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
	return functions::glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
	return functions::glGetUniformLocation(program, name);
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
	return functions::glGetUniformLocationARB(programObj, name);
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
	return functions::glGetUniformOffsetEXT(program, location);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
	return functions::glGetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
	return functions::glGetUniformdv(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
	return functions::glGetUniformfv(program, location, params);
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
	return functions::glGetUniformfvARB(programObj, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
	return functions::glGetUniformi64vNV(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
	return functions::glGetUniformiv(program, location, params);
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
	return functions::glGetUniformivARB(programObj, location, params);
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
	return functions::glGetUniformui64vNV(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
	return functions::glGetUniformuiv(program, location, params);
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
	return functions::glGetUniformuivEXT(program, location, params);
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
	return functions::glGetVariantArrayObjectfvATI(id, pname, params);
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
	return functions::glGetVariantArrayObjectivATI(id, pname, params);
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::glGetVariantBooleanvEXT(id, value, data);
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::glGetVariantFloatvEXT(id, value, data);
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::glGetVariantIntegervEXT(id, value, data);
}

void glGetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
	return functions::glGetVariantPointervEXT(id, value, data);
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar * name)
{
	return functions::glGetVaryingLocationNV(program, name);
}

void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
	return functions::glGetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
	return functions::glGetVertexArrayIntegervEXT(vaobj, pname, param);
}

void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
	return functions::glGetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
	return functions::glGetVertexArrayPointervEXT(vaobj, pname, param);
}

void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribArrayObjectivATI(index, pname, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribIivEXT(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
	return functions::glGetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
	return functions::glGetVertexAttribIuivEXT(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetVertexAttribLdvEXT(index, pname, params);
}

void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
	return functions::glGetVertexAttribLi64vNV(index, pname, params);
}

void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
	return functions::glGetVertexAttribLui64vARB(index, pname, params);
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
	return functions::glGetVertexAttribLui64vNV(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
	return functions::glGetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
	return functions::glGetVertexAttribPointervARB(index, pname, pointer);
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
	return functions::glGetVertexAttribPointervNV(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetVertexAttribdvARB(index, pname, params);
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::glGetVertexAttribdvNV(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetVertexAttribfvARB(index, pname, params);
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::glGetVertexAttribfvNV(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribiv(index, pname, params);
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribivARB(index, pname, params);
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
	return functions::glGetVertexAttribivNV(index, pname, params);
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
	return functions::glGetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
	return functions::glGetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
	return functions::glGetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
	return functions::glGetVideoCaptureivNV(video_capture_slot, pname, params);
}

void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
	return functions::glGetVideoi64vNV(video_slot, pname, params);
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
	return functions::glGetVideoivNV(video_slot, pname, params);
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
	return functions::glGetVideoui64vNV(video_slot, pname, params);
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
	return functions::glGetVideouivNV(video_slot, pname, params);
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
	return functions::glGetnColorTableARB(target, format, type, bufSize, table);
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
	return functions::glGetnCompressedTexImageARB(target, lod, bufSize, img);
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
	return functions::glGetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
	return functions::glGetnHistogramARB(target, reset, format, type, bufSize, values);
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
	return functions::glGetnMapdvARB(target, query, bufSize, v);
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
	return functions::glGetnMapfvARB(target, query, bufSize, v);
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
	return functions::glGetnMapivARB(target, query, bufSize, v);
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
	return functions::glGetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
	return functions::glGetnPixelMapfvARB(map, bufSize, values);
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
	return functions::glGetnPixelMapuivARB(map, bufSize, values);
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
	return functions::glGetnPixelMapusvARB(map, bufSize, values);
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
	return functions::glGetnPolygonStippleARB(bufSize, pattern);
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
	return functions::glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
	return functions::glGetnTexImageARB(target, level, format, type, bufSize, img);
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
	return functions::glGetnUniformdvARB(program, location, bufSize, params);
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
	return functions::glGetnUniformfvARB(program, location, bufSize, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
	return functions::glGetnUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
	return functions::glGetnUniformivARB(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
	return functions::glGetnUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
	return functions::glGetnUniformuivARB(program, location, bufSize, params);
}

void glGlobalAlphaFactorbSUN(GLbyte factor)
{
	return functions::glGlobalAlphaFactorbSUN(factor);
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
	return functions::glGlobalAlphaFactordSUN(factor);
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
	return functions::glGlobalAlphaFactorfSUN(factor);
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
	return functions::glGlobalAlphaFactoriSUN(factor);
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
	return functions::glGlobalAlphaFactorsSUN(factor);
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
	return functions::glGlobalAlphaFactorubSUN(factor);
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
	return functions::glGlobalAlphaFactoruiSUN(factor);
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
	return functions::glGlobalAlphaFactorusSUN(factor);
}

void glHint(GLenum target, GLenum mode)
{
	return functions::glHint(target, mode);
}

void glHintPGI(GLenum target, GLint mode)
{
	return functions::glHintPGI(target, mode);
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	return functions::glHistogram(target, width, internalformat, sink);
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	return functions::glHistogramEXT(target, width, internalformat, sink);
}

void glIglooInterfaceSGIX(GLenum pname, const void * params)
{
	return functions::glIglooInterfaceSGIX(pname, params);
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
	return functions::glImageTransformParameterfHP(target, pname, param);
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glImageTransformParameterfvHP(target, pname, params);
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
	return functions::glImageTransformParameteriHP(target, pname, param);
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glImageTransformParameterivHP(target, pname, params);
}

GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
	return functions::glImportSyncEXT(external_sync_type, external_sync, flags);
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
	return functions::glIndexFormatNV(type, stride);
}

void glIndexFuncEXT(GLenum func, GLclampf ref)
{
	return functions::glIndexFuncEXT(func, ref);
}

void glIndexMask(GLuint mask)
{
	return functions::glIndexMask(mask);
}

void glIndexMaterialEXT(GLenum face, GLenum mode)
{
	return functions::glIndexMaterialEXT(face, mode);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glIndexPointer(type, stride, pointer);
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::glIndexPointerEXT(type, stride, count, pointer);
}

void glIndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

void glIndexd(GLdouble c)
{
	return functions::glIndexd(c);
}

void glIndexdv(const GLdouble * c)
{
	return functions::glIndexdv(c);
}

void glIndexf(GLfloat c)
{
	return functions::glIndexf(c);
}

void glIndexfv(const GLfloat * c)
{
	return functions::glIndexfv(c);
}

void glIndexi(GLint c)
{
	return functions::glIndexi(c);
}

void glIndexiv(const GLint * c)
{
	return functions::glIndexiv(c);
}

void glIndexs(GLshort c)
{
	return functions::glIndexs(c);
}

void glIndexsv(const GLshort * c)
{
	return functions::glIndexsv(c);
}

void glIndexub(GLubyte c)
{
	return functions::glIndexub(c);
}

void glIndexubv(const GLubyte * c)
{
	return functions::glIndexubv(c);
}

void glIndexxOES(GLfixed component)
{
	return functions::glIndexxOES(component);
}

void glIndexxvOES(const GLfixed * component)
{
	return functions::glIndexxvOES(component);
}

void glInitNames()
{
	return functions::glInitNames();
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
	return functions::glInsertComponentEXT(res, src, num);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
	return functions::glInsertEventMarkerEXT(length, marker);
}

void glInstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
	return functions::glInstrumentsBufferSGIX(size, buffer);
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
	return functions::glInterleavedArrays(format, stride, pointer);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
	return functions::glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateBufferData(GLuint buffer)
{
	return functions::glInvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
	return functions::glInvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
	return functions::glInvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
	return functions::glInvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
	return functions::glIsAsyncMarkerSGIX(marker);
}

GLboolean glIsBuffer(GLuint buffer)
{
	return functions::glIsBuffer(buffer);
}

GLboolean glIsBufferARB(GLuint buffer)
{
	return functions::glIsBufferARB(buffer);
}

GLboolean glIsBufferResidentNV(GLenum target)
{
	return functions::glIsBufferResidentNV(target);
}

GLboolean glIsEnabled(GLenum cap)
{
	return functions::glIsEnabled(cap);
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
	return functions::glIsEnabledIndexedEXT(target, index);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
	return functions::glIsEnabledi(target, index);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
	return functions::glIsEnablediEXT(target, index);
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
	return functions::glIsFenceAPPLE(fence);
}

GLboolean glIsFenceNV(GLuint fence)
{
	return functions::glIsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
	return functions::glIsFramebuffer(framebuffer);
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
	return functions::glIsFramebufferEXT(framebuffer);
}

GLboolean glIsFramebufferOES(GLuint framebuffer)
{
	return functions::glIsFramebufferOES(framebuffer);
}

GLboolean glIsImageHandleResidentARB(GLuint64 handle)
{
	return functions::glIsImageHandleResidentARB(handle);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
	return functions::glIsImageHandleResidentNV(handle);
}

GLboolean glIsList(GLuint list)
{
	return functions::glIsList(list);
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
	return functions::glIsNameAMD(identifier, name);
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
	return functions::glIsNamedBufferResidentNV(buffer);
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar * name)
{
	return functions::glIsNamedStringARB(namelen, name);
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
	return functions::glIsObjectBufferATI(buffer);
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
	return functions::glIsOcclusionQueryNV(id);
}

GLboolean glIsPathNV(GLuint path)
{
	return functions::glIsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
	return functions::glIsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
	return functions::glIsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
	return functions::glIsProgram(program);
}

GLboolean glIsProgramARB(GLuint program)
{
	return functions::glIsProgramARB(program);
}

GLboolean glIsProgramNV(GLuint id)
{
	return functions::glIsProgramNV(id);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
	return functions::glIsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
	return functions::glIsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
	return functions::glIsQuery(id);
}

GLboolean glIsQueryARB(GLuint id)
{
	return functions::glIsQueryARB(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
	return functions::glIsQueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
	return functions::glIsRenderbuffer(renderbuffer);
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
	return functions::glIsRenderbufferEXT(renderbuffer);
}

GLboolean glIsRenderbufferOES(GLuint renderbuffer)
{
	return functions::glIsRenderbufferOES(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
	return functions::glIsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
	return functions::glIsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
	return functions::glIsSync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
	return functions::glIsSyncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
	return functions::glIsTexture(texture);
}

GLboolean glIsTextureEXT(GLuint texture)
{
	return functions::glIsTextureEXT(texture);
}

GLboolean glIsTextureHandleResidentARB(GLuint64 handle)
{
	return functions::glIsTextureHandleResidentARB(handle);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
	return functions::glIsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
	return functions::glIsTransformFeedback(id);
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
	return functions::glIsTransformFeedbackNV(id);
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
	return functions::glIsVariantEnabledEXT(id, cap);
}

GLboolean glIsVertexArray(GLuint array)
{
	return functions::glIsVertexArray(array);
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
	return functions::glIsVertexArrayAPPLE(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
	return functions::glIsVertexArrayOES(array);
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
	return functions::glIsVertexAttribEnabledAPPLE(index, pname);
}

void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
	return functions::glLabelObjectEXT(type, object, length, label);
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
	return functions::glLightEnviSGIX(pname, param);
}

void glLightModelf(GLenum pname, GLfloat param)
{
	return functions::glLightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
	return functions::glLightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
	return functions::glLightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
	return functions::glLightModeliv(pname, params);
}

void glLightModelx(GLenum pname, GLfixed param)
{
	return functions::glLightModelx(pname, param);
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
	return functions::glLightModelxOES(pname, param);
}

void glLightModelxv(GLenum pname, const GLfixed * param)
{
	return functions::glLightModelxv(pname, param);
}

void glLightModelxvOES(GLenum pname, const GLfixed * param)
{
	return functions::glLightModelxvOES(pname, param);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
	return functions::glLightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
	return functions::glLightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
	return functions::glLighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
	return functions::glLightiv(light, pname, params);
}

void glLightx(GLenum light, GLenum pname, GLfixed param)
{
	return functions::glLightx(light, pname, param);
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
	return functions::glLightxOES(light, pname, param);
}

void glLightxv(GLenum light, GLenum pname, const GLfixed * params)
{
	return functions::glLightxv(light, pname, params);
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
	return functions::glLightxvOES(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
	return functions::glLineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
	return functions::glLineWidth(width);
}

void glLineWidthx(GLfixed width)
{
	return functions::glLineWidthx(width);
}

void glLineWidthxOES(GLfixed width)
{
	return functions::glLineWidthxOES(width);
}

void glLinkProgram(GLuint program)
{
	return functions::glLinkProgram(program);
}

void glLinkProgramARB(GLhandleARB programObj)
{
	return functions::glLinkProgramARB(programObj);
}

void glListBase(GLuint base)
{
	return functions::glListBase(base);
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
	return functions::glListParameterfSGIX(list, pname, param);
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
	return functions::glListParameterfvSGIX(list, pname, params);
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
	return functions::glListParameteriSGIX(list, pname, param);
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
	return functions::glListParameterivSGIX(list, pname, params);
}

void glLoadIdentity()
{
	return functions::glLoadIdentity();
}

void glLoadIdentityDeformationMapSGIX(GLbitfield mask)
{
	return functions::glLoadIdentityDeformationMapSGIX(mask);
}

void glLoadMatrixd(const GLdouble * m)
{
	return functions::glLoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
	return functions::glLoadMatrixf(m);
}

void glLoadMatrixx(const GLfixed * m)
{
	return functions::glLoadMatrixx(m);
}

void glLoadMatrixxOES(const GLfixed * m)
{
	return functions::glLoadMatrixxOES(m);
}

void glLoadName(GLuint name)
{
	return functions::glLoadName(name);
}

void glLoadPaletteFromModelViewMatrixOES()
{
	return functions::glLoadPaletteFromModelViewMatrixOES();
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
	return functions::glLoadProgramNV(target, id, len, program);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
	return functions::glLoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixdARB(const GLdouble * m)
{
	return functions::glLoadTransposeMatrixdARB(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
	return functions::glLoadTransposeMatrixf(m);
}

void glLoadTransposeMatrixfARB(const GLfloat * m)
{
	return functions::glLoadTransposeMatrixfARB(m);
}

void glLoadTransposeMatrixxOES(const GLfixed * m)
{
	return functions::glLoadTransposeMatrixxOES(m);
}

void glLockArraysEXT(GLint first, GLsizei count)
{
	return functions::glLockArraysEXT(first, count);
}

void glLogicOp(GLenum opcode)
{
	return functions::glLogicOp(opcode);
}

void glMakeBufferNonResidentNV(GLenum target)
{
	return functions::glMakeBufferNonResidentNV(target);
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
	return functions::glMakeBufferResidentNV(target, access);
}

void glMakeImageHandleNonResidentARB(GLuint64 handle)
{
	return functions::glMakeImageHandleNonResidentARB(handle);
}

void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
	return functions::glMakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
	return functions::glMakeImageHandleResidentARB(handle, access);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
	return functions::glMakeImageHandleResidentNV(handle, access);
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
	return functions::glMakeNamedBufferNonResidentNV(buffer);
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
	return functions::glMakeNamedBufferResidentNV(buffer, access);
}

void glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
	return functions::glMakeTextureHandleNonResidentARB(handle);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
	return functions::glMakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentARB(GLuint64 handle)
{
	return functions::glMakeTextureHandleResidentARB(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
	return functions::glMakeTextureHandleResidentNV(handle);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
	return functions::glMap1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
	return functions::glMap1f(target, u1, u2, stride, order, points);
}

void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
	return functions::glMap1xOES(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
	return functions::glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
	return functions::glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
	return functions::glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
	return functions::glMapBuffer(target, access);
}

void * glMapBufferARB(GLenum target, GLenum access)
{
	return functions::glMapBufferARB(target, access);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
	return functions::glMapBufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::glMapBufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::glMapBufferRangeEXT(target, offset, length, access);
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
	return functions::glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	return functions::glMapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	return functions::glMapGrid1f(un, u1, u2);
}

void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
	return functions::glMapGrid1xOES(n, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	return functions::glMapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	return functions::glMapGrid2f(un, u1, u2, vn, v1, v2);
}

void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
	return functions::glMapGrid2xOES(n, u1, u2, v1, v2);
}

void * glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
	return functions::glMapNamedBufferEXT(buffer, access);
}

void * glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::glMapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * glMapObjectBufferATI(GLuint buffer)
{
	return functions::glMapObjectBufferATI(buffer);
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glMapParameterfvNV(target, pname, params);
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glMapParameterivNV(target, pname, params);
}

void * glMapTexture2DINTEL(GLuint texture, GLint level, GLbitfield access, GLint * stride, GLenum * layout)
{
	return functions::glMapTexture2DINTEL(texture, level, access, stride, layout);
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
	return functions::glMapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
	return functions::glMapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
	return functions::glMapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
	return functions::glMapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	return functions::glMaterialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
	return functions::glMaterialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
	return functions::glMateriali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
	return functions::glMaterialiv(face, pname, params);
}

void glMaterialx(GLenum face, GLenum pname, GLfixed param)
{
	return functions::glMaterialx(face, pname, param);
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	return functions::glMaterialxOES(face, pname, param);
}

void glMaterialxv(GLenum face, GLenum pname, const GLfixed * param)
{
	return functions::glMaterialxv(face, pname, param);
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
	return functions::glMaterialxvOES(face, pname, param);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::glMatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glMatrixIndexPointerARB(size, type, stride, pointer);
}

void glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glMatrixIndexPointerOES(size, type, stride, pointer);
}

void glMatrixIndexubvARB(GLint size, const GLubyte * indices)
{
	return functions::glMatrixIndexubvARB(size, indices);
}

void glMatrixIndexuivARB(GLint size, const GLuint * indices)
{
	return functions::glMatrixIndexuivARB(size, indices);
}

void glMatrixIndexusvARB(GLint size, const GLushort * indices)
{
	return functions::glMatrixIndexusvARB(size, indices);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
	return functions::glMatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
	return functions::glMatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
	return functions::glMatrixLoadTransposefEXT(mode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
	return functions::glMatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
	return functions::glMatrixLoadfEXT(mode, m);
}

void glMatrixMode(GLenum mode)
{
	return functions::glMatrixMode(mode);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
	return functions::glMatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
	return functions::glMatrixMultTransposefEXT(mode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
	return functions::glMatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
	return functions::glMatrixMultfEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::glMatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
	return functions::glMatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
	return functions::glMatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glMatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glMatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glMatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glMatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glMatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glMatrixTranslatefEXT(mode, x, y, z);
}

void glMemoryBarrier(GLbitfield barriers)
{
	return functions::glMemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(GLbitfield barriers)
{
	return functions::glMemoryBarrierByRegion(barriers);
}

void glMemoryBarrierEXT(GLbitfield barriers)
{
	return functions::glMemoryBarrierEXT(barriers);
}

void glMinSampleShading(GLfloat value)
{
	return functions::glMinSampleShading(value);
}

void glMinSampleShadingARB(GLfloat value)
{
	return functions::glMinSampleShadingARB(value);
}

void glMinSampleShadingOES(GLfloat value)
{
	return functions::glMinSampleShadingOES(value);
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
	return functions::glMinmax(target, internalformat, sink);
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
	return functions::glMinmaxEXT(target, internalformat, sink);
}

void glMultMatrixd(const GLdouble * m)
{
	return functions::glMultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
	return functions::glMultMatrixf(m);
}

void glMultMatrixx(const GLfixed * m)
{
	return functions::glMultMatrixx(m);
}

void glMultMatrixxOES(const GLfixed * m)
{
	return functions::glMultMatrixxOES(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
	return functions::glMultTransposeMatrixd(m);
}

void glMultTransposeMatrixdARB(const GLdouble * m)
{
	return functions::glMultTransposeMatrixdARB(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
	return functions::glMultTransposeMatrixf(m);
}

void glMultTransposeMatrixfARB(const GLfloat * m)
{
	return functions::glMultTransposeMatrixfARB(m);
}

void glMultTransposeMatrixxOES(const GLfixed * m)
{
	return functions::glMultTransposeMatrixxOES(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
	return functions::glMultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::glMultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
	return functions::glMultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
	return functions::glMultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
	return functions::glMultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
	return functions::glMultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
	return functions::glMultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
	return functions::glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
	return functions::glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
	return functions::glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
	return functions::glMultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
	return functions::glMultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
	return functions::glMultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void glMultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
	return functions::glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void glMultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
	return functions::glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::glMultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void glMultiTexCoord1bOES(GLenum texture, GLbyte s)
{
	return functions::glMultiTexCoord1bOES(texture, s);
}

void glMultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::glMultiTexCoord1bvOES(texture, coords);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
	return functions::glMultiTexCoord1d(target, s);
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
	return functions::glMultiTexCoord1dARB(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord1dv(target, v);
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord1dvARB(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
	return functions::glMultiTexCoord1f(target, s);
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
	return functions::glMultiTexCoord1fARB(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord1fv(target, v);
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord1fvARB(target, v);
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
	return functions::glMultiTexCoord1hNV(target, s);
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::glMultiTexCoord1hvNV(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
	return functions::glMultiTexCoord1i(target, s);
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
	return functions::glMultiTexCoord1iARB(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord1iv(target, v);
}

void glMultiTexCoord1ivARB(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord1ivARB(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
	return functions::glMultiTexCoord1s(target, s);
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
	return functions::glMultiTexCoord1sARB(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord1sv(target, v);
}

void glMultiTexCoord1svARB(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord1svARB(target, v);
}

void glMultiTexCoord1xOES(GLenum texture, GLfixed s)
{
	return functions::glMultiTexCoord1xOES(texture, s);
}

void glMultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::glMultiTexCoord1xvOES(texture, coords);
}

void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
	return functions::glMultiTexCoord2bOES(texture, s, t);
}

void glMultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::glMultiTexCoord2bvOES(texture, coords);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
	return functions::glMultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
	return functions::glMultiTexCoord2dARB(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord2dv(target, v);
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord2dvARB(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
	return functions::glMultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	return functions::glMultiTexCoord2fARB(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord2fv(target, v);
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord2fvARB(target, v);
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
	return functions::glMultiTexCoord2hNV(target, s, t);
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::glMultiTexCoord2hvNV(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
	return functions::glMultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
	return functions::glMultiTexCoord2iARB(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord2iv(target, v);
}

void glMultiTexCoord2ivARB(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord2ivARB(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
	return functions::glMultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
	return functions::glMultiTexCoord2sARB(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord2sv(target, v);
}

void glMultiTexCoord2svARB(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord2svARB(target, v);
}

void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
	return functions::glMultiTexCoord2xOES(texture, s, t);
}

void glMultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::glMultiTexCoord2xvOES(texture, coords);
}

void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
	return functions::glMultiTexCoord3bOES(texture, s, t, r);
}

void glMultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::glMultiTexCoord3bvOES(texture, coords);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	return functions::glMultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	return functions::glMultiTexCoord3dARB(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord3dv(target, v);
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord3dvARB(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	return functions::glMultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	return functions::glMultiTexCoord3fARB(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord3fv(target, v);
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord3fvARB(target, v);
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	return functions::glMultiTexCoord3hNV(target, s, t, r);
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::glMultiTexCoord3hvNV(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
	return functions::glMultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
	return functions::glMultiTexCoord3iARB(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord3iv(target, v);
}

void glMultiTexCoord3ivARB(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord3ivARB(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
	return functions::glMultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
	return functions::glMultiTexCoord3sARB(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord3sv(target, v);
}

void glMultiTexCoord3svARB(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord3svARB(target, v);
}

void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
	return functions::glMultiTexCoord3xOES(texture, s, t, r);
}

void glMultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::glMultiTexCoord3xvOES(texture, coords);
}

void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	return functions::glMultiTexCoord4bOES(texture, s, t, r, q);
}

void glMultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::glMultiTexCoord4bvOES(texture, coords);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::glMultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::glMultiTexCoord4dARB(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord4dv(target, v);
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
	return functions::glMultiTexCoord4dvARB(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::glMultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::glMultiTexCoord4fARB(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord4fv(target, v);
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
	return functions::glMultiTexCoord4fvARB(target, v);
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	return functions::glMultiTexCoord4hNV(target, s, t, r, q);
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::glMultiTexCoord4hvNV(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	return functions::glMultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	return functions::glMultiTexCoord4iARB(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord4iv(target, v);
}

void glMultiTexCoord4ivARB(GLenum target, const GLint * v)
{
	return functions::glMultiTexCoord4ivARB(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::glMultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::glMultiTexCoord4sARB(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord4sv(target, v);
}

void glMultiTexCoord4svARB(GLenum target, const GLshort * v)
{
	return functions::glMultiTexCoord4svARB(target, v);
}

void glMultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::glMultiTexCoord4x(texture, s, t, r, q);
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::glMultiTexCoord4xOES(texture, s, t, r, q);
}

void glMultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::glMultiTexCoord4xvOES(texture, coords);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::glMultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::glMultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::glMultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::glMultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::glMultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::glMultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::glMultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::glMultiTexCoordP4uiv(texture, type, coords);
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glMultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	return functions::glMultiTexEnvfEXT(texunit, target, pname, param);
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glMultiTexEnvfvEXT(texunit, target, pname, params);
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	return functions::glMultiTexEnviEXT(texunit, target, pname, param);
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::glMultiTexEnvivEXT(texunit, target, pname, params);
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
	return functions::glMultiTexGendEXT(texunit, coord, pname, param);
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
	return functions::glMultiTexGendvEXT(texunit, coord, pname, params);
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
	return functions::glMultiTexGenfEXT(texunit, coord, pname, param);
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::glMultiTexGenfvEXT(texunit, coord, pname, params);
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
	return functions::glMultiTexGeniEXT(texunit, coord, pname, param);
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
	return functions::glMultiTexGenivEXT(texunit, coord, pname, params);
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::glMultiTexParameterIivEXT(texunit, target, pname, params);
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
	return functions::glMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	return functions::glMultiTexParameterfEXT(texunit, target, pname, param);
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glMultiTexParameterfvEXT(texunit, target, pname, params);
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	return functions::glMultiTexParameteriEXT(texunit, target, pname, param);
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::glMultiTexParameterivEXT(texunit, target, pname, params);
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
	return functions::glMultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::glMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
	return functions::glNamedBufferDataEXT(buffer, size, data, usage);
}

void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags)
{
	return functions::glNamedBufferStorageEXT(buffer, size, data, flags);
}

void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
	return functions::glNamedBufferSubDataEXT(buffer, offset, size, data);
}

void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::glNamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
	return functions::glNamedFramebufferParameteriEXT(framebuffer, pname, param);
}

void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::glNamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glNamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::glNamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::glNamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
	return functions::glNamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::glNamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::glNamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glNamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
	return functions::glNamedProgramLocalParameter4dvEXT(program, target, index, params);
}

void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glNamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
	return functions::glNamedProgramLocalParameter4fvEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glNamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
	return functions::glNamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::glNamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
	return functions::glNamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::glNamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::glNamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::glNamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
	return functions::glNamedProgramStringEXT(program, target, format, len, string);
}

void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glNamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glNamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glNamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

void glNamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
	return functions::glNamedStringARB(type, namelen, name, stringlen, string);
}

void glNewList(GLuint list, GLenum mode)
{
	return functions::glNewList(list, mode);
}

GLuint glNewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
	return functions::glNewObjectBufferATI(size, pointer, usage);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	return functions::glNormal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
	return functions::glNormal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	return functions::glNormal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
	return functions::glNormal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	return functions::glNormal3f(nx, ny, nz);
}

void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

void glNormal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
	return functions::glNormal3fVertex3fvSUN(n, v);
}

void glNormal3fv(const GLfloat * v)
{
	return functions::glNormal3fv(v);
}

void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
	return functions::glNormal3hNV(nx, ny, nz);
}

void glNormal3hvNV(const GLhalfNV * v)
{
	return functions::glNormal3hvNV(v);
}

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
	return functions::glNormal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
	return functions::glNormal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
	return functions::glNormal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
	return functions::glNormal3sv(v);
}

void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
	return functions::glNormal3x(nx, ny, nz);
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
	return functions::glNormal3xOES(nx, ny, nz);
}

void glNormal3xvOES(const GLfixed * coords)
{
	return functions::glNormal3xvOES(coords);
}

void glNormalFormatNV(GLenum type, GLsizei stride)
{
	return functions::glNormalFormatNV(type, stride);
}

void glNormalP3ui(GLenum type, GLuint coords)
{
	return functions::glNormalP3ui(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords)
{
	return functions::glNormalP3uiv(type, coords);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glNormalPointer(type, stride, pointer);
}

void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::glNormalPointerEXT(type, stride, count, pointer);
}

void glNormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

void glNormalPointervINTEL(GLenum type, const void ** pointer)
{
	return functions::glNormalPointervINTEL(type, pointer);
}

void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
	return functions::glNormalStream3bATI(stream, nx, ny, nz);
}

void glNormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
	return functions::glNormalStream3bvATI(stream, coords);
}

void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
	return functions::glNormalStream3dATI(stream, nx, ny, nz);
}

void glNormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::glNormalStream3dvATI(stream, coords);
}

void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
	return functions::glNormalStream3fATI(stream, nx, ny, nz);
}

void glNormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::glNormalStream3fvATI(stream, coords);
}

void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
	return functions::glNormalStream3iATI(stream, nx, ny, nz);
}

void glNormalStream3ivATI(GLenum stream, const GLint * coords)
{
	return functions::glNormalStream3ivATI(stream, coords);
}

void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
	return functions::glNormalStream3sATI(stream, nx, ny, nz);
}

void glNormalStream3svATI(GLenum stream, const GLshort * coords)
{
	return functions::glNormalStream3svATI(stream, coords);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
	return functions::glObjectLabel(identifier, name, length, label);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
	return functions::glObjectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
	return functions::glObjectPtrLabel(ptr, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
	return functions::glObjectPtrLabelKHR(ptr, length, label);
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return functions::glObjectPurgeableAPPLE(objectType, name, option);
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return functions::glObjectUnpurgeableAPPLE(objectType, name, option);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::glOrtho(left, right, bottom, top, zNear, zFar);
}

void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::glOrthof(l, r, b, t, n, f);
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::glOrthofOES(l, r, b, t, n, f);
}

void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::glOrthox(l, r, b, t, n, f);
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::glOrthoxOES(l, r, b, t, n, f);
}

void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
	return functions::glPNTrianglesfATI(pname, param);
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
	return functions::glPNTrianglesiATI(pname, param);
}

void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
	return functions::glPassTexCoordATI(dst, coord, swizzle);
}

void glPassThrough(GLfloat token)
{
	return functions::glPassThrough(token);
}

void glPassThroughxOES(GLfixed token)
{
	return functions::glPassThroughxOES(token);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
	return functions::glPatchParameterfv(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value)
{
	return functions::glPatchParameteri(pname, value);
}

void glPatchParameteriEXT(GLenum pname, GLint value)
{
	return functions::glPatchParameteriEXT(pname, value);
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
	return functions::glPathColorGenNV(color, genMode, colorFormat, coeffs);
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::glPathCoordsNV(path, numCoords, coordType, coords);
}

void glPathCoverDepthFuncNV(GLenum func)
{
	return functions::glPathCoverDepthFuncNV(func);
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
	return functions::glPathDashArrayNV(path, dashCount, dashArray);
}

void glPathFogGenNV(GLenum genMode)
{
	return functions::glPathFogGenNV(genMode);
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	return functions::glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	return functions::glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
	return functions::glPathParameterfNV(path, pname, value);
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
	return functions::glPathParameterfvNV(path, pname, value);
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
	return functions::glPathParameteriNV(path, pname, value);
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
	return functions::glPathParameterivNV(path, pname, value);
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
	return functions::glPathStencilDepthOffsetNV(factor, units);
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
	return functions::glPathStencilFuncNV(func, ref, mask);
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
	return functions::glPathStringNV(path, format, length, pathString);
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
	return functions::glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void glPauseTransformFeedback()
{
	return functions::glPauseTransformFeedback();
}

void glPauseTransformFeedbackNV()
{
	return functions::glPauseTransformFeedbackNV();
}

void glPixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
	return functions::glPixelDataRangeNV(target, length, pointer);
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
	return functions::glPixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
	return functions::glPixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
	return functions::glPixelMapusv(map, mapsize, values);
}

void glPixelMapx(GLenum map, GLint size, const GLfixed * values)
{
	return functions::glPixelMapx(map, size, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
	return functions::glPixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
	return functions::glPixelStorei(pname, param);
}

void glPixelStorex(GLenum pname, GLfixed param)
{
	return functions::glPixelStorex(pname, param);
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
	return functions::glPixelTexGenParameterfSGIS(pname, param);
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
	return functions::glPixelTexGenParameterfvSGIS(pname, params);
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
	return functions::glPixelTexGenParameteriSGIS(pname, param);
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
	return functions::glPixelTexGenParameterivSGIS(pname, params);
}

void glPixelTexGenSGIX(GLenum mode)
{
	return functions::glPixelTexGenSGIX(mode);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
	return functions::glPixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
	return functions::glPixelTransferi(pname, param);
}

void glPixelTransferxOES(GLenum pname, GLfixed param)
{
	return functions::glPixelTransferxOES(pname, param);
}

void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
	return functions::glPixelTransformParameterfEXT(target, pname, param);
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glPixelTransformParameterfvEXT(target, pname, params);
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
	return functions::glPixelTransformParameteriEXT(target, pname, param);
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glPixelTransformParameterivEXT(target, pname, params);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	return functions::glPixelZoom(xfactor, yfactor);
}

void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
	return functions::glPixelZoomxOES(xfactor, yfactor);
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
	return functions::glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
	return functions::glPointParameterf(pname, param);
}

void glPointParameterfARB(GLenum pname, GLfloat param)
{
	return functions::glPointParameterfARB(pname, param);
}

void glPointParameterfEXT(GLenum pname, GLfloat param)
{
	return functions::glPointParameterfEXT(pname, param);
}

void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
	return functions::glPointParameterfSGIS(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
	return functions::glPointParameterfv(pname, params);
}

void glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
	return functions::glPointParameterfvARB(pname, params);
}

void glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
	return functions::glPointParameterfvEXT(pname, params);
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
	return functions::glPointParameterfvSGIS(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
	return functions::glPointParameteri(pname, param);
}

void glPointParameteriNV(GLenum pname, GLint param)
{
	return functions::glPointParameteriNV(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
	return functions::glPointParameteriv(pname, params);
}

void glPointParameterivNV(GLenum pname, const GLint * params)
{
	return functions::glPointParameterivNV(pname, params);
}

void glPointParameterx(GLenum pname, GLfixed param)
{
	return functions::glPointParameterx(pname, param);
}

void glPointParameterxOES(GLenum pname, GLfixed param)
{
	return functions::glPointParameterxOES(pname, param);
}

void glPointParameterxv(GLenum pname, const GLfixed * params)
{
	return functions::glPointParameterxv(pname, params);
}

void glPointParameterxvOES(GLenum pname, const GLfixed * params)
{
	return functions::glPointParameterxvOES(pname, params);
}

void glPointSize(GLfloat size)
{
	return functions::glPointSize(size);
}

void glPointSizePointerOES(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glPointSizePointerOES(type, stride, pointer);
}

void glPointSizex(GLfixed size)
{
	return functions::glPointSizex(size);
}

void glPointSizexOES(GLfixed size)
{
	return functions::glPointSizexOES(size);
}

GLint glPollAsyncSGIX(GLuint * markerp)
{
	return functions::glPollAsyncSGIX(markerp);
}

GLint glPollInstrumentsSGIX(GLint * marker_p)
{
	return functions::glPollInstrumentsSGIX(marker_p);
}

void glPolygonMode(GLenum face, GLenum mode)
{
	return functions::glPolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
	return functions::glPolygonOffset(factor, units);
}

void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
	return functions::glPolygonOffsetEXT(factor, bias);
}

void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
	return functions::glPolygonOffsetx(factor, units);
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
	return functions::glPolygonOffsetxOES(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
	return functions::glPolygonStipple(mask);
}

void glPopAttrib()
{
	return functions::glPopAttrib();
}

void glPopClientAttrib()
{
	return functions::glPopClientAttrib();
}

void glPopDebugGroup()
{
	return functions::glPopDebugGroup();
}

void glPopDebugGroupKHR()
{
	return functions::glPopDebugGroupKHR();
}

void glPopGroupMarkerEXT()
{
	return functions::glPopGroupMarkerEXT();
}

void glPopMatrix()
{
	return functions::glPopMatrix();
}

void glPopName()
{
	return functions::glPopName();
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
	return functions::glPresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
	return functions::glPresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void glPrimitiveRestartIndex(GLuint index)
{
	return functions::glPrimitiveRestartIndex(index);
}

void glPrimitiveRestartIndexNV(GLuint index)
{
	return functions::glPrimitiveRestartIndexNV(index);
}

void glPrimitiveRestartNV()
{
	return functions::glPrimitiveRestartNV();
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
	return functions::glPrioritizeTextures(n, textures, priorities);
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
	return functions::glPrioritizeTexturesEXT(n, textures, priorities);
}

void glPrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
	return functions::glPrioritizeTexturesxOES(n, textures, priorities);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
	return functions::glProgramBinary(program, binaryFormat, binary, length);
}

void glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
	return functions::glProgramBinaryOES(program, binaryFormat, binary, length);
}

void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
	return functions::glProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
	return functions::glProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
	return functions::glProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
	return functions::glProgramEnvParameter4dvARB(target, index, params);
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
	return functions::glProgramEnvParameter4fvARB(target, index, params);
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
	return functions::glProgramEnvParameterI4ivNV(target, index, params);
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::glProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
	return functions::glProgramEnvParameterI4uivNV(target, index, params);
}

void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::glProgramEnvParameters4fvEXT(target, index, count, params);
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::glProgramEnvParametersI4ivNV(target, index, count, params);
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::glProgramEnvParametersI4uivNV(target, index, count, params);
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
	return functions::glProgramLocalParameter4dvARB(target, index, params);
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
	return functions::glProgramLocalParameter4fvARB(target, index, params);
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
	return functions::glProgramLocalParameterI4ivNV(target, index, params);
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::glProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
	return functions::glProgramLocalParameterI4uivNV(target, index, params);
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::glProgramLocalParameters4fvEXT(target, index, count, params);
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::glProgramLocalParametersI4ivNV(target, index, count, params);
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::glProgramLocalParametersI4uivNV(target, index, count, params);
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
	return functions::glProgramNamedParameter4dvNV(id, len, name, v);
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
	return functions::glProgramNamedParameter4fvNV(id, len, name, v);
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glProgramParameter4dNV(target, index, x, y, z, w);
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
	return functions::glProgramParameter4dvNV(target, index, v);
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glProgramParameter4fNV(target, index, x, y, z, w);
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
	return functions::glProgramParameter4fvNV(target, index, v);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
	return functions::glProgramParameteri(program, pname, value);
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
	return functions::glProgramParameteriARB(program, pname, value);
}

void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
	return functions::glProgramParameteriEXT(program, pname, value);
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::glProgramParameters4dvNV(target, index, count, v);
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::glProgramParameters4fvNV(target, index, count, v);
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
	return functions::glProgramStringARB(target, format, len, string);
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
	return functions::glProgramSubroutineParametersuivNV(target, count, params);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
	return functions::glProgramUniform1d(program, location, v0);
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
	return functions::glProgramUniform1dEXT(program, location, x);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform1dvEXT(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
	return functions::glProgramUniform1f(program, location, v0);
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
	return functions::glProgramUniform1fEXT(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform1fvEXT(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
	return functions::glProgramUniform1i(program, location, v0);
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
	return functions::glProgramUniform1i64NV(program, location, x);
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glProgramUniform1i64vNV(program, location, count, value);
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
	return functions::glProgramUniform1iEXT(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform1ivEXT(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
	return functions::glProgramUniform1ui(program, location, v0);
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
	return functions::glProgramUniform1ui64NV(program, location, x);
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glProgramUniform1ui64vNV(program, location, count, value);
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
	return functions::glProgramUniform1uiEXT(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform1uivEXT(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
	return functions::glProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
	return functions::glProgramUniform2dEXT(program, location, x, y);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform2dvEXT(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	return functions::glProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	return functions::glProgramUniform2fEXT(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform2fvEXT(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
	return functions::glProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
	return functions::glProgramUniform2i64NV(program, location, x, y);
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glProgramUniform2i64vNV(program, location, count, value);
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
	return functions::glProgramUniform2iEXT(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform2ivEXT(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	return functions::glProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
	return functions::glProgramUniform2ui64NV(program, location, x, y);
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glProgramUniform2ui64vNV(program, location, count, value);
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	return functions::glProgramUniform2uiEXT(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform2uivEXT(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
	return functions::glProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glProgramUniform3dEXT(program, location, x, y, z);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform3dvEXT(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::glProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::glProgramUniform3fEXT(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform3fvEXT(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::glProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::glProgramUniform3i64NV(program, location, x, y, z);
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glProgramUniform3i64vNV(program, location, count, value);
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::glProgramUniform3iEXT(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform3ivEXT(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::glProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::glProgramUniform3ui64NV(program, location, x, y, z);
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glProgramUniform3ui64vNV(program, location, count, value);
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::glProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform3uivEXT(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
	return functions::glProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glProgramUniform4dEXT(program, location, x, y, z, w);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glProgramUniform4dvEXT(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::glProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::glProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glProgramUniform4fvEXT(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::glProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::glProgramUniform4i64NV(program, location, x, y, z, w);
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glProgramUniform4i64vNV(program, location, count, value);
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::glProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::glProgramUniform4ivEXT(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::glProgramUniform4ui64NV(program, location, x, y, z, w);
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glProgramUniform4ui64vNV(program, location, count, value);
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::glProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform4uiv(program, location, count, value);
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::glProgramUniform4uivEXT(program, location, count, value);
}

void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
	return functions::glProgramUniformHandleui64ARB(program, location, value);
}

void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
	return functions::glProgramUniformHandleui64NV(program, location, value);
}

void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
	return functions::glProgramUniformHandleui64vARB(program, location, count, values);
}

void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
	return functions::glProgramUniformHandleui64vNV(program, location, count, values);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
	return functions::glProgramUniformui64NV(program, location, value);
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glProgramUniformui64vNV(program, location, count, value);
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
	return functions::glProgramVertexLimitNV(target, limit);
}

void glProvokingVertex(GLenum mode)
{
	return functions::glProvokingVertex(mode);
}

void glProvokingVertexEXT(GLenum mode)
{
	return functions::glProvokingVertexEXT(mode);
}

void glPushAttrib(GLbitfield mask)
{
	return functions::glPushAttrib(mask);
}

void glPushClientAttrib(GLbitfield mask)
{
	return functions::glPushClientAttrib(mask);
}

void glPushClientAttribDefaultEXT(GLbitfield mask)
{
	return functions::glPushClientAttribDefaultEXT(mask);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
	return functions::glPushDebugGroup(source, id, length, message);
}

void glPushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
	return functions::glPushDebugGroupKHR(source, id, length, message);
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
	return functions::glPushGroupMarkerEXT(length, marker);
}

void glPushMatrix()
{
	return functions::glPushMatrix();
}

void glPushName(GLuint name)
{
	return functions::glPushName(name);
}

void glQueryCounter(GLuint id, GLenum target)
{
	return functions::glQueryCounter(id, target);
}

void glQueryCounterEXT(GLuint id, GLenum target)
{
	return functions::glQueryCounterEXT(id, target);
}

GLbitfield glQueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
	return functions::glQueryMatrixxOES(mantissa, exponent);
}

void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
	return functions::glQueryObjectParameteruiAMD(target, id, pname, param);
}

void glRasterPos2d(GLdouble x, GLdouble y)
{
	return functions::glRasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
	return functions::glRasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
	return functions::glRasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
	return functions::glRasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
	return functions::glRasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
	return functions::glRasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
	return functions::glRasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
	return functions::glRasterPos2sv(v);
}

void glRasterPos2xOES(GLfixed x, GLfixed y)
{
	return functions::glRasterPos2xOES(x, y);
}

void glRasterPos2xvOES(const GLfixed * coords)
{
	return functions::glRasterPos2xvOES(coords);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glRasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
	return functions::glRasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glRasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
	return functions::glRasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
	return functions::glRasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
	return functions::glRasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
	return functions::glRasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
	return functions::glRasterPos3sv(v);
}

void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glRasterPos3xOES(x, y, z);
}

void glRasterPos3xvOES(const GLfixed * coords)
{
	return functions::glRasterPos3xvOES(coords);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glRasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
	return functions::glRasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glRasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
	return functions::glRasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	return functions::glRasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
	return functions::glRasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glRasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
	return functions::glRasterPos4sv(v);
}

void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
	return functions::glRasterPos4xOES(x, y, z, w);
}

void glRasterPos4xvOES(const GLfixed * coords)
{
	return functions::glRasterPos4xvOES(coords);
}

void glReadBuffer(GLenum mode)
{
	return functions::glReadBuffer(mode);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
	return functions::glReadBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
	return functions::glReadBufferNV(mode);
}

void glReadInstrumentsSGIX(GLint marker)
{
	return functions::glReadInstrumentsSGIX(marker);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
	return functions::glReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
	return functions::glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
	return functions::glReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	return functions::glRectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
	return functions::glRectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	return functions::glRectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
	return functions::glRectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	return functions::glRecti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
	return functions::glRectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	return functions::glRects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
	return functions::glRectsv(v1, v2);
}

void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
	return functions::glRectxOES(x1, y1, x2, y2);
}

void glRectxvOES(const GLfixed * v1, const GLfixed * v2)
{
	return functions::glRectxvOES(v1, v2);
}

void glReferencePlaneSGIX(const GLdouble * equation)
{
	return functions::glReferencePlaneSGIX(equation);
}

void glReleaseShaderCompiler()
{
	return functions::glReleaseShaderCompiler();
}

GLint glRenderMode(GLenum mode)
{
	return functions::glRenderMode(mode);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageEXT(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glRenderbufferStorageOES(target, internalformat, width, height);
}

void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
	return functions::glReplacementCodePointerSUN(type, stride, pointer);
}

void glReplacementCodeubSUN(GLubyte code)
{
	return functions::glReplacementCodeubSUN(code);
}

void glReplacementCodeubvSUN(const GLubyte * code)
{
	return functions::glReplacementCodeubvSUN(code);
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
	return functions::glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
	return functions::glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
	return functions::glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void glReplacementCodeuiSUN(GLuint code)
{
	return functions::glReplacementCodeuiSUN(code);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
	return functions::glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
	return functions::glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void glReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
	return functions::glReplacementCodeuiVertex3fvSUN(rc, v);
}

void glReplacementCodeuivSUN(const GLuint * code)
{
	return functions::glReplacementCodeuivSUN(code);
}

void glReplacementCodeusSUN(GLushort code)
{
	return functions::glReplacementCodeusSUN(code);
}

void glReplacementCodeusvSUN(const GLushort * code)
{
	return functions::glReplacementCodeusvSUN(code);
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
	return functions::glRequestResidentProgramsNV(n, programs);
}

void glResetHistogram(GLenum target)
{
	return functions::glResetHistogram(target);
}

void glResetHistogramEXT(GLenum target)
{
	return functions::glResetHistogramEXT(target);
}

void glResetMinmax(GLenum target)
{
	return functions::glResetMinmax(target);
}

void glResetMinmaxEXT(GLenum target)
{
	return functions::glResetMinmaxEXT(target);
}

void glResizeBuffersMESA()
{
	return functions::glResizeBuffersMESA();
}

void glResolveMultisampleFramebufferAPPLE()
{
	return functions::glResolveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
	return functions::glResumeTransformFeedback();
}

void glResumeTransformFeedbackNV()
{
	return functions::glResumeTransformFeedbackNV();
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glRotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glRotatef(angle, x, y, z);
}

void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glRotatex(angle, x, y, z);
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glRotatexOES(angle, x, y, z);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
	return functions::glSampleCoverage(value, invert);
}

void glSampleCoverageARB(GLfloat value, GLboolean invert)
{
	return functions::glSampleCoverageARB(value, invert);
}

void glSampleCoverageOES(GLfixed value, GLboolean invert)
{
	return functions::glSampleCoverageOES(value, invert);
}

void glSampleCoveragex(GLclampx value, GLboolean invert)
{
	return functions::glSampleCoveragex(value, invert);
}

void glSampleCoveragexOES(GLclampx value, GLboolean invert)
{
	return functions::glSampleCoveragexOES(value, invert);
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
	return functions::glSampleMapATI(dst, interp, swizzle);
}

void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
	return functions::glSampleMaskEXT(value, invert);
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
	return functions::glSampleMaskIndexedNV(index, mask);
}

void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
	return functions::glSampleMaskSGIS(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
	return functions::glSampleMaski(maskNumber, mask);
}

void glSamplePatternEXT(GLenum pattern)
{
	return functions::glSamplePatternEXT(pattern);
}

void glSamplePatternSGIS(GLenum pattern)
{
	return functions::glSamplePatternSGIS(pattern);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
	return functions::glSamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
	return functions::glSamplerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
	return functions::glSamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
	return functions::glSamplerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
	return functions::glSamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
	return functions::glSamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
	return functions::glSamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
	return functions::glSamplerParameteriv(sampler, pname, param);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glScaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glScalef(x, y, z);
}

void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glScalex(x, y, z);
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glScalexOES(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glScissor(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
	return functions::glScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
	return functions::glScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
	return functions::glScissorIndexedv(index, v);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::glSecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::glSecondaryColor3bEXT(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
	return functions::glSecondaryColor3bv(v);
}

void glSecondaryColor3bvEXT(const GLbyte * v)
{
	return functions::glSecondaryColor3bvEXT(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::glSecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::glSecondaryColor3dEXT(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
	return functions::glSecondaryColor3dv(v);
}

void glSecondaryColor3dvEXT(const GLdouble * v)
{
	return functions::glSecondaryColor3dvEXT(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::glSecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::glSecondaryColor3fEXT(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
	return functions::glSecondaryColor3fv(v);
}

void glSecondaryColor3fvEXT(const GLfloat * v)
{
	return functions::glSecondaryColor3fvEXT(v);
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	return functions::glSecondaryColor3hNV(red, green, blue);
}

void glSecondaryColor3hvNV(const GLhalfNV * v)
{
	return functions::glSecondaryColor3hvNV(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
	return functions::glSecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
	return functions::glSecondaryColor3iEXT(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
	return functions::glSecondaryColor3iv(v);
}

void glSecondaryColor3ivEXT(const GLint * v)
{
	return functions::glSecondaryColor3ivEXT(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
	return functions::glSecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
	return functions::glSecondaryColor3sEXT(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
	return functions::glSecondaryColor3sv(v);
}

void glSecondaryColor3svEXT(const GLshort * v)
{
	return functions::glSecondaryColor3svEXT(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::glSecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::glSecondaryColor3ubEXT(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
	return functions::glSecondaryColor3ubv(v);
}

void glSecondaryColor3ubvEXT(const GLubyte * v)
{
	return functions::glSecondaryColor3ubvEXT(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
	return functions::glSecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
	return functions::glSecondaryColor3uiEXT(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
	return functions::glSecondaryColor3uiv(v);
}

void glSecondaryColor3uivEXT(const GLuint * v)
{
	return functions::glSecondaryColor3uivEXT(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
	return functions::glSecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
	return functions::glSecondaryColor3usEXT(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
	return functions::glSecondaryColor3usv(v);
}

void glSecondaryColor3usvEXT(const GLushort * v)
{
	return functions::glSecondaryColor3usvEXT(v);
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::glSecondaryColorFormatNV(size, type, stride);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
	return functions::glSecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
	return functions::glSecondaryColorP3uiv(type, color);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glSecondaryColorPointer(size, type, stride, pointer);
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glSecondaryColorPointerEXT(size, type, stride, pointer);
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
	return functions::glSelectBuffer(size, buffer);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
	return functions::glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
	return functions::glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
	return functions::glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void glSetFenceAPPLE(GLuint fence)
{
	return functions::glSetFenceAPPLE(fence);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
	return functions::glSetFenceNV(fence, condition);
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
	return functions::glSetFragmentShaderConstantATI(dst, value);
}

void glSetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
	return functions::glSetInvariantEXT(id, type, addr);
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
	return functions::glSetLocalConstantEXT(id, type, addr);
}

void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
	return functions::glSetMultisamplefvAMD(pname, index, val);
}

void glShadeModel(GLenum mode)
{
	return functions::glShadeModel(mode);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
	return functions::glShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
	return functions::glShaderOp1EXT(op, res, arg1);
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
	return functions::glShaderOp2EXT(op, res, arg1, arg2);
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
	return functions::glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
	return functions::glShaderSource(shader, count, string, length);
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
	return functions::glShaderSourceARB(shaderObj, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
	return functions::glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
	return functions::glSharpenTexFuncSGIS(target, n, points);
}

void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
	return functions::glSpriteParameterfSGIX(pname, param);
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
	return functions::glSpriteParameterfvSGIX(pname, params);
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
	return functions::glSpriteParameteriSGIX(pname, param);
}

void glSpriteParameterivSGIX(GLenum pname, const GLint * params)
{
	return functions::glSpriteParameterivSGIX(pname, params);
}

void glStartInstrumentsSGIX()
{
	return functions::glStartInstrumentsSGIX();
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
	return functions::glStartTilingQCOM(x, y, width, height, preserveMask);
}

void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
	return functions::glStencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
	return functions::glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
	return functions::glStencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	return functions::glStencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
	return functions::glStencilFuncSeparate(face, func, ref, mask);
}

void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	return functions::glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void glStencilMask(GLuint mask)
{
	return functions::glStencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
	return functions::glStencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	return functions::glStencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	return functions::glStencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	return functions::glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void glStencilOpValueAMD(GLenum face, GLuint value)
{
	return functions::glStencilOpValueAMD(face, value);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
	return functions::glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
	return functions::glStencilStrokePathNV(path, reference, mask);
}

void glStopInstrumentsSGIX(GLint marker)
{
	return functions::glStopInstrumentsSGIX(marker);
}

void glStringMarkerGREMEDY(GLsizei len, const void * string)
{
	return functions::glStringMarkerGREMEDY(len, string);
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	return functions::glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

void glSyncTextureINTEL(GLuint texture)
{
	return functions::glSyncTextureINTEL(texture);
}

void glTagSampleBufferSGIX()
{
	return functions::glTagSampleBufferSGIX();
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
	return functions::glTangent3bEXT(tx, ty, tz);
}

void glTangent3bvEXT(const GLbyte * v)
{
	return functions::glTangent3bvEXT(v);
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
	return functions::glTangent3dEXT(tx, ty, tz);
}

void glTangent3dvEXT(const GLdouble * v)
{
	return functions::glTangent3dvEXT(v);
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
	return functions::glTangent3fEXT(tx, ty, tz);
}

void glTangent3fvEXT(const GLfloat * v)
{
	return functions::glTangent3fvEXT(v);
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
	return functions::glTangent3iEXT(tx, ty, tz);
}

void glTangent3ivEXT(const GLint * v)
{
	return functions::glTangent3ivEXT(v);
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
	return functions::glTangent3sEXT(tx, ty, tz);
}

void glTangent3svEXT(const GLshort * v)
{
	return functions::glTangent3svEXT(v);
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glTangentPointerEXT(type, stride, pointer);
}

void glTbufferMask3DFX(GLuint mask)
{
	return functions::glTbufferMask3DFX(mask);
}

void glTessellationFactorAMD(GLfloat factor)
{
	return functions::glTessellationFactorAMD(factor);
}

void glTessellationModeAMD(GLenum mode)
{
	return functions::glTessellationModeAMD(mode);
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
	return functions::glTestFenceAPPLE(fence);
}

GLboolean glTestFenceNV(GLuint fence)
{
	return functions::glTestFenceNV(fence);
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
	return functions::glTestObjectAPPLE(object, name);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::glTexBuffer(target, internalformat, buffer);
}

void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::glTexBufferARB(target, internalformat, buffer);
}

void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::glTexBufferEXT(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glTexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glTexBufferRangeEXT(target, internalformat, buffer, offset, size);
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
	return functions::glTexBumpParameterfvATI(pname, param);
}

void glTexBumpParameterivATI(GLenum pname, const GLint * param)
{
	return functions::glTexBumpParameterivATI(pname, param);
}

void glTexCoord1bOES(GLbyte s)
{
	return functions::glTexCoord1bOES(s);
}

void glTexCoord1bvOES(const GLbyte * coords)
{
	return functions::glTexCoord1bvOES(coords);
}

void glTexCoord1d(GLdouble s)
{
	return functions::glTexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
	return functions::glTexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
	return functions::glTexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
	return functions::glTexCoord1fv(v);
}

void glTexCoord1hNV(GLhalfNV s)
{
	return functions::glTexCoord1hNV(s);
}

void glTexCoord1hvNV(const GLhalfNV * v)
{
	return functions::glTexCoord1hvNV(v);
}

void glTexCoord1i(GLint s)
{
	return functions::glTexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
	return functions::glTexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
	return functions::glTexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
	return functions::glTexCoord1sv(v);
}

void glTexCoord1xOES(GLfixed s)
{
	return functions::glTexCoord1xOES(s);
}

void glTexCoord1xvOES(const GLfixed * coords)
{
	return functions::glTexCoord1xvOES(coords);
}

void glTexCoord2bOES(GLbyte s, GLbyte t)
{
	return functions::glTexCoord2bOES(s, t);
}

void glTexCoord2bvOES(const GLbyte * coords)
{
	return functions::glTexCoord2bvOES(coords);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
	return functions::glTexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
	return functions::glTexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
	return functions::glTexCoord2f(s, t);
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
	return functions::glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
	return functions::glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
	return functions::glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

void glTexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
	return functions::glTexCoord2fVertex3fvSUN(tc, v);
}

void glTexCoord2fv(const GLfloat * v)
{
	return functions::glTexCoord2fv(v);
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
	return functions::glTexCoord2hNV(s, t);
}

void glTexCoord2hvNV(const GLhalfNV * v)
{
	return functions::glTexCoord2hvNV(v);
}

void glTexCoord2i(GLint s, GLint t)
{
	return functions::glTexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
	return functions::glTexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
	return functions::glTexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
	return functions::glTexCoord2sv(v);
}

void glTexCoord2xOES(GLfixed s, GLfixed t)
{
	return functions::glTexCoord2xOES(s, t);
}

void glTexCoord2xvOES(const GLfixed * coords)
{
	return functions::glTexCoord2xvOES(coords);
}

void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
	return functions::glTexCoord3bOES(s, t, r);
}

void glTexCoord3bvOES(const GLbyte * coords)
{
	return functions::glTexCoord3bvOES(coords);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	return functions::glTexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
	return functions::glTexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	return functions::glTexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
	return functions::glTexCoord3fv(v);
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	return functions::glTexCoord3hNV(s, t, r);
}

void glTexCoord3hvNV(const GLhalfNV * v)
{
	return functions::glTexCoord3hvNV(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
	return functions::glTexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
	return functions::glTexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
	return functions::glTexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
	return functions::glTexCoord3sv(v);
}

void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
	return functions::glTexCoord3xOES(s, t, r);
}

void glTexCoord3xvOES(const GLfixed * coords)
{
	return functions::glTexCoord3xvOES(coords);
}

void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	return functions::glTexCoord4bOES(s, t, r, q);
}

void glTexCoord4bvOES(const GLbyte * coords)
{
	return functions::glTexCoord4bvOES(coords);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::glTexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
	return functions::glTexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::glTexCoord4f(s, t, r, q);
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void glTexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
	return functions::glTexCoord4fVertex4fvSUN(tc, v);
}

void glTexCoord4fv(const GLfloat * v)
{
	return functions::glTexCoord4fv(v);
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	return functions::glTexCoord4hNV(s, t, r, q);
}

void glTexCoord4hvNV(const GLhalfNV * v)
{
	return functions::glTexCoord4hvNV(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	return functions::glTexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
	return functions::glTexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::glTexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
	return functions::glTexCoord4sv(v);
}

void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::glTexCoord4xOES(s, t, r, q);
}

void glTexCoord4xvOES(const GLfixed * coords)
{
	return functions::glTexCoord4xvOES(coords);
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::glTexCoordFormatNV(size, type, stride);
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
	return functions::glTexCoordP1ui(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
	return functions::glTexCoordP1uiv(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
	return functions::glTexCoordP2ui(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
	return functions::glTexCoordP2uiv(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
	return functions::glTexCoordP3ui(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
	return functions::glTexCoordP3uiv(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
	return functions::glTexCoordP4ui(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
	return functions::glTexCoordP4uiv(type, coords);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glTexCoordPointer(size, type, stride, pointer);
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::glTexCoordPointerEXT(size, type, stride, count, pointer);
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::glTexCoordPointervINTEL(size, type, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	return functions::glTexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glTexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	return functions::glTexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTexEnviv(target, pname, params);
}

void glTexEnvx(GLenum target, GLenum pname, GLfixed param)
{
	return functions::glTexEnvx(target, pname, param);
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::glTexEnvxOES(target, pname, param);
}

void glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::glTexEnvxv(target, pname, params);
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::glTexEnvxvOES(target, pname, params);
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
	return functions::glTexFilterFuncSGIS(target, filter, n, weights);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
	return functions::glTexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
	return functions::glTexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	return functions::glTexGenf(coord, pname, param);
}

void glTexGenfOES(GLenum coord, GLenum pname, GLfloat param)
{
	return functions::glTexGenfOES(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::glTexGenfv(coord, pname, params);
}

void glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::glTexGenfvOES(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
	return functions::glTexGeni(coord, pname, param);
}

void glTexGeniOES(GLenum coord, GLenum pname, GLint param)
{
	return functions::glTexGeniOES(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
	return functions::glTexGeniv(coord, pname, params);
}

void glTexGenivOES(GLenum coord, GLenum pname, const GLint * params)
{
	return functions::glTexGenivOES(coord, pname, params);
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
	return functions::glTexGenxOES(coord, pname, param);
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
	return functions::glTexGenxvOES(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::glTexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::glTexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
	return functions::glTexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTexParameterIiv(target, pname, params);
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTexParameterIivEXT(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
	return functions::glTexParameterIuiv(target, pname, params);
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
	return functions::glTexParameterIuivEXT(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	return functions::glTexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glTexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	return functions::glTexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTexParameteriv(target, pname, params);
}

void glTexParameterx(GLenum target, GLenum pname, GLfixed param)
{
	return functions::glTexParameterx(target, pname, param);
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::glTexParameterxOES(target, pname, param);
}

void glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::glTexParameterxv(target, pname, params);
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::glTexParameterxvOES(target, pname, params);
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
	return functions::glTexRenderbufferNV(target, renderbuffer);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::glTexStorage1D(target, levels, internalformat, width);
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::glTexStorage1DEXT(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glTexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glTexStorage2DEXT(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::glTexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::glTexStorage3DEXT(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexStorage3DMultisampleOES(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::glTexStorage3DMultisampleOES(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
	return functions::glTexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void glTextureBarrierNV()
{
	return functions::glTextureBarrierNV();
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::glTextureBufferEXT(texture, target, internalformat, buffer);
}

void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::glTextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	return functions::glTextureColorMaskSGIS(red, green, blue, alpha);
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::glTextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::glTextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::glTextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::glTextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void glTextureLightEXT(GLenum pname)
{
	return functions::glTextureLightEXT(pname);
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
	return functions::glTextureMaterialEXT(face, mode);
}

void glTextureNormalEXT(GLenum mode)
{
	return functions::glTextureNormalEXT(mode);
}

void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
	return functions::glTexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTextureParameterIivEXT(texture, target, pname, params);
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
	return functions::glTextureParameterIuivEXT(texture, target, pname, params);
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
	return functions::glTextureParameterfEXT(texture, target, pname, param);
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::glTextureParameterfvEXT(texture, target, pname, params);
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
	return functions::glTextureParameteriEXT(texture, target, pname, param);
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
	return functions::glTextureParameterivEXT(texture, target, pname, params);
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
	return functions::glTextureRangeAPPLE(target, length, pointer);
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
	return functions::glTextureRenderbufferEXT(texture, target, renderbuffer);
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::glTextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::glTextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
	return functions::glTextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::glTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
	return functions::glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
	return functions::glTextureViewEXT(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
	return functions::glTrackMatrixNV(target, address, matrix, transform);
}

void glTransformFeedbackAttribsNV(GLuint count, const GLint * attribs, GLenum bufferMode)
{
	return functions::glTransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
	return functions::glTransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
	return functions::glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
	return functions::glTransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
	return functions::glTransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
	return functions::glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glTranslated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glTranslatef(x, y, z);
}

void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glTranslatex(x, y, z);
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glTranslatexOES(x, y, z);
}

void glUniform1d(GLint location, GLdouble x)
{
	return functions::glUniform1d(location, x);
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glUniform1dv(location, count, value);
}

void glUniform1f(GLint location, GLfloat v0)
{
	return functions::glUniform1f(location, v0);
}

void glUniform1fARB(GLint location, GLfloat v0)
{
	return functions::glUniform1fARB(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform1fv(location, count, value);
}

void glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform1fvARB(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
	return functions::glUniform1i(location, v0);
}

void glUniform1i64NV(GLint location, GLint64EXT x)
{
	return functions::glUniform1i64NV(location, x);
}

void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glUniform1i64vNV(location, count, value);
}

void glUniform1iARB(GLint location, GLint v0)
{
	return functions::glUniform1iARB(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform1iv(location, count, value);
}

void glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform1ivARB(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
	return functions::glUniform1ui(location, v0);
}

void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
	return functions::glUniform1ui64NV(location, x);
}

void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glUniform1ui64vNV(location, count, value);
}

void glUniform1uiEXT(GLint location, GLuint v0)
{
	return functions::glUniform1uiEXT(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform1uiv(location, count, value);
}

void glUniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform1uivEXT(location, count, value);
}

void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
	return functions::glUniform2d(location, x, y);
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glUniform2dv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
	return functions::glUniform2f(location, v0, v1);
}

void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
	return functions::glUniform2fARB(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform2fv(location, count, value);
}

void glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform2fvARB(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
	return functions::glUniform2i(location, v0, v1);
}

void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
	return functions::glUniform2i64NV(location, x, y);
}

void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glUniform2i64vNV(location, count, value);
}

void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
	return functions::glUniform2iARB(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform2iv(location, count, value);
}

void glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform2ivARB(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
	return functions::glUniform2ui(location, v0, v1);
}

void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
	return functions::glUniform2ui64NV(location, x, y);
}

void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glUniform2ui64vNV(location, count, value);
}

void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
	return functions::glUniform2uiEXT(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform2uiv(location, count, value);
}

void glUniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform2uivEXT(location, count, value);
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glUniform3d(location, x, y, z);
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glUniform3dv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::glUniform3f(location, v0, v1, v2);
}

void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::glUniform3fARB(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform3fv(location, count, value);
}

void glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform3fvARB(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::glUniform3i(location, v0, v1, v2);
}

void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::glUniform3i64NV(location, x, y, z);
}

void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glUniform3i64vNV(location, count, value);
}

void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::glUniform3iARB(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform3iv(location, count, value);
}

void glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform3ivARB(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::glUniform3ui(location, v0, v1, v2);
}

void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::glUniform3ui64NV(location, x, y, z);
}

void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glUniform3ui64vNV(location, count, value);
}

void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::glUniform3uiEXT(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform3uiv(location, count, value);
}

void glUniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform3uivEXT(location, count, value);
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glUniform4d(location, x, y, z, w);
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::glUniform4dv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::glUniform4f(location, v0, v1, v2, v3);
}

void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::glUniform4fARB(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform4fv(location, count, value);
}

void glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::glUniform4fvARB(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::glUniform4i(location, v0, v1, v2, v3);
}

void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::glUniform4i64NV(location, x, y, z, w);
}

void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::glUniform4i64vNV(location, count, value);
}

void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::glUniform4iARB(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform4iv(location, count, value);
}

void glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::glUniform4ivARB(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::glUniform4ui(location, v0, v1, v2, v3);
}

void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::glUniform4ui64NV(location, x, y, z, w);
}

void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glUniform4ui64vNV(location, count, value);
}

void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::glUniform4uiEXT(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform4uiv(location, count, value);
}

void glUniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::glUniform4uivEXT(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
	return functions::glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
	return functions::glUniformBufferEXT(program, location, buffer);
}

void glUniformHandleui64ARB(GLint location, GLuint64 value)
{
	return functions::glUniformHandleui64ARB(location, value);
}

void glUniformHandleui64NV(GLint location, GLuint64 value)
{
	return functions::glUniformHandleui64NV(location, value);
}

void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
	return functions::glUniformHandleui64vARB(location, count, value);
}

void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
	return functions::glUniformHandleui64vNV(location, count, value);
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix2dv(location, count, transpose, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2fvARB(location, count, transpose, value);
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix2x3dv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2x3fvNV(location, count, transpose, value);
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix2x4dv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix2x4fvNV(location, count, transpose, value);
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix3dv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3fvARB(location, count, transpose, value);
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix3x2dv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3x2fvNV(location, count, transpose, value);
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix3x4dv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix3x4fvNV(location, count, transpose, value);
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix4dv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4fvARB(location, count, transpose, value);
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix4x2dv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4x2fvNV(location, count, transpose, value);
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::glUniformMatrix4x3dv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4x3fv(location, count, transpose, value);
}

void glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::glUniformMatrix4x3fvNV(location, count, transpose, value);
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
	return functions::glUniformSubroutinesuiv(shadertype, count, indices);
}

void glUniformui64NV(GLint location, GLuint64EXT value)
{
	return functions::glUniformui64NV(location, value);
}

void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::glUniformui64vNV(location, count, value);
}

void glUnlockArraysEXT()
{
	return functions::glUnlockArraysEXT();
}

GLboolean glUnmapBuffer(GLenum target)
{
	return functions::glUnmapBuffer(target);
}

GLboolean glUnmapBufferARB(GLenum target)
{
	return functions::glUnmapBufferARB(target);
}

GLboolean glUnmapBufferOES(GLenum target)
{
	return functions::glUnmapBufferOES(target);
}

GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
	return functions::glUnmapNamedBufferEXT(buffer);
}

void glUnmapObjectBufferATI(GLuint buffer)
{
	return functions::glUnmapObjectBufferATI(buffer);
}

void glUnmapTexture2DINTEL(GLuint texture, GLint level)
{
	return functions::glUnmapTexture2DINTEL(texture, level);
}

void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
	return functions::glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

void glUseProgram(GLuint program)
{
	return functions::glUseProgram(program);
}

void glUseProgramObjectARB(GLhandleARB programObj)
{
	return functions::glUseProgramObjectARB(programObj);
}

void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
	return functions::glUseProgramStages(pipeline, stages, program);
}

void glUseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program)
{
	return functions::glUseProgramStagesEXT(pipeline, stages, program);
}

void glUseShaderProgramEXT(GLenum type, GLuint program)
{
	return functions::glUseShaderProgramEXT(type, program);
}

void glVDPAUFiniNV()
{
	return functions::glVDPAUFiniNV();
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::glVDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void glVDPAUInitNV(const void * vdpDevice, const void * getProcAddress_)
{
	return functions::glVDPAUInitNV(vdpDevice, getProcAddress_);
}

GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
	return functions::glVDPAUIsSurfaceNV(surface);
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
	return functions::glVDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
	return functions::glVDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
	return functions::glVDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
	return functions::glVDPAUSurfaceAccessNV(surface, access);
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
	return functions::glVDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
	return functions::glVDPAUUnregisterSurfaceNV(surface);
}

void glValidateProgram(GLuint program)
{
	return functions::glValidateProgram(program);
}

void glValidateProgramARB(GLhandleARB programObj)
{
	return functions::glValidateProgramARB(programObj);
}

void glValidateProgramPipeline(GLuint pipeline)
{
	return functions::glValidateProgramPipeline(pipeline);
}

void glValidateProgramPipelineEXT(GLuint pipeline)
{
	return functions::glValidateProgramPipelineEXT(pipeline);
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
	return functions::glVariantPointerEXT(id, type, stride, addr);
}

void glVariantbvEXT(GLuint id, const GLbyte * addr)
{
	return functions::glVariantbvEXT(id, addr);
}

void glVariantdvEXT(GLuint id, const GLdouble * addr)
{
	return functions::glVariantdvEXT(id, addr);
}

void glVariantfvEXT(GLuint id, const GLfloat * addr)
{
	return functions::glVariantfvEXT(id, addr);
}

void glVariantivEXT(GLuint id, const GLint * addr)
{
	return functions::glVariantivEXT(id, addr);
}

void glVariantsvEXT(GLuint id, const GLshort * addr)
{
	return functions::glVariantsvEXT(id, addr);
}

void glVariantubvEXT(GLuint id, const GLubyte * addr)
{
	return functions::glVariantubvEXT(id, addr);
}

void glVariantuivEXT(GLuint id, const GLuint * addr)
{
	return functions::glVariantuivEXT(id, addr);
}

void glVariantusvEXT(GLuint id, const GLushort * addr)
{
	return functions::glVariantusvEXT(id, addr);
}

void glVertex2bOES(GLbyte x)
{
	return functions::glVertex2bOES(x);
}

void glVertex2bvOES(const GLbyte * coords)
{
	return functions::glVertex2bvOES(coords);
}

void glVertex2d(GLdouble x, GLdouble y)
{
	return functions::glVertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
	return functions::glVertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
	return functions::glVertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
	return functions::glVertex2fv(v);
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
	return functions::glVertex2hNV(x, y);
}

void glVertex2hvNV(const GLhalfNV * v)
{
	return functions::glVertex2hvNV(v);
}

void glVertex2i(GLint x, GLint y)
{
	return functions::glVertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
	return functions::glVertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
	return functions::glVertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
	return functions::glVertex2sv(v);
}

void glVertex2xOES(GLfixed x)
{
	return functions::glVertex2xOES(x);
}

void glVertex2xvOES(const GLfixed * coords)
{
	return functions::glVertex2xvOES(coords);
}

void glVertex3bOES(GLbyte x, GLbyte y)
{
	return functions::glVertex3bOES(x, y);
}

void glVertex3bvOES(const GLbyte * coords)
{
	return functions::glVertex3bvOES(coords);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
	return functions::glVertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glVertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
	return functions::glVertex3fv(v);
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	return functions::glVertex3hNV(x, y, z);
}

void glVertex3hvNV(const GLhalfNV * v)
{
	return functions::glVertex3hvNV(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
	return functions::glVertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
	return functions::glVertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
	return functions::glVertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
	return functions::glVertex3sv(v);
}

void glVertex3xOES(GLfixed x, GLfixed y)
{
	return functions::glVertex3xOES(x, y);
}

void glVertex3xvOES(const GLfixed * coords)
{
	return functions::glVertex3xvOES(coords);
}

void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z)
{
	return functions::glVertex4bOES(x, y, z);
}

void glVertex4bvOES(const GLbyte * coords)
{
	return functions::glVertex4bvOES(coords);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
	return functions::glVertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glVertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
	return functions::glVertex4fv(v);
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	return functions::glVertex4hNV(x, y, z, w);
}

void glVertex4hvNV(const GLhalfNV * v)
{
	return functions::glVertex4hvNV(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
	return functions::glVertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
	return functions::glVertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glVertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
	return functions::glVertex4sv(v);
}

void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::glVertex4xOES(x, y, z);
}

void glVertex4xvOES(const GLfixed * coords)
{
	return functions::glVertex4xvOES(coords);
}

void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
	return functions::glVertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
	return functions::glVertexArrayParameteriAPPLE(pname, param);
}

void glVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
	return functions::glVertexArrayRangeAPPLE(length, pointer);
}

void glVertexArrayRangeNV(GLsizei length, const void * pointer)
{
	return functions::glVertexArrayRangeNV(length, pointer);
}

void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
	return functions::glVertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
	return functions::glVertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
	return functions::glVertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::glVertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::glVertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
	return functions::glVertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::glVertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
	return functions::glVertexAttrib1d(index, x);
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
	return functions::glVertexAttrib1dARB(index, x);
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
	return functions::glVertexAttrib1dNV(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib1dv(index, v);
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib1dvARB(index, v);
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib1dvNV(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
	return functions::glVertexAttrib1f(index, x);
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
	return functions::glVertexAttrib1fARB(index, x);
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
	return functions::glVertexAttrib1fNV(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib1fv(index, v);
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib1fvARB(index, v);
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib1fvNV(index, v);
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
	return functions::glVertexAttrib1hNV(index, x);
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::glVertexAttrib1hvNV(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
	return functions::glVertexAttrib1s(index, x);
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
	return functions::glVertexAttrib1sARB(index, x);
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
	return functions::glVertexAttrib1sNV(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib1sv(index, v);
}

void glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib1svARB(index, v);
}

void glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib1svNV(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
	return functions::glVertexAttrib2d(index, x, y);
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
	return functions::glVertexAttrib2dARB(index, x, y);
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
	return functions::glVertexAttrib2dNV(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib2dv(index, v);
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib2dvARB(index, v);
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib2dvNV(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	return functions::glVertexAttrib2f(index, x, y);
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
	return functions::glVertexAttrib2fARB(index, x, y);
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
	return functions::glVertexAttrib2fNV(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib2fv(index, v);
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib2fvARB(index, v);
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib2fvNV(index, v);
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
	return functions::glVertexAttrib2hNV(index, x, y);
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::glVertexAttrib2hvNV(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
	return functions::glVertexAttrib2s(index, x, y);
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
	return functions::glVertexAttrib2sARB(index, x, y);
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
	return functions::glVertexAttrib2sNV(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib2sv(index, v);
}

void glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib2svARB(index, v);
}

void glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib2svNV(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexAttrib3dARB(index, x, y, z);
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexAttrib3dNV(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib3dv(index, v);
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib3dvARB(index, v);
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib3dvNV(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glVertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glVertexAttrib3fARB(index, x, y, z);
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glVertexAttrib3fNV(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib3fv(index, v);
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib3fvARB(index, v);
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib3fvNV(index, v);
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	return functions::glVertexAttrib3hNV(index, x, y, z);
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::glVertexAttrib3hvNV(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::glVertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::glVertexAttrib3sARB(index, x, y, z);
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::glVertexAttrib3sNV(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib3sv(index, v);
}

void glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib3svARB(index, v);
}

void glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib3svNV(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttrib4Nbv(index, v);
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttrib4NbvARB(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
	return functions::glVertexAttrib4Niv(index, v);
}

void glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
	return functions::glVertexAttrib4NivARB(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib4Nsv(index, v);
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib4NsvARB(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::glVertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::glVertexAttrib4NubARB(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttrib4Nubv(index, v);
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttrib4NubvARB(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
	return functions::glVertexAttrib4NuivARB(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
	return functions::glVertexAttrib4Nusv(index, v);
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
	return functions::glVertexAttrib4NusvARB(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttrib4bv(index, v);
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttrib4bvARB(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexAttrib4dARB(index, x, y, z, w);
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexAttrib4dNV(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib4dv(index, v);
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib4dvARB(index, v);
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttrib4dvNV(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glVertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glVertexAttrib4fARB(index, x, y, z, w);
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glVertexAttrib4fNV(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib4fv(index, v);
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib4fvARB(index, v);
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
	return functions::glVertexAttrib4fvNV(index, v);
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	return functions::glVertexAttrib4hNV(index, x, y, z, w);
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::glVertexAttrib4hvNV(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
	return functions::glVertexAttrib4iv(index, v);
}

void glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
	return functions::glVertexAttrib4ivARB(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glVertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glVertexAttrib4sARB(index, x, y, z, w);
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glVertexAttrib4sNV(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib4sv(index, v);
}

void glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib4svARB(index, v);
}

void glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
	return functions::glVertexAttrib4svNV(index, v);
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::glVertexAttrib4ubNV(index, x, y, z, w);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttrib4ubv(index, v);
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttrib4ubvARB(index, v);
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttrib4ubvNV(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttrib4uiv(index, v);
}

void glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
	return functions::glVertexAttrib4uivARB(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
	return functions::glVertexAttrib4usv(index, v);
}

void glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
	return functions::glVertexAttrib4usvARB(index, v);
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
	return functions::glVertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
	return functions::glVertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
	return functions::glVertexAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
	return functions::glVertexAttribDivisorARB(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
	return functions::glVertexAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
	return functions::glVertexAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
	return functions::glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
	return functions::glVertexAttribFormatNV(index, size, type, normalized, stride);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
	return functions::glVertexAttribI1i(index, x);
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
	return functions::glVertexAttribI1iEXT(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI1iv(index, v);
}

void glVertexAttribI1ivEXT(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI1ivEXT(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
	return functions::glVertexAttribI1ui(index, x);
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
	return functions::glVertexAttribI1uiEXT(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI1uiv(index, v);
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI1uivEXT(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
	return functions::glVertexAttribI2i(index, x, y);
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
	return functions::glVertexAttribI2iEXT(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI2iv(index, v);
}

void glVertexAttribI2ivEXT(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI2ivEXT(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
	return functions::glVertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
	return functions::glVertexAttribI2uiEXT(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI2uiv(index, v);
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI2uivEXT(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
	return functions::glVertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
	return functions::glVertexAttribI3iEXT(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI3iv(index, v);
}

void glVertexAttribI3ivEXT(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI3ivEXT(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
	return functions::glVertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
	return functions::glVertexAttribI3uiEXT(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI3uiv(index, v);
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI3uivEXT(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttribI4bv(index, v);
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
	return functions::glVertexAttribI4bvEXT(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glVertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glVertexAttribI4iEXT(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI4iv(index, v);
}

void glVertexAttribI4ivEXT(GLuint index, const GLint * v)
{
	return functions::glVertexAttribI4ivEXT(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
	return functions::glVertexAttribI4sv(index, v);
}

void glVertexAttribI4svEXT(GLuint index, const GLshort * v)
{
	return functions::glVertexAttribI4svEXT(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttribI4ubv(index, v);
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
	return functions::glVertexAttribI4ubvEXT(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::glVertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::glVertexAttribI4uiEXT(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI4uiv(index, v);
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
	return functions::glVertexAttribI4uivEXT(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
	return functions::glVertexAttribI4usv(index, v);
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
	return functions::glVertexAttribI4usvEXT(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	return functions::glVertexAttribIFormatNV(index, size, type, stride);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
	return functions::glVertexAttribL1d(index, x);
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
	return functions::glVertexAttribL1dEXT(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL1dv(index, v);
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL1dvEXT(index, v);
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
	return functions::glVertexAttribL1i64NV(index, x);
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::glVertexAttribL1i64vNV(index, v);
}

void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
	return functions::glVertexAttribL1ui64ARB(index, x);
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
	return functions::glVertexAttribL1ui64NV(index, x);
}

void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
	return functions::glVertexAttribL1ui64vARB(index, v);
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::glVertexAttribL1ui64vNV(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
	return functions::glVertexAttribL2d(index, x, y);
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
	return functions::glVertexAttribL2dEXT(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL2dv(index, v);
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL2dvEXT(index, v);
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
	return functions::glVertexAttribL2i64NV(index, x, y);
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::glVertexAttribL2i64vNV(index, v);
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
	return functions::glVertexAttribL2ui64NV(index, x, y);
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::glVertexAttribL2ui64vNV(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexAttribL3dEXT(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL3dv(index, v);
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL3dvEXT(index, v);
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::glVertexAttribL3i64NV(index, x, y, z);
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::glVertexAttribL3i64vNV(index, v);
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::glVertexAttribL3ui64NV(index, x, y, z);
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::glVertexAttribL3ui64vNV(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexAttribL4dEXT(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL4dv(index, v);
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
	return functions::glVertexAttribL4dvEXT(index, v);
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::glVertexAttribL4i64NV(index, x, y, z, w);
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::glVertexAttribL4i64vNV(index, v);
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::glVertexAttribL4ui64NV(index, x, y, z, w);
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::glVertexAttribL4ui64vNV(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::glVertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	return functions::glVertexAttribLFormatNV(index, size, type, stride);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::glVertexAttribP1ui(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::glVertexAttribP1uiv(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::glVertexAttribP2ui(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::glVertexAttribP2uiv(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::glVertexAttribP3ui(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::glVertexAttribP3uiv(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::glVertexAttribP4ui(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::glVertexAttribP4uiv(index, type, normalized, value);
}

void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
	return functions::glVertexAttribParameteriAMD(index, pname, param);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::glVertexAttribs1dvNV(index, count, v);
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::glVertexAttribs1fvNV(index, count, v);
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::glVertexAttribs1hvNV(index, n, v);
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::glVertexAttribs1svNV(index, count, v);
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::glVertexAttribs2dvNV(index, count, v);
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::glVertexAttribs2fvNV(index, count, v);
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::glVertexAttribs2hvNV(index, n, v);
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::glVertexAttribs2svNV(index, count, v);
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::glVertexAttribs3dvNV(index, count, v);
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::glVertexAttribs3fvNV(index, count, v);
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::glVertexAttribs3hvNV(index, n, v);
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::glVertexAttribs3svNV(index, count, v);
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::glVertexAttribs4dvNV(index, count, v);
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::glVertexAttribs4fvNV(index, count, v);
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::glVertexAttribs4hvNV(index, n, v);
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::glVertexAttribs4svNV(index, count, v);
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
	return functions::glVertexAttribs4ubvNV(index, count, v);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
	return functions::glVertexBindingDivisor(bindingindex, divisor);
}

void glVertexBlendARB(GLint count)
{
	return functions::glVertexBlendARB(count);
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
	return functions::glVertexBlendEnvfATI(pname, param);
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
	return functions::glVertexBlendEnviATI(pname, param);
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::glVertexFormatNV(size, type, stride);
}

void glVertexP2ui(GLenum type, GLuint value)
{
	return functions::glVertexP2ui(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value)
{
	return functions::glVertexP2uiv(type, value);
}

void glVertexP3ui(GLenum type, GLuint value)
{
	return functions::glVertexP3ui(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value)
{
	return functions::glVertexP3uiv(type, value);
}

void glVertexP4ui(GLenum type, GLuint value)
{
	return functions::glVertexP4ui(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value)
{
	return functions::glVertexP4uiv(type, value);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexPointer(size, type, stride, pointer);
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::glVertexPointerEXT(size, type, stride, count, pointer);
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void glVertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::glVertexPointervINTEL(size, type, pointer);
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
	return functions::glVertexStream1dATI(stream, x);
}

void glVertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::glVertexStream1dvATI(stream, coords);
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
	return functions::glVertexStream1fATI(stream, x);
}

void glVertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::glVertexStream1fvATI(stream, coords);
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
	return functions::glVertexStream1iATI(stream, x);
}

void glVertexStream1ivATI(GLenum stream, const GLint * coords)
{
	return functions::glVertexStream1ivATI(stream, coords);
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
	return functions::glVertexStream1sATI(stream, x);
}

void glVertexStream1svATI(GLenum stream, const GLshort * coords)
{
	return functions::glVertexStream1svATI(stream, coords);
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
	return functions::glVertexStream2dATI(stream, x, y);
}

void glVertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::glVertexStream2dvATI(stream, coords);
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
	return functions::glVertexStream2fATI(stream, x, y);
}

void glVertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::glVertexStream2fvATI(stream, coords);
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
	return functions::glVertexStream2iATI(stream, x, y);
}

void glVertexStream2ivATI(GLenum stream, const GLint * coords)
{
	return functions::glVertexStream2ivATI(stream, coords);
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
	return functions::glVertexStream2sATI(stream, x, y);
}

void glVertexStream2svATI(GLenum stream, const GLshort * coords)
{
	return functions::glVertexStream2svATI(stream, coords);
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glVertexStream3dATI(stream, x, y, z);
}

void glVertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::glVertexStream3dvATI(stream, coords);
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glVertexStream3fATI(stream, x, y, z);
}

void glVertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::glVertexStream3fvATI(stream, coords);
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
	return functions::glVertexStream3iATI(stream, x, y, z);
}

void glVertexStream3ivATI(GLenum stream, const GLint * coords)
{
	return functions::glVertexStream3ivATI(stream, coords);
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
	return functions::glVertexStream3sATI(stream, x, y, z);
}

void glVertexStream3svATI(GLenum stream, const GLshort * coords)
{
	return functions::glVertexStream3svATI(stream, coords);
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glVertexStream4dATI(stream, x, y, z, w);
}

void glVertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::glVertexStream4dvATI(stream, coords);
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glVertexStream4fATI(stream, x, y, z, w);
}

void glVertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::glVertexStream4fvATI(stream, coords);
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
	return functions::glVertexStream4iATI(stream, x, y, z, w);
}

void glVertexStream4ivATI(GLenum stream, const GLint * coords)
{
	return functions::glVertexStream4ivATI(stream, coords);
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glVertexStream4sATI(stream, x, y, z, w);
}

void glVertexStream4svATI(GLenum stream, const GLshort * coords)
{
	return functions::glVertexStream4svATI(stream, coords);
}

void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glVertexWeightPointerEXT(size, type, stride, pointer);
}

void glVertexWeightfEXT(GLfloat weight)
{
	return functions::glVertexWeightfEXT(weight);
}

void glVertexWeightfvEXT(const GLfloat * weight)
{
	return functions::glVertexWeightfvEXT(weight);
}

void glVertexWeighthNV(GLhalfNV weight)
{
	return functions::glVertexWeighthNV(weight);
}

void glVertexWeighthvNV(const GLhalfNV * weight)
{
	return functions::glVertexWeighthvNV(weight);
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
	return functions::glVideoCaptureNV(video_capture_slot, sequence_num, capture_time);
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
	return functions::glVideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
	return functions::glVideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
	return functions::glVideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::glViewport(x, y, width, height);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
	return functions::glViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
	return functions::glViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
	return functions::glViewportIndexedfv(index, v);
}

void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::glWaitSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::glWaitSyncAPPLE(sync, flags, timeout);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
	return functions::glWeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glWeightPointerARB(size, type, stride, pointer);
}

void glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::glWeightPointerOES(size, type, stride, pointer);
}

void glWeightbvARB(GLint size, const GLbyte * weights)
{
	return functions::glWeightbvARB(size, weights);
}

void glWeightdvARB(GLint size, const GLdouble * weights)
{
	return functions::glWeightdvARB(size, weights);
}

void glWeightfvARB(GLint size, const GLfloat * weights)
{
	return functions::glWeightfvARB(size, weights);
}

void glWeightivARB(GLint size, const GLint * weights)
{
	return functions::glWeightivARB(size, weights);
}

void glWeightsvARB(GLint size, const GLshort * weights)
{
	return functions::glWeightsvARB(size, weights);
}

void glWeightubvARB(GLint size, const GLubyte * weights)
{
	return functions::glWeightubvARB(size, weights);
}

void glWeightuivARB(GLint size, const GLuint * weights)
{
	return functions::glWeightuivARB(size, weights);
}

void glWeightusvARB(GLint size, const GLushort * weights)
{
	return functions::glWeightusvARB(size, weights);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
	return functions::glWindowPos2d(x, y);
}

void glWindowPos2dARB(GLdouble x, GLdouble y)
{
	return functions::glWindowPos2dARB(x, y);
}

void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
	return functions::glWindowPos2dMESA(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
	return functions::glWindowPos2dv(v);
}

void glWindowPos2dvARB(const GLdouble * v)
{
	return functions::glWindowPos2dvARB(v);
}

void glWindowPos2dvMESA(const GLdouble * v)
{
	return functions::glWindowPos2dvMESA(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
	return functions::glWindowPos2f(x, y);
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
	return functions::glWindowPos2fARB(x, y);
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
	return functions::glWindowPos2fMESA(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
	return functions::glWindowPos2fv(v);
}

void glWindowPos2fvARB(const GLfloat * v)
{
	return functions::glWindowPos2fvARB(v);
}

void glWindowPos2fvMESA(const GLfloat * v)
{
	return functions::glWindowPos2fvMESA(v);
}

void glWindowPos2i(GLint x, GLint y)
{
	return functions::glWindowPos2i(x, y);
}

void glWindowPos2iARB(GLint x, GLint y)
{
	return functions::glWindowPos2iARB(x, y);
}

void glWindowPos2iMESA(GLint x, GLint y)
{
	return functions::glWindowPos2iMESA(x, y);
}

void glWindowPos2iv(const GLint * v)
{
	return functions::glWindowPos2iv(v);
}

void glWindowPos2ivARB(const GLint * v)
{
	return functions::glWindowPos2ivARB(v);
}

void glWindowPos2ivMESA(const GLint * v)
{
	return functions::glWindowPos2ivMESA(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
	return functions::glWindowPos2s(x, y);
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
	return functions::glWindowPos2sARB(x, y);
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
	return functions::glWindowPos2sMESA(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
	return functions::glWindowPos2sv(v);
}

void glWindowPos2svARB(const GLshort * v)
{
	return functions::glWindowPos2svARB(v);
}

void glWindowPos2svMESA(const GLshort * v)
{
	return functions::glWindowPos2svMESA(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glWindowPos3d(x, y, z);
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glWindowPos3dARB(x, y, z);
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::glWindowPos3dMESA(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
	return functions::glWindowPos3dv(v);
}

void glWindowPos3dvARB(const GLdouble * v)
{
	return functions::glWindowPos3dvARB(v);
}

void glWindowPos3dvMESA(const GLdouble * v)
{
	return functions::glWindowPos3dvMESA(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glWindowPos3f(x, y, z);
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glWindowPos3fARB(x, y, z);
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::glWindowPos3fMESA(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
	return functions::glWindowPos3fv(v);
}

void glWindowPos3fvARB(const GLfloat * v)
{
	return functions::glWindowPos3fvARB(v);
}

void glWindowPos3fvMESA(const GLfloat * v)
{
	return functions::glWindowPos3fvMESA(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
	return functions::glWindowPos3i(x, y, z);
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
	return functions::glWindowPos3iARB(x, y, z);
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
	return functions::glWindowPos3iMESA(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
	return functions::glWindowPos3iv(v);
}

void glWindowPos3ivARB(const GLint * v)
{
	return functions::glWindowPos3ivARB(v);
}

void glWindowPos3ivMESA(const GLint * v)
{
	return functions::glWindowPos3ivMESA(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
	return functions::glWindowPos3s(x, y, z);
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
	return functions::glWindowPos3sARB(x, y, z);
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
	return functions::glWindowPos3sMESA(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
	return functions::glWindowPos3sv(v);
}

void glWindowPos3svARB(const GLshort * v)
{
	return functions::glWindowPos3svARB(v);
}

void glWindowPos3svMESA(const GLshort * v)
{
	return functions::glWindowPos3svMESA(v);
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::glWindowPos4dMESA(x, y, z, w);
}

void glWindowPos4dvMESA(const GLdouble * v)
{
	return functions::glWindowPos4dvMESA(v);
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::glWindowPos4fMESA(x, y, z, w);
}

void glWindowPos4fvMESA(const GLfloat * v)
{
	return functions::glWindowPos4fvMESA(v);
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
	return functions::glWindowPos4iMESA(x, y, z, w);
}

void glWindowPos4ivMESA(const GLint * v)
{
	return functions::glWindowPos4ivMESA(v);
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::glWindowPos4sMESA(x, y, z, w);
}

void glWindowPos4svMESA(const GLshort * v)
{
	return functions::glWindowPos4svMESA(v);
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	return functions::glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl
