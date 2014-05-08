#include <glbinding/glbinding.h>
#include <glbinding/FunctionObjects.h>

namespace gl {

void Accum(GLenum op, GLfloat value)
{
	return functions::Accum(op, value);
}

void AccumxOES(GLenum op, GLfixed value)
{
	return functions::AccumxOES(op, value);
}

void ActiveProgramEXT(GLuint program)
{
	return functions::ActiveProgramEXT(program);
}

void ActiveShaderProgram(GLuint pipeline, GLuint program)
{
	return functions::ActiveShaderProgram(pipeline, program);
}

void ActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
	return functions::ActiveShaderProgramEXT(pipeline, program);
}

void ActiveStencilFaceEXT(GLenum face)
{
	return functions::ActiveStencilFaceEXT(face);
}

void ActiveTexture(GLenum texture)
{
	return functions::ActiveTexture(texture);
}

void ActiveTextureARB(GLenum texture)
{
	return functions::ActiveTextureARB(texture);
}

void ActiveVaryingNV(GLuint program, const GLchar * name)
{
	return functions::ActiveVaryingNV(program, name);
}

void AlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	return functions::AlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

void AlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	return functions::AlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void AlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	return functions::AlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void AlphaFunc(GLenum func, GLfloat ref)
{
	return functions::AlphaFunc(func, ref);
}

void AlphaFuncQCOM(GLenum func, GLclampf ref)
{
	return functions::AlphaFuncQCOM(func, ref);
}

void AlphaFuncx(GLenum func, GLfixed ref)
{
	return functions::AlphaFuncx(func, ref);
}

void AlphaFuncxOES(GLenum func, GLfixed ref)
{
	return functions::AlphaFuncxOES(func, ref);
}

void ApplyTextureEXT(GLenum mode)
{
	return functions::ApplyTextureEXT(mode);
}

GLboolean AreProgramsResidentNV(GLsizei n, const GLuint * programs, GLboolean * residences)
{
	return functions::AreProgramsResidentNV(n, programs, residences);
}

GLboolean AreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
	return functions::AreTexturesResident(n, textures, residences);
}

GLboolean AreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
	return functions::AreTexturesResidentEXT(n, textures, residences);
}

void ArrayElement(GLint i)
{
	return functions::ArrayElement(i);
}

void ArrayElementEXT(GLint i)
{
	return functions::ArrayElementEXT(i);
}

void ArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::ArrayObjectATI(array, size, type, stride, buffer, offset);
}

void AsyncMarkerSGIX(GLuint marker)
{
	return functions::AsyncMarkerSGIX(marker);
}

void AttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
	return functions::AttachObjectARB(containerObj, obj);
}

void AttachShader(GLuint program, GLuint shader)
{
	return functions::AttachShader(program, shader);
}

void Begin(GLenum mode)
{
	return functions::Begin(mode);
}

void BeginConditionalRender(GLuint id, GLenum mode)
{
	return functions::BeginConditionalRender(id, mode);
}

void BeginConditionalRenderNV(GLuint id, GLenum mode)
{
	return functions::BeginConditionalRenderNV(id, mode);
}

void BeginConditionalRenderNVX(GLuint id)
{
	return functions::BeginConditionalRenderNVX(id);
}

void BeginFragmentShaderATI()
{
	return functions::BeginFragmentShaderATI();
}

void BeginOcclusionQueryNV(GLuint id)
{
	return functions::BeginOcclusionQueryNV(id);
}

void BeginPerfMonitorAMD(GLuint monitor)
{
	return functions::BeginPerfMonitorAMD(monitor);
}

void BeginPerfQueryINTEL(GLuint queryHandle)
{
	return functions::BeginPerfQueryINTEL(queryHandle);
}

void BeginQuery(GLenum target, GLuint id)
{
	return functions::BeginQuery(target, id);
}

void BeginQueryARB(GLenum target, GLuint id)
{
	return functions::BeginQueryARB(target, id);
}

void BeginQueryEXT(GLenum target, GLuint id)
{
	return functions::BeginQueryEXT(target, id);
}

void BeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
	return functions::BeginQueryIndexed(target, index, id);
}

void BeginTransformFeedback(GLenum primitiveMode)
{
	return functions::BeginTransformFeedback(primitiveMode);
}

void BeginTransformFeedbackEXT(GLenum primitiveMode)
{
	return functions::BeginTransformFeedbackEXT(primitiveMode);
}

void BeginTransformFeedbackNV(GLenum primitiveMode)
{
	return functions::BeginTransformFeedbackNV(primitiveMode);
}

void BeginVertexShaderEXT()
{
	return functions::BeginVertexShaderEXT();
}

void BeginVideoCaptureNV(GLuint video_capture_slot)
{
	return functions::BeginVideoCaptureNV(video_capture_slot);
}

void BindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
	return functions::BindAttribLocation(program, index, name);
}

void BindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
	return functions::BindAttribLocationARB(programObj, index, name);
}

void BindBuffer(GLenum target, GLuint buffer)
{
	return functions::BindBuffer(target, buffer);
}

void BindBufferARB(GLenum target, GLuint buffer)
{
	return functions::BindBufferARB(target, buffer);
}

void BindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
	return functions::BindBufferBase(target, index, buffer);
}

void BindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
	return functions::BindBufferBaseEXT(target, index, buffer);
}

void BindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
	return functions::BindBufferBaseNV(target, index, buffer);
}

void BindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	return functions::BindBufferOffsetEXT(target, index, buffer, offset);
}

void BindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	return functions::BindBufferOffsetNV(target, index, buffer, offset);
}

void BindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::BindBufferRange(target, index, buffer, offset, size);
}

void BindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::BindBufferRangeEXT(target, index, buffer, offset, size);
}

void BindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::BindBufferRangeNV(target, index, buffer, offset, size);
}

void BindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
	return functions::BindBuffersBase(target, first, count, buffers);
}

void BindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
	return functions::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void BindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
	return functions::BindFragDataLocation(program, color, name);
}

void BindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
	return functions::BindFragDataLocationEXT(program, color, name);
}

void BindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
	return functions::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

void BindFragmentShaderATI(GLuint id)
{
	return functions::BindFragmentShaderATI(id);
}

void BindFramebuffer(GLenum target, GLuint framebuffer)
{
	return functions::BindFramebuffer(target, framebuffer);
}

void BindFramebufferEXT(GLenum target, GLuint framebuffer)
{
	return functions::BindFramebufferEXT(target, framebuffer);
}

void BindFramebufferOES(GLenum target, GLuint framebuffer)
{
	return functions::BindFramebufferOES(target, framebuffer);
}

void BindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
	return functions::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void BindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
	return functions::BindImageTextureEXT(index, texture, level, layered, layer, access, format);
}

void BindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
	return functions::BindImageTextures(first, count, textures);
}

GLuint BindLightParameterEXT(GLenum light, GLenum value)
{
	return functions::BindLightParameterEXT(light, value);
}

GLuint BindMaterialParameterEXT(GLenum face, GLenum value)
{
	return functions::BindMaterialParameterEXT(face, value);
}

void BindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
	return functions::BindMultiTextureEXT(texunit, target, texture);
}

GLuint BindParameterEXT(GLenum value)
{
	return functions::BindParameterEXT(value);
}

void BindProgramARB(GLenum target, GLuint program)
{
	return functions::BindProgramARB(target, program);
}

void BindProgramNV(GLenum target, GLuint id)
{
	return functions::BindProgramNV(target, id);
}

void BindProgramPipeline(GLuint pipeline)
{
	return functions::BindProgramPipeline(pipeline);
}

void BindProgramPipelineEXT(GLuint pipeline)
{
	return functions::BindProgramPipelineEXT(pipeline);
}

void BindRenderbuffer(GLenum target, GLuint renderbuffer)
{
	return functions::BindRenderbuffer(target, renderbuffer);
}

void BindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
	return functions::BindRenderbufferEXT(target, renderbuffer);
}

void BindRenderbufferOES(GLenum target, GLuint renderbuffer)
{
	return functions::BindRenderbufferOES(target, renderbuffer);
}

void BindSampler(GLuint unit, GLuint sampler)
{
	return functions::BindSampler(unit, sampler);
}

void BindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
	return functions::BindSamplers(first, count, samplers);
}

GLuint BindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
	return functions::BindTexGenParameterEXT(unit, coord, value);
}

void BindTexture(GLenum target, GLuint texture)
{
	return functions::BindTexture(target, texture);
}

void BindTextureEXT(GLenum target, GLuint texture)
{
	return functions::BindTextureEXT(target, texture);
}

GLuint BindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
	return functions::BindTextureUnitParameterEXT(unit, value);
}

void BindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
	return functions::BindTextures(first, count, textures);
}

void BindTransformFeedback(GLenum target, GLuint id)
{
	return functions::BindTransformFeedback(target, id);
}

void BindTransformFeedbackNV(GLenum target, GLuint id)
{
	return functions::BindTransformFeedbackNV(target, id);
}

void BindVertexArray(GLuint array)
{
	return functions::BindVertexArray(array);
}

void BindVertexArrayAPPLE(GLuint array)
{
	return functions::BindVertexArrayAPPLE(array);
}

void BindVertexArrayOES(GLuint array)
{
	return functions::BindVertexArrayOES(array);
}

void BindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
	return functions::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void BindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
	return functions::BindVertexBuffers(first, count, buffers, offsets, strides);
}

void BindVertexShaderEXT(GLuint id)
{
	return functions::BindVertexShaderEXT(id);
}

void BindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
	return functions::BindVideoCaptureStreamBufferNV(video_capture_slot, stream, frame_region, offset);
}

void BindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
	return functions::BindVideoCaptureStreamTextureNV(video_capture_slot, stream, frame_region, target, texture);
}

void Binormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
	return functions::Binormal3bEXT(bx, by, bz);
}

void Binormal3bvEXT(const GLbyte * v)
{
	return functions::Binormal3bvEXT(v);
}

void Binormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
	return functions::Binormal3dEXT(bx, by, bz);
}

void Binormal3dvEXT(const GLdouble * v)
{
	return functions::Binormal3dvEXT(v);
}

void Binormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
	return functions::Binormal3fEXT(bx, by, bz);
}

void Binormal3fvEXT(const GLfloat * v)
{
	return functions::Binormal3fvEXT(v);
}

void Binormal3iEXT(GLint bx, GLint by, GLint bz)
{
	return functions::Binormal3iEXT(bx, by, bz);
}

void Binormal3ivEXT(const GLint * v)
{
	return functions::Binormal3ivEXT(v);
}

void Binormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
	return functions::Binormal3sEXT(bx, by, bz);
}

void Binormal3svEXT(const GLshort * v)
{
	return functions::Binormal3svEXT(v);
}

void BinormalPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::BinormalPointerEXT(type, stride, pointer);
}

void Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
	return functions::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void BitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap)
{
	return functions::BitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void BlendBarrierNV()
{
	return functions::BlendBarrierNV();
}

void BlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::BlendColor(red, green, blue, alpha);
}

void BlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::BlendColorEXT(red, green, blue, alpha);
}

void BlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::BlendColorxOES(red, green, blue, alpha);
}

void BlendEquation(GLenum mode)
{
	return functions::BlendEquation(mode);
}

void BlendEquationEXT(GLenum mode)
{
	return functions::BlendEquationEXT(mode);
}

void BlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
	return functions::BlendEquationIndexedAMD(buf, mode);
}

void BlendEquationOES(GLenum mode)
{
	return functions::BlendEquationOES(mode);
}

void BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparate(modeRGB, modeAlpha);
}

void BlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparateEXT(modeRGB, modeAlpha);
}

void BlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparateIndexedAMD(buf, modeRGB, modeAlpha);
}

void BlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparateOES(modeRGB, modeAlpha);
}

void BlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void BlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	return functions::BlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
}

void BlendEquationi(GLuint buf, GLenum mode)
{
	return functions::BlendEquationi(buf, mode);
}

void BlendEquationiARB(GLuint buf, GLenum mode)
{
	return functions::BlendEquationiARB(buf, mode);
}

void BlendFunc(GLenum sfactor, GLenum dfactor)
{
	return functions::BlendFunc(sfactor, dfactor);
}

void BlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
	return functions::BlendFuncIndexedAMD(buf, src, dst);
}

void BlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void BlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void BlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	return functions::BlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void BlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::BlendFuncSeparateIndexedAMD(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void BlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::BlendFuncSeparateOES(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void BlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void BlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	return functions::BlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void BlendFunci(GLuint buf, GLenum src, GLenum dst)
{
	return functions::BlendFunci(buf, src, dst);
}

void BlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
	return functions::BlendFunciARB(buf, src, dst);
}

void BlendParameteriNV(GLenum pname, GLint value)
{
	return functions::BlendParameteriNV(pname, value);
}

void BlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void BlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void BlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void BlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return functions::BlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void BufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
	return functions::BufferAddressRangeNV(pname, index, address, length);
}

void BufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
	return functions::BufferData(target, size, data, usage);
}

void BufferDataARB(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage)
{
	return functions::BufferDataARB(target, size, data, usage);
}

void BufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
	return functions::BufferParameteriAPPLE(target, pname, param);
}

void BufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
	return functions::BufferStorage(target, size, data, flags);
}

void BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
	return functions::BufferSubData(target, offset, size, data);
}

void BufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data)
{
	return functions::BufferSubDataARB(target, offset, size, data);
}

void CallList(GLuint list)
{
	return functions::CallList(list);
}

void CallLists(GLsizei n, GLenum type, const void * lists)
{
	return functions::CallLists(n, type, lists);
}

GLenum CheckFramebufferStatus(GLenum target)
{
	return functions::CheckFramebufferStatus(target);
}

GLenum CheckFramebufferStatusEXT(GLenum target)
{
	return functions::CheckFramebufferStatusEXT(target);
}

GLenum CheckFramebufferStatusOES(GLenum target)
{
	return functions::CheckFramebufferStatusOES(target);
}

GLenum CheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
	return functions::CheckNamedFramebufferStatusEXT(framebuffer, target);
}

void ClampColor(GLenum target, GLenum clamp)
{
	return functions::ClampColor(target, clamp);
}

void ClampColorARB(GLenum target, GLenum clamp)
{
	return functions::ClampColorARB(target, clamp);
}

void Clear(GLbitfield mask)
{
	return functions::Clear(mask);
}

void ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::ClearAccum(red, green, blue, alpha);
}

void ClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::ClearAccumxOES(red, green, blue, alpha);
}

void ClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
	return functions::ClearBufferData(target, internalformat, format, type, data);
}

void ClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
	return functions::ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void ClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
	return functions::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void ClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
	return functions::ClearBufferfv(buffer, drawbuffer, value);
}

void ClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
	return functions::ClearBufferiv(buffer, drawbuffer, value);
}

void ClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
	return functions::ClearBufferuiv(buffer, drawbuffer, value);
}

void ClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::ClearColor(red, green, blue, alpha);
}

void ClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
	return functions::ClearColorIiEXT(red, green, blue, alpha);
}

void ClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	return functions::ClearColorIuiEXT(red, green, blue, alpha);
}

void ClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::ClearColorx(red, green, blue, alpha);
}

void ClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::ClearColorxOES(red, green, blue, alpha);
}

void ClearDepth(GLdouble depth)
{
	return functions::ClearDepth(depth);
}

void ClearDepthdNV(GLdouble depth)
{
	return functions::ClearDepthdNV(depth);
}

void ClearDepthf(GLfloat d)
{
	return functions::ClearDepthf(d);
}

void ClearDepthfOES(GLclampf depth)
{
	return functions::ClearDepthfOES(depth);
}

void ClearDepthx(GLfixed depth)
{
	return functions::ClearDepthx(depth);
}

void ClearDepthxOES(GLfixed depth)
{
	return functions::ClearDepthxOES(depth);
}

void ClearIndex(GLfloat c)
{
	return functions::ClearIndex(c);
}

void ClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
	return functions::ClearNamedBufferDataEXT(buffer, internalformat, format, type, data);
}

void ClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
	return functions::ClearNamedBufferSubDataEXT(buffer, internalformat, offset, size, format, type, data);
}

void ClearStencil(GLint s)
{
	return functions::ClearStencil(s);
}

void ClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
	return functions::ClearTexImage(texture, level, format, type, data);
}

void ClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
	return functions::ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void ClientActiveTexture(GLenum texture)
{
	return functions::ClientActiveTexture(texture);
}

void ClientActiveTextureARB(GLenum texture)
{
	return functions::ClientActiveTextureARB(texture);
}

void ClientActiveVertexStreamATI(GLenum stream)
{
	return functions::ClientActiveVertexStreamATI(stream);
}

void ClientAttribDefaultEXT(GLbitfield mask)
{
	return functions::ClientAttribDefaultEXT(mask);
}

GLenum ClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::ClientWaitSync(sync, flags, timeout);
}

GLenum ClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::ClientWaitSyncAPPLE(sync, flags, timeout);
}

void ClipPlane(GLenum plane, const GLdouble * equation)
{
	return functions::ClipPlane(plane, equation);
}

void ClipPlanef(GLenum p, const GLfloat * eqn)
{
	return functions::ClipPlanef(p, eqn);
}

void ClipPlanefIMG(GLenum p, const GLfloat * eqn)
{
	return functions::ClipPlanefIMG(p, eqn);
}

void ClipPlanefOES(GLenum plane, const GLfloat * equation)
{
	return functions::ClipPlanefOES(plane, equation);
}

void ClipPlanex(GLenum plane, const GLfixed * equation)
{
	return functions::ClipPlanex(plane, equation);
}

void ClipPlanexIMG(GLenum p, const GLfixed * eqn)
{
	return functions::ClipPlanexIMG(p, eqn);
}

void ClipPlanexOES(GLenum plane, const GLfixed * equation)
{
	return functions::ClipPlanexOES(plane, equation);
}

void Color3b(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::Color3b(red, green, blue);
}

void Color3bv(const GLbyte * v)
{
	return functions::Color3bv(v);
}

void Color3d(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::Color3d(red, green, blue);
}

void Color3dv(const GLdouble * v)
{
	return functions::Color3dv(v);
}

void Color3f(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::Color3f(red, green, blue);
}

void Color3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Color3fVertex3fSUN(r, g, b, x, y, z);
}

void Color3fVertex3fvSUN(const GLfloat * c, const GLfloat * v)
{
	return functions::Color3fVertex3fvSUN(c, v);
}

void Color3fv(const GLfloat * v)
{
	return functions::Color3fv(v);
}

void Color3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	return functions::Color3hNV(red, green, blue);
}

void Color3hvNV(const GLhalfNV * v)
{
	return functions::Color3hvNV(v);
}

void Color3i(GLint red, GLint green, GLint blue)
{
	return functions::Color3i(red, green, blue);
}

void Color3iv(const GLint * v)
{
	return functions::Color3iv(v);
}

void Color3s(GLshort red, GLshort green, GLshort blue)
{
	return functions::Color3s(red, green, blue);
}

void Color3sv(const GLshort * v)
{
	return functions::Color3sv(v);
}

void Color3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::Color3ub(red, green, blue);
}

void Color3ubv(const GLubyte * v)
{
	return functions::Color3ubv(v);
}

void Color3ui(GLuint red, GLuint green, GLuint blue)
{
	return functions::Color3ui(red, green, blue);
}

void Color3uiv(const GLuint * v)
{
	return functions::Color3uiv(v);
}

void Color3us(GLushort red, GLushort green, GLushort blue)
{
	return functions::Color3us(red, green, blue);
}

void Color3usv(const GLushort * v)
{
	return functions::Color3usv(v);
}

void Color3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
	return functions::Color3xOES(red, green, blue);
}

void Color3xvOES(const GLfixed * components)
{
	return functions::Color3xvOES(components);
}

void Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	return functions::Color4b(red, green, blue, alpha);
}

void Color4bv(const GLbyte * v)
{
	return functions::Color4bv(v);
}

void Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	return functions::Color4d(red, green, blue, alpha);
}

void Color4dv(const GLdouble * v)
{
	return functions::Color4dv(v);
}

void Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	return functions::Color4f(red, green, blue, alpha);
}

void Color4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Color4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

void Color4fNormal3fVertex3fvSUN(const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::Color4fNormal3fVertex3fvSUN(c, n, v);
}

void Color4fv(const GLfloat * v)
{
	return functions::Color4fv(v);
}

void Color4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
	return functions::Color4hNV(red, green, blue, alpha);
}

void Color4hvNV(const GLhalfNV * v)
{
	return functions::Color4hvNV(v);
}

void Color4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	return functions::Color4i(red, green, blue, alpha);
}

void Color4iv(const GLint * v)
{
	return functions::Color4iv(v);
}

void Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	return functions::Color4s(red, green, blue, alpha);
}

void Color4sv(const GLshort * v)
{
	return functions::Color4sv(v);
}

void Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	return functions::Color4ub(red, green, blue, alpha);
}

void Color4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
	return functions::Color4ubVertex2fSUN(r, g, b, a, x, y);
}

void Color4ubVertex2fvSUN(const GLubyte * c, const GLfloat * v)
{
	return functions::Color4ubVertex2fvSUN(c, v);
}

void Color4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Color4ubVertex3fSUN(r, g, b, a, x, y, z);
}

void Color4ubVertex3fvSUN(const GLubyte * c, const GLfloat * v)
{
	return functions::Color4ubVertex3fvSUN(c, v);
}

void Color4ubv(const GLubyte * v)
{
	return functions::Color4ubv(v);
}

void Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	return functions::Color4ui(red, green, blue, alpha);
}

void Color4uiv(const GLuint * v)
{
	return functions::Color4uiv(v);
}

void Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	return functions::Color4us(red, green, blue, alpha);
}

void Color4usv(const GLushort * v)
{
	return functions::Color4usv(v);
}

void Color4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::Color4x(red, green, blue, alpha);
}

void Color4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	return functions::Color4xOES(red, green, blue, alpha);
}

void Color4xvOES(const GLfixed * components)
{
	return functions::Color4xvOES(components);
}

void ColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::ColorFormatNV(size, type, stride);
}

void ColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	return functions::ColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

void ColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	return functions::ColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

void ColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	return functions::ColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

void ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	return functions::ColorMask(red, green, blue, alpha);
}

void ColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	return functions::ColorMaskIndexedEXT(index, r, g, b, a);
}

void ColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	return functions::ColorMaski(index, r, g, b, a);
}

void ColorMaterial(GLenum face, GLenum mode)
{
	return functions::ColorMaterial(face, mode);
}

void ColorP3ui(GLenum type, GLuint color)
{
	return functions::ColorP3ui(type, color);
}

void ColorP3uiv(GLenum type, const GLuint * color)
{
	return functions::ColorP3uiv(type, color);
}

void ColorP4ui(GLenum type, GLuint color)
{
	return functions::ColorP4ui(type, color);
}

void ColorP4uiv(GLenum type, const GLuint * color)
{
	return functions::ColorP4uiv(type, color);
}

void ColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::ColorPointer(size, type, stride, pointer);
}

void ColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::ColorPointerEXT(size, type, stride, count, pointer);
}

void ColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::ColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void ColorPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::ColorPointervINTEL(size, type, pointer);
}

void ColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
	return functions::ColorSubTable(target, start, count, format, type, data);
}

void ColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data)
{
	return functions::ColorSubTableEXT(target, start, count, format, type, data);
}

void ColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::ColorTable(target, internalformat, width, format, type, table);
}

void ColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::ColorTableEXT(target, internalFormat, width, format, type, table);
}

void ColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::ColorTableParameterfv(target, pname, params);
}

void ColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::ColorTableParameterfvSGI(target, pname, params);
}

void ColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::ColorTableParameteriv(target, pname, params);
}

void ColorTableParameterivSGI(GLenum target, GLenum pname, const GLint * params)
{
	return functions::ColorTableParameterivSGI(target, pname, params);
}

void ColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table)
{
	return functions::ColorTableSGI(target, internalformat, width, format, type, table);
}

void CombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	return functions::CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void CombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
	return functions::CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void CombinerParameterfNV(GLenum pname, GLfloat param)
{
	return functions::CombinerParameterfNV(pname, param);
}

void CombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
	return functions::CombinerParameterfvNV(pname, params);
}

void CombinerParameteriNV(GLenum pname, GLint param)
{
	return functions::CombinerParameteriNV(pname, param);
}

void CombinerParameterivNV(GLenum pname, const GLint * params)
{
	return functions::CombinerParameterivNV(pname, params);
}

void CombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
	return functions::CombinerStageParameterfvNV(stage, pname, params);
}

void CompileShader(GLuint shader)
{
	return functions::CompileShader(shader);
}

void CompileShaderARB(GLhandleARB shaderObj)
{
	return functions::CompileShaderARB(shaderObj);
}

void CompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
	return functions::CompileShaderIncludeARB(shader, count, path, length);
}

void CompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexImage1DEXT(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void CompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void CompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void CompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void CompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void CompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void CompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void CompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

void CompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void CompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

void CompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void CompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void CompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void CompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void CompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void CompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void CompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void CompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void CompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void CompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
	return functions::CompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void CompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureImage1DEXT(texture, target, level, internalformat, width, border, imageSize, bits);
}

void CompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureImage2DEXT(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void CompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void CompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureSubImage1DEXT(texture, target, level, xoffset, width, format, imageSize, bits);
}

void CompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void CompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits)
{
	return functions::CompressedTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void ConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
	return functions::ConvolutionFilter1D(target, internalformat, width, format, type, image);
}

void ConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image)
{
	return functions::ConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

void ConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
	return functions::ConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

void ConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image)
{
	return functions::ConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

void ConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
	return functions::ConvolutionParameterf(target, pname, params);
}

void ConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
	return functions::ConvolutionParameterfEXT(target, pname, params);
}

void ConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::ConvolutionParameterfv(target, pname, params);
}

void ConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::ConvolutionParameterfvEXT(target, pname, params);
}

void ConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
	return functions::ConvolutionParameteri(target, pname, params);
}

void ConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
	return functions::ConvolutionParameteriEXT(target, pname, params);
}

void ConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::ConvolutionParameteriv(target, pname, params);
}

void ConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::ConvolutionParameterivEXT(target, pname, params);
}

void ConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::ConvolutionParameterxOES(target, pname, param);
}

void ConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::ConvolutionParameterxvOES(target, pname, params);
}

void CopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void CopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::CopyBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void CopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	return functions::CopyColorSubTable(target, start, x, y, width);
}

void CopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	return functions::CopyColorSubTableEXT(target, start, x, y, width);
}

void CopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::CopyColorTable(target, internalformat, x, y, width);
}

void CopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::CopyColorTableSGI(target, internalformat, x, y, width);
}

void CopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::CopyConvolutionFilter1D(target, internalformat, x, y, width);
}

void CopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	return functions::CopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

void CopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

void CopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

void CopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
	return functions::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void CopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::CopyImageSubDataNV(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

void CopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::CopyMultiTexImage1DEXT(texunit, target, level, internalformat, x, y, width, border);
}

void CopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::CopyMultiTexImage2DEXT(texunit, target, level, internalformat, x, y, width, height, border);
}

void CopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::CopyMultiTexSubImage1DEXT(texunit, target, level, xoffset, x, y, width);
}

void CopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyMultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void CopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyMultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void CopyPathNV(GLuint resultPath, GLuint srcPath)
{
	return functions::CopyPathNV(resultPath, srcPath);
}

void CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	return functions::CopyPixels(x, y, width, height, type);
}

void CopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void CopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::CopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

void CopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void CopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::CopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

void CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void CopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::CopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

void CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void CopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

void CopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void CopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void CopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void CopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	return functions::CopyTextureImage1DEXT(texture, target, level, internalformat, x, y, width, border);
}

void CopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	return functions::CopyTextureImage2DEXT(texture, target, level, internalformat, x, y, width, height, border);
}

void CopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
	return functions::CopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void CopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	return functions::CopyTextureSubImage1DEXT(texture, target, level, xoffset, x, y, width);
}

void CopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTextureSubImage2DEXT(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void CopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::CopyTextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void CoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
	return functions::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void CoverFillPathNV(GLuint path, GLenum coverMode)
{
	return functions::CoverFillPathNV(path, coverMode);
}

void CoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
	return functions::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void CoverStrokePathNV(GLuint path, GLenum coverMode)
{
	return functions::CoverStrokePathNV(path, coverMode);
}

void CoverageMaskNV(GLboolean mask)
{
	return functions::CoverageMaskNV(mask);
}

void CoverageOperationNV(GLenum operation)
{
	return functions::CoverageOperationNV(operation);
}

void CreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
	return functions::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint CreateProgram()
{
	return functions::CreateProgram();
}

GLhandleARB CreateProgramObjectARB()
{
	return functions::CreateProgramObjectARB();
}

GLuint CreateShader(GLenum type)
{
	return functions::CreateShader(type);
}

GLhandleARB CreateShaderObjectARB(GLenum shaderType)
{
	return functions::CreateShaderObjectARB(shaderType);
}

GLuint CreateShaderProgramEXT(GLenum type, const GLchar * string)
{
	return functions::CreateShaderProgramEXT(type, string);
}

GLuint CreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
	return functions::CreateShaderProgramv(type, count, strings);
}

GLuint CreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar ** strings)
{
	return functions::CreateShaderProgramvEXT(type, count, strings);
}

GLsync CreateSyncFromCLeventARB(struct _cl_context * context, struct _cl_event * event, GLbitfield flags)
{
	return functions::CreateSyncFromCLeventARB(context, event, flags);
}

void CullFace(GLenum mode)
{
	return functions::CullFace(mode);
}

void CullParameterdvEXT(GLenum pname, GLdouble * params)
{
	return functions::CullParameterdvEXT(pname, params);
}

void CullParameterfvEXT(GLenum pname, GLfloat * params)
{
	return functions::CullParameterfvEXT(pname, params);
}

void CurrentPaletteMatrixARB(GLint index)
{
	return functions::CurrentPaletteMatrixARB(index);
}

void CurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
	return functions::CurrentPaletteMatrixOES(matrixpaletteindex);
}

void DebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
	return functions::DebugMessageCallback(callback, userParam);
}

void DebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void * userParam)
{
	return functions::DebugMessageCallbackAMD(callback, userParam);
}

void DebugMessageCallbackARB(GLDEBUGPROCARB callback, const void * userParam)
{
	return functions::DebugMessageCallbackARB(callback, userParam);
}

void DebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
	return functions::DebugMessageCallbackKHR(callback, userParam);
}

void DebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void DebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::DebugMessageControlARB(source, type, severity, count, ids, enabled);
}

void DebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void DebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
	return functions::DebugMessageEnableAMD(category, severity, count, ids, enabled);
}

void DebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::DebugMessageInsert(source, type, id, severity, length, buf);
}

void DebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar * buf)
{
	return functions::DebugMessageInsertAMD(category, severity, id, length, buf);
}

void DebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::DebugMessageInsertARB(source, type, id, severity, length, buf);
}

void DebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
	return functions::DebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void DeformSGIX(GLbitfield mask)
{
	return functions::DeformSGIX(mask);
}

void DeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble * points)
{
	return functions::DeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void DeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat * points)
{
	return functions::DeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

void DeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
	return functions::DeleteAsyncMarkersSGIX(marker, range);
}

void DeleteBuffers(GLsizei n, const GLuint * buffers)
{
	return functions::DeleteBuffers(n, buffers);
}

void DeleteBuffersARB(GLsizei n, const GLuint * buffers)
{
	return functions::DeleteBuffersARB(n, buffers);
}

void DeleteFencesAPPLE(GLsizei n, const GLuint * fences)
{
	return functions::DeleteFencesAPPLE(n, fences);
}

void DeleteFencesNV(GLsizei n, const GLuint * fences)
{
	return functions::DeleteFencesNV(n, fences);
}

void DeleteFragmentShaderATI(GLuint id)
{
	return functions::DeleteFragmentShaderATI(id);
}

void DeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
	return functions::DeleteFramebuffers(n, framebuffers);
}

void DeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
	return functions::DeleteFramebuffersEXT(n, framebuffers);
}

void DeleteFramebuffersOES(GLsizei n, const GLuint * framebuffers)
{
	return functions::DeleteFramebuffersOES(n, framebuffers);
}

void DeleteLists(GLuint list, GLsizei range)
{
	return functions::DeleteLists(list, range);
}

void DeleteNamedStringARB(GLint namelen, const GLchar * name)
{
	return functions::DeleteNamedStringARB(namelen, name);
}

void DeleteNamesAMD(GLenum identifier, GLuint num, const GLuint * names)
{
	return functions::DeleteNamesAMD(identifier, num, names);
}

void DeleteObjectARB(GLhandleARB obj)
{
	return functions::DeleteObjectARB(obj);
}

void DeleteOcclusionQueriesNV(GLsizei n, const GLuint * ids)
{
	return functions::DeleteOcclusionQueriesNV(n, ids);
}

void DeletePathsNV(GLuint path, GLsizei range)
{
	return functions::DeletePathsNV(path, range);
}

void DeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
	return functions::DeletePerfMonitorsAMD(n, monitors);
}

void DeletePerfQueryINTEL(GLuint queryHandle)
{
	return functions::DeletePerfQueryINTEL(queryHandle);
}

void DeleteProgram(GLuint program)
{
	return functions::DeleteProgram(program);
}

void DeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
	return functions::DeleteProgramPipelines(n, pipelines);
}

void DeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
	return functions::DeleteProgramPipelinesEXT(n, pipelines);
}

void DeleteProgramsARB(GLsizei n, const GLuint * programs)
{
	return functions::DeleteProgramsARB(n, programs);
}

void DeleteProgramsNV(GLsizei n, const GLuint * programs)
{
	return functions::DeleteProgramsNV(n, programs);
}

void DeleteQueries(GLsizei n, const GLuint * ids)
{
	return functions::DeleteQueries(n, ids);
}

void DeleteQueriesARB(GLsizei n, const GLuint * ids)
{
	return functions::DeleteQueriesARB(n, ids);
}

void DeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
	return functions::DeleteQueriesEXT(n, ids);
}

void DeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
	return functions::DeleteRenderbuffers(n, renderbuffers);
}

void DeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
	return functions::DeleteRenderbuffersEXT(n, renderbuffers);
}

void DeleteRenderbuffersOES(GLsizei n, const GLuint * renderbuffers)
{
	return functions::DeleteRenderbuffersOES(n, renderbuffers);
}

void DeleteSamplers(GLsizei count, const GLuint * samplers)
{
	return functions::DeleteSamplers(count, samplers);
}

void DeleteShader(GLuint shader)
{
	return functions::DeleteShader(shader);
}

void DeleteSync(GLsync sync)
{
	return functions::DeleteSync(sync);
}

void DeleteSyncAPPLE(GLsync sync)
{
	return functions::DeleteSyncAPPLE(sync);
}

void DeleteTextures(GLsizei n, const GLuint * textures)
{
	return functions::DeleteTextures(n, textures);
}

void DeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
	return functions::DeleteTexturesEXT(n, textures);
}

void DeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
	return functions::DeleteTransformFeedbacks(n, ids);
}

void DeleteTransformFeedbacksNV(GLsizei n, const GLuint * ids)
{
	return functions::DeleteTransformFeedbacksNV(n, ids);
}

void DeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
	return functions::DeleteVertexArrays(n, arrays);
}

void DeleteVertexArraysAPPLE(GLsizei n, const GLuint * arrays)
{
	return functions::DeleteVertexArraysAPPLE(n, arrays);
}

void DeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
	return functions::DeleteVertexArraysOES(n, arrays);
}

void DeleteVertexShaderEXT(GLuint id)
{
	return functions::DeleteVertexShaderEXT(id);
}

void DepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
	return functions::DepthBoundsEXT(zmin, zmax);
}

void DepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
	return functions::DepthBoundsdNV(zmin, zmax);
}

void DepthFunc(GLenum func)
{
	return functions::DepthFunc(func);
}

void DepthMask(GLboolean flag)
{
	return functions::DepthMask(flag);
}

void DepthRange(GLdouble near, GLdouble far)
{
	return functions::DepthRange(near, far);
}

void DepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
	return functions::DepthRangeArrayv(first, count, v);
}

void DepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
	return functions::DepthRangeIndexed(index, n, f);
}

void DepthRangedNV(GLdouble zNear, GLdouble zFar)
{
	return functions::DepthRangedNV(zNear, zFar);
}

void DepthRangef(GLfloat n, GLfloat f)
{
	return functions::DepthRangef(n, f);
}

void DepthRangefOES(GLclampf n, GLclampf f)
{
	return functions::DepthRangefOES(n, f);
}

void DepthRangex(GLfixed n, GLfixed f)
{
	return functions::DepthRangex(n, f);
}

void DepthRangexOES(GLfixed n, GLfixed f)
{
	return functions::DepthRangexOES(n, f);
}

void DetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
	return functions::DetachObjectARB(containerObj, attachedObj);
}

void DetachShader(GLuint program, GLuint shader)
{
	return functions::DetachShader(program, shader);
}

void DetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
	return functions::DetailTexFuncSGIS(target, n, points);
}

void Disable(GLenum cap)
{
	return functions::Disable(cap);
}

void DisableClientState(GLenum array)
{
	return functions::DisableClientState(array);
}

void DisableClientStateIndexedEXT(GLenum array, GLuint index)
{
	return functions::DisableClientStateIndexedEXT(array, index);
}

void DisableClientStateiEXT(GLenum array, GLuint index)
{
	return functions::DisableClientStateiEXT(array, index);
}

void DisableDriverControlQCOM(GLuint driverControl)
{
	return functions::DisableDriverControlQCOM(driverControl);
}

void DisableIndexedEXT(GLenum target, GLuint index)
{
	return functions::DisableIndexedEXT(target, index);
}

void DisableVariantClientStateEXT(GLuint id)
{
	return functions::DisableVariantClientStateEXT(id);
}

void DisableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
	return functions::DisableVertexArrayAttribEXT(vaobj, index);
}

void DisableVertexArrayEXT(GLuint vaobj, GLenum array)
{
	return functions::DisableVertexArrayEXT(vaobj, array);
}

void DisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	return functions::DisableVertexAttribAPPLE(index, pname);
}

void DisableVertexAttribArray(GLuint index)
{
	return functions::DisableVertexAttribArray(index);
}

void DisableVertexAttribArrayARB(GLuint index)
{
	return functions::DisableVertexAttribArrayARB(index);
}

void Disablei(GLenum target, GLuint index)
{
	return functions::Disablei(target, index);
}

void DiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
	return functions::DiscardFramebufferEXT(target, numAttachments, attachments);
}

void DispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
	return functions::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void DispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
	return functions::DispatchComputeGroupSizeARB(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void DispatchComputeIndirect(GLintptr indirect)
{
	return functions::DispatchComputeIndirect(indirect);
}

void DrawArrays(GLenum mode, GLint first, GLsizei count)
{
	return functions::DrawArrays(mode, first, count);
}

void DrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
	return functions::DrawArraysEXT(mode, first, count);
}

void DrawArraysIndirect(GLenum mode, const void * indirect)
{
	return functions::DrawArraysIndirect(mode, indirect);
}

void DrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
	return functions::DrawArraysInstanced(mode, first, count, instancecount);
}

void DrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::DrawArraysInstancedANGLE(mode, first, count, primcount);
}

void DrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::DrawArraysInstancedARB(mode, first, count, primcount);
}

void DrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
	return functions::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void DrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
	return functions::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void DrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	return functions::DrawArraysInstancedNV(mode, first, count, primcount);
}

void DrawBuffer(GLenum mode)
{
	return functions::DrawBuffer(mode);
}

void DrawBuffers(GLsizei n, const GLenum * bufs)
{
	return functions::DrawBuffers(n, bufs);
}

void DrawBuffersARB(GLsizei n, const GLenum * bufs)
{
	return functions::DrawBuffersARB(n, bufs);
}

void DrawBuffersATI(GLsizei n, const GLenum * bufs)
{
	return functions::DrawBuffersATI(n, bufs);
}

void DrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
	return functions::DrawBuffersEXT(n, bufs);
}

void DrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
	return functions::DrawBuffersIndexedEXT(n, location, indices);
}

void DrawBuffersNV(GLsizei n, const GLenum * bufs)
{
	return functions::DrawBuffersNV(n, bufs);
}

void DrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
	return functions::DrawElementArrayAPPLE(mode, first, count);
}

void DrawElementArrayATI(GLenum mode, GLsizei count)
{
	return functions::DrawElementArrayATI(mode, count);
}

void DrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
	return functions::DrawElements(mode, count, type, indices);
}

void DrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
	return functions::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void DrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
	return functions::DrawElementsIndirect(mode, type, indirect);
}

void DrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
	return functions::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void DrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void DrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::DrawElementsInstancedARB(mode, count, type, indices, primcount);
}

void DrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
	return functions::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void DrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
	return functions::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void DrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
	return functions::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void DrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void DrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
	return functions::DrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void DrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
	return functions::DrawMeshArraysSUN(mode, first, count, width);
}

void DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::DrawPixels(width, height, format, type, pixels);
}

void DrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
	return functions::DrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

void DrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
	return functions::DrawRangeElementArrayATI(mode, start, end, count);
}

void DrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
	return functions::DrawRangeElements(mode, start, end, count, type, indices);
}

void DrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
	return functions::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void DrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
	return functions::DrawRangeElementsEXT(mode, start, end, count, type, indices);
}

void DrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
	return functions::DrawTexfOES(x, y, z, width, height);
}

void DrawTexfvOES(const GLfloat * coords)
{
	return functions::DrawTexfvOES(coords);
}

void DrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
{
	return functions::DrawTexiOES(x, y, z, width, height);
}

void DrawTexivOES(const GLint * coords)
{
	return functions::DrawTexivOES(coords);
}

void DrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
	return functions::DrawTexsOES(x, y, z, width, height);
}

void DrawTexsvOES(const GLshort * coords)
{
	return functions::DrawTexsvOES(coords);
}

void DrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
	return functions::DrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void DrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
	return functions::DrawTexxOES(x, y, z, width, height);
}

void DrawTexxvOES(const GLfixed * coords)
{
	return functions::DrawTexxvOES(coords);
}

void DrawTransformFeedback(GLenum mode, GLuint id)
{
	return functions::DrawTransformFeedback(mode, id);
}

void DrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
	return functions::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

void DrawTransformFeedbackNV(GLenum mode, GLuint id)
{
	return functions::DrawTransformFeedbackNV(mode, id);
}

void DrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
	return functions::DrawTransformFeedbackStream(mode, id, stream);
}

void DrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
	return functions::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void EGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
	return functions::EGLImageTargetRenderbufferStorageOES(target, image);
}

void EGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
	return functions::EGLImageTargetTexture2DOES(target, image);
}

void EdgeFlag(GLboolean flag)
{
	return functions::EdgeFlag(flag);
}

void EdgeFlagFormatNV(GLsizei stride)
{
	return functions::EdgeFlagFormatNV(stride);
}

void EdgeFlagPointer(GLsizei stride, const void * pointer)
{
	return functions::EdgeFlagPointer(stride, pointer);
}

void EdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer)
{
	return functions::EdgeFlagPointerEXT(stride, count, pointer);
}

void EdgeFlagPointerListIBM(GLint stride, const GLboolean ** pointer, GLint ptrstride)
{
	return functions::EdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

void EdgeFlagv(const GLboolean * flag)
{
	return functions::EdgeFlagv(flag);
}

void ElementPointerAPPLE(GLenum type, const void * pointer)
{
	return functions::ElementPointerAPPLE(type, pointer);
}

void ElementPointerATI(GLenum type, const void * pointer)
{
	return functions::ElementPointerATI(type, pointer);
}

void Enable(GLenum cap)
{
	return functions::Enable(cap);
}

void EnableClientState(GLenum array)
{
	return functions::EnableClientState(array);
}

void EnableClientStateIndexedEXT(GLenum array, GLuint index)
{
	return functions::EnableClientStateIndexedEXT(array, index);
}

void EnableClientStateiEXT(GLenum array, GLuint index)
{
	return functions::EnableClientStateiEXT(array, index);
}

void EnableDriverControlQCOM(GLuint driverControl)
{
	return functions::EnableDriverControlQCOM(driverControl);
}

void EnableIndexedEXT(GLenum target, GLuint index)
{
	return functions::EnableIndexedEXT(target, index);
}

void EnableVariantClientStateEXT(GLuint id)
{
	return functions::EnableVariantClientStateEXT(id);
}

void EnableVertexArrayAttribEXT(GLuint vaobj, GLuint index)
{
	return functions::EnableVertexArrayAttribEXT(vaobj, index);
}

void EnableVertexArrayEXT(GLuint vaobj, GLenum array)
{
	return functions::EnableVertexArrayEXT(vaobj, array);
}

void EnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	return functions::EnableVertexAttribAPPLE(index, pname);
}

void EnableVertexAttribArray(GLuint index)
{
	return functions::EnableVertexAttribArray(index);
}

void EnableVertexAttribArrayARB(GLuint index)
{
	return functions::EnableVertexAttribArrayARB(index);
}

void Enablei(GLenum target, GLuint index)
{
	return functions::Enablei(target, index);
}

void End()
{
	return functions::End();
}

void EndConditionalRender()
{
	return functions::EndConditionalRender();
}

void EndConditionalRenderNV()
{
	return functions::EndConditionalRenderNV();
}

void EndConditionalRenderNVX()
{
	return functions::EndConditionalRenderNVX();
}

void EndFragmentShaderATI()
{
	return functions::EndFragmentShaderATI();
}

void EndList()
{
	return functions::EndList();
}

void EndOcclusionQueryNV()
{
	return functions::EndOcclusionQueryNV();
}

void EndPerfMonitorAMD(GLuint monitor)
{
	return functions::EndPerfMonitorAMD(monitor);
}

void EndPerfQueryINTEL(GLuint queryHandle)
{
	return functions::EndPerfQueryINTEL(queryHandle);
}

void EndQuery(GLenum target)
{
	return functions::EndQuery(target);
}

void EndQueryARB(GLenum target)
{
	return functions::EndQueryARB(target);
}

void EndQueryEXT(GLenum target)
{
	return functions::EndQueryEXT(target);
}

void EndQueryIndexed(GLenum target, GLuint index)
{
	return functions::EndQueryIndexed(target, index);
}

void EndTilingQCOM(GLbitfield preserveMask)
{
	return functions::EndTilingQCOM(preserveMask);
}

void EndTransformFeedback()
{
	return functions::EndTransformFeedback();
}

void EndTransformFeedbackEXT()
{
	return functions::EndTransformFeedbackEXT();
}

void EndTransformFeedbackNV()
{
	return functions::EndTransformFeedbackNV();
}

void EndVertexShaderEXT()
{
	return functions::EndVertexShaderEXT();
}

void EndVideoCaptureNV(GLuint video_capture_slot)
{
	return functions::EndVideoCaptureNV(video_capture_slot);
}

void EvalCoord1d(GLdouble u)
{
	return functions::EvalCoord1d(u);
}

void EvalCoord1dv(const GLdouble * u)
{
	return functions::EvalCoord1dv(u);
}

void EvalCoord1f(GLfloat u)
{
	return functions::EvalCoord1f(u);
}

void EvalCoord1fv(const GLfloat * u)
{
	return functions::EvalCoord1fv(u);
}

void EvalCoord1xOES(GLfixed u)
{
	return functions::EvalCoord1xOES(u);
}

void EvalCoord1xvOES(const GLfixed * coords)
{
	return functions::EvalCoord1xvOES(coords);
}

void EvalCoord2d(GLdouble u, GLdouble v)
{
	return functions::EvalCoord2d(u, v);
}

void EvalCoord2dv(const GLdouble * u)
{
	return functions::EvalCoord2dv(u);
}

void EvalCoord2f(GLfloat u, GLfloat v)
{
	return functions::EvalCoord2f(u, v);
}

void EvalCoord2fv(const GLfloat * u)
{
	return functions::EvalCoord2fv(u);
}

void EvalCoord2xOES(GLfixed u, GLfixed v)
{
	return functions::EvalCoord2xOES(u, v);
}

void EvalCoord2xvOES(const GLfixed * coords)
{
	return functions::EvalCoord2xvOES(coords);
}

void EvalMapsNV(GLenum target, GLenum mode)
{
	return functions::EvalMapsNV(target, mode);
}

void EvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	return functions::EvalMesh1(mode, i1, i2);
}

void EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	return functions::EvalMesh2(mode, i1, i2, j1, j2);
}

void EvalPoint1(GLint i)
{
	return functions::EvalPoint1(i);
}

void EvalPoint2(GLint i, GLint j)
{
	return functions::EvalPoint2(i, j);
}

void ExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
	return functions::ExecuteProgramNV(target, id, params);
}

void ExtGetBufferPointervQCOM(GLenum target, void ** params)
{
	return functions::ExtGetBufferPointervQCOM(target, params);
}

void ExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
	return functions::ExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void ExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
	return functions::ExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void ExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
	return functions::ExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void ExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
	return functions::ExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void ExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
	return functions::ExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void ExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
	return functions::ExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void ExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
	return functions::ExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void ExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
	return functions::ExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void ExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
	return functions::ExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean ExtIsProgramBinaryQCOM(GLuint program)
{
	return functions::ExtIsProgramBinaryQCOM(program);
}

void ExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
	return functions::ExtTexObjectStateOverrideiQCOM(target, pname, param);
}

void ExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
	return functions::ExtractComponentEXT(res, src, num);
}

void FeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
	return functions::FeedbackBuffer(size, type, buffer);
}

void FeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed * buffer)
{
	return functions::FeedbackBufferxOES(n, type, buffer);
}

GLsync FenceSync(GLenum condition, GLbitfield flags)
{
	return functions::FenceSync(condition, flags);
}

GLsync FenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
	return functions::FenceSyncAPPLE(condition, flags);
}

void FinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	return functions::FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

void Finish()
{
	return functions::Finish();
}

GLint FinishAsyncSGIX(GLuint * markerp)
{
	return functions::FinishAsyncSGIX(markerp);
}

void FinishFenceAPPLE(GLuint fence)
{
	return functions::FinishFenceAPPLE(fence);
}

void FinishFenceNV(GLuint fence)
{
	return functions::FinishFenceNV(fence);
}

void FinishObjectAPPLE(GLenum object, GLint name)
{
	return functions::FinishObjectAPPLE(object, name);
}

void FinishTextureSUNX()
{
	return functions::FinishTextureSUNX();
}

void Flush()
{
	return functions::Flush();
}

void FlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
	return functions::FlushMappedBufferRange(target, offset, length);
}

void FlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
	return functions::FlushMappedBufferRangeAPPLE(target, offset, size);
}

void FlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
	return functions::FlushMappedBufferRangeEXT(target, offset, length);
}

void FlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
	return functions::FlushMappedNamedBufferRangeEXT(buffer, offset, length);
}

void FlushPixelDataRangeNV(GLenum target)
{
	return functions::FlushPixelDataRangeNV(target);
}

void FlushRasterSGIX()
{
	return functions::FlushRasterSGIX();
}

void FlushStaticDataIBM(GLenum target)
{
	return functions::FlushStaticDataIBM(target);
}

void FlushVertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
	return functions::FlushVertexArrayRangeAPPLE(length, pointer);
}

void FlushVertexArrayRangeNV()
{
	return functions::FlushVertexArrayRangeNV();
}

void FogCoordFormatNV(GLenum type, GLsizei stride)
{
	return functions::FogCoordFormatNV(type, stride);
}

void FogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::FogCoordPointer(type, stride, pointer);
}

void FogCoordPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::FogCoordPointerEXT(type, stride, pointer);
}

void FogCoordPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::FogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

void FogCoordd(GLdouble coord)
{
	return functions::FogCoordd(coord);
}

void FogCoorddEXT(GLdouble coord)
{
	return functions::FogCoorddEXT(coord);
}

void FogCoorddv(const GLdouble * coord)
{
	return functions::FogCoorddv(coord);
}

void FogCoorddvEXT(const GLdouble * coord)
{
	return functions::FogCoorddvEXT(coord);
}

void FogCoordf(GLfloat coord)
{
	return functions::FogCoordf(coord);
}

void FogCoordfEXT(GLfloat coord)
{
	return functions::FogCoordfEXT(coord);
}

void FogCoordfv(const GLfloat * coord)
{
	return functions::FogCoordfv(coord);
}

void FogCoordfvEXT(const GLfloat * coord)
{
	return functions::FogCoordfvEXT(coord);
}

void FogCoordhNV(GLhalfNV fog)
{
	return functions::FogCoordhNV(fog);
}

void FogCoordhvNV(const GLhalfNV * fog)
{
	return functions::FogCoordhvNV(fog);
}

void FogFuncSGIS(GLsizei n, const GLfloat * points)
{
	return functions::FogFuncSGIS(n, points);
}

void Fogf(GLenum pname, GLfloat param)
{
	return functions::Fogf(pname, param);
}

void Fogfv(GLenum pname, const GLfloat * params)
{
	return functions::Fogfv(pname, params);
}

void Fogi(GLenum pname, GLint param)
{
	return functions::Fogi(pname, param);
}

void Fogiv(GLenum pname, const GLint * params)
{
	return functions::Fogiv(pname, params);
}

void Fogx(GLenum pname, GLfixed param)
{
	return functions::Fogx(pname, param);
}

void FogxOES(GLenum pname, GLfixed param)
{
	return functions::FogxOES(pname, param);
}

void Fogxv(GLenum pname, const GLfixed * param)
{
	return functions::Fogxv(pname, param);
}

void FogxvOES(GLenum pname, const GLfixed * param)
{
	return functions::FogxvOES(pname, param);
}

void FragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
	return functions::FragmentColorMaterialSGIX(face, mode);
}

void FragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
	return functions::FragmentLightModelfSGIX(pname, param);
}

void FragmentLightModelfvSGIX(GLenum pname, const GLfloat * params)
{
	return functions::FragmentLightModelfvSGIX(pname, params);
}

void FragmentLightModeliSGIX(GLenum pname, GLint param)
{
	return functions::FragmentLightModeliSGIX(pname, param);
}

void FragmentLightModelivSGIX(GLenum pname, const GLint * params)
{
	return functions::FragmentLightModelivSGIX(pname, params);
}

void FragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
	return functions::FragmentLightfSGIX(light, pname, param);
}

void FragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat * params)
{
	return functions::FragmentLightfvSGIX(light, pname, params);
}

void FragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
	return functions::FragmentLightiSGIX(light, pname, param);
}

void FragmentLightivSGIX(GLenum light, GLenum pname, const GLint * params)
{
	return functions::FragmentLightivSGIX(light, pname, params);
}

void FragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
	return functions::FragmentMaterialfSGIX(face, pname, param);
}

void FragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat * params)
{
	return functions::FragmentMaterialfvSGIX(face, pname, params);
}

void FragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
	return functions::FragmentMaterialiSGIX(face, pname, param);
}

void FragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint * params)
{
	return functions::FragmentMaterialivSGIX(face, pname, params);
}

void FrameTerminatorGREMEDY()
{
	return functions::FrameTerminatorGREMEDY();
}

void FrameZoomSGIX(GLint factor)
{
	return functions::FrameZoomSGIX(factor);
}

void FramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
	return functions::FramebufferDrawBufferEXT(framebuffer, mode);
}

void FramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
	return functions::FramebufferDrawBuffersEXT(framebuffer, n, bufs);
}

void FramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
	return functions::FramebufferParameteri(target, pname, param);
}

void FramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
	return functions::FramebufferReadBufferEXT(framebuffer, mode);
}

void FramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void FramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void FramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::FramebufferRenderbufferOES(target, attachment, renderbuffertarget, renderbuffer);
}

void FramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::FramebufferTexture(target, attachment, texture, level);
}

void FramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

void FramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void FramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void FramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void FramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	return functions::FramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void FramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	return functions::FramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void FramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::FramebufferTexture2DOES(target, attachment, textarget, texture, level);
}

void FramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void FramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void FramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::FramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void FramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::FramebufferTextureARB(target, attachment, texture, level);
}

void FramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	return functions::FramebufferTextureEXT(target, attachment, texture, level);
}

void FramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::FramebufferTextureFaceARB(target, attachment, texture, level, face);
}

void FramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::FramebufferTextureFaceEXT(target, attachment, texture, level, face);
}

void FramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void FramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::FramebufferTextureLayerARB(target, attachment, texture, level, layer);
}

void FramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::FramebufferTextureLayerEXT(target, attachment, texture, level, layer);
}

void FreeObjectBufferATI(GLuint buffer)
{
	return functions::FreeObjectBufferATI(buffer);
}

void FrontFace(GLenum mode)
{
	return functions::FrontFace(mode);
}

void Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::Frustum(left, right, bottom, top, zNear, zFar);
}

void Frustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::Frustumf(l, r, b, t, n, f);
}

void FrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::FrustumfOES(l, r, b, t, n, f);
}

void Frustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::Frustumx(l, r, b, t, n, f);
}

void FrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::FrustumxOES(l, r, b, t, n, f);
}

GLuint GenAsyncMarkersSGIX(GLsizei range)
{
	return functions::GenAsyncMarkersSGIX(range);
}

void GenBuffers(GLsizei n, GLuint * buffers)
{
	return functions::GenBuffers(n, buffers);
}

void GenBuffersARB(GLsizei n, GLuint * buffers)
{
	return functions::GenBuffersARB(n, buffers);
}

void GenFencesAPPLE(GLsizei n, GLuint * fences)
{
	return functions::GenFencesAPPLE(n, fences);
}

void GenFencesNV(GLsizei n, GLuint * fences)
{
	return functions::GenFencesNV(n, fences);
}

GLuint GenFragmentShadersATI(GLuint range)
{
	return functions::GenFragmentShadersATI(range);
}

void GenFramebuffers(GLsizei n, GLuint * framebuffers)
{
	return functions::GenFramebuffers(n, framebuffers);
}

void GenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
	return functions::GenFramebuffersEXT(n, framebuffers);
}

void GenFramebuffersOES(GLsizei n, GLuint * framebuffers)
{
	return functions::GenFramebuffersOES(n, framebuffers);
}

GLuint GenLists(GLsizei range)
{
	return functions::GenLists(range);
}

void GenNamesAMD(GLenum identifier, GLuint num, GLuint * names)
{
	return functions::GenNamesAMD(identifier, num, names);
}

void GenOcclusionQueriesNV(GLsizei n, GLuint * ids)
{
	return functions::GenOcclusionQueriesNV(n, ids);
}

GLuint GenPathsNV(GLsizei range)
{
	return functions::GenPathsNV(range);
}

void GenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
	return functions::GenPerfMonitorsAMD(n, monitors);
}

void GenProgramPipelines(GLsizei n, GLuint * pipelines)
{
	return functions::GenProgramPipelines(n, pipelines);
}

void GenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
	return functions::GenProgramPipelinesEXT(n, pipelines);
}

void GenProgramsARB(GLsizei n, GLuint * programs)
{
	return functions::GenProgramsARB(n, programs);
}

void GenProgramsNV(GLsizei n, GLuint * programs)
{
	return functions::GenProgramsNV(n, programs);
}

void GenQueries(GLsizei n, GLuint * ids)
{
	return functions::GenQueries(n, ids);
}

void GenQueriesARB(GLsizei n, GLuint * ids)
{
	return functions::GenQueriesARB(n, ids);
}

void GenQueriesEXT(GLsizei n, GLuint * ids)
{
	return functions::GenQueriesEXT(n, ids);
}

void GenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
	return functions::GenRenderbuffers(n, renderbuffers);
}

void GenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
	return functions::GenRenderbuffersEXT(n, renderbuffers);
}

void GenRenderbuffersOES(GLsizei n, GLuint * renderbuffers)
{
	return functions::GenRenderbuffersOES(n, renderbuffers);
}

void GenSamplers(GLsizei count, GLuint * samplers)
{
	return functions::GenSamplers(count, samplers);
}

GLuint GenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
	return functions::GenSymbolsEXT(datatype, storagetype, range, components);
}

void GenTextures(GLsizei n, GLuint * textures)
{
	return functions::GenTextures(n, textures);
}

void GenTexturesEXT(GLsizei n, GLuint * textures)
{
	return functions::GenTexturesEXT(n, textures);
}

void GenTransformFeedbacks(GLsizei n, GLuint * ids)
{
	return functions::GenTransformFeedbacks(n, ids);
}

void GenTransformFeedbacksNV(GLsizei n, GLuint * ids)
{
	return functions::GenTransformFeedbacksNV(n, ids);
}

void GenVertexArrays(GLsizei n, GLuint * arrays)
{
	return functions::GenVertexArrays(n, arrays);
}

void GenVertexArraysAPPLE(GLsizei n, GLuint * arrays)
{
	return functions::GenVertexArraysAPPLE(n, arrays);
}

void GenVertexArraysOES(GLsizei n, GLuint * arrays)
{
	return functions::GenVertexArraysOES(n, arrays);
}

GLuint GenVertexShadersEXT(GLuint range)
{
	return functions::GenVertexShadersEXT(range);
}

void GenerateMipmap(GLenum target)
{
	return functions::GenerateMipmap(target);
}

void GenerateMipmapEXT(GLenum target)
{
	return functions::GenerateMipmapEXT(target);
}

void GenerateMipmapOES(GLenum target)
{
	return functions::GenerateMipmapOES(target);
}

void GenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
	return functions::GenerateMultiTexMipmapEXT(texunit, target);
}

void GenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
	return functions::GenerateTextureMipmapEXT(texture, target);
}

void GetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
	return functions::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void GetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
	return functions::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void GetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
	return functions::GetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

void GetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
	return functions::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void GetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
	return functions::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void GetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
	return functions::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void GetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
	return functions::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void GetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
	return functions::GetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

void GetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
	return functions::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void GetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
	return functions::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void GetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
	return functions::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void GetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
	return functions::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void GetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::GetActiveVaryingNV(program, index, bufSize, length, size, type, name);
}

void GetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat * params)
{
	return functions::GetArrayObjectfvATI(array, pname, params);
}

void GetArrayObjectivATI(GLenum array, GLenum pname, GLint * params)
{
	return functions::GetArrayObjectivATI(array, pname, params);
}

void GetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
	return functions::GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

void GetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
	return functions::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint GetAttribLocation(GLuint program, const GLchar * name)
{
	return functions::GetAttribLocation(program, name);
}

GLint GetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
	return functions::GetAttribLocationARB(programObj, name);
}

void GetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean * data)
{
	return functions::GetBooleanIndexedvEXT(target, index, data);
}

void GetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
	return functions::GetBooleani_v(target, index, data);
}

void GetBooleanv(GLenum pname, GLboolean * data)
{
	return functions::GetBooleanv(pname, data);
}

void GetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
	return functions::GetBufferParameteri64v(target, pname, params);
}

void GetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetBufferParameteriv(target, pname, params);
}

void GetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetBufferParameterivARB(target, pname, params);
}

void GetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT * params)
{
	return functions::GetBufferParameterui64vNV(target, pname, params);
}

void GetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
	return functions::GetBufferPointerv(target, pname, params);
}

void GetBufferPointervARB(GLenum target, GLenum pname, void ** params)
{
	return functions::GetBufferPointervARB(target, pname, params);
}

void GetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
	return functions::GetBufferPointervOES(target, pname, params);
}

void GetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
	return functions::GetBufferSubData(target, offset, size, data);
}

void GetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
	return functions::GetBufferSubDataARB(target, offset, size, data);
}

void GetClipPlane(GLenum plane, GLdouble * equation)
{
	return functions::GetClipPlane(plane, equation);
}

void GetClipPlanef(GLenum plane, GLfloat * equation)
{
	return functions::GetClipPlanef(plane, equation);
}

void GetClipPlanefOES(GLenum plane, GLfloat * equation)
{
	return functions::GetClipPlanefOES(plane, equation);
}

void GetClipPlanex(GLenum plane, GLfixed * equation)
{
	return functions::GetClipPlanex(plane, equation);
}

void GetClipPlanexOES(GLenum plane, GLfixed * equation)
{
	return functions::GetClipPlanexOES(plane, equation);
}

void GetColorTable(GLenum target, GLenum format, GLenum type, void * table)
{
	return functions::GetColorTable(target, format, type, table);
}

void GetColorTableEXT(GLenum target, GLenum format, GLenum type, void * data)
{
	return functions::GetColorTableEXT(target, format, type, data);
}

void GetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetColorTableParameterfv(target, pname, params);
}

void GetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetColorTableParameterfvEXT(target, pname, params);
}

void GetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetColorTableParameterfvSGI(target, pname, params);
}

void GetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetColorTableParameteriv(target, pname, params);
}

void GetColorTableParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetColorTableParameterivEXT(target, pname, params);
}

void GetColorTableParameterivSGI(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetColorTableParameterivSGI(target, pname, params);
}

void GetColorTableSGI(GLenum target, GLenum format, GLenum type, void * table)
{
	return functions::GetColorTableSGI(target, format, type, table);
}

void GetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
	return functions::GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void GetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
	return functions::GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void GetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
	return functions::GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void GetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
	return functions::GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void GetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
	return functions::GetCombinerStageParameterfvNV(stage, pname, params);
}

void GetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void * img)
{
	return functions::GetCompressedMultiTexImageEXT(texunit, target, lod, img);
}

void GetCompressedTexImage(GLenum target, GLint level, void * img)
{
	return functions::GetCompressedTexImage(target, level, img);
}

void GetCompressedTexImageARB(GLenum target, GLint level, void * img)
{
	return functions::GetCompressedTexImageARB(target, level, img);
}

void GetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void * img)
{
	return functions::GetCompressedTextureImageEXT(texture, target, lod, img);
}

void GetConvolutionFilter(GLenum target, GLenum format, GLenum type, void * image)
{
	return functions::GetConvolutionFilter(target, format, type, image);
}

void GetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void * image)
{
	return functions::GetConvolutionFilterEXT(target, format, type, image);
}

void GetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetConvolutionParameterfv(target, pname, params);
}

void GetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetConvolutionParameterfvEXT(target, pname, params);
}

void GetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetConvolutionParameteriv(target, pname, params);
}

void GetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetConvolutionParameterivEXT(target, pname, params);
}

void GetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetConvolutionParameterxvOES(target, pname, params);
}

GLuint GetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint GetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum * categories, GLuint * severities, GLuint * ids, GLsizei * lengths, GLchar * message)
{
	return functions::GetDebugMessageLogAMD(count, bufsize, categories, severities, ids, lengths, message);
}

GLuint GetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::GetDebugMessageLogARB(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint GetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
	return functions::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void GetDetailTexFuncSGIS(GLenum target, GLfloat * points)
{
	return functions::GetDetailTexFuncSGIS(target, points);
}

void GetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble * data)
{
	return functions::GetDoubleIndexedvEXT(target, index, data);
}

void GetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
	return functions::GetDoublei_v(target, index, data);
}

void GetDoublei_vEXT(GLenum pname, GLuint index, GLdouble * params)
{
	return functions::GetDoublei_vEXT(pname, index, params);
}

void GetDoublev(GLenum pname, GLdouble * data)
{
	return functions::GetDoublev(pname, data);
}

void GetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
	return functions::GetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

void GetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
	return functions::GetDriverControlsQCOM(num, size, driverControls);
}

GLenum GetError()
{
	return functions::GetError();
}

void GetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
	return functions::GetFenceivNV(fence, pname, params);
}

void GetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
	return functions::GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void GetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
	return functions::GetFinalCombinerInputParameterivNV(variable, pname, params);
}

void GetFirstPerfQueryIdINTEL(GLuint * queryId)
{
	return functions::GetFirstPerfQueryIdINTEL(queryId);
}

void GetFixedv(GLenum pname, GLfixed * params)
{
	return functions::GetFixedv(pname, params);
}

void GetFixedvOES(GLenum pname, GLfixed * params)
{
	return functions::GetFixedvOES(pname, params);
}

void GetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat * data)
{
	return functions::GetFloatIndexedvEXT(target, index, data);
}

void GetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
	return functions::GetFloati_v(target, index, data);
}

void GetFloati_vEXT(GLenum pname, GLuint index, GLfloat * params)
{
	return functions::GetFloati_vEXT(pname, index, params);
}

void GetFloatv(GLenum pname, GLfloat * data)
{
	return functions::GetFloatv(pname, data);
}

void GetFogFuncSGIS(GLfloat * points)
{
	return functions::GetFogFuncSGIS(points);
}

GLint GetFragDataIndex(GLuint program, const GLchar * name)
{
	return functions::GetFragDataIndex(program, name);
}

GLint GetFragDataLocation(GLuint program, const GLchar * name)
{
	return functions::GetFragDataLocation(program, name);
}

GLint GetFragDataLocationEXT(GLuint program, const GLchar * name)
{
	return functions::GetFragDataLocationEXT(program, name);
}

void GetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat * params)
{
	return functions::GetFragmentLightfvSGIX(light, pname, params);
}

void GetFragmentLightivSGIX(GLenum light, GLenum pname, GLint * params)
{
	return functions::GetFragmentLightivSGIX(light, pname, params);
}

void GetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat * params)
{
	return functions::GetFragmentMaterialfvSGIX(face, pname, params);
}

void GetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint * params)
{
	return functions::GetFragmentMaterialivSGIX(face, pname, params);
}

void GetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void GetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

void GetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::GetFramebufferAttachmentParameterivOES(target, attachment, pname, params);
}

void GetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetFramebufferParameteriv(target, pname, params);
}

void GetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
	return functions::GetFramebufferParameterivEXT(framebuffer, pname, params);
}

GLenum GetGraphicsResetStatusARB()
{
	return functions::GetGraphicsResetStatusARB();
}

GLenum GetGraphicsResetStatusEXT()
{
	return functions::GetGraphicsResetStatusEXT();
}

GLhandleARB GetHandleARB(GLenum pname)
{
	return functions::GetHandleARB(pname);
}

void GetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::GetHistogram(target, reset, format, type, values);
}

void GetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::GetHistogramEXT(target, reset, format, type, values);
}

void GetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetHistogramParameterfv(target, pname, params);
}

void GetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetHistogramParameterfvEXT(target, pname, params);
}

void GetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetHistogramParameteriv(target, pname, params);
}

void GetHistogramParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetHistogramParameterivEXT(target, pname, params);
}

void GetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetHistogramParameterxvOES(target, pname, params);
}

GLuint64 GetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
	return functions::GetImageHandleARB(texture, level, layered, layer, format);
}

GLuint64 GetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
	return functions::GetImageHandleNV(texture, level, layered, layer, format);
}

void GetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetImageTransformParameterfvHP(target, pname, params);
}

void GetImageTransformParameterivHP(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetImageTransformParameterivHP(target, pname, params);
}

void GetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
	return functions::GetInfoLogARB(obj, maxLength, length, infoLog);
}

GLint GetInstrumentsSGIX()
{
	return functions::GetInstrumentsSGIX();
}

void GetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
	return functions::GetInteger64i_v(target, index, data);
}

void GetInteger64v(GLenum pname, GLint64 * data)
{
	return functions::GetInteger64v(pname, data);
}

void GetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
	return functions::GetInteger64vAPPLE(pname, params);
}

void GetIntegerIndexedvEXT(GLenum target, GLuint index, GLint * data)
{
	return functions::GetIntegerIndexedvEXT(target, index, data);
}

void GetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
	return functions::GetIntegeri_v(target, index, data);
}

void GetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
	return functions::GetIntegeri_vEXT(target, index, data);
}

void GetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT * result)
{
	return functions::GetIntegerui64i_vNV(value, index, result);
}

void GetIntegerui64vNV(GLenum value, GLuint64EXT * result)
{
	return functions::GetIntegerui64vNV(value, result);
}

void GetIntegerv(GLenum pname, GLint * data)
{
	return functions::GetIntegerv(pname, data);
}

void GetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
	return functions::GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void GetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
	return functions::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void GetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::GetInvariantBooleanvEXT(id, value, data);
}

void GetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::GetInvariantFloatvEXT(id, value, data);
}

void GetInvariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::GetInvariantIntegervEXT(id, value, data);
}

void GetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
	return functions::GetLightfv(light, pname, params);
}

void GetLightiv(GLenum light, GLenum pname, GLint * params)
{
	return functions::GetLightiv(light, pname, params);
}

void GetLightxOES(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::GetLightxOES(light, pname, params);
}

void GetLightxv(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::GetLightxv(light, pname, params);
}

void GetLightxvOES(GLenum light, GLenum pname, GLfixed * params)
{
	return functions::GetLightxvOES(light, pname, params);
}

void GetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat * params)
{
	return functions::GetListParameterfvSGIX(list, pname, params);
}

void GetListParameterivSGIX(GLuint list, GLenum pname, GLint * params)
{
	return functions::GetListParameterivSGIX(list, pname, params);
}

void GetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::GetLocalConstantBooleanvEXT(id, value, data);
}

void GetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::GetLocalConstantFloatvEXT(id, value, data);
}

void GetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::GetLocalConstantIntegervEXT(id, value, data);
}

void GetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetMapAttribParameterfvNV(target, index, pname, params);
}

void GetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint * params)
{
	return functions::GetMapAttribParameterivNV(target, index, pname, params);
}

void GetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points)
{
	return functions::GetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

void GetMapParameterfvNV(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetMapParameterfvNV(target, pname, params);
}

void GetMapParameterivNV(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMapParameterivNV(target, pname, params);
}

void GetMapdv(GLenum target, GLenum query, GLdouble * v)
{
	return functions::GetMapdv(target, query, v);
}

void GetMapfv(GLenum target, GLenum query, GLfloat * v)
{
	return functions::GetMapfv(target, query, v);
}

void GetMapiv(GLenum target, GLenum query, GLint * v)
{
	return functions::GetMapiv(target, query, v);
}

void GetMapxvOES(GLenum target, GLenum query, GLfixed * v)
{
	return functions::GetMapxvOES(target, query, v);
}

void GetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
	return functions::GetMaterialfv(face, pname, params);
}

void GetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
	return functions::GetMaterialiv(face, pname, params);
}

void GetMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	return functions::GetMaterialxOES(face, pname, param);
}

void GetMaterialxv(GLenum face, GLenum pname, GLfixed * params)
{
	return functions::GetMaterialxv(face, pname, params);
}

void GetMaterialxvOES(GLenum face, GLenum pname, GLfixed * params)
{
	return functions::GetMaterialxvOES(face, pname, params);
}

void GetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::GetMinmax(target, reset, format, type, values);
}

void GetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values)
{
	return functions::GetMinmaxEXT(target, reset, format, type, values);
}

void GetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetMinmaxParameterfv(target, pname, params);
}

void GetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetMinmaxParameterfvEXT(target, pname, params);
}

void GetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMinmaxParameteriv(target, pname, params);
}

void GetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMinmaxParameterivEXT(target, pname, params);
}

void GetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetMultiTexEnvfvEXT(texunit, target, pname, params);
}

void GetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMultiTexEnvivEXT(texunit, target, pname, params);
}

void GetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble * params)
{
	return functions::GetMultiTexGendvEXT(texunit, coord, pname, params);
}

void GetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::GetMultiTexGenfvEXT(texunit, coord, pname, params);
}

void GetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint * params)
{
	return functions::GetMultiTexGenivEXT(texunit, coord, pname, params);
}

void GetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::GetMultiTexImageEXT(texunit, target, level, format, type, pixels);
}

void GetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::GetMultiTexLevelParameterfvEXT(texunit, target, level, pname, params);
}

void GetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::GetMultiTexLevelParameterivEXT(texunit, target, level, pname, params);
}

void GetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMultiTexParameterIivEXT(texunit, target, pname, params);
}

void GetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint * params)
{
	return functions::GetMultiTexParameterIuivEXT(texunit, target, pname, params);
}

void GetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetMultiTexParameterfvEXT(texunit, target, pname, params);
}

void GetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetMultiTexParameterivEXT(texunit, target, pname, params);
}

void GetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
	return functions::GetMultisamplefv(pname, index, val);
}

void GetMultisamplefvNV(GLenum pname, GLuint index, GLfloat * val)
{
	return functions::GetMultisamplefvNV(pname, index, val);
}

void GetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint * params)
{
	return functions::GetNamedBufferParameterivEXT(buffer, pname, params);
}

void GetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT * params)
{
	return functions::GetNamedBufferParameterui64vNV(buffer, pname, params);
}

void GetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void ** params)
{
	return functions::GetNamedBufferPointervEXT(buffer, pname, params);
}

void GetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
	return functions::GetNamedBufferSubDataEXT(buffer, offset, size, data);
}

void GetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
	return functions::GetNamedFramebufferAttachmentParameterivEXT(framebuffer, attachment, pname, params);
}

void GetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint * params)
{
	return functions::GetNamedFramebufferParameterivEXT(framebuffer, pname, params);
}

void GetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint * params)
{
	return functions::GetNamedProgramLocalParameterIivEXT(program, target, index, params);
}

void GetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint * params)
{
	return functions::GetNamedProgramLocalParameterIuivEXT(program, target, index, params);
}

void GetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble * params)
{
	return functions::GetNamedProgramLocalParameterdvEXT(program, target, index, params);
}

void GetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat * params)
{
	return functions::GetNamedProgramLocalParameterfvEXT(program, target, index, params);
}

void GetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void * string)
{
	return functions::GetNamedProgramStringEXT(program, target, pname, string);
}

void GetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetNamedProgramivEXT(program, target, pname, params);
}

void GetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint * params)
{
	return functions::GetNamedRenderbufferParameterivEXT(renderbuffer, pname, params);
}

void GetNamedStringARB(GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
	return functions::GetNamedStringARB(namelen, name, bufSize, stringlen, string);
}

void GetNamedStringivARB(GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
	return functions::GetNamedStringivARB(namelen, name, pname, params);
}

void GetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
	return functions::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void GetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat * params)
{
	return functions::GetObjectBufferfvATI(buffer, pname, params);
}

void GetObjectBufferivATI(GLuint buffer, GLenum pname, GLint * params)
{
	return functions::GetObjectBufferivATI(buffer, pname, params);
}

void GetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::GetObjectLabel(identifier, name, bufSize, length, label);
}

void GetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void GetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::GetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void GetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
	return functions::GetObjectParameterfvARB(obj, pname, params);
}

void GetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint * params)
{
	return functions::GetObjectParameterivAPPLE(objectType, name, pname, params);
}

void GetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
	return functions::GetObjectParameterivARB(obj, pname, params);
}

void GetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void GetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
	return functions::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void GetOcclusionQueryivNV(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetOcclusionQueryivNV(id, pname, params);
}

void GetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint * params)
{
	return functions::GetOcclusionQueryuivNV(id, pname, params);
}

void GetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
	return functions::GetPathColorGenfvNV(color, pname, value);
}

void GetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
	return functions::GetPathColorGenivNV(color, pname, value);
}

void GetPathCommandsNV(GLuint path, GLubyte * commands)
{
	return functions::GetPathCommandsNV(path, commands);
}

void GetPathCoordsNV(GLuint path, GLfloat * coords)
{
	return functions::GetPathCoordsNV(path, coords);
}

void GetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
	return functions::GetPathDashArrayNV(path, dashArray);
}

GLfloat GetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
	return functions::GetPathLengthNV(path, startSegment, numSegments);
}

void GetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
	return functions::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void GetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
	return functions::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void GetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
	return functions::GetPathParameterfvNV(path, pname, value);
}

void GetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
	return functions::GetPathParameterivNV(path, pname, value);
}

void GetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
	return functions::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void GetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
	return functions::GetPathTexGenfvNV(texCoordSet, pname, value);
}

void GetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
	return functions::GetPathTexGenivNV(texCoordSet, pname, value);
}

void GetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
	return functions::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void GetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
	return functions::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void GetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
	return functions::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void GetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
	return functions::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void GetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
	return functions::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void GetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
	return functions::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void GetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
	return functions::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void GetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten)
{
	return functions::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void GetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
	return functions::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void GetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
	return functions::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void GetPixelMapfv(GLenum map, GLfloat * values)
{
	return functions::GetPixelMapfv(map, values);
}

void GetPixelMapuiv(GLenum map, GLuint * values)
{
	return functions::GetPixelMapuiv(map, values);
}

void GetPixelMapusv(GLenum map, GLushort * values)
{
	return functions::GetPixelMapusv(map, values);
}

void GetPixelMapxv(GLenum map, GLint size, GLfixed * values)
{
	return functions::GetPixelMapxv(map, size, values);
}

void GetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat * params)
{
	return functions::GetPixelTexGenParameterfvSGIS(pname, params);
}

void GetPixelTexGenParameterivSGIS(GLenum pname, GLint * params)
{
	return functions::GetPixelTexGenParameterivSGIS(pname, params);
}

void GetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetPixelTransformParameterfvEXT(target, pname, params);
}

void GetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetPixelTransformParameterivEXT(target, pname, params);
}

void GetPointerIndexedvEXT(GLenum target, GLuint index, void ** data)
{
	return functions::GetPointerIndexedvEXT(target, index, data);
}

void GetPointeri_vEXT(GLenum pname, GLuint index, void ** params)
{
	return functions::GetPointeri_vEXT(pname, index, params);
}

void GetPointerv(GLenum pname, void ** params)
{
	return functions::GetPointerv(pname, params);
}

void GetPointervEXT(GLenum pname, void ** params)
{
	return functions::GetPointervEXT(pname, params);
}

void GetPointervKHR(GLenum pname, void ** params)
{
	return functions::GetPointervKHR(pname, params);
}

void GetPolygonStipple(GLubyte * mask)
{
	return functions::GetPolygonStipple(mask);
}

void GetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
	return functions::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void GetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
	return functions::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void GetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint * params)
{
	return functions::GetProgramEnvParameterIivNV(target, index, params);
}

void GetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
	return functions::GetProgramEnvParameterIuivNV(target, index, params);
}

void GetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
	return functions::GetProgramEnvParameterdvARB(target, index, params);
}

void GetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
	return functions::GetProgramEnvParameterfvARB(target, index, params);
}

void GetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void GetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
	return functions::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void GetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint * params)
{
	return functions::GetProgramLocalParameterIivNV(target, index, params);
}

void GetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint * params)
{
	return functions::GetProgramLocalParameterIuivNV(target, index, params);
}

void GetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
	return functions::GetProgramLocalParameterdvARB(target, index, params);
}

void GetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
	return functions::GetProgramLocalParameterfvARB(target, index, params);
}

void GetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
	return functions::GetProgramNamedParameterdvNV(id, len, name, params);
}

void GetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
	return functions::GetProgramNamedParameterfvNV(id, len, name, params);
}

void GetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetProgramParameterdvNV(target, index, pname, params);
}

void GetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetProgramParameterfvNV(target, index, pname, params);
}

void GetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void GetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::GetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void GetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
	return functions::GetProgramPipelineiv(pipeline, pname, params);
}

void GetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
	return functions::GetProgramPipelineivEXT(pipeline, pname, params);
}

GLuint GetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::GetProgramResourceIndex(program, programInterface, name);
}

GLint GetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::GetProgramResourceLocation(program, programInterface, name);
}

GLint GetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
	return functions::GetProgramResourceLocationIndex(program, programInterface, name);
}

void GetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
	return functions::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void GetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
	return functions::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void GetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
	return functions::GetProgramStageiv(program, shadertype, pname, values);
}

void GetProgramStringARB(GLenum target, GLenum pname, void * string)
{
	return functions::GetProgramStringARB(target, pname, string);
}

void GetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
	return functions::GetProgramStringNV(id, pname, program);
}

void GetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint * param)
{
	return functions::GetProgramSubroutineParameteruivNV(target, index, param);
}

void GetProgramiv(GLuint program, GLenum pname, GLint * params)
{
	return functions::GetProgramiv(program, pname, params);
}

void GetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetProgramivARB(target, pname, params);
}

void GetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetProgramivNV(id, pname, params);
}

void GetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
	return functions::GetQueryIndexediv(target, index, pname, params);
}

void GetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
	return functions::GetQueryObjecti64v(id, pname, params);
}

void GetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
	return functions::GetQueryObjecti64vEXT(id, pname, params);
}

void GetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetQueryObjectiv(id, pname, params);
}

void GetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetQueryObjectivARB(id, pname, params);
}

void GetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetQueryObjectivEXT(id, pname, params);
}

void GetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
	return functions::GetQueryObjectui64v(id, pname, params);
}

void GetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
	return functions::GetQueryObjectui64vEXT(id, pname, params);
}

void GetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
	return functions::GetQueryObjectuiv(id, pname, params);
}

void GetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
	return functions::GetQueryObjectuivARB(id, pname, params);
}

void GetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
	return functions::GetQueryObjectuivEXT(id, pname, params);
}

void GetQueryiv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetQueryiv(target, pname, params);
}

void GetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetQueryivARB(target, pname, params);
}

void GetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetQueryivEXT(target, pname, params);
}

void GetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetRenderbufferParameteriv(target, pname, params);
}

void GetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetRenderbufferParameterivEXT(target, pname, params);
}

void GetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetRenderbufferParameterivOES(target, pname, params);
}

void GetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
	return functions::GetSamplerParameterIiv(sampler, pname, params);
}

void GetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
	return functions::GetSamplerParameterIuiv(sampler, pname, params);
}

void GetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
	return functions::GetSamplerParameterfv(sampler, pname, params);
}

void GetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
	return functions::GetSamplerParameteriv(sampler, pname, params);
}

void GetSeparableFilter(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
	return functions::GetSeparableFilter(target, format, type, row, column, span);
}

void GetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span)
{
	return functions::GetSeparableFilterEXT(target, format, type, row, column, span);
}

void GetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
	return functions::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void GetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
	return functions::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void GetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
	return functions::GetShaderSource(shader, bufSize, length, source);
}

void GetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
	return functions::GetShaderSourceARB(obj, maxLength, length, source);
}

void GetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
	return functions::GetShaderiv(shader, pname, params);
}

void GetSharpenTexFuncSGIS(GLenum target, GLfloat * points)
{
	return functions::GetSharpenTexFuncSGIS(target, points);
}

const GLubyte * GetString(GLenum name)
{
	return functions::GetString(name);
}

const GLubyte * GetStringi(GLenum name, GLuint index)
{
	return functions::GetStringi(name, index);
}

GLuint GetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
	return functions::GetSubroutineIndex(program, shadertype, name);
}

GLint GetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
	return functions::GetSubroutineUniformLocation(program, shadertype, name);
}

void GetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::GetSynciv(sync, pname, bufSize, length, values);
}

void GetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::GetSyncivAPPLE(sync, pname, bufSize, length, values);
}

void GetTexBumpParameterfvATI(GLenum pname, GLfloat * param)
{
	return functions::GetTexBumpParameterfvATI(pname, param);
}

void GetTexBumpParameterivATI(GLenum pname, GLint * param)
{
	return functions::GetTexBumpParameterivATI(pname, param);
}

void GetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetTexEnvfv(target, pname, params);
}

void GetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTexEnviv(target, pname, params);
}

void GetTexEnvxv(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetTexEnvxv(target, pname, params);
}

void GetTexEnvxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetTexEnvxvOES(target, pname, params);
}

void GetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat * weights)
{
	return functions::GetTexFilterFuncSGIS(target, filter, weights);
}

void GetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
	return functions::GetTexGendv(coord, pname, params);
}

void GetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::GetTexGenfv(coord, pname, params);
}

void GetTexGenfvOES(GLenum coord, GLenum pname, GLfloat * params)
{
	return functions::GetTexGenfvOES(coord, pname, params);
}

void GetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
	return functions::GetTexGeniv(coord, pname, params);
}

void GetTexGenivOES(GLenum coord, GLenum pname, GLint * params)
{
	return functions::GetTexGenivOES(coord, pname, params);
}

void GetTexGenxvOES(GLenum coord, GLenum pname, GLfixed * params)
{
	return functions::GetTexGenxvOES(coord, pname, params);
}

void GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::GetTexImage(target, level, format, type, pixels);
}

void GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::GetTexLevelParameterfv(target, level, pname, params);
}

void GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::GetTexLevelParameteriv(target, level, pname, params);
}

void GetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed * params)
{
	return functions::GetTexLevelParameterxvOES(target, level, pname, params);
}

void GetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTexParameterIiv(target, pname, params);
}

void GetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTexParameterIivEXT(target, pname, params);
}

void GetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
	return functions::GetTexParameterIuiv(target, pname, params);
}

void GetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
	return functions::GetTexParameterIuivEXT(target, pname, params);
}

void GetTexParameterPointervAPPLE(GLenum target, GLenum pname, void ** params)
{
	return functions::GetTexParameterPointervAPPLE(target, pname, params);
}

void GetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetTexParameterfv(target, pname, params);
}

void GetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTexParameteriv(target, pname, params);
}

void GetTexParameterxv(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetTexParameterxv(target, pname, params);
}

void GetTexParameterxvOES(GLenum target, GLenum pname, GLfixed * params)
{
	return functions::GetTexParameterxvOES(target, pname, params);
}

GLuint64 GetTextureHandleARB(GLuint texture)
{
	return functions::GetTextureHandleARB(texture);
}

GLuint64 GetTextureHandleNV(GLuint texture)
{
	return functions::GetTextureHandleNV(texture);
}

void GetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
	return functions::GetTextureImageEXT(texture, target, level, format, type, pixels);
}

void GetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params)
{
	return functions::GetTextureLevelParameterfvEXT(texture, target, level, pname, params);
}

void GetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params)
{
	return functions::GetTextureLevelParameterivEXT(texture, target, level, pname, params);
}

void GetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTextureParameterIivEXT(texture, target, pname, params);
}

void GetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint * params)
{
	return functions::GetTextureParameterIuivEXT(texture, target, pname, params);
}

void GetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat * params)
{
	return functions::GetTextureParameterfvEXT(texture, target, pname, params);
}

void GetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint * params)
{
	return functions::GetTextureParameterivEXT(texture, target, pname, params);
}

GLuint64 GetTextureSamplerHandleARB(GLuint texture, GLuint sampler)
{
	return functions::GetTextureSamplerHandleARB(texture, sampler);
}

GLuint64 GetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
	return functions::GetTextureSamplerHandleNV(texture, sampler);
}

void GetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
	return functions::GetTrackMatrixivNV(target, address, pname, params);
}

void GetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void GetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
	return functions::GetTransformFeedbackVaryingEXT(program, index, bufSize, length, size, type, name);
}

void GetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint * location)
{
	return functions::GetTransformFeedbackVaryingNV(program, index, location);
}

void GetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source)
{
	return functions::GetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

GLuint GetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
	return functions::GetUniformBlockIndex(program, uniformBlockName);
}

GLint GetUniformBufferSizeEXT(GLuint program, GLint location)
{
	return functions::GetUniformBufferSizeEXT(program, location);
}

void GetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
	return functions::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint GetUniformLocation(GLuint program, const GLchar * name)
{
	return functions::GetUniformLocation(program, name);
}

GLint GetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
	return functions::GetUniformLocationARB(programObj, name);
}

GLintptr GetUniformOffsetEXT(GLuint program, GLint location)
{
	return functions::GetUniformOffsetEXT(program, location);
}

void GetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
	return functions::GetUniformSubroutineuiv(shadertype, location, params);
}

void GetUniformdv(GLuint program, GLint location, GLdouble * params)
{
	return functions::GetUniformdv(program, location, params);
}

void GetUniformfv(GLuint program, GLint location, GLfloat * params)
{
	return functions::GetUniformfv(program, location, params);
}

void GetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
	return functions::GetUniformfvARB(programObj, location, params);
}

void GetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
	return functions::GetUniformi64vNV(program, location, params);
}

void GetUniformiv(GLuint program, GLint location, GLint * params)
{
	return functions::GetUniformiv(program, location, params);
}

void GetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
	return functions::GetUniformivARB(programObj, location, params);
}

void GetUniformui64vNV(GLuint program, GLint location, GLuint64EXT * params)
{
	return functions::GetUniformui64vNV(program, location, params);
}

void GetUniformuiv(GLuint program, GLint location, GLuint * params)
{
	return functions::GetUniformuiv(program, location, params);
}

void GetUniformuivEXT(GLuint program, GLint location, GLuint * params)
{
	return functions::GetUniformuivEXT(program, location, params);
}

void GetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat * params)
{
	return functions::GetVariantArrayObjectfvATI(id, pname, params);
}

void GetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint * params)
{
	return functions::GetVariantArrayObjectivATI(id, pname, params);
}

void GetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean * data)
{
	return functions::GetVariantBooleanvEXT(id, value, data);
}

void GetVariantFloatvEXT(GLuint id, GLenum value, GLfloat * data)
{
	return functions::GetVariantFloatvEXT(id, value, data);
}

void GetVariantIntegervEXT(GLuint id, GLenum value, GLint * data)
{
	return functions::GetVariantIntegervEXT(id, value, data);
}

void GetVariantPointervEXT(GLuint id, GLenum value, void ** data)
{
	return functions::GetVariantPointervEXT(id, value, data);
}

GLint GetVaryingLocationNV(GLuint program, const GLchar * name)
{
	return functions::GetVaryingLocationNV(program, name);
}

void GetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
	return functions::GetVertexArrayIntegeri_vEXT(vaobj, index, pname, param);
}

void GetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint * param)
{
	return functions::GetVertexArrayIntegervEXT(vaobj, pname, param);
}

void GetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void ** param)
{
	return functions::GetVertexArrayPointeri_vEXT(vaobj, index, pname, param);
}

void GetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void ** param)
{
	return functions::GetVertexArrayPointervEXT(vaobj, pname, param);
}

void GetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetVertexAttribArrayObjectfvATI(index, pname, params);
}

void GetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribArrayObjectivATI(index, pname, params);
}

void GetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribIiv(index, pname, params);
}

void GetVertexAttribIivEXT(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribIivEXT(index, pname, params);
}

void GetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
	return functions::GetVertexAttribIuiv(index, pname, params);
}

void GetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint * params)
{
	return functions::GetVertexAttribIuivEXT(index, pname, params);
}

void GetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetVertexAttribLdv(index, pname, params);
}

void GetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetVertexAttribLdvEXT(index, pname, params);
}

void GetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT * params)
{
	return functions::GetVertexAttribLi64vNV(index, pname, params);
}

void GetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT * params)
{
	return functions::GetVertexAttribLui64vARB(index, pname, params);
}

void GetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT * params)
{
	return functions::GetVertexAttribLui64vNV(index, pname, params);
}

void GetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
	return functions::GetVertexAttribPointerv(index, pname, pointer);
}

void GetVertexAttribPointervARB(GLuint index, GLenum pname, void ** pointer)
{
	return functions::GetVertexAttribPointervARB(index, pname, pointer);
}

void GetVertexAttribPointervNV(GLuint index, GLenum pname, void ** pointer)
{
	return functions::GetVertexAttribPointervNV(index, pname, pointer);
}

void GetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetVertexAttribdv(index, pname, params);
}

void GetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetVertexAttribdvARB(index, pname, params);
}

void GetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
	return functions::GetVertexAttribdvNV(index, pname, params);
}

void GetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetVertexAttribfv(index, pname, params);
}

void GetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetVertexAttribfvARB(index, pname, params);
}

void GetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
	return functions::GetVertexAttribfvNV(index, pname, params);
}

void GetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribiv(index, pname, params);
}

void GetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribivARB(index, pname, params);
}

void GetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
	return functions::GetVertexAttribivNV(index, pname, params);
}

void GetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble * params)
{
	return functions::GetVideoCaptureStreamdvNV(video_capture_slot, stream, pname, params);
}

void GetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat * params)
{
	return functions::GetVideoCaptureStreamfvNV(video_capture_slot, stream, pname, params);
}

void GetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint * params)
{
	return functions::GetVideoCaptureStreamivNV(video_capture_slot, stream, pname, params);
}

void GetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint * params)
{
	return functions::GetVideoCaptureivNV(video_capture_slot, pname, params);
}

void GetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT * params)
{
	return functions::GetVideoi64vNV(video_slot, pname, params);
}

void GetVideoivNV(GLuint video_slot, GLenum pname, GLint * params)
{
	return functions::GetVideoivNV(video_slot, pname, params);
}

void GetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT * params)
{
	return functions::GetVideoui64vNV(video_slot, pname, params);
}

void GetVideouivNV(GLuint video_slot, GLenum pname, GLuint * params)
{
	return functions::GetVideouivNV(video_slot, pname, params);
}

void GetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
	return functions::GetnColorTableARB(target, format, type, bufSize, table);
}

void GetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void * img)
{
	return functions::GetnCompressedTexImageARB(target, lod, bufSize, img);
}

void GetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
	return functions::GetnConvolutionFilterARB(target, format, type, bufSize, image);
}

void GetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
	return functions::GetnHistogramARB(target, reset, format, type, bufSize, values);
}

void GetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
	return functions::GetnMapdvARB(target, query, bufSize, v);
}

void GetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
	return functions::GetnMapfvARB(target, query, bufSize, v);
}

void GetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
	return functions::GetnMapivARB(target, query, bufSize, v);
}

void GetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
	return functions::GetnMinmaxARB(target, reset, format, type, bufSize, values);
}

void GetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat * values)
{
	return functions::GetnPixelMapfvARB(map, bufSize, values);
}

void GetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint * values)
{
	return functions::GetnPixelMapuivARB(map, bufSize, values);
}

void GetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort * values)
{
	return functions::GetnPixelMapusvARB(map, bufSize, values);
}

void GetnPolygonStippleARB(GLsizei bufSize, GLubyte * pattern)
{
	return functions::GetnPolygonStippleARB(bufSize, pattern);
}

void GetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
	return functions::GetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void GetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
	return functions::GetnTexImageARB(target, level, format, type, bufSize, img);
}

void GetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
	return functions::GetnUniformdvARB(program, location, bufSize, params);
}

void GetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
	return functions::GetnUniformfvARB(program, location, bufSize, params);
}

void GetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
	return functions::GetnUniformfvEXT(program, location, bufSize, params);
}

void GetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
	return functions::GetnUniformivARB(program, location, bufSize, params);
}

void GetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
	return functions::GetnUniformivEXT(program, location, bufSize, params);
}

void GetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
	return functions::GetnUniformuivARB(program, location, bufSize, params);
}

void GlobalAlphaFactorbSUN(GLbyte factor)
{
	return functions::GlobalAlphaFactorbSUN(factor);
}

void GlobalAlphaFactordSUN(GLdouble factor)
{
	return functions::GlobalAlphaFactordSUN(factor);
}

void GlobalAlphaFactorfSUN(GLfloat factor)
{
	return functions::GlobalAlphaFactorfSUN(factor);
}

void GlobalAlphaFactoriSUN(GLint factor)
{
	return functions::GlobalAlphaFactoriSUN(factor);
}

void GlobalAlphaFactorsSUN(GLshort factor)
{
	return functions::GlobalAlphaFactorsSUN(factor);
}

void GlobalAlphaFactorubSUN(GLubyte factor)
{
	return functions::GlobalAlphaFactorubSUN(factor);
}

void GlobalAlphaFactoruiSUN(GLuint factor)
{
	return functions::GlobalAlphaFactoruiSUN(factor);
}

void GlobalAlphaFactorusSUN(GLushort factor)
{
	return functions::GlobalAlphaFactorusSUN(factor);
}

void Hint(GLenum target, GLenum mode)
{
	return functions::Hint(target, mode);
}

void HintPGI(GLenum target, GLint mode)
{
	return functions::HintPGI(target, mode);
}

void Histogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	return functions::Histogram(target, width, internalformat, sink);
}

void HistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	return functions::HistogramEXT(target, width, internalformat, sink);
}

void IglooInterfaceSGIX(GLenum pname, const void * params)
{
	return functions::IglooInterfaceSGIX(pname, params);
}

void ImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
	return functions::ImageTransformParameterfHP(target, pname, param);
}

void ImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::ImageTransformParameterfvHP(target, pname, params);
}

void ImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
	return functions::ImageTransformParameteriHP(target, pname, param);
}

void ImageTransformParameterivHP(GLenum target, GLenum pname, const GLint * params)
{
	return functions::ImageTransformParameterivHP(target, pname, params);
}

GLsync ImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
	return functions::ImportSyncEXT(external_sync_type, external_sync, flags);
}

void IndexFormatNV(GLenum type, GLsizei stride)
{
	return functions::IndexFormatNV(type, stride);
}

void IndexFuncEXT(GLenum func, GLclampf ref)
{
	return functions::IndexFuncEXT(func, ref);
}

void IndexMask(GLuint mask)
{
	return functions::IndexMask(mask);
}

void IndexMaterialEXT(GLenum face, GLenum mode)
{
	return functions::IndexMaterialEXT(face, mode);
}

void IndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::IndexPointer(type, stride, pointer);
}

void IndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::IndexPointerEXT(type, stride, count, pointer);
}

void IndexPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::IndexPointerListIBM(type, stride, pointer, ptrstride);
}

void Indexd(GLdouble c)
{
	return functions::Indexd(c);
}

void Indexdv(const GLdouble * c)
{
	return functions::Indexdv(c);
}

void Indexf(GLfloat c)
{
	return functions::Indexf(c);
}

void Indexfv(const GLfloat * c)
{
	return functions::Indexfv(c);
}

void Indexi(GLint c)
{
	return functions::Indexi(c);
}

void Indexiv(const GLint * c)
{
	return functions::Indexiv(c);
}

void Indexs(GLshort c)
{
	return functions::Indexs(c);
}

void Indexsv(const GLshort * c)
{
	return functions::Indexsv(c);
}

void Indexub(GLubyte c)
{
	return functions::Indexub(c);
}

void Indexubv(const GLubyte * c)
{
	return functions::Indexubv(c);
}

void IndexxOES(GLfixed component)
{
	return functions::IndexxOES(component);
}

void IndexxvOES(const GLfixed * component)
{
	return functions::IndexxvOES(component);
}

void InitNames()
{
	return functions::InitNames();
}

void InsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
	return functions::InsertComponentEXT(res, src, num);
}

void InsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
	return functions::InsertEventMarkerEXT(length, marker);
}

void InstrumentsBufferSGIX(GLsizei size, GLint * buffer)
{
	return functions::InstrumentsBufferSGIX(size, buffer);
}

void InterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
	return functions::InterleavedArrays(format, stride, pointer);
}

void InterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
	return functions::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void InvalidateBufferData(GLuint buffer)
{
	return functions::InvalidateBufferData(buffer);
}

void InvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
	return functions::InvalidateBufferSubData(buffer, offset, length);
}

void InvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
	return functions::InvalidateFramebuffer(target, numAttachments, attachments);
}

void InvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void InvalidateTexImage(GLuint texture, GLint level)
{
	return functions::InvalidateTexImage(texture, level);
}

void InvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean IsAsyncMarkerSGIX(GLuint marker)
{
	return functions::IsAsyncMarkerSGIX(marker);
}

GLboolean IsBuffer(GLuint buffer)
{
	return functions::IsBuffer(buffer);
}

GLboolean IsBufferARB(GLuint buffer)
{
	return functions::IsBufferARB(buffer);
}

GLboolean IsBufferResidentNV(GLenum target)
{
	return functions::IsBufferResidentNV(target);
}

GLboolean IsEnabled(GLenum cap)
{
	return functions::IsEnabled(cap);
}

GLboolean IsEnabledIndexedEXT(GLenum target, GLuint index)
{
	return functions::IsEnabledIndexedEXT(target, index);
}

GLboolean IsEnabledi(GLenum target, GLuint index)
{
	return functions::IsEnabledi(target, index);
}

GLboolean IsFenceAPPLE(GLuint fence)
{
	return functions::IsFenceAPPLE(fence);
}

GLboolean IsFenceNV(GLuint fence)
{
	return functions::IsFenceNV(fence);
}

GLboolean IsFramebuffer(GLuint framebuffer)
{
	return functions::IsFramebuffer(framebuffer);
}

GLboolean IsFramebufferEXT(GLuint framebuffer)
{
	return functions::IsFramebufferEXT(framebuffer);
}

GLboolean IsFramebufferOES(GLuint framebuffer)
{
	return functions::IsFramebufferOES(framebuffer);
}

GLboolean IsImageHandleResidentARB(GLuint64 handle)
{
	return functions::IsImageHandleResidentARB(handle);
}

GLboolean IsImageHandleResidentNV(GLuint64 handle)
{
	return functions::IsImageHandleResidentNV(handle);
}

GLboolean IsList(GLuint list)
{
	return functions::IsList(list);
}

GLboolean IsNameAMD(GLenum identifier, GLuint name)
{
	return functions::IsNameAMD(identifier, name);
}

GLboolean IsNamedBufferResidentNV(GLuint buffer)
{
	return functions::IsNamedBufferResidentNV(buffer);
}

GLboolean IsNamedStringARB(GLint namelen, const GLchar * name)
{
	return functions::IsNamedStringARB(namelen, name);
}

GLboolean IsObjectBufferATI(GLuint buffer)
{
	return functions::IsObjectBufferATI(buffer);
}

GLboolean IsOcclusionQueryNV(GLuint id)
{
	return functions::IsOcclusionQueryNV(id);
}

GLboolean IsPathNV(GLuint path)
{
	return functions::IsPathNV(path);
}

GLboolean IsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
	return functions::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean IsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
	return functions::IsPointInStrokePathNV(path, x, y);
}

GLboolean IsProgram(GLuint program)
{
	return functions::IsProgram(program);
}

GLboolean IsProgramARB(GLuint program)
{
	return functions::IsProgramARB(program);
}

GLboolean IsProgramNV(GLuint id)
{
	return functions::IsProgramNV(id);
}

GLboolean IsProgramPipeline(GLuint pipeline)
{
	return functions::IsProgramPipeline(pipeline);
}

GLboolean IsProgramPipelineEXT(GLuint pipeline)
{
	return functions::IsProgramPipelineEXT(pipeline);
}

GLboolean IsQuery(GLuint id)
{
	return functions::IsQuery(id);
}

GLboolean IsQueryARB(GLuint id)
{
	return functions::IsQueryARB(id);
}

GLboolean IsQueryEXT(GLuint id)
{
	return functions::IsQueryEXT(id);
}

GLboolean IsRenderbuffer(GLuint renderbuffer)
{
	return functions::IsRenderbuffer(renderbuffer);
}

GLboolean IsRenderbufferEXT(GLuint renderbuffer)
{
	return functions::IsRenderbufferEXT(renderbuffer);
}

GLboolean IsRenderbufferOES(GLuint renderbuffer)
{
	return functions::IsRenderbufferOES(renderbuffer);
}

GLboolean IsSampler(GLuint sampler)
{
	return functions::IsSampler(sampler);
}

GLboolean IsShader(GLuint shader)
{
	return functions::IsShader(shader);
}

GLboolean IsSync(GLsync sync)
{
	return functions::IsSync(sync);
}

GLboolean IsSyncAPPLE(GLsync sync)
{
	return functions::IsSyncAPPLE(sync);
}

GLboolean IsTexture(GLuint texture)
{
	return functions::IsTexture(texture);
}

GLboolean IsTextureEXT(GLuint texture)
{
	return functions::IsTextureEXT(texture);
}

GLboolean IsTextureHandleResidentARB(GLuint64 handle)
{
	return functions::IsTextureHandleResidentARB(handle);
}

GLboolean IsTextureHandleResidentNV(GLuint64 handle)
{
	return functions::IsTextureHandleResidentNV(handle);
}

GLboolean IsTransformFeedback(GLuint id)
{
	return functions::IsTransformFeedback(id);
}

GLboolean IsTransformFeedbackNV(GLuint id)
{
	return functions::IsTransformFeedbackNV(id);
}

GLboolean IsVariantEnabledEXT(GLuint id, GLenum cap)
{
	return functions::IsVariantEnabledEXT(id, cap);
}

GLboolean IsVertexArray(GLuint array)
{
	return functions::IsVertexArray(array);
}

GLboolean IsVertexArrayAPPLE(GLuint array)
{
	return functions::IsVertexArrayAPPLE(array);
}

GLboolean IsVertexArrayOES(GLuint array)
{
	return functions::IsVertexArrayOES(array);
}

GLboolean IsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
	return functions::IsVertexAttribEnabledAPPLE(index, pname);
}

void LabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
	return functions::LabelObjectEXT(type, object, length, label);
}

void LightEnviSGIX(GLenum pname, GLint param)
{
	return functions::LightEnviSGIX(pname, param);
}

void LightModelf(GLenum pname, GLfloat param)
{
	return functions::LightModelf(pname, param);
}

void LightModelfv(GLenum pname, const GLfloat * params)
{
	return functions::LightModelfv(pname, params);
}

void LightModeli(GLenum pname, GLint param)
{
	return functions::LightModeli(pname, param);
}

void LightModeliv(GLenum pname, const GLint * params)
{
	return functions::LightModeliv(pname, params);
}

void LightModelx(GLenum pname, GLfixed param)
{
	return functions::LightModelx(pname, param);
}

void LightModelxOES(GLenum pname, GLfixed param)
{
	return functions::LightModelxOES(pname, param);
}

void LightModelxv(GLenum pname, const GLfixed * param)
{
	return functions::LightModelxv(pname, param);
}

void LightModelxvOES(GLenum pname, const GLfixed * param)
{
	return functions::LightModelxvOES(pname, param);
}

void Lightf(GLenum light, GLenum pname, GLfloat param)
{
	return functions::Lightf(light, pname, param);
}

void Lightfv(GLenum light, GLenum pname, const GLfloat * params)
{
	return functions::Lightfv(light, pname, params);
}

void Lighti(GLenum light, GLenum pname, GLint param)
{
	return functions::Lighti(light, pname, param);
}

void Lightiv(GLenum light, GLenum pname, const GLint * params)
{
	return functions::Lightiv(light, pname, params);
}

void Lightx(GLenum light, GLenum pname, GLfixed param)
{
	return functions::Lightx(light, pname, param);
}

void LightxOES(GLenum light, GLenum pname, GLfixed param)
{
	return functions::LightxOES(light, pname, param);
}

void Lightxv(GLenum light, GLenum pname, const GLfixed * params)
{
	return functions::Lightxv(light, pname, params);
}

void LightxvOES(GLenum light, GLenum pname, const GLfixed * params)
{
	return functions::LightxvOES(light, pname, params);
}

void LineStipple(GLint factor, GLushort pattern)
{
	return functions::LineStipple(factor, pattern);
}

void LineWidth(GLfloat width)
{
	return functions::LineWidth(width);
}

void LineWidthx(GLfixed width)
{
	return functions::LineWidthx(width);
}

void LineWidthxOES(GLfixed width)
{
	return functions::LineWidthxOES(width);
}

void LinkProgram(GLuint program)
{
	return functions::LinkProgram(program);
}

void LinkProgramARB(GLhandleARB programObj)
{
	return functions::LinkProgramARB(programObj);
}

void ListBase(GLuint base)
{
	return functions::ListBase(base);
}

void ListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
	return functions::ListParameterfSGIX(list, pname, param);
}

void ListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat * params)
{
	return functions::ListParameterfvSGIX(list, pname, params);
}

void ListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
	return functions::ListParameteriSGIX(list, pname, param);
}

void ListParameterivSGIX(GLuint list, GLenum pname, const GLint * params)
{
	return functions::ListParameterivSGIX(list, pname, params);
}

void LoadIdentity()
{
	return functions::LoadIdentity();
}

void LoadIdentityDeformationMapSGIX(GLbitfield mask)
{
	return functions::LoadIdentityDeformationMapSGIX(mask);
}

void LoadMatrixd(const GLdouble * m)
{
	return functions::LoadMatrixd(m);
}

void LoadMatrixf(const GLfloat * m)
{
	return functions::LoadMatrixf(m);
}

void LoadMatrixx(const GLfixed * m)
{
	return functions::LoadMatrixx(m);
}

void LoadMatrixxOES(const GLfixed * m)
{
	return functions::LoadMatrixxOES(m);
}

void LoadName(GLuint name)
{
	return functions::LoadName(name);
}

void LoadPaletteFromModelViewMatrixOES()
{
	return functions::LoadPaletteFromModelViewMatrixOES();
}

void LoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
	return functions::LoadProgramNV(target, id, len, program);
}

void LoadTransposeMatrixd(const GLdouble * m)
{
	return functions::LoadTransposeMatrixd(m);
}

void LoadTransposeMatrixdARB(const GLdouble * m)
{
	return functions::LoadTransposeMatrixdARB(m);
}

void LoadTransposeMatrixf(const GLfloat * m)
{
	return functions::LoadTransposeMatrixf(m);
}

void LoadTransposeMatrixfARB(const GLfloat * m)
{
	return functions::LoadTransposeMatrixfARB(m);
}

void LoadTransposeMatrixxOES(const GLfixed * m)
{
	return functions::LoadTransposeMatrixxOES(m);
}

void LockArraysEXT(GLint first, GLsizei count)
{
	return functions::LockArraysEXT(first, count);
}

void LogicOp(GLenum opcode)
{
	return functions::LogicOp(opcode);
}

void MakeBufferNonResidentNV(GLenum target)
{
	return functions::MakeBufferNonResidentNV(target);
}

void MakeBufferResidentNV(GLenum target, GLenum access)
{
	return functions::MakeBufferResidentNV(target, access);
}

void MakeImageHandleNonResidentARB(GLuint64 handle)
{
	return functions::MakeImageHandleNonResidentARB(handle);
}

void MakeImageHandleNonResidentNV(GLuint64 handle)
{
	return functions::MakeImageHandleNonResidentNV(handle);
}

void MakeImageHandleResidentARB(GLuint64 handle, GLenum access)
{
	return functions::MakeImageHandleResidentARB(handle, access);
}

void MakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
	return functions::MakeImageHandleResidentNV(handle, access);
}

void MakeNamedBufferNonResidentNV(GLuint buffer)
{
	return functions::MakeNamedBufferNonResidentNV(buffer);
}

void MakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
	return functions::MakeNamedBufferResidentNV(buffer, access);
}

void MakeTextureHandleNonResidentARB(GLuint64 handle)
{
	return functions::MakeTextureHandleNonResidentARB(handle);
}

void MakeTextureHandleNonResidentNV(GLuint64 handle)
{
	return functions::MakeTextureHandleNonResidentNV(handle);
}

void MakeTextureHandleResidentARB(GLuint64 handle)
{
	return functions::MakeTextureHandleResidentARB(handle);
}

void MakeTextureHandleResidentNV(GLuint64 handle)
{
	return functions::MakeTextureHandleResidentNV(handle);
}

void Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
	return functions::Map1d(target, u1, u2, stride, order, points);
}

void Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
	return functions::Map1f(target, u1, u2, stride, order, points);
}

void Map1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points)
{
	return functions::Map1xOES(target, u1, u2, stride, order, points);
}

void Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
	return functions::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
	return functions::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void Map2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points)
{
	return functions::Map2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * MapBuffer(GLenum target, GLenum access)
{
	return functions::MapBuffer(target, access);
}

void * MapBufferARB(GLenum target, GLenum access)
{
	return functions::MapBufferARB(target, access);
}

void * MapBufferOES(GLenum target, GLenum access)
{
	return functions::MapBufferOES(target, access);
}

void * MapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::MapBufferRange(target, offset, length, access);
}

void * MapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::MapBufferRangeEXT(target, offset, length, access);
}

void MapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void * points)
{
	return functions::MapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

void MapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	return functions::MapGrid1d(un, u1, u2);
}

void MapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	return functions::MapGrid1f(un, u1, u2);
}

void MapGrid1xOES(GLint n, GLfixed u1, GLfixed u2)
{
	return functions::MapGrid1xOES(n, u1, u2);
}

void MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	return functions::MapGrid2d(un, u1, u2, vn, v1, v2);
}

void MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	return functions::MapGrid2f(un, u1, u2, vn, v1, v2);
}

void MapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2)
{
	return functions::MapGrid2xOES(n, u1, u2, v1, v2);
}

void * MapNamedBufferEXT(GLuint buffer, GLenum access)
{
	return functions::MapNamedBufferEXT(buffer, access);
}

void * MapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return functions::MapNamedBufferRangeEXT(buffer, offset, length, access);
}

void * MapObjectBufferATI(GLuint buffer)
{
	return functions::MapObjectBufferATI(buffer);
}

void MapParameterfvNV(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::MapParameterfvNV(target, pname, params);
}

void MapParameterivNV(GLenum target, GLenum pname, const GLint * params)
{
	return functions::MapParameterivNV(target, pname, params);
}

void * MapTexture2DINTEL(GLuint texture, GLint level, GLbitfield access, GLint * stride, GLenum * layout)
{
	return functions::MapTexture2DINTEL(texture, level, access, stride, layout);
}

void MapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
	return functions::MapVertexAttrib1dAPPLE(index, size, u1, u2, stride, order, points);
}

void MapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
	return functions::MapVertexAttrib1fAPPLE(index, size, u1, u2, stride, order, points);
}

void MapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
	return functions::MapVertexAttrib2dAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void MapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
	return functions::MapVertexAttrib2fAPPLE(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void Materialf(GLenum face, GLenum pname, GLfloat param)
{
	return functions::Materialf(face, pname, param);
}

void Materialfv(GLenum face, GLenum pname, const GLfloat * params)
{
	return functions::Materialfv(face, pname, params);
}

void Materiali(GLenum face, GLenum pname, GLint param)
{
	return functions::Materiali(face, pname, param);
}

void Materialiv(GLenum face, GLenum pname, const GLint * params)
{
	return functions::Materialiv(face, pname, params);
}

void Materialx(GLenum face, GLenum pname, GLfixed param)
{
	return functions::Materialx(face, pname, param);
}

void MaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	return functions::MaterialxOES(face, pname, param);
}

void Materialxv(GLenum face, GLenum pname, const GLfixed * param)
{
	return functions::Materialxv(face, pname, param);
}

void MaterialxvOES(GLenum face, GLenum pname, const GLfixed * param)
{
	return functions::MaterialxvOES(face, pname, param);
}

void MatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void MatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::MatrixIndexPointerARB(size, type, stride, pointer);
}

void MatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::MatrixIndexPointerOES(size, type, stride, pointer);
}

void MatrixIndexubvARB(GLint size, const GLubyte * indices)
{
	return functions::MatrixIndexubvARB(size, indices);
}

void MatrixIndexuivARB(GLint size, const GLuint * indices)
{
	return functions::MatrixIndexuivARB(size, indices);
}

void MatrixIndexusvARB(GLint size, const GLushort * indices)
{
	return functions::MatrixIndexusvARB(size, indices);
}

void MatrixLoadIdentityEXT(GLenum mode)
{
	return functions::MatrixLoadIdentityEXT(mode);
}

void MatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
	return functions::MatrixLoadTransposedEXT(mode, m);
}

void MatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
	return functions::MatrixLoadTransposefEXT(mode, m);
}

void MatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
	return functions::MatrixLoaddEXT(mode, m);
}

void MatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
	return functions::MatrixLoadfEXT(mode, m);
}

void MatrixMode(GLenum mode)
{
	return functions::MatrixMode(mode);
}

void MatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
	return functions::MatrixMultTransposedEXT(mode, m);
}

void MatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
	return functions::MatrixMultTransposefEXT(mode, m);
}

void MatrixMultdEXT(GLenum mode, const GLdouble * m)
{
	return functions::MatrixMultdEXT(mode, m);
}

void MatrixMultfEXT(GLenum mode, const GLfloat * m)
{
	return functions::MatrixMultfEXT(mode, m);
}

void MatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void MatrixPopEXT(GLenum mode)
{
	return functions::MatrixPopEXT(mode);
}

void MatrixPushEXT(GLenum mode)
{
	return functions::MatrixPushEXT(mode);
}

void MatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::MatrixRotatedEXT(mode, angle, x, y, z);
}

void MatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::MatrixRotatefEXT(mode, angle, x, y, z);
}

void MatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::MatrixScaledEXT(mode, x, y, z);
}

void MatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::MatrixScalefEXT(mode, x, y, z);
}

void MatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::MatrixTranslatedEXT(mode, x, y, z);
}

void MatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::MatrixTranslatefEXT(mode, x, y, z);
}

void MemoryBarrier(GLbitfield barriers)
{
	return functions::MemoryBarrier(barriers);
}

void MemoryBarrierEXT(GLbitfield barriers)
{
	return functions::MemoryBarrierEXT(barriers);
}

void MinSampleShading(GLfloat value)
{
	return functions::MinSampleShading(value);
}

void MinSampleShadingARB(GLfloat value)
{
	return functions::MinSampleShadingARB(value);
}

void Minmax(GLenum target, GLenum internalformat, GLboolean sink)
{
	return functions::Minmax(target, internalformat, sink);
}

void MinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
	return functions::MinmaxEXT(target, internalformat, sink);
}

void MultMatrixd(const GLdouble * m)
{
	return functions::MultMatrixd(m);
}

void MultMatrixf(const GLfloat * m)
{
	return functions::MultMatrixf(m);
}

void MultMatrixx(const GLfixed * m)
{
	return functions::MultMatrixx(m);
}

void MultMatrixxOES(const GLfixed * m)
{
	return functions::MultMatrixxOES(m);
}

void MultTransposeMatrixd(const GLdouble * m)
{
	return functions::MultTransposeMatrixd(m);
}

void MultTransposeMatrixdARB(const GLdouble * m)
{
	return functions::MultTransposeMatrixdARB(m);
}

void MultTransposeMatrixf(const GLfloat * m)
{
	return functions::MultTransposeMatrixf(m);
}

void MultTransposeMatrixfARB(const GLfloat * m)
{
	return functions::MultTransposeMatrixfARB(m);
}

void MultTransposeMatrixxOES(const GLfixed * m)
{
	return functions::MultTransposeMatrixxOES(m);
}

void MultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
	return functions::MultiDrawArrays(mode, first, count, drawcount);
}

void MultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::MultiDrawArraysEXT(mode, first, count, primcount);
}

void MultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
	return functions::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void MultiDrawArraysIndirectAMD(GLenum mode, const void * indirect, GLsizei primcount, GLsizei stride)
{
	return functions::MultiDrawArraysIndirectAMD(mode, indirect, primcount, stride);
}

void MultiDrawArraysIndirectBindlessNV(GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
	return functions::MultiDrawArraysIndirectBindlessNV(mode, indirect, drawCount, stride, vertexBufferCount);
}

void MultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
	return functions::MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

void MultiDrawElementArrayAPPLE(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::MultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

void MultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
	return functions::MultiDrawElements(mode, count, type, indices, drawcount);
}

void MultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
	return functions::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void MultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
	return functions::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void MultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
	return functions::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void MultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void * indirect, GLsizei primcount, GLsizei stride)
{
	return functions::MultiDrawElementsIndirectAMD(mode, type, indirect, primcount, stride);
}

void MultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount)
{
	return functions::MultiDrawElementsIndirectBindlessNV(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void MultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
	return functions::MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void MultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint * first, const GLsizei * count, GLsizei primcount)
{
	return functions::MultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}

void MultiModeDrawArraysIBM(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride)
{
	return functions::MultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

void MultiModeDrawElementsIBM(const GLenum * mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, GLint modestride)
{
	return functions::MultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}

void MultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::MultiTexBufferEXT(texunit, target, internalformat, buffer);
}

void MultiTexCoord1bOES(GLenum texture, GLbyte s)
{
	return functions::MultiTexCoord1bOES(texture, s);
}

void MultiTexCoord1bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::MultiTexCoord1bvOES(texture, coords);
}

void MultiTexCoord1d(GLenum target, GLdouble s)
{
	return functions::MultiTexCoord1d(target, s);
}

void MultiTexCoord1dARB(GLenum target, GLdouble s)
{
	return functions::MultiTexCoord1dARB(target, s);
}

void MultiTexCoord1dv(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord1dv(target, v);
}

void MultiTexCoord1dvARB(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord1dvARB(target, v);
}

void MultiTexCoord1f(GLenum target, GLfloat s)
{
	return functions::MultiTexCoord1f(target, s);
}

void MultiTexCoord1fARB(GLenum target, GLfloat s)
{
	return functions::MultiTexCoord1fARB(target, s);
}

void MultiTexCoord1fv(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord1fv(target, v);
}

void MultiTexCoord1fvARB(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord1fvARB(target, v);
}

void MultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
	return functions::MultiTexCoord1hNV(target, s);
}

void MultiTexCoord1hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::MultiTexCoord1hvNV(target, v);
}

void MultiTexCoord1i(GLenum target, GLint s)
{
	return functions::MultiTexCoord1i(target, s);
}

void MultiTexCoord1iARB(GLenum target, GLint s)
{
	return functions::MultiTexCoord1iARB(target, s);
}

void MultiTexCoord1iv(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord1iv(target, v);
}

void MultiTexCoord1ivARB(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord1ivARB(target, v);
}

void MultiTexCoord1s(GLenum target, GLshort s)
{
	return functions::MultiTexCoord1s(target, s);
}

void MultiTexCoord1sARB(GLenum target, GLshort s)
{
	return functions::MultiTexCoord1sARB(target, s);
}

void MultiTexCoord1sv(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord1sv(target, v);
}

void MultiTexCoord1svARB(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord1svARB(target, v);
}

void MultiTexCoord1xOES(GLenum texture, GLfixed s)
{
	return functions::MultiTexCoord1xOES(texture, s);
}

void MultiTexCoord1xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::MultiTexCoord1xvOES(texture, coords);
}

void MultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t)
{
	return functions::MultiTexCoord2bOES(texture, s, t);
}

void MultiTexCoord2bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::MultiTexCoord2bvOES(texture, coords);
}

void MultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
	return functions::MultiTexCoord2d(target, s, t);
}

void MultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
	return functions::MultiTexCoord2dARB(target, s, t);
}

void MultiTexCoord2dv(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord2dv(target, v);
}

void MultiTexCoord2dvARB(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord2dvARB(target, v);
}

void MultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
	return functions::MultiTexCoord2f(target, s, t);
}

void MultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	return functions::MultiTexCoord2fARB(target, s, t);
}

void MultiTexCoord2fv(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord2fv(target, v);
}

void MultiTexCoord2fvARB(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord2fvARB(target, v);
}

void MultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
	return functions::MultiTexCoord2hNV(target, s, t);
}

void MultiTexCoord2hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::MultiTexCoord2hvNV(target, v);
}

void MultiTexCoord2i(GLenum target, GLint s, GLint t)
{
	return functions::MultiTexCoord2i(target, s, t);
}

void MultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
	return functions::MultiTexCoord2iARB(target, s, t);
}

void MultiTexCoord2iv(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord2iv(target, v);
}

void MultiTexCoord2ivARB(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord2ivARB(target, v);
}

void MultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
	return functions::MultiTexCoord2s(target, s, t);
}

void MultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
	return functions::MultiTexCoord2sARB(target, s, t);
}

void MultiTexCoord2sv(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord2sv(target, v);
}

void MultiTexCoord2svARB(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord2svARB(target, v);
}

void MultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t)
{
	return functions::MultiTexCoord2xOES(texture, s, t);
}

void MultiTexCoord2xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::MultiTexCoord2xvOES(texture, coords);
}

void MultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r)
{
	return functions::MultiTexCoord3bOES(texture, s, t, r);
}

void MultiTexCoord3bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::MultiTexCoord3bvOES(texture, coords);
}

void MultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	return functions::MultiTexCoord3d(target, s, t, r);
}

void MultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	return functions::MultiTexCoord3dARB(target, s, t, r);
}

void MultiTexCoord3dv(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord3dv(target, v);
}

void MultiTexCoord3dvARB(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord3dvARB(target, v);
}

void MultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	return functions::MultiTexCoord3f(target, s, t, r);
}

void MultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	return functions::MultiTexCoord3fARB(target, s, t, r);
}

void MultiTexCoord3fv(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord3fv(target, v);
}

void MultiTexCoord3fvARB(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord3fvARB(target, v);
}

void MultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	return functions::MultiTexCoord3hNV(target, s, t, r);
}

void MultiTexCoord3hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::MultiTexCoord3hvNV(target, v);
}

void MultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
	return functions::MultiTexCoord3i(target, s, t, r);
}

void MultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
	return functions::MultiTexCoord3iARB(target, s, t, r);
}

void MultiTexCoord3iv(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord3iv(target, v);
}

void MultiTexCoord3ivARB(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord3ivARB(target, v);
}

void MultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
	return functions::MultiTexCoord3s(target, s, t, r);
}

void MultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
	return functions::MultiTexCoord3sARB(target, s, t, r);
}

void MultiTexCoord3sv(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord3sv(target, v);
}

void MultiTexCoord3svARB(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord3svARB(target, v);
}

void MultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r)
{
	return functions::MultiTexCoord3xOES(texture, s, t, r);
}

void MultiTexCoord3xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::MultiTexCoord3xvOES(texture, coords);
}

void MultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	return functions::MultiTexCoord4bOES(texture, s, t, r, q);
}

void MultiTexCoord4bvOES(GLenum texture, const GLbyte * coords)
{
	return functions::MultiTexCoord4bvOES(texture, coords);
}

void MultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::MultiTexCoord4d(target, s, t, r, q);
}

void MultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::MultiTexCoord4dARB(target, s, t, r, q);
}

void MultiTexCoord4dv(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord4dv(target, v);
}

void MultiTexCoord4dvARB(GLenum target, const GLdouble * v)
{
	return functions::MultiTexCoord4dvARB(target, v);
}

void MultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::MultiTexCoord4f(target, s, t, r, q);
}

void MultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::MultiTexCoord4fARB(target, s, t, r, q);
}

void MultiTexCoord4fv(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord4fv(target, v);
}

void MultiTexCoord4fvARB(GLenum target, const GLfloat * v)
{
	return functions::MultiTexCoord4fvARB(target, v);
}

void MultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	return functions::MultiTexCoord4hNV(target, s, t, r, q);
}

void MultiTexCoord4hvNV(GLenum target, const GLhalfNV * v)
{
	return functions::MultiTexCoord4hvNV(target, v);
}

void MultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	return functions::MultiTexCoord4i(target, s, t, r, q);
}

void MultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	return functions::MultiTexCoord4iARB(target, s, t, r, q);
}

void MultiTexCoord4iv(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord4iv(target, v);
}

void MultiTexCoord4ivARB(GLenum target, const GLint * v)
{
	return functions::MultiTexCoord4ivARB(target, v);
}

void MultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::MultiTexCoord4s(target, s, t, r, q);
}

void MultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::MultiTexCoord4sARB(target, s, t, r, q);
}

void MultiTexCoord4sv(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord4sv(target, v);
}

void MultiTexCoord4svARB(GLenum target, const GLshort * v)
{
	return functions::MultiTexCoord4svARB(target, v);
}

void MultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::MultiTexCoord4x(texture, s, t, r, q);
}

void MultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::MultiTexCoord4xOES(texture, s, t, r, q);
}

void MultiTexCoord4xvOES(GLenum texture, const GLfixed * coords)
{
	return functions::MultiTexCoord4xvOES(texture, coords);
}

void MultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::MultiTexCoordP1ui(texture, type, coords);
}

void MultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::MultiTexCoordP1uiv(texture, type, coords);
}

void MultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::MultiTexCoordP2ui(texture, type, coords);
}

void MultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::MultiTexCoordP2uiv(texture, type, coords);
}

void MultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::MultiTexCoordP3ui(texture, type, coords);
}

void MultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::MultiTexCoordP3uiv(texture, type, coords);
}

void MultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
	return functions::MultiTexCoordP4ui(texture, type, coords);
}

void MultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
	return functions::MultiTexCoordP4uiv(texture, type, coords);
}

void MultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::MultiTexCoordPointerEXT(texunit, size, type, stride, pointer);
}

void MultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	return functions::MultiTexEnvfEXT(texunit, target, pname, param);
}

void MultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::MultiTexEnvfvEXT(texunit, target, pname, params);
}

void MultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	return functions::MultiTexEnviEXT(texunit, target, pname, param);
}

void MultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::MultiTexEnvivEXT(texunit, target, pname, params);
}

void MultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
	return functions::MultiTexGendEXT(texunit, coord, pname, param);
}

void MultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params)
{
	return functions::MultiTexGendvEXT(texunit, coord, pname, params);
}

void MultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
	return functions::MultiTexGenfEXT(texunit, coord, pname, param);
}

void MultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::MultiTexGenfvEXT(texunit, coord, pname, params);
}

void MultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
	return functions::MultiTexGeniEXT(texunit, coord, pname, param);
}

void MultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint * params)
{
	return functions::MultiTexGenivEXT(texunit, coord, pname, params);
}

void MultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexImage1DEXT(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void MultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexImage2DEXT(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void MultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexImage3DEXT(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void MultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::MultiTexParameterIivEXT(texunit, target, pname, params);
}

void MultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint * params)
{
	return functions::MultiTexParameterIuivEXT(texunit, target, pname, params);
}

void MultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	return functions::MultiTexParameterfEXT(texunit, target, pname, param);
}

void MultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::MultiTexParameterfvEXT(texunit, target, pname, params);
}

void MultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	return functions::MultiTexParameteriEXT(texunit, target, pname, param);
}

void MultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint * params)
{
	return functions::MultiTexParameterivEXT(texunit, target, pname, params);
}

void MultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
	return functions::MultiTexRenderbufferEXT(texunit, target, renderbuffer);
}

void MultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexSubImage1DEXT(texunit, target, level, xoffset, width, format, type, pixels);
}

void MultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexSubImage2DEXT(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void MultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::MultiTexSubImage3DEXT(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void NamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
	return functions::NamedBufferDataEXT(buffer, size, data, usage);
}

void NamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags)
{
	return functions::NamedBufferStorageEXT(buffer, size, data, flags);
}

void NamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
	return functions::NamedBufferSubDataEXT(buffer, offset, size, data);
}

void NamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	return functions::NamedCopyBufferSubDataEXT(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void NamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param)
{
	return functions::NamedFramebufferParameteriEXT(framebuffer, pname, param);
}

void NamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	return functions::NamedFramebufferRenderbufferEXT(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void NamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::NamedFramebufferTexture1DEXT(framebuffer, attachment, textarget, texture, level);
}

void NamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	return functions::NamedFramebufferTexture2DEXT(framebuffer, attachment, textarget, texture, level);
}

void NamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	return functions::NamedFramebufferTexture3DEXT(framebuffer, attachment, textarget, texture, level, zoffset);
}

void NamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
	return functions::NamedFramebufferTextureEXT(framebuffer, attachment, texture, level);
}

void NamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	return functions::NamedFramebufferTextureFaceEXT(framebuffer, attachment, texture, level, face);
}

void NamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	return functions::NamedFramebufferTextureLayerEXT(framebuffer, attachment, texture, level, layer);
}

void NamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::NamedProgramLocalParameter4dEXT(program, target, index, x, y, z, w);
}

void NamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble * params)
{
	return functions::NamedProgramLocalParameter4dvEXT(program, target, index, params);
}

void NamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::NamedProgramLocalParameter4fEXT(program, target, index, x, y, z, w);
}

void NamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat * params)
{
	return functions::NamedProgramLocalParameter4fvEXT(program, target, index, params);
}

void NamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::NamedProgramLocalParameterI4iEXT(program, target, index, x, y, z, w);
}

void NamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint * params)
{
	return functions::NamedProgramLocalParameterI4ivEXT(program, target, index, params);
}

void NamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::NamedProgramLocalParameterI4uiEXT(program, target, index, x, y, z, w);
}

void NamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint * params)
{
	return functions::NamedProgramLocalParameterI4uivEXT(program, target, index, params);
}

void NamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::NamedProgramLocalParameters4fvEXT(program, target, index, count, params);
}

void NamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::NamedProgramLocalParametersI4ivEXT(program, target, index, count, params);
}

void NamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::NamedProgramLocalParametersI4uivEXT(program, target, index, count, params);
}

void NamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void * string)
{
	return functions::NamedProgramStringEXT(program, target, format, len, string);
}

void NamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::NamedRenderbufferStorageEXT(renderbuffer, internalformat, width, height);
}

void NamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::NamedRenderbufferStorageMultisampleCoverageEXT(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void NamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::NamedRenderbufferStorageMultisampleEXT(renderbuffer, samples, internalformat, width, height);
}

void NamedStringARB(GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
	return functions::NamedStringARB(type, namelen, name, stringlen, string);
}

void NewList(GLuint list, GLenum mode)
{
	return functions::NewList(list, mode);
}

GLuint NewObjectBufferATI(GLsizei size, const void * pointer, GLenum usage)
{
	return functions::NewObjectBufferATI(size, pointer, usage);
}

void Normal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	return functions::Normal3b(nx, ny, nz);
}

void Normal3bv(const GLbyte * v)
{
	return functions::Normal3bv(v);
}

void Normal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	return functions::Normal3d(nx, ny, nz);
}

void Normal3dv(const GLdouble * v)
{
	return functions::Normal3dv(v);
}

void Normal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	return functions::Normal3f(nx, ny, nz);
}

void Normal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Normal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

void Normal3fVertex3fvSUN(const GLfloat * n, const GLfloat * v)
{
	return functions::Normal3fVertex3fvSUN(n, v);
}

void Normal3fv(const GLfloat * v)
{
	return functions::Normal3fv(v);
}

void Normal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
	return functions::Normal3hNV(nx, ny, nz);
}

void Normal3hvNV(const GLhalfNV * v)
{
	return functions::Normal3hvNV(v);
}

void Normal3i(GLint nx, GLint ny, GLint nz)
{
	return functions::Normal3i(nx, ny, nz);
}

void Normal3iv(const GLint * v)
{
	return functions::Normal3iv(v);
}

void Normal3s(GLshort nx, GLshort ny, GLshort nz)
{
	return functions::Normal3s(nx, ny, nz);
}

void Normal3sv(const GLshort * v)
{
	return functions::Normal3sv(v);
}

void Normal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
	return functions::Normal3x(nx, ny, nz);
}

void Normal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
	return functions::Normal3xOES(nx, ny, nz);
}

void Normal3xvOES(const GLfixed * coords)
{
	return functions::Normal3xvOES(coords);
}

void NormalFormatNV(GLenum type, GLsizei stride)
{
	return functions::NormalFormatNV(type, stride);
}

void NormalP3ui(GLenum type, GLuint coords)
{
	return functions::NormalP3ui(type, coords);
}

void NormalP3uiv(GLenum type, const GLuint * coords)
{
	return functions::NormalP3uiv(type, coords);
}

void NormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::NormalPointer(type, stride, pointer);
}

void NormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::NormalPointerEXT(type, stride, count, pointer);
}

void NormalPointerListIBM(GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::NormalPointerListIBM(type, stride, pointer, ptrstride);
}

void NormalPointervINTEL(GLenum type, const void ** pointer)
{
	return functions::NormalPointervINTEL(type, pointer);
}

void NormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
	return functions::NormalStream3bATI(stream, nx, ny, nz);
}

void NormalStream3bvATI(GLenum stream, const GLbyte * coords)
{
	return functions::NormalStream3bvATI(stream, coords);
}

void NormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
	return functions::NormalStream3dATI(stream, nx, ny, nz);
}

void NormalStream3dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::NormalStream3dvATI(stream, coords);
}

void NormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
	return functions::NormalStream3fATI(stream, nx, ny, nz);
}

void NormalStream3fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::NormalStream3fvATI(stream, coords);
}

void NormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
	return functions::NormalStream3iATI(stream, nx, ny, nz);
}

void NormalStream3ivATI(GLenum stream, const GLint * coords)
{
	return functions::NormalStream3ivATI(stream, coords);
}

void NormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
	return functions::NormalStream3sATI(stream, nx, ny, nz);
}

void NormalStream3svATI(GLenum stream, const GLshort * coords)
{
	return functions::NormalStream3svATI(stream, coords);
}

void ObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
	return functions::ObjectLabel(identifier, name, length, label);
}

void ObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
	return functions::ObjectLabelKHR(identifier, name, length, label);
}

void ObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
	return functions::ObjectPtrLabel(ptr, length, label);
}

void ObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
	return functions::ObjectPtrLabelKHR(ptr, length, label);
}

GLenum ObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return functions::ObjectPurgeableAPPLE(objectType, name, option);
}

GLenum ObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return functions::ObjectUnpurgeableAPPLE(objectType, name, option);
}

void Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	return functions::Ortho(left, right, bottom, top, zNear, zFar);
}

void Orthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::Orthof(l, r, b, t, n, f);
}

void OrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	return functions::OrthofOES(l, r, b, t, n, f);
}

void Orthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::Orthox(l, r, b, t, n, f);
}

void OrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
	return functions::OrthoxOES(l, r, b, t, n, f);
}

void PNTrianglesfATI(GLenum pname, GLfloat param)
{
	return functions::PNTrianglesfATI(pname, param);
}

void PNTrianglesiATI(GLenum pname, GLint param)
{
	return functions::PNTrianglesiATI(pname, param);
}

void PassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
	return functions::PassTexCoordATI(dst, coord, swizzle);
}

void PassThrough(GLfloat token)
{
	return functions::PassThrough(token);
}

void PassThroughxOES(GLfixed token)
{
	return functions::PassThroughxOES(token);
}

void PatchParameterfv(GLenum pname, const GLfloat * values)
{
	return functions::PatchParameterfv(pname, values);
}

void PatchParameteri(GLenum pname, GLint value)
{
	return functions::PatchParameteri(pname, value);
}

void PathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs)
{
	return functions::PathColorGenNV(color, genMode, colorFormat, coeffs);
}

void PathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::PathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}

void PathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::PathCoordsNV(path, numCoords, coordType, coords);
}

void PathCoverDepthFuncNV(GLenum func)
{
	return functions::PathCoverDepthFuncNV(func);
}

void PathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
	return functions::PathDashArrayNV(path, dashCount, dashArray);
}

void PathFogGenNV(GLenum genMode)
{
	return functions::PathFogGenNV(genMode);
}

void PathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	return functions::PathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void PathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	return functions::PathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void PathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
	return functions::PathParameterfNV(path, pname, value);
}

void PathParameterfvNV(GLuint path, GLenum pname, const GLfloat * value)
{
	return functions::PathParameterfvNV(path, pname, value);
}

void PathParameteriNV(GLuint path, GLenum pname, GLint value)
{
	return functions::PathParameteriNV(path, pname, value);
}

void PathParameterivNV(GLuint path, GLenum pname, const GLint * value)
{
	return functions::PathParameterivNV(path, pname, value);
}

void PathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
	return functions::PathStencilDepthOffsetNV(factor, units);
}

void PathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
	return functions::PathStencilFuncNV(func, ref, mask);
}

void PathStringNV(GLuint path, GLenum format, GLsizei length, const void * pathString)
{
	return functions::PathStringNV(path, format, length, pathString);
}

void PathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::PathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void PathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
	return functions::PathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}

void PathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs)
{
	return functions::PathTexGenNV(texCoordSet, genMode, components, coeffs);
}

void PauseTransformFeedback()
{
	return functions::PauseTransformFeedback();
}

void PauseTransformFeedbackNV()
{
	return functions::PauseTransformFeedbackNV();
}

void PixelDataRangeNV(GLenum target, GLsizei length, const void * pointer)
{
	return functions::PixelDataRangeNV(target, length, pointer);
}

void PixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
	return functions::PixelMapfv(map, mapsize, values);
}

void PixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
	return functions::PixelMapuiv(map, mapsize, values);
}

void PixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
	return functions::PixelMapusv(map, mapsize, values);
}

void PixelMapx(GLenum map, GLint size, const GLfixed * values)
{
	return functions::PixelMapx(map, size, values);
}

void PixelStoref(GLenum pname, GLfloat param)
{
	return functions::PixelStoref(pname, param);
}

void PixelStorei(GLenum pname, GLint param)
{
	return functions::PixelStorei(pname, param);
}

void PixelStorex(GLenum pname, GLfixed param)
{
	return functions::PixelStorex(pname, param);
}

void PixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
	return functions::PixelTexGenParameterfSGIS(pname, param);
}

void PixelTexGenParameterfvSGIS(GLenum pname, const GLfloat * params)
{
	return functions::PixelTexGenParameterfvSGIS(pname, params);
}

void PixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
	return functions::PixelTexGenParameteriSGIS(pname, param);
}

void PixelTexGenParameterivSGIS(GLenum pname, const GLint * params)
{
	return functions::PixelTexGenParameterivSGIS(pname, params);
}

void PixelTexGenSGIX(GLenum mode)
{
	return functions::PixelTexGenSGIX(mode);
}

void PixelTransferf(GLenum pname, GLfloat param)
{
	return functions::PixelTransferf(pname, param);
}

void PixelTransferi(GLenum pname, GLint param)
{
	return functions::PixelTransferi(pname, param);
}

void PixelTransferxOES(GLenum pname, GLfixed param)
{
	return functions::PixelTransferxOES(pname, param);
}

void PixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
	return functions::PixelTransformParameterfEXT(target, pname, param);
}

void PixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::PixelTransformParameterfvEXT(target, pname, params);
}

void PixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
	return functions::PixelTransformParameteriEXT(target, pname, param);
}

void PixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::PixelTransformParameterivEXT(target, pname, params);
}

void PixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	return functions::PixelZoom(xfactor, yfactor);
}

void PixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
	return functions::PixelZoomxOES(xfactor, yfactor);
}

GLboolean PointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
	return functions::PointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void PointParameterf(GLenum pname, GLfloat param)
{
	return functions::PointParameterf(pname, param);
}

void PointParameterfARB(GLenum pname, GLfloat param)
{
	return functions::PointParameterfARB(pname, param);
}

void PointParameterfEXT(GLenum pname, GLfloat param)
{
	return functions::PointParameterfEXT(pname, param);
}

void PointParameterfSGIS(GLenum pname, GLfloat param)
{
	return functions::PointParameterfSGIS(pname, param);
}

void PointParameterfv(GLenum pname, const GLfloat * params)
{
	return functions::PointParameterfv(pname, params);
}

void PointParameterfvARB(GLenum pname, const GLfloat * params)
{
	return functions::PointParameterfvARB(pname, params);
}

void PointParameterfvEXT(GLenum pname, const GLfloat * params)
{
	return functions::PointParameterfvEXT(pname, params);
}

void PointParameterfvSGIS(GLenum pname, const GLfloat * params)
{
	return functions::PointParameterfvSGIS(pname, params);
}

void PointParameteri(GLenum pname, GLint param)
{
	return functions::PointParameteri(pname, param);
}

void PointParameteriNV(GLenum pname, GLint param)
{
	return functions::PointParameteriNV(pname, param);
}

void PointParameteriv(GLenum pname, const GLint * params)
{
	return functions::PointParameteriv(pname, params);
}

void PointParameterivNV(GLenum pname, const GLint * params)
{
	return functions::PointParameterivNV(pname, params);
}

void PointParameterx(GLenum pname, GLfixed param)
{
	return functions::PointParameterx(pname, param);
}

void PointParameterxOES(GLenum pname, GLfixed param)
{
	return functions::PointParameterxOES(pname, param);
}

void PointParameterxv(GLenum pname, const GLfixed * params)
{
	return functions::PointParameterxv(pname, params);
}

void PointParameterxvOES(GLenum pname, const GLfixed * params)
{
	return functions::PointParameterxvOES(pname, params);
}

void PointSize(GLfloat size)
{
	return functions::PointSize(size);
}

void PointSizePointerOES(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::PointSizePointerOES(type, stride, pointer);
}

void PointSizex(GLfixed size)
{
	return functions::PointSizex(size);
}

void PointSizexOES(GLfixed size)
{
	return functions::PointSizexOES(size);
}

GLint PollAsyncSGIX(GLuint * markerp)
{
	return functions::PollAsyncSGIX(markerp);
}

GLint PollInstrumentsSGIX(GLint * marker_p)
{
	return functions::PollInstrumentsSGIX(marker_p);
}

void PolygonMode(GLenum face, GLenum mode)
{
	return functions::PolygonMode(face, mode);
}

void PolygonOffset(GLfloat factor, GLfloat units)
{
	return functions::PolygonOffset(factor, units);
}

void PolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
	return functions::PolygonOffsetEXT(factor, bias);
}

void PolygonOffsetx(GLfixed factor, GLfixed units)
{
	return functions::PolygonOffsetx(factor, units);
}

void PolygonOffsetxOES(GLfixed factor, GLfixed units)
{
	return functions::PolygonOffsetxOES(factor, units);
}

void PolygonStipple(const GLubyte * mask)
{
	return functions::PolygonStipple(mask);
}

void PopAttrib()
{
	return functions::PopAttrib();
}

void PopClientAttrib()
{
	return functions::PopClientAttrib();
}

void PopDebugGroup()
{
	return functions::PopDebugGroup();
}

void PopDebugGroupKHR()
{
	return functions::PopDebugGroupKHR();
}

void PopGroupMarkerEXT()
{
	return functions::PopGroupMarkerEXT();
}

void PopMatrix()
{
	return functions::PopMatrix();
}

void PopName()
{
	return functions::PopName();
}

void PresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
	return functions::PresentFrameDualFillNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

void PresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
	return functions::PresentFrameKeyedNV(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

void PrimitiveRestartIndex(GLuint index)
{
	return functions::PrimitiveRestartIndex(index);
}

void PrimitiveRestartIndexNV(GLuint index)
{
	return functions::PrimitiveRestartIndexNV(index);
}

void PrimitiveRestartNV()
{
	return functions::PrimitiveRestartNV();
}

void PrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
	return functions::PrioritizeTextures(n, textures, priorities);
}

void PrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
	return functions::PrioritizeTexturesEXT(n, textures, priorities);
}

void PrioritizeTexturesxOES(GLsizei n, const GLuint * textures, const GLfixed * priorities)
{
	return functions::PrioritizeTexturesxOES(n, textures, priorities);
}

void ProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
	return functions::ProgramBinary(program, binaryFormat, binary, length);
}

void ProgramBinaryOES(GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
	return functions::ProgramBinaryOES(program, binaryFormat, binary, length);
}

void ProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint * params)
{
	return functions::ProgramBufferParametersIivNV(target, bindingIndex, wordIndex, count, params);
}

void ProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint * params)
{
	return functions::ProgramBufferParametersIuivNV(target, bindingIndex, wordIndex, count, params);
}

void ProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat * params)
{
	return functions::ProgramBufferParametersfvNV(target, bindingIndex, wordIndex, count, params);
}

void ProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void ProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
	return functions::ProgramEnvParameter4dvARB(target, index, params);
}

void ProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void ProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
	return functions::ProgramEnvParameter4fvARB(target, index, params);
}

void ProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::ProgramEnvParameterI4iNV(target, index, x, y, z, w);
}

void ProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
	return functions::ProgramEnvParameterI4ivNV(target, index, params);
}

void ProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::ProgramEnvParameterI4uiNV(target, index, x, y, z, w);
}

void ProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
	return functions::ProgramEnvParameterI4uivNV(target, index, params);
}

void ProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::ProgramEnvParameters4fvEXT(target, index, count, params);
}

void ProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::ProgramEnvParametersI4ivNV(target, index, count, params);
}

void ProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::ProgramEnvParametersI4uivNV(target, index, count, params);
}

void ProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void ProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
	return functions::ProgramLocalParameter4dvARB(target, index, params);
}

void ProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void ProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
	return functions::ProgramLocalParameter4fvARB(target, index, params);
}

void ProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::ProgramLocalParameterI4iNV(target, index, x, y, z, w);
}

void ProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint * params)
{
	return functions::ProgramLocalParameterI4ivNV(target, index, params);
}

void ProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::ProgramLocalParameterI4uiNV(target, index, x, y, z, w);
}

void ProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint * params)
{
	return functions::ProgramLocalParameterI4uivNV(target, index, params);
}

void ProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat * params)
{
	return functions::ProgramLocalParameters4fvEXT(target, index, count, params);
}

void ProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint * params)
{
	return functions::ProgramLocalParametersI4ivNV(target, index, count, params);
}

void ProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint * params)
{
	return functions::ProgramLocalParametersI4uivNV(target, index, count, params);
}

void ProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void ProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
	return functions::ProgramNamedParameter4dvNV(id, len, name, v);
}

void ProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void ProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
	return functions::ProgramNamedParameter4fvNV(id, len, name, v);
}

void ProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::ProgramParameter4dNV(target, index, x, y, z, w);
}

void ProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * v)
{
	return functions::ProgramParameter4dvNV(target, index, v);
}

void ProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::ProgramParameter4fNV(target, index, x, y, z, w);
}

void ProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * v)
{
	return functions::ProgramParameter4fvNV(target, index, v);
}

void ProgramParameteri(GLuint program, GLenum pname, GLint value)
{
	return functions::ProgramParameteri(program, pname, value);
}

void ProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
	return functions::ProgramParameteriARB(program, pname, value);
}

void ProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
	return functions::ProgramParameteriEXT(program, pname, value);
}

void ProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::ProgramParameters4dvNV(target, index, count, v);
}

void ProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::ProgramParameters4fvNV(target, index, count, v);
}

void ProgramStringARB(GLenum target, GLenum format, GLsizei len, const void * string)
{
	return functions::ProgramStringARB(target, format, len, string);
}

void ProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint * params)
{
	return functions::ProgramSubroutineParametersuivNV(target, count, params);
}

void ProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
	return functions::ProgramUniform1d(program, location, v0);
}

void ProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
	return functions::ProgramUniform1dEXT(program, location, x);
}

void ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform1dv(program, location, count, value);
}

void ProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform1dvEXT(program, location, count, value);
}

void ProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
	return functions::ProgramUniform1f(program, location, v0);
}

void ProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
	return functions::ProgramUniform1fEXT(program, location, v0);
}

void ProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform1fv(program, location, count, value);
}

void ProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform1fvEXT(program, location, count, value);
}

void ProgramUniform1i(GLuint program, GLint location, GLint v0)
{
	return functions::ProgramUniform1i(program, location, v0);
}

void ProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
	return functions::ProgramUniform1i64NV(program, location, x);
}

void ProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::ProgramUniform1i64vNV(program, location, count, value);
}

void ProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
	return functions::ProgramUniform1iEXT(program, location, v0);
}

void ProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform1iv(program, location, count, value);
}

void ProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform1ivEXT(program, location, count, value);
}

void ProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
	return functions::ProgramUniform1ui(program, location, v0);
}

void ProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
	return functions::ProgramUniform1ui64NV(program, location, x);
}

void ProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::ProgramUniform1ui64vNV(program, location, count, value);
}

void ProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
	return functions::ProgramUniform1uiEXT(program, location, v0);
}

void ProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform1uiv(program, location, count, value);
}

void ProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform1uivEXT(program, location, count, value);
}

void ProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
	return functions::ProgramUniform2d(program, location, v0, v1);
}

void ProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
	return functions::ProgramUniform2dEXT(program, location, x, y);
}

void ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform2dv(program, location, count, value);
}

void ProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform2dvEXT(program, location, count, value);
}

void ProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	return functions::ProgramUniform2f(program, location, v0, v1);
}

void ProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	return functions::ProgramUniform2fEXT(program, location, v0, v1);
}

void ProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform2fv(program, location, count, value);
}

void ProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform2fvEXT(program, location, count, value);
}

void ProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
	return functions::ProgramUniform2i(program, location, v0, v1);
}

void ProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
	return functions::ProgramUniform2i64NV(program, location, x, y);
}

void ProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::ProgramUniform2i64vNV(program, location, count, value);
}

void ProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
	return functions::ProgramUniform2iEXT(program, location, v0, v1);
}

void ProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform2iv(program, location, count, value);
}

void ProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform2ivEXT(program, location, count, value);
}

void ProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	return functions::ProgramUniform2ui(program, location, v0, v1);
}

void ProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
	return functions::ProgramUniform2ui64NV(program, location, x, y);
}

void ProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::ProgramUniform2ui64vNV(program, location, count, value);
}

void ProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	return functions::ProgramUniform2uiEXT(program, location, v0, v1);
}

void ProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform2uiv(program, location, count, value);
}

void ProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform2uivEXT(program, location, count, value);
}

void ProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
	return functions::ProgramUniform3d(program, location, v0, v1, v2);
}

void ProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::ProgramUniform3dEXT(program, location, x, y, z);
}

void ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform3dv(program, location, count, value);
}

void ProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform3dvEXT(program, location, count, value);
}

void ProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::ProgramUniform3f(program, location, v0, v1, v2);
}

void ProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::ProgramUniform3fEXT(program, location, v0, v1, v2);
}

void ProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform3fv(program, location, count, value);
}

void ProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform3fvEXT(program, location, count, value);
}

void ProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::ProgramUniform3i(program, location, v0, v1, v2);
}

void ProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::ProgramUniform3i64NV(program, location, x, y, z);
}

void ProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::ProgramUniform3i64vNV(program, location, count, value);
}

void ProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::ProgramUniform3iEXT(program, location, v0, v1, v2);
}

void ProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform3iv(program, location, count, value);
}

void ProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform3ivEXT(program, location, count, value);
}

void ProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::ProgramUniform3ui(program, location, v0, v1, v2);
}

void ProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::ProgramUniform3ui64NV(program, location, x, y, z);
}

void ProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::ProgramUniform3ui64vNV(program, location, count, value);
}

void ProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::ProgramUniform3uiEXT(program, location, v0, v1, v2);
}

void ProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform3uiv(program, location, count, value);
}

void ProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform3uivEXT(program, location, count, value);
}

void ProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
	return functions::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

void ProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::ProgramUniform4dEXT(program, location, x, y, z, w);
}

void ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform4dv(program, location, count, value);
}

void ProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
	return functions::ProgramUniform4dvEXT(program, location, count, value);
}

void ProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

void ProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::ProgramUniform4fEXT(program, location, v0, v1, v2, v3);
}

void ProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform4fv(program, location, count, value);
}

void ProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
	return functions::ProgramUniform4fvEXT(program, location, count, value);
}

void ProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

void ProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::ProgramUniform4i64NV(program, location, x, y, z, w);
}

void ProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::ProgramUniform4i64vNV(program, location, count, value);
}

void ProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::ProgramUniform4iEXT(program, location, v0, v1, v2, v3);
}

void ProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform4iv(program, location, count, value);
}

void ProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint * value)
{
	return functions::ProgramUniform4ivEXT(program, location, count, value);
}

void ProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void ProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::ProgramUniform4ui64NV(program, location, x, y, z, w);
}

void ProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::ProgramUniform4ui64vNV(program, location, count, value);
}

void ProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::ProgramUniform4uiEXT(program, location, v0, v1, v2, v3);
}

void ProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform4uiv(program, location, count, value);
}

void ProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
	return functions::ProgramUniform4uivEXT(program, location, count, value);
}

void ProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value)
{
	return functions::ProgramUniformHandleui64ARB(program, location, value);
}

void ProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
	return functions::ProgramUniformHandleui64NV(program, location, value);
}

void ProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
	return functions::ProgramUniformHandleui64vARB(program, location, count, values);
}

void ProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
	return functions::ProgramUniformHandleui64vNV(program, location, count, values);
}

void ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2x3dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2x3fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix2x4dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix2x4fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3x2dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3x2fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix3x4dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix3x4fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4x2dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4x2fvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::ProgramUniformMatrix4x3dvEXT(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void ProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::ProgramUniformMatrix4x3fvEXT(program, location, count, transpose, value);
}

void ProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
	return functions::ProgramUniformui64NV(program, location, value);
}

void ProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::ProgramUniformui64vNV(program, location, count, value);
}

void ProgramVertexLimitNV(GLenum target, GLint limit)
{
	return functions::ProgramVertexLimitNV(target, limit);
}

void ProvokingVertex(GLenum mode)
{
	return functions::ProvokingVertex(mode);
}

void ProvokingVertexEXT(GLenum mode)
{
	return functions::ProvokingVertexEXT(mode);
}

void PushAttrib(GLbitfield mask)
{
	return functions::PushAttrib(mask);
}

void PushClientAttrib(GLbitfield mask)
{
	return functions::PushClientAttrib(mask);
}

void PushClientAttribDefaultEXT(GLbitfield mask)
{
	return functions::PushClientAttribDefaultEXT(mask);
}

void PushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
	return functions::PushDebugGroup(source, id, length, message);
}

void PushDebugGroupKHR(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
	return functions::PushDebugGroupKHR(source, id, length, message);
}

void PushGroupMarkerEXT(GLsizei length, const GLchar * marker)
{
	return functions::PushGroupMarkerEXT(length, marker);
}

void PushMatrix()
{
	return functions::PushMatrix();
}

void PushName(GLuint name)
{
	return functions::PushName(name);
}

void QueryCounter(GLuint id, GLenum target)
{
	return functions::QueryCounter(id, target);
}

void QueryCounterEXT(GLuint id, GLenum target)
{
	return functions::QueryCounterEXT(id, target);
}

GLbitfield QueryMatrixxOES(GLfixed * mantissa, GLint * exponent)
{
	return functions::QueryMatrixxOES(mantissa, exponent);
}

void QueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param)
{
	return functions::QueryObjectParameteruiAMD(target, id, pname, param);
}

void RasterPos2d(GLdouble x, GLdouble y)
{
	return functions::RasterPos2d(x, y);
}

void RasterPos2dv(const GLdouble * v)
{
	return functions::RasterPos2dv(v);
}

void RasterPos2f(GLfloat x, GLfloat y)
{
	return functions::RasterPos2f(x, y);
}

void RasterPos2fv(const GLfloat * v)
{
	return functions::RasterPos2fv(v);
}

void RasterPos2i(GLint x, GLint y)
{
	return functions::RasterPos2i(x, y);
}

void RasterPos2iv(const GLint * v)
{
	return functions::RasterPos2iv(v);
}

void RasterPos2s(GLshort x, GLshort y)
{
	return functions::RasterPos2s(x, y);
}

void RasterPos2sv(const GLshort * v)
{
	return functions::RasterPos2sv(v);
}

void RasterPos2xOES(GLfixed x, GLfixed y)
{
	return functions::RasterPos2xOES(x, y);
}

void RasterPos2xvOES(const GLfixed * coords)
{
	return functions::RasterPos2xvOES(coords);
}

void RasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::RasterPos3d(x, y, z);
}

void RasterPos3dv(const GLdouble * v)
{
	return functions::RasterPos3dv(v);
}

void RasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::RasterPos3f(x, y, z);
}

void RasterPos3fv(const GLfloat * v)
{
	return functions::RasterPos3fv(v);
}

void RasterPos3i(GLint x, GLint y, GLint z)
{
	return functions::RasterPos3i(x, y, z);
}

void RasterPos3iv(const GLint * v)
{
	return functions::RasterPos3iv(v);
}

void RasterPos3s(GLshort x, GLshort y, GLshort z)
{
	return functions::RasterPos3s(x, y, z);
}

void RasterPos3sv(const GLshort * v)
{
	return functions::RasterPos3sv(v);
}

void RasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::RasterPos3xOES(x, y, z);
}

void RasterPos3xvOES(const GLfixed * coords)
{
	return functions::RasterPos3xvOES(coords);
}

void RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::RasterPos4d(x, y, z, w);
}

void RasterPos4dv(const GLdouble * v)
{
	return functions::RasterPos4dv(v);
}

void RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::RasterPos4f(x, y, z, w);
}

void RasterPos4fv(const GLfloat * v)
{
	return functions::RasterPos4fv(v);
}

void RasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	return functions::RasterPos4i(x, y, z, w);
}

void RasterPos4iv(const GLint * v)
{
	return functions::RasterPos4iv(v);
}

void RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::RasterPos4s(x, y, z, w);
}

void RasterPos4sv(const GLshort * v)
{
	return functions::RasterPos4sv(v);
}

void RasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
	return functions::RasterPos4xOES(x, y, z, w);
}

void RasterPos4xvOES(const GLfixed * coords)
{
	return functions::RasterPos4xvOES(coords);
}

void ReadBuffer(GLenum mode)
{
	return functions::ReadBuffer(mode);
}

void ReadBufferIndexedEXT(GLenum src, GLint index)
{
	return functions::ReadBufferIndexedEXT(src, index);
}

void ReadBufferNV(GLenum mode)
{
	return functions::ReadBufferNV(mode);
}

void ReadInstrumentsSGIX(GLint marker)
{
	return functions::ReadInstrumentsSGIX(marker);
}

void ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
	return functions::ReadPixels(x, y, width, height, format, type, pixels);
}

void ReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
	return functions::ReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
}

void ReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
	return functions::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	return functions::Rectd(x1, y1, x2, y2);
}

void Rectdv(const GLdouble * v1, const GLdouble * v2)
{
	return functions::Rectdv(v1, v2);
}

void Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	return functions::Rectf(x1, y1, x2, y2);
}

void Rectfv(const GLfloat * v1, const GLfloat * v2)
{
	return functions::Rectfv(v1, v2);
}

void Recti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	return functions::Recti(x1, y1, x2, y2);
}

void Rectiv(const GLint * v1, const GLint * v2)
{
	return functions::Rectiv(v1, v2);
}

void Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	return functions::Rects(x1, y1, x2, y2);
}

void Rectsv(const GLshort * v1, const GLshort * v2)
{
	return functions::Rectsv(v1, v2);
}

void RectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
	return functions::RectxOES(x1, y1, x2, y2);
}

void RectxvOES(const GLfixed * v1, const GLfixed * v2)
{
	return functions::RectxvOES(v1, v2);
}

void ReferencePlaneSGIX(const GLdouble * equation)
{
	return functions::ReferencePlaneSGIX(equation);
}

void ReleaseShaderCompiler()
{
	return functions::ReleaseShaderCompiler();
}

GLint RenderMode(GLenum mode)
{
	return functions::RenderMode(mode);
}

void RenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorage(target, internalformat, width, height);
}

void RenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageEXT(target, internalformat, width, height);
}

void RenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void RenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void RenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void RenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleCoverageNV(target, coverageSamples, colorSamples, internalformat, width, height);
}

void RenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void RenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void RenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void RenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::RenderbufferStorageOES(target, internalformat, width, height);
}

void ReplacementCodePointerSUN(GLenum type, GLsizei stride, const void ** pointer)
{
	return functions::ReplacementCodePointerSUN(type, stride, pointer);
}

void ReplacementCodeubSUN(GLubyte code)
{
	return functions::ReplacementCodeubSUN(code);
}

void ReplacementCodeubvSUN(const GLubyte * code)
{
	return functions::ReplacementCodeubvSUN(code);
}

void ReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

void ReplacementCodeuiColor3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * v)
{
	return functions::ReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

void ReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

void ReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::ReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

void ReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

void ReplacementCodeuiColor4ubVertex3fvSUN(const GLuint * rc, const GLubyte * c, const GLfloat * v)
{
	return functions::ReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

void ReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

void ReplacementCodeuiNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * n, const GLfloat * v)
{
	return functions::ReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

void ReplacementCodeuiSUN(GLuint code)
{
	return functions::ReplacementCodeuiSUN(code);
}

void ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}

void ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

void ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
	return functions::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

void ReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

void ReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint * rc, const GLfloat * tc, const GLfloat * v)
{
	return functions::ReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

void ReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::ReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

void ReplacementCodeuiVertex3fvSUN(const GLuint * rc, const GLfloat * v)
{
	return functions::ReplacementCodeuiVertex3fvSUN(rc, v);
}

void ReplacementCodeuivSUN(const GLuint * code)
{
	return functions::ReplacementCodeuivSUN(code);
}

void ReplacementCodeusSUN(GLushort code)
{
	return functions::ReplacementCodeusSUN(code);
}

void ReplacementCodeusvSUN(const GLushort * code)
{
	return functions::ReplacementCodeusvSUN(code);
}

void RequestResidentProgramsNV(GLsizei n, const GLuint * programs)
{
	return functions::RequestResidentProgramsNV(n, programs);
}

void ResetHistogram(GLenum target)
{
	return functions::ResetHistogram(target);
}

void ResetHistogramEXT(GLenum target)
{
	return functions::ResetHistogramEXT(target);
}

void ResetMinmax(GLenum target)
{
	return functions::ResetMinmax(target);
}

void ResetMinmaxEXT(GLenum target)
{
	return functions::ResetMinmaxEXT(target);
}

void ResizeBuffersMESA()
{
	return functions::ResizeBuffersMESA();
}

void ResolveMultisampleFramebufferAPPLE()
{
	return functions::ResolveMultisampleFramebufferAPPLE();
}

void ResumeTransformFeedback()
{
	return functions::ResumeTransformFeedback();
}

void ResumeTransformFeedbackNV()
{
	return functions::ResumeTransformFeedbackNV();
}

void Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::Rotated(angle, x, y, z);
}

void Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Rotatef(angle, x, y, z);
}

void Rotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	return functions::Rotatex(angle, x, y, z);
}

void RotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	return functions::RotatexOES(angle, x, y, z);
}

void SampleCoverage(GLfloat value, GLboolean invert)
{
	return functions::SampleCoverage(value, invert);
}

void SampleCoverageARB(GLfloat value, GLboolean invert)
{
	return functions::SampleCoverageARB(value, invert);
}

void SampleCoverageOES(GLfixed value, GLboolean invert)
{
	return functions::SampleCoverageOES(value, invert);
}

void SampleCoveragex(GLclampx value, GLboolean invert)
{
	return functions::SampleCoveragex(value, invert);
}

void SampleCoveragexOES(GLclampx value, GLboolean invert)
{
	return functions::SampleCoveragexOES(value, invert);
}

void SampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
	return functions::SampleMapATI(dst, interp, swizzle);
}

void SampleMaskEXT(GLclampf value, GLboolean invert)
{
	return functions::SampleMaskEXT(value, invert);
}

void SampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
	return functions::SampleMaskIndexedNV(index, mask);
}

void SampleMaskSGIS(GLclampf value, GLboolean invert)
{
	return functions::SampleMaskSGIS(value, invert);
}

void SampleMaski(GLuint maskNumber, GLbitfield mask)
{
	return functions::SampleMaski(maskNumber, mask);
}

void SamplePatternEXT(GLenum pattern)
{
	return functions::SamplePatternEXT(pattern);
}

void SamplePatternSGIS(GLenum pattern)
{
	return functions::SamplePatternSGIS(pattern);
}

void SamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
	return functions::SamplerParameterIiv(sampler, pname, param);
}

void SamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
	return functions::SamplerParameterIuiv(sampler, pname, param);
}

void SamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
	return functions::SamplerParameterf(sampler, pname, param);
}

void SamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
	return functions::SamplerParameterfv(sampler, pname, param);
}

void SamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
	return functions::SamplerParameteri(sampler, pname, param);
}

void SamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
	return functions::SamplerParameteriv(sampler, pname, param);
}

void Scaled(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::Scaled(x, y, z);
}

void Scalef(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Scalef(x, y, z);
}

void Scalex(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::Scalex(x, y, z);
}

void ScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::ScalexOES(x, y, z);
}

void Scissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::Scissor(x, y, width, height);
}

void ScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
	return functions::ScissorArrayv(first, count, v);
}

void ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
	return functions::ScissorIndexed(index, left, bottom, width, height);
}

void ScissorIndexedv(GLuint index, const GLint * v)
{
	return functions::ScissorIndexedv(index, v);
}

void SecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::SecondaryColor3b(red, green, blue);
}

void SecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
	return functions::SecondaryColor3bEXT(red, green, blue);
}

void SecondaryColor3bv(const GLbyte * v)
{
	return functions::SecondaryColor3bv(v);
}

void SecondaryColor3bvEXT(const GLbyte * v)
{
	return functions::SecondaryColor3bvEXT(v);
}

void SecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::SecondaryColor3d(red, green, blue);
}

void SecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
	return functions::SecondaryColor3dEXT(red, green, blue);
}

void SecondaryColor3dv(const GLdouble * v)
{
	return functions::SecondaryColor3dv(v);
}

void SecondaryColor3dvEXT(const GLdouble * v)
{
	return functions::SecondaryColor3dvEXT(v);
}

void SecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::SecondaryColor3f(red, green, blue);
}

void SecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
	return functions::SecondaryColor3fEXT(red, green, blue);
}

void SecondaryColor3fv(const GLfloat * v)
{
	return functions::SecondaryColor3fv(v);
}

void SecondaryColor3fvEXT(const GLfloat * v)
{
	return functions::SecondaryColor3fvEXT(v);
}

void SecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	return functions::SecondaryColor3hNV(red, green, blue);
}

void SecondaryColor3hvNV(const GLhalfNV * v)
{
	return functions::SecondaryColor3hvNV(v);
}

void SecondaryColor3i(GLint red, GLint green, GLint blue)
{
	return functions::SecondaryColor3i(red, green, blue);
}

void SecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
	return functions::SecondaryColor3iEXT(red, green, blue);
}

void SecondaryColor3iv(const GLint * v)
{
	return functions::SecondaryColor3iv(v);
}

void SecondaryColor3ivEXT(const GLint * v)
{
	return functions::SecondaryColor3ivEXT(v);
}

void SecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
	return functions::SecondaryColor3s(red, green, blue);
}

void SecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
	return functions::SecondaryColor3sEXT(red, green, blue);
}

void SecondaryColor3sv(const GLshort * v)
{
	return functions::SecondaryColor3sv(v);
}

void SecondaryColor3svEXT(const GLshort * v)
{
	return functions::SecondaryColor3svEXT(v);
}

void SecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::SecondaryColor3ub(red, green, blue);
}

void SecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
	return functions::SecondaryColor3ubEXT(red, green, blue);
}

void SecondaryColor3ubv(const GLubyte * v)
{
	return functions::SecondaryColor3ubv(v);
}

void SecondaryColor3ubvEXT(const GLubyte * v)
{
	return functions::SecondaryColor3ubvEXT(v);
}

void SecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
	return functions::SecondaryColor3ui(red, green, blue);
}

void SecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
	return functions::SecondaryColor3uiEXT(red, green, blue);
}

void SecondaryColor3uiv(const GLuint * v)
{
	return functions::SecondaryColor3uiv(v);
}

void SecondaryColor3uivEXT(const GLuint * v)
{
	return functions::SecondaryColor3uivEXT(v);
}

void SecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
	return functions::SecondaryColor3us(red, green, blue);
}

void SecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
	return functions::SecondaryColor3usEXT(red, green, blue);
}

void SecondaryColor3usv(const GLushort * v)
{
	return functions::SecondaryColor3usv(v);
}

void SecondaryColor3usvEXT(const GLushort * v)
{
	return functions::SecondaryColor3usvEXT(v);
}

void SecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::SecondaryColorFormatNV(size, type, stride);
}

void SecondaryColorP3ui(GLenum type, GLuint color)
{
	return functions::SecondaryColorP3ui(type, color);
}

void SecondaryColorP3uiv(GLenum type, const GLuint * color)
{
	return functions::SecondaryColorP3uiv(type, color);
}

void SecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::SecondaryColorPointer(size, type, stride, pointer);
}

void SecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::SecondaryColorPointerEXT(size, type, stride, pointer);
}

void SecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::SecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

void SelectBuffer(GLsizei size, GLuint * buffer)
{
	return functions::SelectBuffer(size, buffer);
}

void SelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
	return functions::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void SeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
	return functions::SeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

void SeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column)
{
	return functions::SeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}

void SetFenceAPPLE(GLuint fence)
{
	return functions::SetFenceAPPLE(fence);
}

void SetFenceNV(GLuint fence, GLenum condition)
{
	return functions::SetFenceNV(fence, condition);
}

void SetFragmentShaderConstantATI(GLuint dst, const GLfloat * value)
{
	return functions::SetFragmentShaderConstantATI(dst, value);
}

void SetInvariantEXT(GLuint id, GLenum type, const void * addr)
{
	return functions::SetInvariantEXT(id, type, addr);
}

void SetLocalConstantEXT(GLuint id, GLenum type, const void * addr)
{
	return functions::SetLocalConstantEXT(id, type, addr);
}

void SetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat * val)
{
	return functions::SetMultisamplefvAMD(pname, index, val);
}

void ShadeModel(GLenum mode)
{
	return functions::ShadeModel(mode);
}

void ShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
	return functions::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void ShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
	return functions::ShaderOp1EXT(op, res, arg1);
}

void ShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
	return functions::ShaderOp2EXT(op, res, arg1, arg2);
}

void ShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
	return functions::ShaderOp3EXT(op, res, arg1, arg2, arg3);
}

void ShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
	return functions::ShaderSource(shader, count, string, length);
}

void ShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
	return functions::ShaderSourceARB(shaderObj, count, string, length);
}

void ShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
	return functions::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void SharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat * points)
{
	return functions::SharpenTexFuncSGIS(target, n, points);
}

void SpriteParameterfSGIX(GLenum pname, GLfloat param)
{
	return functions::SpriteParameterfSGIX(pname, param);
}

void SpriteParameterfvSGIX(GLenum pname, const GLfloat * params)
{
	return functions::SpriteParameterfvSGIX(pname, params);
}

void SpriteParameteriSGIX(GLenum pname, GLint param)
{
	return functions::SpriteParameteriSGIX(pname, param);
}

void SpriteParameterivSGIX(GLenum pname, const GLint * params)
{
	return functions::SpriteParameterivSGIX(pname, params);
}

void StartInstrumentsSGIX()
{
	return functions::StartInstrumentsSGIX();
}

void StartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
	return functions::StartTilingQCOM(x, y, width, height, preserveMask);
}

void StencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
	return functions::StencilClearTagEXT(stencilTagBits, stencilClearTag);
}

void StencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
	return functions::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void StencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
	return functions::StencilFillPathNV(path, fillMode, mask);
}

void StencilFunc(GLenum func, GLint ref, GLuint mask)
{
	return functions::StencilFunc(func, ref, mask);
}

void StencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
	return functions::StencilFuncSeparate(face, func, ref, mask);
}

void StencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	return functions::StencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}

void StencilMask(GLuint mask)
{
	return functions::StencilMask(mask);
}

void StencilMaskSeparate(GLenum face, GLuint mask)
{
	return functions::StencilMaskSeparate(face, mask);
}

void StencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	return functions::StencilOp(fail, zfail, zpass);
}

void StencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	return functions::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void StencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	return functions::StencilOpSeparateATI(face, sfail, dpfail, dppass);
}

void StencilOpValueAMD(GLenum face, GLuint value)
{
	return functions::StencilOpValueAMD(face, value);
}

void StencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
	return functions::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void StencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
	return functions::StencilStrokePathNV(path, reference, mask);
}

void StopInstrumentsSGIX(GLint marker)
{
	return functions::StopInstrumentsSGIX(marker);
}

void StringMarkerGREMEDY(GLsizei len, const void * string)
{
	return functions::StringMarkerGREMEDY(len, string);
}

void SwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	return functions::SwizzleEXT(res, in, outX, outY, outZ, outW);
}

void SyncTextureINTEL(GLuint texture)
{
	return functions::SyncTextureINTEL(texture);
}

void TagSampleBufferSGIX()
{
	return functions::TagSampleBufferSGIX();
}

void Tangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
	return functions::Tangent3bEXT(tx, ty, tz);
}

void Tangent3bvEXT(const GLbyte * v)
{
	return functions::Tangent3bvEXT(v);
}

void Tangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
	return functions::Tangent3dEXT(tx, ty, tz);
}

void Tangent3dvEXT(const GLdouble * v)
{
	return functions::Tangent3dvEXT(v);
}

void Tangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
	return functions::Tangent3fEXT(tx, ty, tz);
}

void Tangent3fvEXT(const GLfloat * v)
{
	return functions::Tangent3fvEXT(v);
}

void Tangent3iEXT(GLint tx, GLint ty, GLint tz)
{
	return functions::Tangent3iEXT(tx, ty, tz);
}

void Tangent3ivEXT(const GLint * v)
{
	return functions::Tangent3ivEXT(v);
}

void Tangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
	return functions::Tangent3sEXT(tx, ty, tz);
}

void Tangent3svEXT(const GLshort * v)
{
	return functions::Tangent3svEXT(v);
}

void TangentPointerEXT(GLenum type, GLsizei stride, const void * pointer)
{
	return functions::TangentPointerEXT(type, stride, pointer);
}

void TbufferMask3DFX(GLuint mask)
{
	return functions::TbufferMask3DFX(mask);
}

void TessellationFactorAMD(GLfloat factor)
{
	return functions::TessellationFactorAMD(factor);
}

void TessellationModeAMD(GLenum mode)
{
	return functions::TessellationModeAMD(mode);
}

GLboolean TestFenceAPPLE(GLuint fence)
{
	return functions::TestFenceAPPLE(fence);
}

GLboolean TestFenceNV(GLuint fence)
{
	return functions::TestFenceNV(fence);
}

GLboolean TestObjectAPPLE(GLenum object, GLuint name)
{
	return functions::TestObjectAPPLE(object, name);
}

void TexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::TexBuffer(target, internalformat, buffer);
}

void TexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::TexBufferARB(target, internalformat, buffer);
}

void TexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::TexBufferEXT(target, internalformat, buffer);
}

void TexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::TexBufferRange(target, internalformat, buffer, offset, size);
}

void TexBumpParameterfvATI(GLenum pname, const GLfloat * param)
{
	return functions::TexBumpParameterfvATI(pname, param);
}

void TexBumpParameterivATI(GLenum pname, const GLint * param)
{
	return functions::TexBumpParameterivATI(pname, param);
}

void TexCoord1bOES(GLbyte s)
{
	return functions::TexCoord1bOES(s);
}

void TexCoord1bvOES(const GLbyte * coords)
{
	return functions::TexCoord1bvOES(coords);
}

void TexCoord1d(GLdouble s)
{
	return functions::TexCoord1d(s);
}

void TexCoord1dv(const GLdouble * v)
{
	return functions::TexCoord1dv(v);
}

void TexCoord1f(GLfloat s)
{
	return functions::TexCoord1f(s);
}

void TexCoord1fv(const GLfloat * v)
{
	return functions::TexCoord1fv(v);
}

void TexCoord1hNV(GLhalfNV s)
{
	return functions::TexCoord1hNV(s);
}

void TexCoord1hvNV(const GLhalfNV * v)
{
	return functions::TexCoord1hvNV(v);
}

void TexCoord1i(GLint s)
{
	return functions::TexCoord1i(s);
}

void TexCoord1iv(const GLint * v)
{
	return functions::TexCoord1iv(v);
}

void TexCoord1s(GLshort s)
{
	return functions::TexCoord1s(s);
}

void TexCoord1sv(const GLshort * v)
{
	return functions::TexCoord1sv(v);
}

void TexCoord1xOES(GLfixed s)
{
	return functions::TexCoord1xOES(s);
}

void TexCoord1xvOES(const GLfixed * coords)
{
	return functions::TexCoord1xvOES(coords);
}

void TexCoord2bOES(GLbyte s, GLbyte t)
{
	return functions::TexCoord2bOES(s, t);
}

void TexCoord2bvOES(const GLbyte * coords)
{
	return functions::TexCoord2bvOES(coords);
}

void TexCoord2d(GLdouble s, GLdouble t)
{
	return functions::TexCoord2d(s, t);
}

void TexCoord2dv(const GLdouble * v)
{
	return functions::TexCoord2dv(v);
}

void TexCoord2f(GLfloat s, GLfloat t)
{
	return functions::TexCoord2f(s, t);
}

void TexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::TexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

void TexCoord2fColor3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * v)
{
	return functions::TexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

void TexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::TexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

void TexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::TexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

void TexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::TexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

void TexCoord2fColor4ubVertex3fvSUN(const GLfloat * tc, const GLubyte * c, const GLfloat * v)
{
	return functions::TexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

void TexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::TexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

void TexCoord2fNormal3fVertex3fvSUN(const GLfloat * tc, const GLfloat * n, const GLfloat * v)
{
	return functions::TexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

void TexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::TexCoord2fVertex3fSUN(s, t, x, y, z);
}

void TexCoord2fVertex3fvSUN(const GLfloat * tc, const GLfloat * v)
{
	return functions::TexCoord2fVertex3fvSUN(tc, v);
}

void TexCoord2fv(const GLfloat * v)
{
	return functions::TexCoord2fv(v);
}

void TexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
	return functions::TexCoord2hNV(s, t);
}

void TexCoord2hvNV(const GLhalfNV * v)
{
	return functions::TexCoord2hvNV(v);
}

void TexCoord2i(GLint s, GLint t)
{
	return functions::TexCoord2i(s, t);
}

void TexCoord2iv(const GLint * v)
{
	return functions::TexCoord2iv(v);
}

void TexCoord2s(GLshort s, GLshort t)
{
	return functions::TexCoord2s(s, t);
}

void TexCoord2sv(const GLshort * v)
{
	return functions::TexCoord2sv(v);
}

void TexCoord2xOES(GLfixed s, GLfixed t)
{
	return functions::TexCoord2xOES(s, t);
}

void TexCoord2xvOES(const GLfixed * coords)
{
	return functions::TexCoord2xvOES(coords);
}

void TexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
	return functions::TexCoord3bOES(s, t, r);
}

void TexCoord3bvOES(const GLbyte * coords)
{
	return functions::TexCoord3bvOES(coords);
}

void TexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	return functions::TexCoord3d(s, t, r);
}

void TexCoord3dv(const GLdouble * v)
{
	return functions::TexCoord3dv(v);
}

void TexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	return functions::TexCoord3f(s, t, r);
}

void TexCoord3fv(const GLfloat * v)
{
	return functions::TexCoord3fv(v);
}

void TexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	return functions::TexCoord3hNV(s, t, r);
}

void TexCoord3hvNV(const GLhalfNV * v)
{
	return functions::TexCoord3hvNV(v);
}

void TexCoord3i(GLint s, GLint t, GLint r)
{
	return functions::TexCoord3i(s, t, r);
}

void TexCoord3iv(const GLint * v)
{
	return functions::TexCoord3iv(v);
}

void TexCoord3s(GLshort s, GLshort t, GLshort r)
{
	return functions::TexCoord3s(s, t, r);
}

void TexCoord3sv(const GLshort * v)
{
	return functions::TexCoord3sv(v);
}

void TexCoord3xOES(GLfixed s, GLfixed t, GLfixed r)
{
	return functions::TexCoord3xOES(s, t, r);
}

void TexCoord3xvOES(const GLfixed * coords)
{
	return functions::TexCoord3xvOES(coords);
}

void TexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	return functions::TexCoord4bOES(s, t, r, q);
}

void TexCoord4bvOES(const GLbyte * coords)
{
	return functions::TexCoord4bvOES(coords);
}

void TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	return functions::TexCoord4d(s, t, r, q);
}

void TexCoord4dv(const GLdouble * v)
{
	return functions::TexCoord4dv(v);
}

void TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	return functions::TexCoord4f(s, t, r, q);
}

void TexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::TexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

void TexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat * tc, const GLfloat * c, const GLfloat * n, const GLfloat * v)
{
	return functions::TexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

void TexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::TexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

void TexCoord4fVertex4fvSUN(const GLfloat * tc, const GLfloat * v)
{
	return functions::TexCoord4fVertex4fvSUN(tc, v);
}

void TexCoord4fv(const GLfloat * v)
{
	return functions::TexCoord4fv(v);
}

void TexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	return functions::TexCoord4hNV(s, t, r, q);
}

void TexCoord4hvNV(const GLhalfNV * v)
{
	return functions::TexCoord4hvNV(v);
}

void TexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	return functions::TexCoord4i(s, t, r, q);
}

void TexCoord4iv(const GLint * v)
{
	return functions::TexCoord4iv(v);
}

void TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	return functions::TexCoord4s(s, t, r, q);
}

void TexCoord4sv(const GLshort * v)
{
	return functions::TexCoord4sv(v);
}

void TexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	return functions::TexCoord4xOES(s, t, r, q);
}

void TexCoord4xvOES(const GLfixed * coords)
{
	return functions::TexCoord4xvOES(coords);
}

void TexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::TexCoordFormatNV(size, type, stride);
}

void TexCoordP1ui(GLenum type, GLuint coords)
{
	return functions::TexCoordP1ui(type, coords);
}

void TexCoordP1uiv(GLenum type, const GLuint * coords)
{
	return functions::TexCoordP1uiv(type, coords);
}

void TexCoordP2ui(GLenum type, GLuint coords)
{
	return functions::TexCoordP2ui(type, coords);
}

void TexCoordP2uiv(GLenum type, const GLuint * coords)
{
	return functions::TexCoordP2uiv(type, coords);
}

void TexCoordP3ui(GLenum type, GLuint coords)
{
	return functions::TexCoordP3ui(type, coords);
}

void TexCoordP3uiv(GLenum type, const GLuint * coords)
{
	return functions::TexCoordP3uiv(type, coords);
}

void TexCoordP4ui(GLenum type, GLuint coords)
{
	return functions::TexCoordP4ui(type, coords);
}

void TexCoordP4uiv(GLenum type, const GLuint * coords)
{
	return functions::TexCoordP4uiv(type, coords);
}

void TexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::TexCoordPointer(size, type, stride, pointer);
}

void TexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::TexCoordPointerEXT(size, type, stride, count, pointer);
}

void TexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::TexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

void TexCoordPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::TexCoordPointervINTEL(size, type, pointer);
}

void TexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	return functions::TexEnvf(target, pname, param);
}

void TexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::TexEnvfv(target, pname, params);
}

void TexEnvi(GLenum target, GLenum pname, GLint param)
{
	return functions::TexEnvi(target, pname, param);
}

void TexEnviv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::TexEnviv(target, pname, params);
}

void TexEnvx(GLenum target, GLenum pname, GLfixed param)
{
	return functions::TexEnvx(target, pname, param);
}

void TexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::TexEnvxOES(target, pname, param);
}

void TexEnvxv(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::TexEnvxv(target, pname, params);
}

void TexEnvxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::TexEnvxvOES(target, pname, params);
}

void TexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat * weights)
{
	return functions::TexFilterFuncSGIS(target, filter, n, weights);
}

void TexGend(GLenum coord, GLenum pname, GLdouble param)
{
	return functions::TexGend(coord, pname, param);
}

void TexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
	return functions::TexGendv(coord, pname, params);
}

void TexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	return functions::TexGenf(coord, pname, param);
}

void TexGenfOES(GLenum coord, GLenum pname, GLfloat param)
{
	return functions::TexGenfOES(coord, pname, param);
}

void TexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::TexGenfv(coord, pname, params);
}

void TexGenfvOES(GLenum coord, GLenum pname, const GLfloat * params)
{
	return functions::TexGenfvOES(coord, pname, params);
}

void TexGeni(GLenum coord, GLenum pname, GLint param)
{
	return functions::TexGeni(coord, pname, param);
}

void TexGeniOES(GLenum coord, GLenum pname, GLint param)
{
	return functions::TexGeniOES(coord, pname, param);
}

void TexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
	return functions::TexGeniv(coord, pname, params);
}

void TexGenivOES(GLenum coord, GLenum pname, const GLint * params)
{
	return functions::TexGenivOES(coord, pname, params);
}

void TexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
	return functions::TexGenxOES(coord, pname, param);
}

void TexGenxvOES(GLenum coord, GLenum pname, const GLfixed * params)
{
	return functions::TexGenxvOES(coord, pname, params);
}

void TexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void TexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void TexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::TexImage2DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void TexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void TexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void TexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void TexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::TexImage3DMultisampleCoverageNV(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void TexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void TexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

void TexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
	return functions::TexPageCommitmentARB(target, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void TexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::TexParameterIiv(target, pname, params);
}

void TexParameterIivEXT(GLenum target, GLenum pname, const GLint * params)
{
	return functions::TexParameterIivEXT(target, pname, params);
}

void TexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
	return functions::TexParameterIuiv(target, pname, params);
}

void TexParameterIuivEXT(GLenum target, GLenum pname, const GLuint * params)
{
	return functions::TexParameterIuivEXT(target, pname, params);
}

void TexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	return functions::TexParameterf(target, pname, param);
}

void TexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::TexParameterfv(target, pname, params);
}

void TexParameteri(GLenum target, GLenum pname, GLint param)
{
	return functions::TexParameteri(target, pname, param);
}

void TexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
	return functions::TexParameteriv(target, pname, params);
}

void TexParameterx(GLenum target, GLenum pname, GLfixed param)
{
	return functions::TexParameterx(target, pname, param);
}

void TexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	return functions::TexParameterxOES(target, pname, param);
}

void TexParameterxv(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::TexParameterxv(target, pname, params);
}

void TexParameterxvOES(GLenum target, GLenum pname, const GLfixed * params)
{
	return functions::TexParameterxvOES(target, pname, params);
}

void TexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
	return functions::TexRenderbufferNV(target, renderbuffer);
}

void TexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::TexStorage1D(target, levels, internalformat, width);
}

void TexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::TexStorage1DEXT(target, levels, internalformat, width);
}

void TexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::TexStorage2D(target, levels, internalformat, width, height);
}

void TexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::TexStorage2DEXT(target, levels, internalformat, width, height);
}

void TexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void TexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::TexStorage3D(target, levels, internalformat, width, height, depth);
}

void TexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::TexStorage3DEXT(target, levels, internalformat, width, height, depth);
}

void TexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void TexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
	return functions::TexStorageSparseAMD(target, internalFormat, width, height, depth, layers, flags);
}

void TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void TexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void TexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void TexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void TexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void TexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void TexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void * pixels)
{
	return functions::TexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

void TextureBarrierNV()
{
	return functions::TextureBarrierNV();
}

void TextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
	return functions::TextureBufferEXT(texture, target, internalformat, buffer);
}

void TextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	return functions::TextureBufferRangeEXT(texture, target, internalformat, buffer, offset, size);
}

void TextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	return functions::TextureColorMaskSGIS(red, green, blue, alpha);
}

void TextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureImage1DEXT(texture, target, level, internalformat, width, border, format, type, pixels);
}

void TextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureImage2DEXT(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void TextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::TextureImage2DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

void TextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	return functions::TextureImage2DMultisampleNV(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

void TextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureImage3DEXT(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void TextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::TextureImage3DMultisampleCoverageNV(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

void TextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	return functions::TextureImage3DMultisampleNV(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

void TextureLightEXT(GLenum pname)
{
	return functions::TextureLightEXT(pname);
}

void TextureMaterialEXT(GLenum face, GLenum mode)
{
	return functions::TextureMaterialEXT(face, mode);
}

void TextureNormalEXT(GLenum mode)
{
	return functions::TextureNormalEXT(mode);
}

void TexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean resident)
{
	return functions::TexturePageCommitmentEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, resident);
}

void TextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
	return functions::TextureParameterIivEXT(texture, target, pname, params);
}

void TextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint * params)
{
	return functions::TextureParameterIuivEXT(texture, target, pname, params);
}

void TextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
	return functions::TextureParameterfEXT(texture, target, pname, param);
}

void TextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat * params)
{
	return functions::TextureParameterfvEXT(texture, target, pname, params);
}

void TextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
	return functions::TextureParameteriEXT(texture, target, pname, param);
}

void TextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint * params)
{
	return functions::TextureParameterivEXT(texture, target, pname, params);
}

void TextureRangeAPPLE(GLenum target, GLsizei length, const void * pointer)
{
	return functions::TextureRangeAPPLE(target, length, pointer);
}

void TextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
	return functions::TextureRenderbufferEXT(texture, target, renderbuffer);
}

void TextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	return functions::TextureStorage1DEXT(texture, target, levels, internalformat, width);
}

void TextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	return functions::TextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}

void TextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	return functions::TextureStorage2DMultisampleEXT(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void TextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	return functions::TextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

void TextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	return functions::TextureStorage3DMultisampleEXT(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void TextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags)
{
	return functions::TextureStorageSparseAMD(texture, target, internalFormat, width, height, depth, layers, flags);
}

void TextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureSubImage1DEXT(texture, target, level, xoffset, width, format, type, pixels);
}

void TextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureSubImage2DEXT(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void TextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
	return functions::TextureSubImage3DEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void TextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
	return functions::TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void TrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
	return functions::TrackMatrixNV(target, address, matrix, transform);
}

void TransformFeedbackAttribsNV(GLuint count, const GLint * attribs, GLenum bufferMode)
{
	return functions::TransformFeedbackAttribsNV(count, attribs, bufferMode);
}

void TransformFeedbackStreamAttribsNV(GLsizei count, const GLint * attribs, GLsizei nbuffers, const GLint * bufstreams, GLenum bufferMode)
{
	return functions::TransformFeedbackStreamAttribsNV(count, attribs, nbuffers, bufstreams, bufferMode);
}

void TransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
	return functions::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void TransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
	return functions::TransformFeedbackVaryingsEXT(program, count, varyings, bufferMode);
}

void TransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint * locations, GLenum bufferMode)
{
	return functions::TransformFeedbackVaryingsNV(program, count, locations, bufferMode);
}

void TransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
	return functions::TransformPathNV(resultPath, srcPath, transformType, transformValues);
}

void Translated(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::Translated(x, y, z);
}

void Translatef(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Translatef(x, y, z);
}

void Translatex(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::Translatex(x, y, z);
}

void TranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::TranslatexOES(x, y, z);
}

void Uniform1d(GLint location, GLdouble x)
{
	return functions::Uniform1d(location, x);
}

void Uniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::Uniform1dv(location, count, value);
}

void Uniform1f(GLint location, GLfloat v0)
{
	return functions::Uniform1f(location, v0);
}

void Uniform1fARB(GLint location, GLfloat v0)
{
	return functions::Uniform1fARB(location, v0);
}

void Uniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform1fv(location, count, value);
}

void Uniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform1fvARB(location, count, value);
}

void Uniform1i(GLint location, GLint v0)
{
	return functions::Uniform1i(location, v0);
}

void Uniform1i64NV(GLint location, GLint64EXT x)
{
	return functions::Uniform1i64NV(location, x);
}

void Uniform1i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::Uniform1i64vNV(location, count, value);
}

void Uniform1iARB(GLint location, GLint v0)
{
	return functions::Uniform1iARB(location, v0);
}

void Uniform1iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform1iv(location, count, value);
}

void Uniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform1ivARB(location, count, value);
}

void Uniform1ui(GLint location, GLuint v0)
{
	return functions::Uniform1ui(location, v0);
}

void Uniform1ui64NV(GLint location, GLuint64EXT x)
{
	return functions::Uniform1ui64NV(location, x);
}

void Uniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::Uniform1ui64vNV(location, count, value);
}

void Uniform1uiEXT(GLint location, GLuint v0)
{
	return functions::Uniform1uiEXT(location, v0);
}

void Uniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform1uiv(location, count, value);
}

void Uniform1uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform1uivEXT(location, count, value);
}

void Uniform2d(GLint location, GLdouble x, GLdouble y)
{
	return functions::Uniform2d(location, x, y);
}

void Uniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::Uniform2dv(location, count, value);
}

void Uniform2f(GLint location, GLfloat v0, GLfloat v1)
{
	return functions::Uniform2f(location, v0, v1);
}

void Uniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
	return functions::Uniform2fARB(location, v0, v1);
}

void Uniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform2fv(location, count, value);
}

void Uniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform2fvARB(location, count, value);
}

void Uniform2i(GLint location, GLint v0, GLint v1)
{
	return functions::Uniform2i(location, v0, v1);
}

void Uniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
	return functions::Uniform2i64NV(location, x, y);
}

void Uniform2i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::Uniform2i64vNV(location, count, value);
}

void Uniform2iARB(GLint location, GLint v0, GLint v1)
{
	return functions::Uniform2iARB(location, v0, v1);
}

void Uniform2iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform2iv(location, count, value);
}

void Uniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform2ivARB(location, count, value);
}

void Uniform2ui(GLint location, GLuint v0, GLuint v1)
{
	return functions::Uniform2ui(location, v0, v1);
}

void Uniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
	return functions::Uniform2ui64NV(location, x, y);
}

void Uniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::Uniform2ui64vNV(location, count, value);
}

void Uniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
	return functions::Uniform2uiEXT(location, v0, v1);
}

void Uniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform2uiv(location, count, value);
}

void Uniform2uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform2uivEXT(location, count, value);
}

void Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::Uniform3d(location, x, y, z);
}

void Uniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::Uniform3dv(location, count, value);
}

void Uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::Uniform3f(location, v0, v1, v2);
}

void Uniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	return functions::Uniform3fARB(location, v0, v1, v2);
}

void Uniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform3fv(location, count, value);
}

void Uniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform3fvARB(location, count, value);
}

void Uniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::Uniform3i(location, v0, v1, v2);
}

void Uniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::Uniform3i64NV(location, x, y, z);
}

void Uniform3i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::Uniform3i64vNV(location, count, value);
}

void Uniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
	return functions::Uniform3iARB(location, v0, v1, v2);
}

void Uniform3iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform3iv(location, count, value);
}

void Uniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform3ivARB(location, count, value);
}

void Uniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::Uniform3ui(location, v0, v1, v2);
}

void Uniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::Uniform3ui64NV(location, x, y, z);
}

void Uniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::Uniform3ui64vNV(location, count, value);
}

void Uniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	return functions::Uniform3uiEXT(location, v0, v1, v2);
}

void Uniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform3uiv(location, count, value);
}

void Uniform3uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform3uivEXT(location, count, value);
}

void Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::Uniform4d(location, x, y, z, w);
}

void Uniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
	return functions::Uniform4dv(location, count, value);
}

void Uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::Uniform4f(location, v0, v1, v2, v3);
}

void Uniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	return functions::Uniform4fARB(location, v0, v1, v2, v3);
}

void Uniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform4fv(location, count, value);
}

void Uniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
	return functions::Uniform4fvARB(location, count, value);
}

void Uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::Uniform4i(location, v0, v1, v2, v3);
}

void Uniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::Uniform4i64NV(location, x, y, z, w);
}

void Uniform4i64vNV(GLint location, GLsizei count, const GLint64EXT * value)
{
	return functions::Uniform4i64vNV(location, count, value);
}

void Uniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	return functions::Uniform4iARB(location, v0, v1, v2, v3);
}

void Uniform4iv(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform4iv(location, count, value);
}

void Uniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
	return functions::Uniform4ivARB(location, count, value);
}

void Uniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::Uniform4ui(location, v0, v1, v2, v3);
}

void Uniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::Uniform4ui64NV(location, x, y, z, w);
}

void Uniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::Uniform4ui64vNV(location, count, value);
}

void Uniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	return functions::Uniform4uiEXT(location, v0, v1, v2, v3);
}

void Uniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform4uiv(location, count, value);
}

void Uniform4uivEXT(GLint location, GLsizei count, const GLuint * value)
{
	return functions::Uniform4uivEXT(location, count, value);
}

void UniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
	return functions::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void UniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
	return functions::UniformBufferEXT(program, location, buffer);
}

void UniformHandleui64ARB(GLint location, GLuint64 value)
{
	return functions::UniformHandleui64ARB(location, value);
}

void UniformHandleui64NV(GLint location, GLuint64 value)
{
	return functions::UniformHandleui64NV(location, value);
}

void UniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 * value)
{
	return functions::UniformHandleui64vARB(location, count, value);
}

void UniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 * value)
{
	return functions::UniformHandleui64vNV(location, count, value);
}

void UniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix2dv(location, count, transpose, value);
}

void UniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2fv(location, count, transpose, value);
}

void UniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2fvARB(location, count, transpose, value);
}

void UniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix2x3dv(location, count, transpose, value);
}

void UniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2x3fv(location, count, transpose, value);
}

void UniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2x3fvNV(location, count, transpose, value);
}

void UniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix2x4dv(location, count, transpose, value);
}

void UniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2x4fv(location, count, transpose, value);
}

void UniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix2x4fvNV(location, count, transpose, value);
}

void UniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix3dv(location, count, transpose, value);
}

void UniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3fv(location, count, transpose, value);
}

void UniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3fvARB(location, count, transpose, value);
}

void UniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix3x2dv(location, count, transpose, value);
}

void UniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3x2fv(location, count, transpose, value);
}

void UniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3x2fvNV(location, count, transpose, value);
}

void UniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix3x4dv(location, count, transpose, value);
}

void UniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3x4fv(location, count, transpose, value);
}

void UniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix3x4fvNV(location, count, transpose, value);
}

void UniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix4dv(location, count, transpose, value);
}

void UniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4fv(location, count, transpose, value);
}

void UniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4fvARB(location, count, transpose, value);
}

void UniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix4x2dv(location, count, transpose, value);
}

void UniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4x2fv(location, count, transpose, value);
}

void UniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4x2fvNV(location, count, transpose, value);
}

void UniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
	return functions::UniformMatrix4x3dv(location, count, transpose, value);
}

void UniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4x3fv(location, count, transpose, value);
}

void UniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
	return functions::UniformMatrix4x3fvNV(location, count, transpose, value);
}

void UniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
	return functions::UniformSubroutinesuiv(shadertype, count, indices);
}

void Uniformui64NV(GLint location, GLuint64EXT value)
{
	return functions::Uniformui64NV(location, value);
}

void Uniformui64vNV(GLint location, GLsizei count, const GLuint64EXT * value)
{
	return functions::Uniformui64vNV(location, count, value);
}

void UnlockArraysEXT()
{
	return functions::UnlockArraysEXT();
}

GLboolean UnmapBuffer(GLenum target)
{
	return functions::UnmapBuffer(target);
}

GLboolean UnmapBufferARB(GLenum target)
{
	return functions::UnmapBufferARB(target);
}

GLboolean UnmapBufferOES(GLenum target)
{
	return functions::UnmapBufferOES(target);
}

GLboolean UnmapNamedBufferEXT(GLuint buffer)
{
	return functions::UnmapNamedBufferEXT(buffer);
}

void UnmapObjectBufferATI(GLuint buffer)
{
	return functions::UnmapObjectBufferATI(buffer);
}

void UnmapTexture2DINTEL(GLuint texture, GLint level)
{
	return functions::UnmapTexture2DINTEL(texture, level);
}

void UpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void * pointer, GLenum preserve)
{
	return functions::UpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

void UseProgram(GLuint program)
{
	return functions::UseProgram(program);
}

void UseProgramObjectARB(GLhandleARB programObj)
{
	return functions::UseProgramObjectARB(programObj);
}

void UseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
	return functions::UseProgramStages(pipeline, stages, program);
}

void UseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program)
{
	return functions::UseProgramStagesEXT(pipeline, stages, program);
}

void UseShaderProgramEXT(GLenum type, GLuint program)
{
	return functions::UseShaderProgramEXT(type, program);
}

void VDPAUFiniNV()
{
	return functions::VDPAUFiniNV();
}

void VDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
	return functions::VDPAUGetSurfaceivNV(surface, pname, bufSize, length, values);
}

void VDPAUInitNV(const void * vdpDevice, const void * _getProcAddress)
{
	return functions::VDPAUInitNV(vdpDevice, _getProcAddress);
}

GLboolean VDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
	return functions::VDPAUIsSurfaceNV(surface);
}

void VDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV * surfaces)
{
	return functions::VDPAUMapSurfacesNV(numSurfaces, surfaces);
}

GLvdpauSurfaceNV VDPAURegisterOutputSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
	return functions::VDPAURegisterOutputSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

GLvdpauSurfaceNV VDPAURegisterVideoSurfaceNV(const void * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames)
{
	return functions::VDPAURegisterVideoSurfaceNV(vdpSurface, target, numTextureNames, textureNames);
}

void VDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
	return functions::VDPAUSurfaceAccessNV(surface, access);
}

void VDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV * surfaces)
{
	return functions::VDPAUUnmapSurfacesNV(numSurface, surfaces);
}

void VDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
	return functions::VDPAUUnregisterSurfaceNV(surface);
}

void ValidateProgram(GLuint program)
{
	return functions::ValidateProgram(program);
}

void ValidateProgramARB(GLhandleARB programObj)
{
	return functions::ValidateProgramARB(programObj);
}

void ValidateProgramPipeline(GLuint pipeline)
{
	return functions::ValidateProgramPipeline(pipeline);
}

void ValidateProgramPipelineEXT(GLuint pipeline)
{
	return functions::ValidateProgramPipelineEXT(pipeline);
}

void VariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::VariantArrayObjectATI(id, type, stride, buffer, offset);
}

void VariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void * addr)
{
	return functions::VariantPointerEXT(id, type, stride, addr);
}

void VariantbvEXT(GLuint id, const GLbyte * addr)
{
	return functions::VariantbvEXT(id, addr);
}

void VariantdvEXT(GLuint id, const GLdouble * addr)
{
	return functions::VariantdvEXT(id, addr);
}

void VariantfvEXT(GLuint id, const GLfloat * addr)
{
	return functions::VariantfvEXT(id, addr);
}

void VariantivEXT(GLuint id, const GLint * addr)
{
	return functions::VariantivEXT(id, addr);
}

void VariantsvEXT(GLuint id, const GLshort * addr)
{
	return functions::VariantsvEXT(id, addr);
}

void VariantubvEXT(GLuint id, const GLubyte * addr)
{
	return functions::VariantubvEXT(id, addr);
}

void VariantuivEXT(GLuint id, const GLuint * addr)
{
	return functions::VariantuivEXT(id, addr);
}

void VariantusvEXT(GLuint id, const GLushort * addr)
{
	return functions::VariantusvEXT(id, addr);
}

void Vertex2bOES(GLbyte x)
{
	return functions::Vertex2bOES(x);
}

void Vertex2bvOES(const GLbyte * coords)
{
	return functions::Vertex2bvOES(coords);
}

void Vertex2d(GLdouble x, GLdouble y)
{
	return functions::Vertex2d(x, y);
}

void Vertex2dv(const GLdouble * v)
{
	return functions::Vertex2dv(v);
}

void Vertex2f(GLfloat x, GLfloat y)
{
	return functions::Vertex2f(x, y);
}

void Vertex2fv(const GLfloat * v)
{
	return functions::Vertex2fv(v);
}

void Vertex2hNV(GLhalfNV x, GLhalfNV y)
{
	return functions::Vertex2hNV(x, y);
}

void Vertex2hvNV(const GLhalfNV * v)
{
	return functions::Vertex2hvNV(v);
}

void Vertex2i(GLint x, GLint y)
{
	return functions::Vertex2i(x, y);
}

void Vertex2iv(const GLint * v)
{
	return functions::Vertex2iv(v);
}

void Vertex2s(GLshort x, GLshort y)
{
	return functions::Vertex2s(x, y);
}

void Vertex2sv(const GLshort * v)
{
	return functions::Vertex2sv(v);
}

void Vertex2xOES(GLfixed x)
{
	return functions::Vertex2xOES(x);
}

void Vertex2xvOES(const GLfixed * coords)
{
	return functions::Vertex2xvOES(coords);
}

void Vertex3bOES(GLbyte x, GLbyte y)
{
	return functions::Vertex3bOES(x, y);
}

void Vertex3bvOES(const GLbyte * coords)
{
	return functions::Vertex3bvOES(coords);
}

void Vertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::Vertex3d(x, y, z);
}

void Vertex3dv(const GLdouble * v)
{
	return functions::Vertex3dv(v);
}

void Vertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::Vertex3f(x, y, z);
}

void Vertex3fv(const GLfloat * v)
{
	return functions::Vertex3fv(v);
}

void Vertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	return functions::Vertex3hNV(x, y, z);
}

void Vertex3hvNV(const GLhalfNV * v)
{
	return functions::Vertex3hvNV(v);
}

void Vertex3i(GLint x, GLint y, GLint z)
{
	return functions::Vertex3i(x, y, z);
}

void Vertex3iv(const GLint * v)
{
	return functions::Vertex3iv(v);
}

void Vertex3s(GLshort x, GLshort y, GLshort z)
{
	return functions::Vertex3s(x, y, z);
}

void Vertex3sv(const GLshort * v)
{
	return functions::Vertex3sv(v);
}

void Vertex3xOES(GLfixed x, GLfixed y)
{
	return functions::Vertex3xOES(x, y);
}

void Vertex3xvOES(const GLfixed * coords)
{
	return functions::Vertex3xvOES(coords);
}

void Vertex4bOES(GLbyte x, GLbyte y, GLbyte z)
{
	return functions::Vertex4bOES(x, y, z);
}

void Vertex4bvOES(const GLbyte * coords)
{
	return functions::Vertex4bvOES(coords);
}

void Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::Vertex4d(x, y, z, w);
}

void Vertex4dv(const GLdouble * v)
{
	return functions::Vertex4dv(v);
}

void Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::Vertex4f(x, y, z, w);
}

void Vertex4fv(const GLfloat * v)
{
	return functions::Vertex4fv(v);
}

void Vertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	return functions::Vertex4hNV(x, y, z, w);
}

void Vertex4hvNV(const GLhalfNV * v)
{
	return functions::Vertex4hvNV(v);
}

void Vertex4i(GLint x, GLint y, GLint z, GLint w)
{
	return functions::Vertex4i(x, y, z, w);
}

void Vertex4iv(const GLint * v)
{
	return functions::Vertex4iv(v);
}

void Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::Vertex4s(x, y, z, w);
}

void Vertex4sv(const GLshort * v)
{
	return functions::Vertex4sv(v);
}

void Vertex4xOES(GLfixed x, GLfixed y, GLfixed z)
{
	return functions::Vertex4xOES(x, y, z);
}

void Vertex4xvOES(const GLfixed * coords)
{
	return functions::Vertex4xvOES(coords);
}

void VertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
	return functions::VertexArrayBindVertexBufferEXT(vaobj, bindingindex, buffer, offset, stride);
}

void VertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void VertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayEdgeFlagOffsetEXT(vaobj, buffer, stride, offset);
}

void VertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayFogCoordOffsetEXT(vaobj, buffer, type, stride, offset);
}

void VertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayIndexOffsetEXT(vaobj, buffer, type, stride, offset);
}

void VertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayMultiTexCoordOffsetEXT(vaobj, buffer, texunit, size, type, stride, offset);
}

void VertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayNormalOffsetEXT(vaobj, buffer, type, stride, offset);
}

void VertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
	return functions::VertexArrayParameteriAPPLE(pname, param);
}

void VertexArrayRangeAPPLE(GLsizei length, void * pointer)
{
	return functions::VertexArrayRangeAPPLE(length, pointer);
}

void VertexArrayRangeNV(GLsizei length, const void * pointer)
{
	return functions::VertexArrayRangeNV(length, pointer);
}

void VertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArraySecondaryColorOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void VertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayTexCoordOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void VertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
	return functions::VertexArrayVertexAttribBindingEXT(vaobj, attribindex, bindingindex);
}

void VertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor)
{
	return functions::VertexArrayVertexAttribDivisorEXT(vaobj, index, divisor);
}

void VertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
	return functions::VertexArrayVertexAttribFormatEXT(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void VertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::VertexArrayVertexAttribIFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void VertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayVertexAttribIOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void VertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::VertexArrayVertexAttribLFormatEXT(vaobj, attribindex, size, type, relativeoffset);
}

void VertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayVertexAttribLOffsetEXT(vaobj, buffer, index, size, type, stride, offset);
}

void VertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayVertexAttribOffsetEXT(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void VertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
	return functions::VertexArrayVertexBindingDivisorEXT(vaobj, bindingindex, divisor);
}

void VertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	return functions::VertexArrayVertexOffsetEXT(vaobj, buffer, size, type, stride, offset);
}

void VertexAttrib1d(GLuint index, GLdouble x)
{
	return functions::VertexAttrib1d(index, x);
}

void VertexAttrib1dARB(GLuint index, GLdouble x)
{
	return functions::VertexAttrib1dARB(index, x);
}

void VertexAttrib1dNV(GLuint index, GLdouble x)
{
	return functions::VertexAttrib1dNV(index, x);
}

void VertexAttrib1dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib1dv(index, v);
}

void VertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib1dvARB(index, v);
}

void VertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib1dvNV(index, v);
}

void VertexAttrib1f(GLuint index, GLfloat x)
{
	return functions::VertexAttrib1f(index, x);
}

void VertexAttrib1fARB(GLuint index, GLfloat x)
{
	return functions::VertexAttrib1fARB(index, x);
}

void VertexAttrib1fNV(GLuint index, GLfloat x)
{
	return functions::VertexAttrib1fNV(index, x);
}

void VertexAttrib1fv(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib1fv(index, v);
}

void VertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib1fvARB(index, v);
}

void VertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib1fvNV(index, v);
}

void VertexAttrib1hNV(GLuint index, GLhalfNV x)
{
	return functions::VertexAttrib1hNV(index, x);
}

void VertexAttrib1hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::VertexAttrib1hvNV(index, v);
}

void VertexAttrib1s(GLuint index, GLshort x)
{
	return functions::VertexAttrib1s(index, x);
}

void VertexAttrib1sARB(GLuint index, GLshort x)
{
	return functions::VertexAttrib1sARB(index, x);
}

void VertexAttrib1sNV(GLuint index, GLshort x)
{
	return functions::VertexAttrib1sNV(index, x);
}

void VertexAttrib1sv(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib1sv(index, v);
}

void VertexAttrib1svARB(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib1svARB(index, v);
}

void VertexAttrib1svNV(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib1svNV(index, v);
}

void VertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
	return functions::VertexAttrib2d(index, x, y);
}

void VertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
	return functions::VertexAttrib2dARB(index, x, y);
}

void VertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
	return functions::VertexAttrib2dNV(index, x, y);
}

void VertexAttrib2dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib2dv(index, v);
}

void VertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib2dvARB(index, v);
}

void VertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib2dvNV(index, v);
}

void VertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	return functions::VertexAttrib2f(index, x, y);
}

void VertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
	return functions::VertexAttrib2fARB(index, x, y);
}

void VertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
	return functions::VertexAttrib2fNV(index, x, y);
}

void VertexAttrib2fv(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib2fv(index, v);
}

void VertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib2fvARB(index, v);
}

void VertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib2fvNV(index, v);
}

void VertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
	return functions::VertexAttrib2hNV(index, x, y);
}

void VertexAttrib2hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::VertexAttrib2hvNV(index, v);
}

void VertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
	return functions::VertexAttrib2s(index, x, y);
}

void VertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
	return functions::VertexAttrib2sARB(index, x, y);
}

void VertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
	return functions::VertexAttrib2sNV(index, x, y);
}

void VertexAttrib2sv(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib2sv(index, v);
}

void VertexAttrib2svARB(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib2svARB(index, v);
}

void VertexAttrib2svNV(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib2svNV(index, v);
}

void VertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexAttrib3d(index, x, y, z);
}

void VertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexAttrib3dARB(index, x, y, z);
}

void VertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexAttrib3dNV(index, x, y, z);
}

void VertexAttrib3dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib3dv(index, v);
}

void VertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib3dvARB(index, v);
}

void VertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib3dvNV(index, v);
}

void VertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::VertexAttrib3f(index, x, y, z);
}

void VertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::VertexAttrib3fARB(index, x, y, z);
}

void VertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::VertexAttrib3fNV(index, x, y, z);
}

void VertexAttrib3fv(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib3fv(index, v);
}

void VertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib3fvARB(index, v);
}

void VertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib3fvNV(index, v);
}

void VertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	return functions::VertexAttrib3hNV(index, x, y, z);
}

void VertexAttrib3hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::VertexAttrib3hvNV(index, v);
}

void VertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::VertexAttrib3s(index, x, y, z);
}

void VertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::VertexAttrib3sARB(index, x, y, z);
}

void VertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
	return functions::VertexAttrib3sNV(index, x, y, z);
}

void VertexAttrib3sv(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib3sv(index, v);
}

void VertexAttrib3svARB(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib3svARB(index, v);
}

void VertexAttrib3svNV(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib3svNV(index, v);
}

void VertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
	return functions::VertexAttrib4Nbv(index, v);
}

void VertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
	return functions::VertexAttrib4NbvARB(index, v);
}

void VertexAttrib4Niv(GLuint index, const GLint * v)
{
	return functions::VertexAttrib4Niv(index, v);
}

void VertexAttrib4NivARB(GLuint index, const GLint * v)
{
	return functions::VertexAttrib4NivARB(index, v);
}

void VertexAttrib4Nsv(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib4Nsv(index, v);
}

void VertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib4NsvARB(index, v);
}

void VertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::VertexAttrib4Nub(index, x, y, z, w);
}

void VertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::VertexAttrib4NubARB(index, x, y, z, w);
}

void VertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
	return functions::VertexAttrib4Nubv(index, v);
}

void VertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
	return functions::VertexAttrib4NubvARB(index, v);
}

void VertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttrib4Nuiv(index, v);
}

void VertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
	return functions::VertexAttrib4NuivARB(index, v);
}

void VertexAttrib4Nusv(GLuint index, const GLushort * v)
{
	return functions::VertexAttrib4Nusv(index, v);
}

void VertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
	return functions::VertexAttrib4NusvARB(index, v);
}

void VertexAttrib4bv(GLuint index, const GLbyte * v)
{
	return functions::VertexAttrib4bv(index, v);
}

void VertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
	return functions::VertexAttrib4bvARB(index, v);
}

void VertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexAttrib4d(index, x, y, z, w);
}

void VertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexAttrib4dARB(index, x, y, z, w);
}

void VertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexAttrib4dNV(index, x, y, z, w);
}

void VertexAttrib4dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib4dv(index, v);
}

void VertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib4dvARB(index, v);
}

void VertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
	return functions::VertexAttrib4dvNV(index, v);
}

void VertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::VertexAttrib4f(index, x, y, z, w);
}

void VertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::VertexAttrib4fARB(index, x, y, z, w);
}

void VertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::VertexAttrib4fNV(index, x, y, z, w);
}

void VertexAttrib4fv(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib4fv(index, v);
}

void VertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib4fvARB(index, v);
}

void VertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
	return functions::VertexAttrib4fvNV(index, v);
}

void VertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	return functions::VertexAttrib4hNV(index, x, y, z, w);
}

void VertexAttrib4hvNV(GLuint index, const GLhalfNV * v)
{
	return functions::VertexAttrib4hvNV(index, v);
}

void VertexAttrib4iv(GLuint index, const GLint * v)
{
	return functions::VertexAttrib4iv(index, v);
}

void VertexAttrib4ivARB(GLuint index, const GLint * v)
{
	return functions::VertexAttrib4ivARB(index, v);
}

void VertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::VertexAttrib4s(index, x, y, z, w);
}

void VertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::VertexAttrib4sARB(index, x, y, z, w);
}

void VertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::VertexAttrib4sNV(index, x, y, z, w);
}

void VertexAttrib4sv(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib4sv(index, v);
}

void VertexAttrib4svARB(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib4svARB(index, v);
}

void VertexAttrib4svNV(GLuint index, const GLshort * v)
{
	return functions::VertexAttrib4svNV(index, v);
}

void VertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	return functions::VertexAttrib4ubNV(index, x, y, z, w);
}

void VertexAttrib4ubv(GLuint index, const GLubyte * v)
{
	return functions::VertexAttrib4ubv(index, v);
}

void VertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
	return functions::VertexAttrib4ubvARB(index, v);
}

void VertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
	return functions::VertexAttrib4ubvNV(index, v);
}

void VertexAttrib4uiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttrib4uiv(index, v);
}

void VertexAttrib4uivARB(GLuint index, const GLuint * v)
{
	return functions::VertexAttrib4uivARB(index, v);
}

void VertexAttrib4usv(GLuint index, const GLushort * v)
{
	return functions::VertexAttrib4usv(index, v);
}

void VertexAttrib4usvARB(GLuint index, const GLushort * v)
{
	return functions::VertexAttrib4usvARB(index, v);
}

void VertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
	return functions::VertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

void VertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
	return functions::VertexAttribBinding(attribindex, bindingindex);
}

void VertexAttribDivisor(GLuint index, GLuint divisor)
{
	return functions::VertexAttribDivisor(index, divisor);
}

void VertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
	return functions::VertexAttribDivisorANGLE(index, divisor);
}

void VertexAttribDivisorARB(GLuint index, GLuint divisor)
{
	return functions::VertexAttribDivisorARB(index, divisor);
}

void VertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
	return functions::VertexAttribDivisorEXT(index, divisor);
}

void VertexAttribDivisorNV(GLuint index, GLuint divisor)
{
	return functions::VertexAttribDivisorNV(index, divisor);
}

void VertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
	return functions::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void VertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
	return functions::VertexAttribFormatNV(index, size, type, normalized, stride);
}

void VertexAttribI1i(GLuint index, GLint x)
{
	return functions::VertexAttribI1i(index, x);
}

void VertexAttribI1iEXT(GLuint index, GLint x)
{
	return functions::VertexAttribI1iEXT(index, x);
}

void VertexAttribI1iv(GLuint index, const GLint * v)
{
	return functions::VertexAttribI1iv(index, v);
}

void VertexAttribI1ivEXT(GLuint index, const GLint * v)
{
	return functions::VertexAttribI1ivEXT(index, v);
}

void VertexAttribI1ui(GLuint index, GLuint x)
{
	return functions::VertexAttribI1ui(index, x);
}

void VertexAttribI1uiEXT(GLuint index, GLuint x)
{
	return functions::VertexAttribI1uiEXT(index, x);
}

void VertexAttribI1uiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI1uiv(index, v);
}

void VertexAttribI1uivEXT(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI1uivEXT(index, v);
}

void VertexAttribI2i(GLuint index, GLint x, GLint y)
{
	return functions::VertexAttribI2i(index, x, y);
}

void VertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
	return functions::VertexAttribI2iEXT(index, x, y);
}

void VertexAttribI2iv(GLuint index, const GLint * v)
{
	return functions::VertexAttribI2iv(index, v);
}

void VertexAttribI2ivEXT(GLuint index, const GLint * v)
{
	return functions::VertexAttribI2ivEXT(index, v);
}

void VertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
	return functions::VertexAttribI2ui(index, x, y);
}

void VertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
	return functions::VertexAttribI2uiEXT(index, x, y);
}

void VertexAttribI2uiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI2uiv(index, v);
}

void VertexAttribI2uivEXT(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI2uivEXT(index, v);
}

void VertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
	return functions::VertexAttribI3i(index, x, y, z);
}

void VertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
	return functions::VertexAttribI3iEXT(index, x, y, z);
}

void VertexAttribI3iv(GLuint index, const GLint * v)
{
	return functions::VertexAttribI3iv(index, v);
}

void VertexAttribI3ivEXT(GLuint index, const GLint * v)
{
	return functions::VertexAttribI3ivEXT(index, v);
}

void VertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
	return functions::VertexAttribI3ui(index, x, y, z);
}

void VertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
	return functions::VertexAttribI3uiEXT(index, x, y, z);
}

void VertexAttribI3uiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI3uiv(index, v);
}

void VertexAttribI3uivEXT(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI3uivEXT(index, v);
}

void VertexAttribI4bv(GLuint index, const GLbyte * v)
{
	return functions::VertexAttribI4bv(index, v);
}

void VertexAttribI4bvEXT(GLuint index, const GLbyte * v)
{
	return functions::VertexAttribI4bvEXT(index, v);
}

void VertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::VertexAttribI4i(index, x, y, z, w);
}

void VertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	return functions::VertexAttribI4iEXT(index, x, y, z, w);
}

void VertexAttribI4iv(GLuint index, const GLint * v)
{
	return functions::VertexAttribI4iv(index, v);
}

void VertexAttribI4ivEXT(GLuint index, const GLint * v)
{
	return functions::VertexAttribI4ivEXT(index, v);
}

void VertexAttribI4sv(GLuint index, const GLshort * v)
{
	return functions::VertexAttribI4sv(index, v);
}

void VertexAttribI4svEXT(GLuint index, const GLshort * v)
{
	return functions::VertexAttribI4svEXT(index, v);
}

void VertexAttribI4ubv(GLuint index, const GLubyte * v)
{
	return functions::VertexAttribI4ubv(index, v);
}

void VertexAttribI4ubvEXT(GLuint index, const GLubyte * v)
{
	return functions::VertexAttribI4ubvEXT(index, v);
}

void VertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::VertexAttribI4ui(index, x, y, z, w);
}

void VertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	return functions::VertexAttribI4uiEXT(index, x, y, z, w);
}

void VertexAttribI4uiv(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI4uiv(index, v);
}

void VertexAttribI4uivEXT(GLuint index, const GLuint * v)
{
	return functions::VertexAttribI4uivEXT(index, v);
}

void VertexAttribI4usv(GLuint index, const GLushort * v)
{
	return functions::VertexAttribI4usv(index, v);
}

void VertexAttribI4usvEXT(GLuint index, const GLushort * v)
{
	return functions::VertexAttribI4usvEXT(index, v);
}

void VertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void VertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	return functions::VertexAttribIFormatNV(index, size, type, stride);
}

void VertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribIPointer(index, size, type, stride, pointer);
}

void VertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribIPointerEXT(index, size, type, stride, pointer);
}

void VertexAttribL1d(GLuint index, GLdouble x)
{
	return functions::VertexAttribL1d(index, x);
}

void VertexAttribL1dEXT(GLuint index, GLdouble x)
{
	return functions::VertexAttribL1dEXT(index, x);
}

void VertexAttribL1dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL1dv(index, v);
}

void VertexAttribL1dvEXT(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL1dvEXT(index, v);
}

void VertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
	return functions::VertexAttribL1i64NV(index, x);
}

void VertexAttribL1i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::VertexAttribL1i64vNV(index, v);
}

void VertexAttribL1ui64ARB(GLuint index, GLuint64EXT x)
{
	return functions::VertexAttribL1ui64ARB(index, x);
}

void VertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
	return functions::VertexAttribL1ui64NV(index, x);
}

void VertexAttribL1ui64vARB(GLuint index, const GLuint64EXT * v)
{
	return functions::VertexAttribL1ui64vARB(index, v);
}

void VertexAttribL1ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::VertexAttribL1ui64vNV(index, v);
}

void VertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
	return functions::VertexAttribL2d(index, x, y);
}

void VertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
	return functions::VertexAttribL2dEXT(index, x, y);
}

void VertexAttribL2dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL2dv(index, v);
}

void VertexAttribL2dvEXT(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL2dvEXT(index, v);
}

void VertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
	return functions::VertexAttribL2i64NV(index, x, y);
}

void VertexAttribL2i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::VertexAttribL2i64vNV(index, v);
}

void VertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
	return functions::VertexAttribL2ui64NV(index, x, y);
}

void VertexAttribL2ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::VertexAttribL2ui64vNV(index, v);
}

void VertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexAttribL3d(index, x, y, z);
}

void VertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexAttribL3dEXT(index, x, y, z);
}

void VertexAttribL3dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL3dv(index, v);
}

void VertexAttribL3dvEXT(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL3dvEXT(index, v);
}

void VertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	return functions::VertexAttribL3i64NV(index, x, y, z);
}

void VertexAttribL3i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::VertexAttribL3i64vNV(index, v);
}

void VertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	return functions::VertexAttribL3ui64NV(index, x, y, z);
}

void VertexAttribL3ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::VertexAttribL3ui64vNV(index, v);
}

void VertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexAttribL4d(index, x, y, z, w);
}

void VertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexAttribL4dEXT(index, x, y, z, w);
}

void VertexAttribL4dv(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL4dv(index, v);
}

void VertexAttribL4dvEXT(GLuint index, const GLdouble * v)
{
	return functions::VertexAttribL4dvEXT(index, v);
}

void VertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	return functions::VertexAttribL4i64NV(index, x, y, z, w);
}

void VertexAttribL4i64vNV(GLuint index, const GLint64EXT * v)
{
	return functions::VertexAttribL4i64vNV(index, v);
}

void VertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	return functions::VertexAttribL4ui64NV(index, x, y, z, w);
}

void VertexAttribL4ui64vNV(GLuint index, const GLuint64EXT * v)
{
	return functions::VertexAttribL4ui64vNV(index, v);
}

void VertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	return functions::VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void VertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	return functions::VertexAttribLFormatNV(index, size, type, stride);
}

void VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribLPointer(index, size, type, stride, pointer);
}

void VertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribLPointerEXT(index, size, type, stride, pointer);
}

void VertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::VertexAttribP1ui(index, type, normalized, value);
}

void VertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::VertexAttribP1uiv(index, type, normalized, value);
}

void VertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::VertexAttribP2ui(index, type, normalized, value);
}

void VertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::VertexAttribP2uiv(index, type, normalized, value);
}

void VertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::VertexAttribP3ui(index, type, normalized, value);
}

void VertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::VertexAttribP3uiv(index, type, normalized, value);
}

void VertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	return functions::VertexAttribP4ui(index, type, normalized, value);
}

void VertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
	return functions::VertexAttribP4uiv(index, type, normalized, value);
}

void VertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param)
{
	return functions::VertexAttribParameteriAMD(index, pname, param);
}

void VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void VertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void VertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexAttribPointerNV(index, fsize, type, stride, pointer);
}

void VertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::VertexAttribs1dvNV(index, count, v);
}

void VertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::VertexAttribs1fvNV(index, count, v);
}

void VertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::VertexAttribs1hvNV(index, n, v);
}

void VertexAttribs1svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::VertexAttribs1svNV(index, count, v);
}

void VertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::VertexAttribs2dvNV(index, count, v);
}

void VertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::VertexAttribs2fvNV(index, count, v);
}

void VertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::VertexAttribs2hvNV(index, n, v);
}

void VertexAttribs2svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::VertexAttribs2svNV(index, count, v);
}

void VertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::VertexAttribs3dvNV(index, count, v);
}

void VertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::VertexAttribs3fvNV(index, count, v);
}

void VertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::VertexAttribs3hvNV(index, n, v);
}

void VertexAttribs3svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::VertexAttribs3svNV(index, count, v);
}

void VertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble * v)
{
	return functions::VertexAttribs4dvNV(index, count, v);
}

void VertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat * v)
{
	return functions::VertexAttribs4fvNV(index, count, v);
}

void VertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV * v)
{
	return functions::VertexAttribs4hvNV(index, n, v);
}

void VertexAttribs4svNV(GLuint index, GLsizei count, const GLshort * v)
{
	return functions::VertexAttribs4svNV(index, count, v);
}

void VertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte * v)
{
	return functions::VertexAttribs4ubvNV(index, count, v);
}

void VertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
	return functions::VertexBindingDivisor(bindingindex, divisor);
}

void VertexBlendARB(GLint count)
{
	return functions::VertexBlendARB(count);
}

void VertexBlendEnvfATI(GLenum pname, GLfloat param)
{
	return functions::VertexBlendEnvfATI(pname, param);
}

void VertexBlendEnviATI(GLenum pname, GLint param)
{
	return functions::VertexBlendEnviATI(pname, param);
}

void VertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
	return functions::VertexFormatNV(size, type, stride);
}

void VertexP2ui(GLenum type, GLuint value)
{
	return functions::VertexP2ui(type, value);
}

void VertexP2uiv(GLenum type, const GLuint * value)
{
	return functions::VertexP2uiv(type, value);
}

void VertexP3ui(GLenum type, GLuint value)
{
	return functions::VertexP3ui(type, value);
}

void VertexP3uiv(GLenum type, const GLuint * value)
{
	return functions::VertexP3uiv(type, value);
}

void VertexP4ui(GLenum type, GLuint value)
{
	return functions::VertexP4ui(type, value);
}

void VertexP4uiv(GLenum type, const GLuint * value)
{
	return functions::VertexP4uiv(type, value);
}

void VertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexPointer(size, type, stride, pointer);
}

void VertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void * pointer)
{
	return functions::VertexPointerEXT(size, type, stride, count, pointer);
}

void VertexPointerListIBM(GLint size, GLenum type, GLint stride, const void ** pointer, GLint ptrstride)
{
	return functions::VertexPointerListIBM(size, type, stride, pointer, ptrstride);
}

void VertexPointervINTEL(GLint size, GLenum type, const void ** pointer)
{
	return functions::VertexPointervINTEL(size, type, pointer);
}

void VertexStream1dATI(GLenum stream, GLdouble x)
{
	return functions::VertexStream1dATI(stream, x);
}

void VertexStream1dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::VertexStream1dvATI(stream, coords);
}

void VertexStream1fATI(GLenum stream, GLfloat x)
{
	return functions::VertexStream1fATI(stream, x);
}

void VertexStream1fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::VertexStream1fvATI(stream, coords);
}

void VertexStream1iATI(GLenum stream, GLint x)
{
	return functions::VertexStream1iATI(stream, x);
}

void VertexStream1ivATI(GLenum stream, const GLint * coords)
{
	return functions::VertexStream1ivATI(stream, coords);
}

void VertexStream1sATI(GLenum stream, GLshort x)
{
	return functions::VertexStream1sATI(stream, x);
}

void VertexStream1svATI(GLenum stream, const GLshort * coords)
{
	return functions::VertexStream1svATI(stream, coords);
}

void VertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
	return functions::VertexStream2dATI(stream, x, y);
}

void VertexStream2dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::VertexStream2dvATI(stream, coords);
}

void VertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
	return functions::VertexStream2fATI(stream, x, y);
}

void VertexStream2fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::VertexStream2fvATI(stream, coords);
}

void VertexStream2iATI(GLenum stream, GLint x, GLint y)
{
	return functions::VertexStream2iATI(stream, x, y);
}

void VertexStream2ivATI(GLenum stream, const GLint * coords)
{
	return functions::VertexStream2ivATI(stream, coords);
}

void VertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
	return functions::VertexStream2sATI(stream, x, y);
}

void VertexStream2svATI(GLenum stream, const GLshort * coords)
{
	return functions::VertexStream2svATI(stream, coords);
}

void VertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
	return functions::VertexStream3dATI(stream, x, y, z);
}

void VertexStream3dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::VertexStream3dvATI(stream, coords);
}

void VertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
	return functions::VertexStream3fATI(stream, x, y, z);
}

void VertexStream3fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::VertexStream3fvATI(stream, coords);
}

void VertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
	return functions::VertexStream3iATI(stream, x, y, z);
}

void VertexStream3ivATI(GLenum stream, const GLint * coords)
{
	return functions::VertexStream3ivATI(stream, coords);
}

void VertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
	return functions::VertexStream3sATI(stream, x, y, z);
}

void VertexStream3svATI(GLenum stream, const GLshort * coords)
{
	return functions::VertexStream3svATI(stream, coords);
}

void VertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::VertexStream4dATI(stream, x, y, z, w);
}

void VertexStream4dvATI(GLenum stream, const GLdouble * coords)
{
	return functions::VertexStream4dvATI(stream, coords);
}

void VertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::VertexStream4fATI(stream, x, y, z, w);
}

void VertexStream4fvATI(GLenum stream, const GLfloat * coords)
{
	return functions::VertexStream4fvATI(stream, coords);
}

void VertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
	return functions::VertexStream4iATI(stream, x, y, z, w);
}

void VertexStream4ivATI(GLenum stream, const GLint * coords)
{
	return functions::VertexStream4ivATI(stream, coords);
}

void VertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::VertexStream4sATI(stream, x, y, z, w);
}

void VertexStream4svATI(GLenum stream, const GLshort * coords)
{
	return functions::VertexStream4svATI(stream, coords);
}

void VertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::VertexWeightPointerEXT(size, type, stride, pointer);
}

void VertexWeightfEXT(GLfloat weight)
{
	return functions::VertexWeightfEXT(weight);
}

void VertexWeightfvEXT(const GLfloat * weight)
{
	return functions::VertexWeightfvEXT(weight);
}

void VertexWeighthNV(GLhalfNV weight)
{
	return functions::VertexWeighthNV(weight);
}

void VertexWeighthvNV(const GLhalfNV * weight)
{
	return functions::VertexWeighthvNV(weight);
}

GLenum VideoCaptureNV(GLuint video_capture_slot, GLuint * sequence_num, GLuint64EXT * capture_time)
{
	return functions::VideoCaptureNV(video_capture_slot, sequence_num, capture_time);
}

void VideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble * params)
{
	return functions::VideoCaptureStreamParameterdvNV(video_capture_slot, stream, pname, params);
}

void VideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat * params)
{
	return functions::VideoCaptureStreamParameterfvNV(video_capture_slot, stream, pname, params);
}

void VideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint * params)
{
	return functions::VideoCaptureStreamParameterivNV(video_capture_slot, stream, pname, params);
}

void Viewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	return functions::Viewport(x, y, width, height);
}

void ViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
	return functions::ViewportArrayv(first, count, v);
}

void ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
	return functions::ViewportIndexedf(index, x, y, w, h);
}

void ViewportIndexedfv(GLuint index, const GLfloat * v)
{
	return functions::ViewportIndexedfv(index, v);
}

void WaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::WaitSync(sync, flags, timeout);
}

void WaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return functions::WaitSyncAPPLE(sync, flags, timeout);
}

void WeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
	return functions::WeightPathsNV(resultPath, numPaths, paths, weights);
}

void WeightPointerARB(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::WeightPointerARB(size, type, stride, pointer);
}

void WeightPointerOES(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
	return functions::WeightPointerOES(size, type, stride, pointer);
}

void WeightbvARB(GLint size, const GLbyte * weights)
{
	return functions::WeightbvARB(size, weights);
}

void WeightdvARB(GLint size, const GLdouble * weights)
{
	return functions::WeightdvARB(size, weights);
}

void WeightfvARB(GLint size, const GLfloat * weights)
{
	return functions::WeightfvARB(size, weights);
}

void WeightivARB(GLint size, const GLint * weights)
{
	return functions::WeightivARB(size, weights);
}

void WeightsvARB(GLint size, const GLshort * weights)
{
	return functions::WeightsvARB(size, weights);
}

void WeightubvARB(GLint size, const GLubyte * weights)
{
	return functions::WeightubvARB(size, weights);
}

void WeightuivARB(GLint size, const GLuint * weights)
{
	return functions::WeightuivARB(size, weights);
}

void WeightusvARB(GLint size, const GLushort * weights)
{
	return functions::WeightusvARB(size, weights);
}

void WindowPos2d(GLdouble x, GLdouble y)
{
	return functions::WindowPos2d(x, y);
}

void WindowPos2dARB(GLdouble x, GLdouble y)
{
	return functions::WindowPos2dARB(x, y);
}

void WindowPos2dMESA(GLdouble x, GLdouble y)
{
	return functions::WindowPos2dMESA(x, y);
}

void WindowPos2dv(const GLdouble * v)
{
	return functions::WindowPos2dv(v);
}

void WindowPos2dvARB(const GLdouble * v)
{
	return functions::WindowPos2dvARB(v);
}

void WindowPos2dvMESA(const GLdouble * v)
{
	return functions::WindowPos2dvMESA(v);
}

void WindowPos2f(GLfloat x, GLfloat y)
{
	return functions::WindowPos2f(x, y);
}

void WindowPos2fARB(GLfloat x, GLfloat y)
{
	return functions::WindowPos2fARB(x, y);
}

void WindowPos2fMESA(GLfloat x, GLfloat y)
{
	return functions::WindowPos2fMESA(x, y);
}

void WindowPos2fv(const GLfloat * v)
{
	return functions::WindowPos2fv(v);
}

void WindowPos2fvARB(const GLfloat * v)
{
	return functions::WindowPos2fvARB(v);
}

void WindowPos2fvMESA(const GLfloat * v)
{
	return functions::WindowPos2fvMESA(v);
}

void WindowPos2i(GLint x, GLint y)
{
	return functions::WindowPos2i(x, y);
}

void WindowPos2iARB(GLint x, GLint y)
{
	return functions::WindowPos2iARB(x, y);
}

void WindowPos2iMESA(GLint x, GLint y)
{
	return functions::WindowPos2iMESA(x, y);
}

void WindowPos2iv(const GLint * v)
{
	return functions::WindowPos2iv(v);
}

void WindowPos2ivARB(const GLint * v)
{
	return functions::WindowPos2ivARB(v);
}

void WindowPos2ivMESA(const GLint * v)
{
	return functions::WindowPos2ivMESA(v);
}

void WindowPos2s(GLshort x, GLshort y)
{
	return functions::WindowPos2s(x, y);
}

void WindowPos2sARB(GLshort x, GLshort y)
{
	return functions::WindowPos2sARB(x, y);
}

void WindowPos2sMESA(GLshort x, GLshort y)
{
	return functions::WindowPos2sMESA(x, y);
}

void WindowPos2sv(const GLshort * v)
{
	return functions::WindowPos2sv(v);
}

void WindowPos2svARB(const GLshort * v)
{
	return functions::WindowPos2svARB(v);
}

void WindowPos2svMESA(const GLshort * v)
{
	return functions::WindowPos2svMESA(v);
}

void WindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::WindowPos3d(x, y, z);
}

void WindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::WindowPos3dARB(x, y, z);
}

void WindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
	return functions::WindowPos3dMESA(x, y, z);
}

void WindowPos3dv(const GLdouble * v)
{
	return functions::WindowPos3dv(v);
}

void WindowPos3dvARB(const GLdouble * v)
{
	return functions::WindowPos3dvARB(v);
}

void WindowPos3dvMESA(const GLdouble * v)
{
	return functions::WindowPos3dvMESA(v);
}

void WindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::WindowPos3f(x, y, z);
}

void WindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::WindowPos3fARB(x, y, z);
}

void WindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
	return functions::WindowPos3fMESA(x, y, z);
}

void WindowPos3fv(const GLfloat * v)
{
	return functions::WindowPos3fv(v);
}

void WindowPos3fvARB(const GLfloat * v)
{
	return functions::WindowPos3fvARB(v);
}

void WindowPos3fvMESA(const GLfloat * v)
{
	return functions::WindowPos3fvMESA(v);
}

void WindowPos3i(GLint x, GLint y, GLint z)
{
	return functions::WindowPos3i(x, y, z);
}

void WindowPos3iARB(GLint x, GLint y, GLint z)
{
	return functions::WindowPos3iARB(x, y, z);
}

void WindowPos3iMESA(GLint x, GLint y, GLint z)
{
	return functions::WindowPos3iMESA(x, y, z);
}

void WindowPos3iv(const GLint * v)
{
	return functions::WindowPos3iv(v);
}

void WindowPos3ivARB(const GLint * v)
{
	return functions::WindowPos3ivARB(v);
}

void WindowPos3ivMESA(const GLint * v)
{
	return functions::WindowPos3ivMESA(v);
}

void WindowPos3s(GLshort x, GLshort y, GLshort z)
{
	return functions::WindowPos3s(x, y, z);
}

void WindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
	return functions::WindowPos3sARB(x, y, z);
}

void WindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
	return functions::WindowPos3sMESA(x, y, z);
}

void WindowPos3sv(const GLshort * v)
{
	return functions::WindowPos3sv(v);
}

void WindowPos3svARB(const GLshort * v)
{
	return functions::WindowPos3svARB(v);
}

void WindowPos3svMESA(const GLshort * v)
{
	return functions::WindowPos3svMESA(v);
}

void WindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	return functions::WindowPos4dMESA(x, y, z, w);
}

void WindowPos4dvMESA(const GLdouble * v)
{
	return functions::WindowPos4dvMESA(v);
}

void WindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	return functions::WindowPos4fMESA(x, y, z, w);
}

void WindowPos4fvMESA(const GLfloat * v)
{
	return functions::WindowPos4fvMESA(v);
}

void WindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
	return functions::WindowPos4iMESA(x, y, z, w);
}

void WindowPos4ivMESA(const GLint * v)
{
	return functions::WindowPos4ivMESA(v);
}

void WindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
	return functions::WindowPos4sMESA(x, y, z, w);
}

void WindowPos4svMESA(const GLshort * v)
{
	return functions::WindowPos4svMESA(v);
}

void WriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	return functions::WriteMaskEXT(res, in, outX, outY, outZ, outW);
}


} // namespace gl
